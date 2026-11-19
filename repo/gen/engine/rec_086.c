#include "recomp.h"
#include "rec_mod.h"

void f_88cc00(void) {
  LOAD_REGS();
L_88cc00: /* 88cc00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88cc04: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 88cc07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88cc08: xor eax, eax */
  eax = 0;
/* 88cc0a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88cc0c: jle 0x88cc20 */
  if ((zf || sf != of)) goto L_88cc20;
L_88cc0e: /* 88cc0e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 88cc10: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_88cc14: /* 88cc14: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88cc16: je 0x88cc23 */
  if (zf) goto L_88cc23;
L_88cc18: /* 88cc18: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88cc19: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88cc1c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88cc1e: jl 0x88cc14 */
  if ((sf != of)) goto L_88cc14;
L_88cc20: /* 88cc20: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_88cc23: /* 88cc23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88cc24: ret  */
  esp += 4; SPILL(); return;
}

void f_88cc40(void) {
  LOAD_REGS();
L_88cc40: /* 88cc40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88cc41: mov ebp, esp */
  ebp = esp;
/* 88cc43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88cc45: push 0x9d5530 */
  { uint32_t v = 0x9d5530u; esp -= 4; W32(esp, v); }
/* 88cc4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88cc50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88cc51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88cc58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88cc5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88cc5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88cc5d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88cc60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88cc62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88cc63: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88cc66: mov edi, ecx */
  edi = ecx;
/* 88cc68: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88cc6f: jl 0x88d38a */
  if ((sf != of)) goto L_88d38a;
L_88cc75: /* 88cc75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88cc76: call 0x6c2b21 */
  esp -= 4; W32(esp, 0x88cc7bu); SPILL(); f_6c2b21(); if (g_unwind) return; RELOAD();
/* 88cc7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88cc7d: je 0x88d38a */
  if (zf) goto L_88d38a;
L_88cc83: /* 88cc83: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 88cc86: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88cc88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88cc89: mov ecx, edi */
  ecx = edi;
/* 88cc8b: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x88cc91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cc91: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88cc93: mov ebx, eax */
  ebx = eax;
  if (!ebx) {
      extern uint32_t lotd_find_anim_fallback(uint32_t mesh_inst, uint32_t requested_seq_idx);
      uint32_t fallback = lotd_find_anim_fallback(edi, R32((uint32_t)(ebp + 0xcu)));
      if (fallback) {
          ebx = fallback;
      }
  }
/* 88cc95: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88cc97: mov ecx, edi */
  ecx = edi;
/* 88cc99: jne 0x88cce1 */
  if (!zf) goto L_88cce1;
L_88cc9b: /* 88cc9b: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x88cca1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cca1: mov ecx, eax */
  ecx = eax;
/* 88cca3: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x88cca9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 88cca9: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 88ccac: mov esi, eax */
  esi = eax;
/* 88ccae: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x88ccb4u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 88ccb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ccb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ccb6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 88ccbb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88ccbd: push 0xae79c0 */
  { uint32_t v = 0xae79c0u; esp -= 4; W32(esp, v); }
/* 88ccc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_88ccc3: /* 88ccc3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x88ccc9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 88ccc9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_88cccc: /* 88cccc: xor eax, eax */
  eax = 0;
/* 88ccce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88ccd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88ccd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ccd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ccda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ccdb: mov esp, ebp */
  esp = ebp;
/* 88ccdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88ccde: ret 0x14 */
  esp += 24; SPILL(); return;
L_88cce1: /* 88cce1: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88cce7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cce7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88cce9: je 0x88cccc */
  if (zf) goto L_88cccc;
L_88cceb: /* 88cceb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88ccee: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 88ccf4: imul esi, esi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x70u);
  esi = (uint32_t)r;
  }
/* 88ccf7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 88ccfa: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88ccfc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88ccfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ccff: mov ecx, edi */
  ecx = edi;
/* 88cd01: call dword ptr [eax + 0x130] */
  { uint32_t t = R32((uint32_t)(eax + 0x130u)); esp -= 4; W32(esp, 0x88cd07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cd07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88cd09: jne 0x88cd2e */
  if (!zf) goto L_88cd2e;
L_88cd0b: /* 88cd0b: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 88cd0e: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x88cd14u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 88cd14: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 88cd1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88cd1b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 88cd1d: push 0xae7a20 */
  { uint32_t v = 0xae7a20u; esp -= 4; W32(esp, v); }
/* 88cd22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88cd23: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x88cd29u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 88cd29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88cd2c: jmp 0x88cccc */
  goto L_88cccc;
L_88cd2e: /* 88cd2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88cd2f: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 88cd35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88cd36: call 0x6c293c */
  esp -= 4; W32(esp, 0x88cd3bu); SPILL(); f_6c293c(); if (g_unwind) return; RELOAD();
/* 88cd3b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 88cd3e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 88cd41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88cd44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88cd46: jne 0x88cfe9 */
  if (!zf) goto L_88cfe9;
L_88cd4c: /* 88cd4c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 88cd4f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88cd55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88cd57: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88cd5a: jne 0x88d2b5 */
  if (!zf) goto L_88d2b5;
L_88cd60: /* 88cd60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88cd62: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 88cd65: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88cd6bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88cd6b: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 88cd6e: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 88cd71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88cd72: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88cd78u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88cd78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88cd7a: je 0x88cd83 */
  if (zf) goto L_88cd83;
L_88cd7c: /* 88cd7c: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
L_88cd83: /* 88cd83: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88cd85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88cd86: mov ecx, edi */
  ecx = edi;
/* 88cd88: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x88cd8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cd8e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 88cd91: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 88cd94: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 88cd97: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 88cd9a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88cda0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88cda2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88cda5: jnp 0x88cccc */
  if (!pf) goto L_88cccc;
L_88cdab: /* 88cdab: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 88cdae: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 88cdb1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88cdb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88cdb4: mov ecx, edi */
  ecx = edi;
/* 88cdb6: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x88cdbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cdbc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88cdbf: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88cdc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88cdc6: fdiv dword ptr [ebp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x18u)));
/* 88cdc9: mov ecx, edi */
  ecx = edi;
/* 88cdcb: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 88cdce: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88cdd1: fst dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0);
/* 88cdd4: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 88cdd7: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88cdda: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88cde0: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 88cde3: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 88cde6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88cde8: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x88cdeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cdee: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 88cdf1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88cdf7: xor ecx, ecx */
  ecx = 0;
/* 88cdf9: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 88cdfc: xor edx, edx */
  edx = 0;
/* 88cdfe: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88ce00: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 88ce03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88ce05: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 88ce08: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88ce0e: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 88ce11: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88ce14: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 88ce17: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88ce19: jp 0x88ce91 */
  if (pf) goto L_88ce91;
L_88ce1b: /* 88ce1b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88ce1e: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 88ce21: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 88ce24: jne 0x88ce5e */
  if (!zf) goto L_88ce5e;
L_88ce26: /* 88ce26: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88ce2c: mov eax, ecx */
  eax = ecx;
/* 88ce2e: fdiv dword ptr [ebp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x14u)));
/* 88ce31: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88ce34: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 88ce37: mov eax, 1 */
  eax = 0x1u;
/* 88ce3c: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88ce3f: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88ce42: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88ce48: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88ce4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88ce4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88ce55: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ce56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ce57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ce58: mov esp, ebp */
  esp = ebp;
/* 88ce5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88ce5b: ret 0x14 */
  esp += 24; SPILL(); return;
L_88ce5e: /* 88ce5e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88ce61: mov eax, ecx */
  eax = ecx;
/* 88ce63: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88ce69: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88ce6c: mov dword ptr [esi + 0x18], 0x41200000 */
  W32((uint32_t)(esi + 0x18u), 0x41200000u);
/* 88ce73: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 88ce76: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88ce79: mov eax, 1 */
  eax = 0x1u;
/* 88ce7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88ce81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88ce88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ce89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ce8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ce8b: mov esp, ebp */
  esp = ebp;
/* 88ce8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88ce8e: ret 0x14 */
  esp += 24; SPILL(); return;
L_88ce91: /* 88ce91: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88ce94: jne 0x88cecf */
  if (!zf) goto L_88cecf;
L_88ce96: /* 88ce96: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 88ce99: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88ce9c: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 88ce9f: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88cea2: mov eax, 1 */
  eax = 0x1u;
/* 88cea7: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 88cead: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88ceb0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88ceb3: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88ceb9: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88cebc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88cebf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88cec6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88cec7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88cec8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88cec9: mov esp, ebp */
  esp = ebp;
/* 88cecb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88cecc: ret 0x14 */
  esp += 24; SPILL(); return;
L_88cecf: /* 88cecf: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 88ced2: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 88ced8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88ceda: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88cedd: jp 0x88cfc1 */
  if (pf) goto L_88cfc1;
L_88cee3: /* 88cee3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88cee6: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88ceec: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88ceef: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 88cef2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88cef8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88cefa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88cefd: jne 0x88cf23 */
  if (!zf) goto L_88cf23;
L_88ceff: /* 88ceff: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 88cf02: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 88cf05: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88cf08: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88cf0b: mov eax, 1 */
  eax = 0x1u;
/* 88cf10: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88cf13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88cf1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88cf1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88cf1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88cf1d: mov esp, ebp */
  esp = ebp;
/* 88cf1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88cf20: ret 0x14 */
  esp += 24; SPILL(); return;
L_88cf23: /* 88cf23: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 88cf26: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88cf2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88cf2e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88cf31: jp 0x88cf91 */
  if (pf) goto L_88cf91;
L_88cf33: /* 88cf33: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88cf35: mov ecx, edi */
  ecx = edi;
/* 88cf37: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88cf3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cf3d: lea ecx, [eax + 0x188] */
  ecx = (uint32_t)(eax + 0x188u);
/* 88cf43: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x88cf49u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 88cf49: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 88cf4c: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 88cf4f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88cf52: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88cf58: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 88cf5c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88cf5f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 88cf65: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 88cf68: call 0x6c47be */
  esp -= 4; W32(esp, 0x88cf6du); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 88cf6d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88cf70: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88cf73: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88cf76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88cf79: mov eax, 1 */
  eax = 0x1u;
/* 88cf7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88cf81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88cf88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88cf89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88cf8a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88cf8b: mov esp, ebp */
  esp = ebp;
/* 88cf8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88cf8e: ret 0x14 */
  esp += 24; SPILL(); return;
L_88cf91: /* 88cf91: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 88cf94: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88cf97: fmul dword ptr [0xa09e94] */
  ST0 = ST0 * (F32((uint32_t)(0xa09e94u)));
/* 88cf9d: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88cfa0: mov eax, 1 */
  eax = 0x1u;
/* 88cfa5: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 88cfab: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88cfae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88cfb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88cfb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88cfb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88cfba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88cfbb: mov esp, ebp */
  esp = ebp;
/* 88cfbd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88cfbe: ret 0x14 */
  esp += 24; SPILL(); return;
L_88cfc1: /* 88cfc1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88cfc4: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88cfc7: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 88cfca: mov dword ptr [esi + 0x10], 0x3a83126f */
  W32((uint32_t)(esi + 0x10u), 0x3a83126fu);
/* 88cfd1: mov eax, 1 */
  eax = 0x1u;
/* 88cfd6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88cfd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88cfe0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88cfe1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88cfe2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88cfe3: mov esp, ebp */
  esp = ebp;
/* 88cfe5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88cfe6: ret 0x14 */
  esp += 24; SPILL(); return;
L_88cfe9: /* 88cfe9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88cfeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88cfec: mov ecx, edi */
  ecx = edi;
/* 88cfee: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x88cff4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88cff4: fst dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0);
/* 88cff7: fst dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0);
/* 88cffa: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d000: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d002: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d005: jnp 0x88cccc */
  if (!pf) goto L_88cccc;
L_88d00b: /* 88d00b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88d00d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88d00e: mov ecx, edi */
  ecx = edi;
/* 88d010: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x88d016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d016: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88d019: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88d01c: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 88d01f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88d022: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 88d025: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88d026: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88d02cu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88d02c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d02e: je 0x88d081 */
  if (zf) goto L_88d081;
L_88d030: /* 88d030: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 88d033: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d035: je 0x88d081 */
  if (zf) goto L_88d081;
L_88d037: /* 88d037: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88d039: mov ecx, edi */
  ecx = edi;
/* 88d03b: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88d041u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d041: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 88d044: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88d045: mov ecx, eax */
  ecx = eax;
/* 88d047: call 0x6c5961 */
  esp -= 4; W32(esp, 0x88d04cu); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 88d04c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d04e: je 0x88d081 */
  if (zf) goto L_88d081;
L_88d050: /* 88d050: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88d053: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 88d05a: fdiv dword ptr [ebp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x18u)));
/* 88d05d: mov eax, 1 */
  eax = 0x1u;
/* 88d062: fst dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0);
/* 88d065: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 88d068: fst dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0);
/* 88d06b: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 88d06e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d071: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d078: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d079: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d07a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d07b: mov esp, ebp */
  esp = ebp;
/* 88d07d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d07e: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d081: /* 88d081: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88d087: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 88d08a: fdiv dword ptr [ebp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x18u)));
/* 88d08d: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 88d090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88d091: mov ecx, edi */
  ecx = edi;
/* 88d093: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 88d096: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88d099: fst dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0);
/* 88d09c: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 88d09f: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88d0a2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88d0a8: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 88d0ab: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 88d0ae: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 88d0b0: call dword ptr [eax + 0xcc] */
  { uint32_t t = R32((uint32_t)(eax + 0xccu)); esp -= 4; W32(esp, 0x88d0b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d0b6: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 88d0b9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d0bf: xor edx, edx */
  edx = 0;
/* 88d0c1: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 88d0c4: xor ecx, ecx */
  ecx = 0;
/* 88d0c6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88d0c8: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 88d0cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d0cd: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 88d0d0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d0d6: mov dword ptr [esi + 0x30], 1 */
  W32((uint32_t)(esi + 0x30u), 0x1u);
/* 88d0dd: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d0e0: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 88d0e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d0e5: jp 0x88d15d */
  if (pf) goto L_88d15d;
L_88d0e7: /* 88d0e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88d0ea: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 88d0ed: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 88d0f0: jne 0x88d12a */
  if (!zf) goto L_88d12a;
L_88d0f2: /* 88d0f2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88d0f8: mov eax, ecx */
  eax = ecx;
/* 88d0fa: fdiv dword ptr [ebp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x14u)));
/* 88d0fd: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88d100: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 88d103: mov eax, 1 */
  eax = 0x1u;
/* 88d108: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88d10b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88d10e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88d114: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88d117: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d11a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d121: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d124: mov esp, ebp */
  esp = ebp;
/* 88d126: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d127: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d12a: /* 88d12a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88d12d: mov eax, ecx */
  eax = ecx;
/* 88d12f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88d135: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88d138: mov dword ptr [esi + 0x18], 0x41200000 */
  W32((uint32_t)(esi + 0x18u), 0x41200000u);
/* 88d13f: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 88d142: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88d145: mov eax, 1 */
  eax = 0x1u;
/* 88d14a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d14d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d154: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d155: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d156: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d157: mov esp, ebp */
  esp = ebp;
/* 88d159: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d15a: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d15d: /* 88d15d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88d160: jne 0x88d19b */
  if (!zf) goto L_88d19b;
L_88d162: /* 88d162: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 88d165: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88d168: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 88d16b: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88d16e: mov eax, 1 */
  eax = 0x1u;
/* 88d173: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 88d179: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88d17c: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88d17f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88d185: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88d188: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d18b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d192: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d193: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d194: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d195: mov esp, ebp */
  esp = ebp;
/* 88d197: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d198: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d19b: /* 88d19b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 88d19e: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 88d1a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d1a6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d1a9: jp 0x88d28d */
  if (pf) goto L_88d28d;
L_88d1af: /* 88d1af: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88d1b2: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88d1b8: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88d1bb: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 88d1be: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d1c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d1c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88d1c9: jne 0x88d1ef */
  if (!zf) goto L_88d1ef;
L_88d1cb: /* 88d1cb: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 88d1ce: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 88d1d1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88d1d4: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88d1d7: mov eax, 1 */
  eax = 0x1u;
/* 88d1dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d1df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d1e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d1e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d1e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d1e9: mov esp, ebp */
  esp = ebp;
/* 88d1eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d1ec: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d1ef: /* 88d1ef: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 88d1f2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d1f8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d1fa: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d1fd: jp 0x88d25d */
  if (pf) goto L_88d25d;
L_88d1ff: /* 88d1ff: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88d201: mov ecx, edi */
  ecx = edi;
/* 88d203: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88d209u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d209: lea ecx, [eax + 0x188] */
  ecx = (uint32_t)(eax + 0x188u);
/* 88d20f: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x88d215u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 88d215: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 88d218: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 88d21b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88d21e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88d224: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 88d228: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88d22b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 88d231: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 88d234: call 0x6c47be */
  esp -= 4; W32(esp, 0x88d239u); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 88d239: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88d23c: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88d23f: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88d242: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88d245: mov eax, 1 */
  eax = 0x1u;
/* 88d24a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d24d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d254: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d255: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d256: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d257: mov esp, ebp */
  esp = ebp;
/* 88d259: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d25a: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d25d: /* 88d25d: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 88d260: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88d263: fmul dword ptr [0xa09e94] */
  ST0 = ST0 * (F32((uint32_t)(0xa09e94u)));
/* 88d269: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88d26c: mov eax, 1 */
  eax = 0x1u;
/* 88d271: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 88d277: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88d27a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d27d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d284: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d285: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d286: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d287: mov esp, ebp */
  esp = ebp;
/* 88d289: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d28a: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d28d: /* 88d28d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 88d290: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 88d293: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 88d296: mov dword ptr [esi + 0x10], 0x38d1b717 */
  W32((uint32_t)(esi + 0x10u), 0x38d1b717u);
/* 88d29d: mov eax, 1 */
  eax = 0x1u;
/* 88d2a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d2a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d2ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d2ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d2ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d2af: mov esp, ebp */
  esp = ebp;
/* 88d2b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d2b2: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d2b5: /* 88d2b5: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 88d2b8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d2be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d2c0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d2c3: jp 0x88cccc */
  if (pf) goto L_88cccc;
L_88d2c9: /* 88d2c9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88d2cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88d2cc: mov ecx, edi */
  ecx = edi;
/* 88d2ce: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x88d2d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d2d4: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 88d2d7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 88d2da: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 88d2dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88d2dd: mov ecx, edi */
  ecx = edi;
/* 88d2df: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 88d2e2: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x88d2e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d2e8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 88d2eb: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 88d2ee: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d2f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d2f6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d2f9: jnp 0x88cccc */
  if (!pf) goto L_88cccc;
L_88d2ff: /* 88d2ff: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88d305: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 88d308: fdiv dword ptr [ebp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x10u)));
/* 88d30b: xor ecx, ecx */
  ecx = 0;
/* 88d30d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 88d310: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 88d313: mov dword ptr [esi + 0x34], ecx */
  W32((uint32_t)(esi + 0x34u), ecx);
/* 88d316: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 88d319: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 88d31c: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 88d31f: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 88d322: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88d325: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88d327: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 88d32a: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 88d32d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88d333: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d335: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88d338: jne 0x88d36a */
  if (!zf) goto L_88d36a;
L_88d33a: /* 88d33a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 88d33d: mov eax, 1 */
  eax = 0x1u;
/* 88d342: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 88d345: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 88d34b: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88d34e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 88d354: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88d357: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d35a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d361: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d362: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d363: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d364: mov esp, ebp */
  esp = ebp;
/* 88d366: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d367: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d36a: /* 88d36a: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 88d36d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88d36f: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 88d372: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88d375: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d376: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d377: mov eax, 1 */
  eax = 0x1u;
/* 88d37c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88d383: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d384: mov esp, ebp */
  esp = ebp;
/* 88d386: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d387: ret 0x14 */
  esp += 24; SPILL(); return;
L_88d38a: /* 88d38a: mov ecx, edi */
  ecx = edi;
/* 88d38c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x88d392u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 88d392: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 88d398: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88d39a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88d39b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d39c: push 0xae7958 */
  { uint32_t v = 0xae7958u; esp -= 4; W32(esp, v); }
/* 88d3a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88d3a2: jmp 0x88ccc3 */
  goto L_88ccc3;
}

void f_88d3a7(void) {
  LOAD_REGS();
L_88d3a7: /* 88d3a7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88d3aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88d3af: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 88d3b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88d3b3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 88d3b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88d3bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88d3bb(); return;
}

void f_88d3bb(void) {
  LOAD_REGS();
L_88d3bb: /* 88d3bb: push 0xa19e18 */
  { uint32_t v = 0xa19e18u; esp -= 4; W32(esp, v); }
/* 88d3c0: push 0xae7a90 */
  { uint32_t v = 0xae7a90u; esp -= 4; W32(esp, v); }
/* 88d3c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88d3cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88d3cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88d3ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88d3d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88d3d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88d3d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88d3d7: guest_badaddr(0x88d3d7); return;
}

void f_88d5d0(void) {
  LOAD_REGS();
L_88d5d0: /* 88d5d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88d5d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88d5d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 88d5d6: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d5d8: mov ebx, ecx */
  ebx = ecx;
/* 88d5da: je 0x88d638 */
  if (zf) goto L_88d638;
L_88d5dc: /* 88d5dc: mov ecx, dword ptr [ebx + 0xac] */
  ecx = R32((uint32_t)(ebx + 0xacu));
/* 88d5e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d5e3: lea esi, [ebx + 0xa8] */
  esi = (uint32_t)(ebx + 0xa8u);
/* 88d5e9: xor eax, eax */
  eax = 0;
/* 88d5eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88d5ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88d5ee: jle 0x88d605 */
  if ((zf || sf != of)) goto L_88d605;
L_88d5f0: /* 88d5f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
L_88d5f2: /* 88d5f2: cmp dword ptr [edx], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88d5f4: je 0x88d600 */
  if (zf) goto L_88d600;
L_88d5f6: /* 88d5f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88d5f7: add edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 88d5fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d5fc: jl 0x88d5f2 */
  if ((sf != of)) goto L_88d5f2;
L_88d5fe: /* 88d5fe: jmp 0x88d605 */
  goto L_88d605;
L_88d600: /* 88d600: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88d603: jne 0x88d62c */
  if (!zf) goto L_88d62c;
L_88d605: /* 88d605: mov edi, dword ptr [ebx + 0xac] */
  edi = R32((uint32_t)(ebx + 0xacu));
/* 88d60b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88d60d: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 88d60f: mov ecx, esi */
  ecx = esi;
/* 88d611: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x88d617u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 88d617: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88d619: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 88d61c: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 88d61f: mov dword ptr [eax + ecx], ebp */
  W32((uint32_t)(eax + ecx), ebp);
/* 88d622: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88d624: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88d628: mov dword ptr [edx + eax + 4], ecx */
  W32((uint32_t)(edx + eax + 0x4u), ecx);
L_88d62c: /* 88d62c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 88d62e: mov ecx, ebx */
  ecx = ebx;
/* 88d630: call dword ptr [edx + 0x12c] */
  { uint32_t t = R32((uint32_t)(edx + 0x12cu)); esp -= 4; W32(esp, 0x88d636u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d636: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d637: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_88d638: /* 88d638: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d639: mov eax, 1 */
  eax = 0x1u;
/* 88d63e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d63f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88d670(void) {
  LOAD_REGS();
L_88d670: /* 88d670: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d671: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 88d675: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d677: je 0x88d6ce */
  if (zf) goto L_88d6ce;
L_88d679: /* 88d679: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 88d67f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d681: jne 0x88d6ce */
  if (!zf) goto L_88d6ce;
L_88d683: /* 88d683: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88d685: mov ecx, esi */
  ecx = esi;
/* 88d687: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88d68du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d68d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d68f: je 0x88d6ce */
  if (zf) goto L_88d6ce;
L_88d691: /* 88d691: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88d693: mov ecx, esi */
  ecx = esi;
/* 88d695: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x88d69bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d69b: mov ecx, dword ptr [eax + 0x21c] */
  ecx = R32((uint32_t)(eax + 0x21cu));
/* 88d6a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d6a3: je 0x88d6ce */
  if (zf) goto L_88d6ce;
L_88d6a5: /* 88d6a5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88d6a7: mov ecx, esi */
  ecx = esi;
/* 88d6a9: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88d6afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d6af: mov ecx, dword ptr [eax + 0x220] */
  ecx = R32((uint32_t)(eax + 0x220u));
/* 88d6b5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88d6b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88d6b8: mov ecx, esi */
  ecx = esi;
/* 88d6ba: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x88d6c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d6c0: mov eax, dword ptr [eax + 0x21c] */
  eax = R32((uint32_t)(eax + 0x21cu));
/* 88d6c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88d6c7: mov ecx, esi */
  ecx = esi;
/* 88d6c9: call 0x6c60aa */
  esp -= 4; W32(esp, 0x88d6ceu); SPILL(); f_6c60aa(); if (g_unwind) return; RELOAD();
L_88d6ce: /* 88d6ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d6cf: ret  */
  esp += 4; SPILL(); return;
}

void f_88d6f0(void) {
  LOAD_REGS();
L_88d6f0: /* 88d6f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d6f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 88d6f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88d6f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d6f7: mov edi, ecx */
  edi = ecx;
/* 88d6f9: call 0x6c2b21 */
  esp -= 4; W32(esp, 0x88d6feu); SPILL(); f_6c2b21(); if (g_unwind) return; RELOAD();
/* 88d6fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d700: je 0x88d725 */
  if (zf) goto L_88d725;
L_88d702: /* 88d702: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d704: mov ecx, edi */
  ecx = edi;
/* 88d706: jne 0x88d72c */
  if (!zf) goto L_88d72c;
L_88d708: /* 88d708: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x88d70eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 88d70e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88d70f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 88d714: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88d716: push 0xae7aa0 */
  { uint32_t v = 0xae7aa0u; esp -= 4; W32(esp, v); }
/* 88d71b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88d71c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x88d722u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 88d722: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_88d725: /* 88d725: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d726: xor eax, eax */
  eax = 0;
/* 88d728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d729: ret 0x18 */
  esp += 28; SPILL(); return;
L_88d72c: /* 88d72c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 88d730: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88d731: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88d736u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88d736: mov edx, eax */
  edx = eax;
/* 88d738: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88d73a: jge 0x88d73e */
  if ((sf == of)) goto L_88d73e;
L_88d73c: /* 88d73c: xor edx, edx */
  edx = 0;
L_88d73e: /* 88d73e: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 88d744: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88d748: imul esi, esi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x70u);
  esi = (uint32_t)r;
  }
/* 88d74b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 88d751: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88d753: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 88d757: mov ecx, esi */
  ecx = esi;
/* 88d759: mov dword ptr [ecx + 0x4c], eax */
  W32((uint32_t)(ecx + 0x4cu), eax);
/* 88d75c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d75e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d761: jp 0x88d769 */
  if (pf) goto L_88d769;
L_88d763: /* 88d763: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88d767: jmp 0x88d76f */
  goto L_88d76f;
L_88d769: /* 88d769: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_88d76f: /* 88d76f: fstp dword ptr [ecx + 0x50] */
  WF32((uint32_t)(ecx + 0x50u), ST0); FPOP();
/* 88d772: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88d776: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 88d77c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88d77e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88d781: jp 0x88d789 */
  if (pf) goto L_88d789;
L_88d783: /* 88d783: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88d787: jmp 0x88d78f */
  goto L_88d78f;
L_88d789: /* 88d789: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_88d78f: /* 88d78f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 88d793: fstp dword ptr [ecx + 0x54] */
  WF32((uint32_t)(ecx + 0x54u), ST0); FPOP();
/* 88d796: mov dword ptr [ecx + 0x64], edx */
  W32((uint32_t)(ecx + 0x64u), edx);
/* 88d799: xor edx, edx */
  edx = 0;
/* 88d79b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d79d: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 88d7a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d7a1: mov dword ptr [ecx + 0x38], 0 */
  W32((uint32_t)(ecx + 0x38u), 0x0u);
/* 88d7a8: mov eax, 1 */
  eax = 0x1u;
/* 88d7ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d7ae: mov dword ptr [ecx + 0x48], edx */
  W32((uint32_t)(ecx + 0x48u), edx);
/* 88d7b1: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_88d800(void) {
  LOAD_REGS();
L_88d800: /* 88d800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d801: mov esi, ecx */
  esi = ecx;
/* 88d803: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d804: call 0x6c2e9b */
  esp -= 4; W32(esp, 0x88d809u); SPILL(); f_6c2e9b(); if (g_unwind) return; RELOAD();
/* 88d809: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 88d80d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88d810: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88d812: jl 0x88d85a */
  if ((sf != of)) goto L_88d85a;
L_88d814: /* 88d814: cmp eax, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d81a: jge 0x88d85a */
  if ((sf == of)) goto L_88d85a;
L_88d81c: /* 88d81c: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 88d822: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88d825: mov eax, dword ptr [ecx + eax + 4] */
  eax = R32((uint32_t)(ecx + eax + 0x4u));
/* 88d829: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d82c: jle 0x88d846 */
  if ((zf || sf != of)) goto L_88d846;
L_88d82e: /* 88d82e: cmp dword ptr [esi + 0xac], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d834: jle 0x88d846 */
  if ((zf || sf != of)) goto L_88d846;
L_88d836: /* 88d836: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 88d839: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 88d83f: mov eax, dword ptr [eax + edx*8] */
  eax = R32((uint32_t)(eax + edx*8));
/* 88d842: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d844: jne 0x88d86a */
  if (!zf) goto L_88d86a;
L_88d846: /* 88d846: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88d848: mov ecx, esi */
  ecx = esi;
/* 88d84a: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x88d850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d850: mov eax, dword ptr [eax + 0x21c] */
  eax = R32((uint32_t)(eax + 0x21cu));
/* 88d856: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d857: ret 4 */
  esp += 8; SPILL(); return;
L_88d85a: /* 88d85a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88d85c: mov ecx, esi */
  ecx = esi;
/* 88d85e: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88d864u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d864: mov eax, dword ptr [eax + 0x21c] */
  eax = R32((uint32_t)(eax + 0x21cu));
L_88d86a: /* 88d86a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d86b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88d890(void) {
  LOAD_REGS();
L_88d890: /* 88d890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d891: mov esi, ecx */
  esi = ecx;
/* 88d893: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d894: call 0x6c2e9b */
  esp -= 4; W32(esp, 0x88d899u); SPILL(); f_6c2e9b(); if (g_unwind) return; RELOAD();
/* 88d899: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 88d89f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88d8a2: xor eax, eax */
  eax = 0;
/* 88d8a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88d8a6: jle 0x88d8bf */
  if ((zf || sf != of)) goto L_88d8bf;
L_88d8a8: /* 88d8a8: mov esi, dword ptr [esi + 0xa8] */
  esi = R32((uint32_t)(esi + 0xa8u));
/* 88d8ae: mov edx, ecx */
  edx = ecx;
L_88d8b0: /* 88d8b0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88d8b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d8b4: je 0x88d8b9 */
  if (zf) goto L_88d8b9;
L_88d8b6: /* 88d8b6: add eax, dword ptr [ecx + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x48u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_88d8b9: /* 88d8b9: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88d8bc: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 88d8bd: jne 0x88d8b0 */
  if (!zf) goto L_88d8b0;
L_88d8bf: /* 88d8bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d8c0: ret  */
  esp += 4; SPILL(); return;
}

void f_88d8e0(void) {
  LOAD_REGS();
L_88d8e0: /* 88d8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d8e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88d8e2: mov esi, ecx */
  esi = ecx;
/* 88d8e4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88d8e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88d8e8: call dword ptr [eax + 0x138] */
  { uint32_t t = R32((uint32_t)(eax + 0x138u)); esp -= 4; W32(esp, 0x88d8eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d8ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d8f0: je 0x88d92c */
  if (zf) goto L_88d92c;
L_88d8f2: /* 88d8f2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88d8f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88d8f6: mov ecx, esi */
  ecx = esi;
/* 88d8f8: call dword ptr [edx + 0x138] */
  { uint32_t t = R32((uint32_t)(edx + 0x138u)); esp -= 4; W32(esp, 0x88d8feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d8fe: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 88d902: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 88d905: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88d908: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d90a: jle 0x88d92c */
  if ((zf || sf != of)) goto L_88d92c;
L_88d90c: /* 88d90c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88d90e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88d910: mov ecx, esi */
  ecx = esi;
/* 88d912: call dword ptr [eax + 0x138] */
  { uint32_t t = R32((uint32_t)(eax + 0x138u)); esp -= 4; W32(esp, 0x88d918u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88d918: mov ecx, eax */
  ecx = eax;
/* 88d91a: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 88d91d: mov eax, edi */
  eax = edi;
/* 88d91f: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 88d922: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88d925: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d926: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88d928: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d929: ret 4 */
  esp += 8; SPILL(); return;
L_88d92c: /* 88d92c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d92d: xor eax, eax */
  eax = 0;
/* 88d92f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d930: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88d960(void) {
  LOAD_REGS();
L_88d960: /* 88d960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88d961: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88d962: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88d963: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88d964: mov ebx, ecx */
  ebx = ecx;
/* 88d966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88d967: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88d968: call 0x6c2e9b */
  esp -= 4; W32(esp, 0x88d96du); SPILL(); f_6c2e9b(); if (g_unwind) return; RELOAD();
/* 88d96d: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 88d973: xor esi, esi */
  esi = 0;
/* 88d975: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88d978: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d97a: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 88d97e: jle 0x88d9d9 */
  if ((zf || sf != of)) goto L_88d9d9;
L_88d980: /* 88d980: mov eax, dword ptr [ebx + 0xa8] */
  eax = R32((uint32_t)(ebx + 0xa8u));
/* 88d986: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 88d989: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d98b: je 0x88d9c3 */
  if (zf) goto L_88d9c3;
L_88d98d: /* 88d98d: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 88d990: xor edi, edi */
  edi = 0;
/* 88d992: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88d994: jle 0x88d9c3 */
  if ((zf || sf != of)) goto L_88d9c3;
L_88d996: /* 88d996: xor ebp, ebp */
  ebp = 0;
L_88d998: /* 88d998: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* 88d99b: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 88d99e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88d9a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88d9a1: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88d9a5: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88d9abu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88d9ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88d9ad: jne 0x88d9e3 */
  if (!zf) goto L_88d9e3;
L_88d9af: /* 88d9af: mov eax, dword ptr [ebx + 0xa8] */
  eax = R32((uint32_t)(ebx + 0xa8u));
/* 88d9b5: mov edx, dword ptr [esi + eax] */
  edx = R32((uint32_t)(esi + eax));
/* 88d9b8: mov ecx, dword ptr [edx + 0x48] */
  ecx = R32((uint32_t)(edx + 0x48u));
/* 88d9bb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88d9bc: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 88d9bf: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d9c1: jl 0x88d998 */
  if ((sf != of)) goto L_88d998;
L_88d9c3: /* 88d9c3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 88d9c7: mov ecx, dword ptr [ebx + 0xac] */
  ecx = R32((uint32_t)(ebx + 0xacu));
/* 88d9cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88d9ce: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88d9d1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88d9d3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 88d9d7: jl 0x88d980 */
  if ((sf != of)) goto L_88d980;
L_88d9d9: /* 88d9d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d9da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d9db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d9dc: xor eax, eax */
  eax = 0;
/* 88d9de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88d9df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88d9e0: ret 4 */
  esp += 8; SPILL(); return;
L_88d9e3: /* 88d9e3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 88d9e7: mov ecx, dword ptr [ebx + 0xa8] */
  ecx = R32((uint32_t)(ebx + 0xa8u));
/* 88d9ed: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 88d9f0: mov edx, dword ptr [ecx + eax*8] */
  edx = R32((uint32_t)(ecx + eax*8));
/* 88d9f3: mov ecx, dword ptr [edx + 0x44] */
  ecx = R32((uint32_t)(edx + 0x44u));
/* 88d9f6: mov eax, edi */
  eax = edi;
/* 88d9f8: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 88d9fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88d9fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88d9fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88d9fe: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88da00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88da01: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88da02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88da40(void) {
  LOAD_REGS();
L_88da40: /* 88da40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88da44: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88da47: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88da49: je 0x88da59 */
  if (zf) goto L_88da59;
L_88da4b: /* 88da4b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 88da4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88da50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88da54: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 88da56: ret 8 */
  esp += 12; SPILL(); return;
L_88da59: /* 88da59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88da5a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 88da5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88da60: mov ecx, esi */
  ecx = esi;
/* 88da62: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88da68u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88da68: mov eax, esi */
  eax = esi;
/* 88da6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88da6b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88da80(void) {
  LOAD_REGS();
L_88da80: /* 88da80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88da84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88da86: je 0x88da98 */
  if (zf) goto L_88da98;
L_88da88: /* 88da88: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88da8c: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 88da8f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 88da92: fld dword ptr [ecx + eax*4] */
  { double v = F32((uint32_t)(ecx + eax*4)); FPUSH(v); }
/* 88da95: ret 8 */
  esp += 12; SPILL(); return;
L_88da98: /* 88da98: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 88da9e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88dac0(void) {
  LOAD_REGS();
L_88dac0: /* 88dac0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88dac4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88dac6: je 0x88dadf */
  if (zf) goto L_88dadf;
L_88dac8: /* 88dac8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88dacc: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 88dacf: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 88dad2: lea ecx, [ecx + eax*4 + 4] */
  ecx = (uint32_t)(ecx + eax*4 + 0x4u);
/* 88dad6: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x88dadcu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 88dadc: ret 8 */
  esp += 12; SPILL(); return;
L_88dadf: /* 88dadf: xor eax, eax */
  eax = 0;
/* 88dae1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88db00(void) {
  LOAD_REGS();
L_88db00: /* 88db00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88db04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88db06: je 0x88db19 */
  if (zf) goto L_88db19;
L_88db08: /* 88db08: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88db0c: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 88db0f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 88db12: mov eax, dword ptr [ecx + eax*4 + 8] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x8u));
/* 88db16: ret 8 */
  esp += 12; SPILL(); return;
L_88db19: /* 88db19: xor eax, eax */
  eax = 0;
/* 88db1b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88db30(void) {
  LOAD_REGS();
L_88db30: /* 88db30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88db31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88db32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88db33: mov esi, ecx */
  esi = ecx;
/* 88db35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88db36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88db37: call 0x6c2e9b */
  esp -= 4; W32(esp, 0x88db3cu); SPILL(); f_6c2e9b(); if (g_unwind) return; RELOAD();
/* 88db3c: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 88db42: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88db45: xor edi, edi */
  edi = 0;
/* 88db47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88db49: jle 0x88db76 */
  if ((zf || sf != of)) goto L_88db76;
L_88db4b: /* 88db4b: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 88db4f: xor ebx, ebx */
  ebx = 0;
L_88db51: /* 88db51: mov eax, dword ptr [esi + 0xa8] */
  eax = R32((uint32_t)(esi + 0xa8u));
/* 88db57: mov ecx, dword ptr [ebx + eax] */
  ecx = R32((uint32_t)(ebx + eax));
/* 88db5a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88db5c: je 0x88db68 */
  if (zf) goto L_88db68;
L_88db5e: /* 88db5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88db60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88db61: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x88db64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88db64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88db66: jne 0x88db7f */
  if (!zf) goto L_88db7f;
L_88db68: /* 88db68: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 88db6e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88db6f: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 88db72: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88db74: jl 0x88db51 */
  if ((sf != of)) goto L_88db51;
L_88db76: /* 88db76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88db77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88db78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88db79: xor eax, eax */
  eax = 0;
/* 88db7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88db7c: ret 4 */
  esp += 8; SPILL(); return;
L_88db7f: /* 88db7f: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 88db85: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 88db88: mov eax, dword ptr [ecx + eax*8] */
  eax = R32((uint32_t)(ecx + eax*8));
/* 88db8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88db8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88db8d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88db8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88db8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88dbc0(void) {
  LOAD_REGS();
L_88dbc0: /* 88dbc0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88dbc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88dbc4: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 88dbc8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88dbc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88dbca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88dbcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88dbcc: mov esi, ecx */
  esi = ecx;
/* 88dbce: call 0x6c2b21 */
  esp -= 4; W32(esp, 0x88dbd3u); SPILL(); f_6c2b21(); if (g_unwind) return; RELOAD();
/* 88dbd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88dbd5: je 0x88dd72 */
  if (zf) goto L_88dd72;
L_88dbdb: /* 88dbdb: cmp dword ptr [esi + 0xfc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xfcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88dbe1: jle 0x88dd52 */
  if ((zf || sf != of)) goto L_88dd52;
L_88dbe7: /* 88dbe7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88dbe9: jl 0x88dd52 */
  if ((sf != of)) goto L_88dd52;
L_88dbef: /* 88dbef: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 88dbf3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88dbf5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88dbf6: mov ecx, esi */
  ecx = esi;
/* 88dbf8: call dword ptr [eax + 0x130] */
  { uint32_t t = R32((uint32_t)(eax + 0x130u)); esp -= 4; W32(esp, 0x88dbfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dbfe: mov ebp, eax */
  ebp = eax;
/* 88dc00: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88dc02: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 88dc06: je 0x88dd72 */
  if (zf) goto L_88dd72;
L_88dc0c: /* 88dc0c: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 88dc0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88dc10: mov ecx, ebp */
  ecx = ebp;
/* 88dc12: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x88dc15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dc15: mov edi, eax */
  edi = eax;
/* 88dc17: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88dc19: je 0x88dd08 */
  if (zf) goto L_88dd08;
L_88dc1f: /* 88dc1f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88dc21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88dc22: mov ecx, esi */
  ecx = esi;
/* 88dc24: xor ebx, ebx */
  ebx = 0;
/* 88dc26: call dword ptr [eax + 0xcc] */
  { uint32_t t = R32((uint32_t)(eax + 0xccu)); esp -= 4; W32(esp, 0x88dc2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dc2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88dc2e: jle 0x88dd04 */
  if ((zf || sf != of)) goto L_88dd04;
L_88dc34: /* 88dc34: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 88dc38: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 88dc3c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_88dc40: /* 88dc40: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88dc42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88dc43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88dc44: mov ecx, esi */
  ecx = esi;
/* 88dc46: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x88dc4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dc4c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88dc50: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88dc54: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dc5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dc5c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dc5f: jne 0x88dc94 */
  if (!zf) goto L_88dc94;
L_88dc61: /* 88dc61: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88dc65: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 88dc69: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dc6b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88dc6e: jp 0x88dc7f */
  if (pf) goto L_88dc7f;
L_88dc70: /* 88dc70: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88dc74: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 88dc78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dc7a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dc7d: je 0x88dcc3 */
  if (zf) goto L_88dcc3;
L_88dc7f: /* 88dc7f: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88dc83: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 88dc89: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 88dc8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dc8f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88dc92: jnp 0x88dcc3 */
  if (!pf) goto L_88dcc3;
L_88dc94: /* 88dc94: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88dc98: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dc9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dca0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88dca3: jp 0x88dcf0 */
  if (pf) goto L_88dcf0;
L_88dca5: /* 88dca5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88dca9: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 88dcad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dcaf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dcb2: jne 0x88dcf0 */
  if (!zf) goto L_88dcf0;
L_88dcb4: /* 88dcb4: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88dcb8: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 88dcbc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dcbe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88dcc1: jp 0x88dcf0 */
  if (pf) goto L_88dcf0;
L_88dcc3: /* 88dcc3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88dcc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88dcc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88dcc7: mov ecx, esi */
  ecx = esi;
/* 88dcc9: call dword ptr [eax + 0xd8] */
  { uint32_t t = R32((uint32_t)(eax + 0xd8u)); esp -= 4; W32(esp, 0x88dccfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dccf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88dcd1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 88dcd5: je 0x88dcf0 */
  if (zf) goto L_88dcf0;
L_88dcd7: /* 88dcd7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88dcd9: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 88dcdb: mov ecx, esi */
  ecx = esi;
/* 88dcdd: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88dce3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dce3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88dce7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88dce8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88dce9: call dword ptr [ebp + 0x68] */
  { uint32_t t = R32((uint32_t)(ebp + 0x68u)); esp -= 4; W32(esp, 0x88dcecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dcec: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_88dcf0: /* 88dcf0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88dcf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88dcf3: mov ecx, esi */
  ecx = esi;
/* 88dcf5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88dcf6: call dword ptr [eax + 0xcc] */
  { uint32_t t = R32((uint32_t)(eax + 0xccu)); esp -= 4; W32(esp, 0x88dcfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dcfc: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88dcfe: jl 0x88dc40 */
  if ((sf != of)) goto L_88dc40;
L_88dd04: /* 88dd04: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
L_88dd08: /* 88dd08: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 88dd0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88dd0f: mov edi, ebx */
  edi = ebx;
/* 88dd11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88dd12: imul edi, edi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x70u);
  edi = (uint32_t)r;
  }
/* 88dd15: call 0x6c293c */
  esp -= 4; W32(esp, 0x88dd1au); SPILL(); f_6c293c(); if (g_unwind) return; RELOAD();
/* 88dd1a: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 88dd20: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88dd24: mov dword ptr [edi + edx + 4], eax */
  W32((uint32_t)(edi + edx + 0x4u), eax);
/* 88dd28: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 88dd2e: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 88dd32: fstp dword ptr [edi + eax + 0x10] */
  WF32((uint32_t)(edi + eax + 0x10u), ST0); FPOP();
/* 88dd36: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 88dd3c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88dd3f: mov dword ptr [edi + ecx + 8], edx */
  W32((uint32_t)(edi + ecx + 0x8u), edx);
/* 88dd43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88dd44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88dd45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88dd46: mov eax, 1 */
  eax = 0x1u;
/* 88dd4b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88dd4c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88dd4f: ret 0x10 */
  esp += 20; SPILL(); return;
L_88dd52: /* 88dd52: mov ecx, esi */
  ecx = esi;
/* 88dd54: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x88dd5au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 88dd5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88dd5b: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 88dd60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88dd62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88dd63: push 0xae7b40 */
  { uint32_t v = 0xae7b40u; esp -= 4; W32(esp, v); }
/* 88dd68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88dd69: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x88dd6fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 88dd6f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_88dd72: /* 88dd72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88dd73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88dd74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88dd75: xor eax, eax */
  eax = 0;
/* 88dd77: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88dd78: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88dd7b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_88ddf0(void) {
  LOAD_REGS();
L_88ddf0: /* 88ddf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88ddf1: mov ebp, esp */
  ebp = esp;
/* 88ddf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88ddf5: push 0x9d5540 */
  { uint32_t v = 0x9d5540u; esp -= 4; W32(esp, v); }
/* 88ddfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88de00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88de01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88de08: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88de0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88de0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88de0d: mov esi, ecx */
  esi = ecx;
/* 88de0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88de11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88de12: xor ebx, ebx */
  ebx = 0;
/* 88de14: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88de17: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 88de1a: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88de20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88de20: test dword ptr [eax + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88de2a: je 0x88dea1 */
  if (zf) goto L_88dea1;
L_88de2c: /* 88de2c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88de2e: mov ecx, esi */
  ecx = esi;
/* 88de30: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88de36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88de36: cmp dword ptr [eax + 0x58], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x58u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88de39: je 0x88dea1 */
  if (zf) goto L_88dea1;
L_88de3b: /* 88de3b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88de3d: mov ecx, esi */
  ecx = esi;
/* 88de3f: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88de45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88de45: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 88de48: cmp dword ptr [ecx + 0xd0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88de4e: je 0x88dea1 */
  if (zf) goto L_88dea1;
L_88de50: /* 88de50: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88de52: mov ecx, esi */
  ecx = esi;
/* 88de54: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88de5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88de5a: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 88de5d: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 88de63: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 88de68: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x88de6eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 88de6e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88de70: je 0x88dea1 */
  if (zf) goto L_88dea1;
L_88de72: /* 88de72: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88de74: mov ecx, esi */
  ecx = esi;
/* 88de76: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x88de7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88de7c: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88de7e: je 0x88de89 */
  if (zf) goto L_88de89;
L_88de80: /* 88de80: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88de82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88de84: mov ecx, esi */
  ecx = esi;
/* 88de86: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x88de89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88de89: /* 88de89: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88de8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88de8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88de8e: mov eax, 1 */
  eax = 0x1u;
/* 88de93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88de9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88de9b: mov esp, ebp */
  esp = ebp;
/* 88de9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88de9e: ret 4 */
  esp += 8; SPILL(); return;
L_88dea1: /* 88dea1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88dea3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88dea5: mov ecx, esi */
  ecx = esi;
/* 88dea7: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x88deadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dead: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88deaf: mov ecx, esi */
  ecx = esi;
/* 88deb1: mov dword ptr [esi + 0x208], 1 */
  W32((uint32_t)(esi + 0x208u), 0x1u);
/* 88debb: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x88dec1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dec1: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dec3: jne 0x88e2e0 */
  if (!zf) goto L_88e2e0;
L_88dec9: /* 88dec9: xor edi, edi */
  edi = 0;
/* 88decb: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 88dece: mov edi, edi */
  edi = edi;
L_88ded0: /* 88ded0: cmp edi, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ded6: jge 0x88e2e0 */
  if ((sf == of)) goto L_88e2e0;
L_88dedc: /* 88dedc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 88dedf: imul edi, edi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x70u);
  edi = (uint32_t)r;
  }
/* 88dee2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88dee5: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 88deeb: mov eax, dword ptr [edi + ecx + 0x38] */
  eax = R32((uint32_t)(edi + ecx + 0x38u));
/* 88deef: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88def1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88def3: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 88def6: je 0x88df70 */
  if (zf) goto L_88df70;
L_88def8: /* 88def8: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88defc: jle 0x88e29e */
  if ((zf || sf != of)) goto L_88e29e;
L_88df02: /* 88df02: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88df05: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88df0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df0d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88df10: jne 0x88df70 */
  if (!zf) goto L_88df70;
L_88df12: /* 88df12: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88df15: fdiv dword ptr [edi + 0x58] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x58u)));
/* 88df18: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88df1e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 88df20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df22: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88df25: jp 0x88df2f */
  if (pf) goto L_88df2f;
L_88df27: /* 88df27: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88df29: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_88df2f: /* 88df2f: fld dword ptr [edi + 0x5c] */
  { double v = F32((uint32_t)(edi + 0x5cu)); FPUSH(v); }
/* 88df32: fsub dword ptr [edi + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4cu)));
/* 88df35: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 88df37: fadd dword ptr [edi + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4cu)));
/* 88df3a: fstp dword ptr [edi + 0x4c] */
  WF32((uint32_t)(edi + 0x4cu), ST0); FPOP();
/* 88df3d: fld dword ptr [edi + 0x58] */
  { double v = F32((uint32_t)(edi + 0x58u)); FPUSH(v); }
/* 88df40: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 88df43: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88df49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df4b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88df4e: je 0x88df58 */
  if (zf) goto L_88df58;
L_88df50: /* 88df50: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88df52: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_88df58: /* 88df58: fst dword ptr [edi + 0x58] */
  WF32((uint32_t)(edi + 0x58u), ST0);
/* 88df5b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88df61: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df63: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88df66: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88df68: /* 88df68: mov dword ptr [edi + 0x38], ebx */
  W32((uint32_t)(edi + 0x38u), ebx);
/* 88df6b: jmp 0x88df70 */
  goto L_88df70;
L_88df70: /* 88df70: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88df74: jle 0x88e29e */
  if ((zf || sf != of)) goto L_88e29e;
L_88df7a: /* 88df7a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88df7c: mov ecx, esi */
  ecx = esi;
/* 88df7e: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88df84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88df84: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88df87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88df88: mov ecx, eax */
  ecx = eax;
/* 88df8a: call 0x6c5961 */
  esp -= 4; W32(esp, 0x88df8fu); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 88df8f: xor ecx, ecx */
  ecx = 0;
/* 88df91: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88df93: je 0x88e2a3 */
  if (zf) goto L_88e2a3;
L_88df99: /* 88df99: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88df9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfa2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfa4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfa7: jne 0x88e2a3 */
  if (!zf) goto L_88e2a3;
L_88dfad: /* 88dfad: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 88dfb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88dfb1: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88dfb4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 88dfb7: jg 0x88e2a3 */
  if ((!zf && sf == of)) goto L_88e2a3;
L_88dfbd: /* 88dfbd: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88dfc0: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 88dfc3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfc9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 88dfcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfce: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfd1: jne 0x88e250 */
  if (!zf) goto L_88e250;
L_88dfd7: /* 88dfd7: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88dfda: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfe0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfe2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfe5: jne 0x88dfef */
  if (!zf) goto L_88dfef;
L_88dfe7: /* 88dfe7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88dfea: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88dfed: jmp 0x88e029 */
  goto L_88e029;
L_88dfef: /* 88dfef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88dff1: mov ecx, esi */
  ecx = esi;
/* 88dff3: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88dff9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dff9: lea ecx, [eax + 0x188] */
  ecx = (uint32_t)(eax + 0x188u);
/* 88dfff: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x88e005u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 88e005: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 88e008: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88e00b: fchs  */
  ST0 = -ST0;
/* 88e00d: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
/* 88e013: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 88e015: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e017: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e01a: jne 0x88e024 */
  if (!zf) goto L_88e024;
L_88e01c: /* 88e01c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88e01e: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
L_88e024: /* 88e024: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e027: xor ecx, ecx */
  ecx = 0;
L_88e029: /* 88e029: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 88e02c: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 88e02f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e031: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 88e034: je 0x88e17e */
  if (zf) goto L_88e17e;
L_88e03a: /* 88e03a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e03c: mov ecx, esi */
  ecx = esi;
/* 88e03e: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88e044u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e044: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 88e04a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e04c: je 0x88e17c */
  if (zf) goto L_88e17c;
L_88e052: /* 88e052: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 88e055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e057: jne 0x88e17c */
  if (!zf) goto L_88e17c;
L_88e05d: /* 88e05d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 88e060: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e063: mov ecx, esi */
  ecx = esi;
/* 88e065: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x88e06bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e06b: mov ebx, eax */
  ebx = eax;
/* 88e06d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e06f: je 0x88e17c */
  if (zf) goto L_88e17c;
L_88e075: /* 88e075: mov dword ptr [ebp - 0x30], 0x47c35000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x47c35000u);
/* 88e07c: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 88e083: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 88e08a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_88e090: /* 88e090: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e093: mov ecx, esi */
  ecx = esi;
/* 88e095: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x88e09bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e09b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88e09e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e0a0: jge 0x88e0ff */
  if ((sf == of)) goto L_88e0ff;
L_88e0a2: /* 88e0a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e0a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e0a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e0a6: mov ecx, esi */
  ecx = esi;
/* 88e0a8: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x88e0aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e0ae: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e0b1: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 88e0b4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 88e0b7: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 88e0ba: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 88e0bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0bf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e0c2: jp 0x88e0fa */
  if (pf) goto L_88e0fa;
L_88e0c4: /* 88e0c4: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e0c7: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 88e0ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0cc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e0cf: jne 0x88e0fa */
  if (!zf) goto L_88e0fa;
L_88e0d1: /* 88e0d1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e0d4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 88e0d7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e0da: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e0dd: je 0x88e0e9 */
  if (zf) goto L_88e0e9;
L_88e0df: /* 88e0df: fcom dword ptr [ebp - 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd0u)));
/* 88e0e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e0e7: jp 0x88e0f8 */
  if (pf) goto L_88e0f8;
L_88e0e9: /* 88e0e9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88e0ec: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 88e0ef: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 88e0f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88e0f3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 88e0f6: jmp 0x88e090 */
  goto L_88e090;
L_88e0f8: /* 88e0f8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_88e0fa: /* 88e0fa: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 88e0fd: jmp 0x88e090 */
  goto L_88e090;
L_88e0ff: /* 88e0ff: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e102: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e105: jle 0x88e17c */
  if ((zf || sf != of)) goto L_88e17c;
L_88e107: /* 88e107: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e10a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e10b: mov ecx, esi */
  ecx = esi;
/* 88e10d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x88e113u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e113: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e116: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e119: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e11c: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 88e11f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e122: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e123: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e126: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e129: mov ecx, esi */
  ecx = esi;
/* 88e12b: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e12e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e130: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e133: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x88e139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e139: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e13c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e13f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 88e142: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e145: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e148: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e149: mov ecx, esi */
  ecx = esi;
/* 88e14b: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x88e151u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e151: mov ebx, eax */
  ebx = eax;
/* 88e153: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e155: je 0x88df70 */
  if (zf) goto L_88df70;
L_88e15b: /* 88e15b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e15e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e160: mov dword ptr [esi + 0x128], ecx */
  W32((uint32_t)(esi + 0x128u), ecx);
/* 88e166: mov ecx, esi */
  ecx = esi;
/* 88e168: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e16eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e16e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 88e170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88e172: mov ecx, ebx */
  ecx = ebx;
/* 88e174: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x88e177u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e177: jmp 0x88df70 */
  goto L_88df70;
L_88e17c: /* 88e17c: xor ecx, ecx */
  ecx = 0;
L_88e17e: /* 88e17e: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e181: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 88e184: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e186: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e189: jnp 0x88e2a0 */
  if (!pf) goto L_88e2a0;
L_88e18f: /* 88e18f: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 88e192: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e195: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e197: je 0x88e20e */
  if (zf) goto L_88e20e;
L_88e199: /* 88e199: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 88e19f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e1a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e1a4: jp 0x88e1af */
  if (pf) goto L_88e1af;
L_88e1a6: /* 88e1a6: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 88e1ad: jmp 0x88e1c9 */
  goto L_88e1c9;
L_88e1af: /* 88e1af: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e1b2: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 88e1b8: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e1bb: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e1be: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e1c1: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e1c4: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e1c6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_88e1c9: /* 88e1c9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 88e1cc: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 88e1cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e1d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e1d4: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88e1da: /* 88e1da: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e1dd: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
L_88e1e3: /* 88e1e3: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 88e1e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e1e8: jne 0x88df70 */
  if (!zf) goto L_88df70;
L_88e1ee: /* 88e1ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e1f0: mov ecx, esi */
  ecx = esi;
/* 88e1f2: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e1f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e1f8: mov ecx, dword ptr [esi + 0x12c] */
  ecx = R32((uint32_t)(esi + 0x12cu));
/* 88e1fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88e200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e201: mov ecx, eax */
  ecx = eax;
/* 88e203: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x88e209u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e209: jmp 0x88df70 */
  goto L_88df70;
L_88e20e: /* 88e20e: fsub dword ptr [edi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x14u)));
/* 88e211: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 88e214: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e217: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e21a: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e21d: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 88e220: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e223: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 88e229: cmp dword ptr [edi + 0x44], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x44u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e22c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e22e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e231: jne 0x88e248 */
  if (!zf) goto L_88e248;
L_88e233: /* 88e233: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88e236: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88e23c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e23e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e241: jne 0x88e248 */
  if (!zf) goto L_88e248;
L_88e243: /* 88e243: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 88e246: jmp 0x88e1ee */
  goto L_88e1ee;
L_88e248: /* 88e248: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 88e24b: jmp 0x88df70 */
  goto L_88df70;
L_88e250: /* 88e250: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88e253: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 88e256: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 88e259: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88e25f: fst dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0);
/* 88e262: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e264: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e267: jne 0x88e29a */
  if (!zf) goto L_88e29a;
L_88e269: /* 88e269: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88e26c: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e26f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88e271: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88e273: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e276: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e278: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e27b: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88e27e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88e284: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e286: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e289: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88e28f: /* 88e28f: mov dword ptr [esi + 0x12c], ebx */
  W32((uint32_t)(esi + 0x12cu), ebx);
/* 88e295: jmp 0x88e1e3 */
  goto L_88e1e3;
L_88e29a: /* 88e29a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88e29c: jmp 0x88e2a3 */
  goto L_88e2a3;
L_88e29e: /* 88e29e: xor ecx, ecx */
  ecx = 0;
L_88e2a0: /* 88e2a0: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_88e2a3: /* 88e2a3: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e2a5: jne 0x88e2d2 */
  if (!zf) goto L_88e2d2;
L_88e2a7: /* 88e2a7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e2a9: mov ecx, esi */
  ecx = esi;
/* 88e2ab: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e2b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2b1: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 88e2b4: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 88e2b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2b8: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 88e2bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2bc: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 88e2bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2c0: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 88e2c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 88e2c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e2cb: mov ecx, eax */
  ecx = eax;
/* 88e2cd: call 0x6c21c1 */
  esp -= 4; W32(esp, 0x88e2d2u); SPILL(); f_6c21c1(); if (g_unwind) return; RELOAD();
L_88e2d2: /* 88e2d2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88e2d3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 88e2d6: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e2d9: xor ebx, ebx */
  ebx = 0;
/* 88e2db: jmp 0x88ded0 */
  goto L_88ded0;
L_88e2e0: /* 88e2e0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e2e2: mov ecx, esi */
  ecx = esi;
/* 88e2e4: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x88e2eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2ea: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e2ec: mov ecx, esi */
  ecx = esi;
/* 88e2ee: je 0x88e2fc */
  if (zf) goto L_88e2fc;
L_88e2f0: /* 88e2f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e2f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88e2f4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x88e2f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2f7: jmp 0x88de89 */
  goto L_88de89;
L_88e2fc: /* 88e2fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e2fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e2ff: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x88e305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e305: jmp 0x88de89 */
  goto L_88de89;
}

void f_88dea1(void) {
  LOAD_REGS();
  goto L_88dea1;
L_88de89: /* 88de89: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88de8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88de8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88de8e: mov eax, 1 */
  eax = 0x1u;
/* 88de93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88de9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88de9b: mov esp, ebp */
  esp = ebp;
/* 88de9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88de9e: ret 4 */
  esp += 8; SPILL(); return;
L_88dea1: /* 88dea1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88dea3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88dea5: mov ecx, esi */
  ecx = esi;
/* 88dea7: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x88deadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dead: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88deaf: mov ecx, esi */
  ecx = esi;
/* 88deb1: mov dword ptr [esi + 0x208], 1 */
  W32((uint32_t)(esi + 0x208u), 0x1u);
/* 88debb: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x88dec1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dec1: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dec3: jne 0x88e2e0 */
  if (!zf) goto L_88e2e0;
L_88dec9: /* 88dec9: xor edi, edi */
  edi = 0;
/* 88decb: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 88dece: mov edi, edi */
  edi = edi;
L_88ded0: /* 88ded0: cmp edi, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ded6: jge 0x88e2e0 */
  if ((sf == of)) goto L_88e2e0;
L_88dedc: /* 88dedc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 88dedf: imul edi, edi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x70u);
  edi = (uint32_t)r;
  }
/* 88dee2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88dee5: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 88deeb: mov eax, dword ptr [edi + ecx + 0x38] */
  eax = R32((uint32_t)(edi + ecx + 0x38u));
/* 88deef: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88def1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88def3: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 88def6: je 0x88df70 */
  if (zf) goto L_88df70;
L_88def8: /* 88def8: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88defc: jle 0x88e29e */
  if ((zf || sf != of)) goto L_88e29e;
L_88df02: /* 88df02: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88df05: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88df0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df0d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88df10: jne 0x88df70 */
  if (!zf) goto L_88df70;
L_88df12: /* 88df12: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88df15: fdiv dword ptr [edi + 0x58] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x58u)));
/* 88df18: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88df1e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 88df20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df22: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88df25: jp 0x88df2f */
  if (pf) goto L_88df2f;
L_88df27: /* 88df27: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88df29: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_88df2f: /* 88df2f: fld dword ptr [edi + 0x5c] */
  { double v = F32((uint32_t)(edi + 0x5cu)); FPUSH(v); }
/* 88df32: fsub dword ptr [edi + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4cu)));
/* 88df35: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 88df37: fadd dword ptr [edi + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4cu)));
/* 88df3a: fstp dword ptr [edi + 0x4c] */
  WF32((uint32_t)(edi + 0x4cu), ST0); FPOP();
/* 88df3d: fld dword ptr [edi + 0x58] */
  { double v = F32((uint32_t)(edi + 0x58u)); FPUSH(v); }
/* 88df40: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 88df43: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88df49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df4b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88df4e: je 0x88df58 */
  if (zf) goto L_88df58;
L_88df50: /* 88df50: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88df52: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_88df58: /* 88df58: fst dword ptr [edi + 0x58] */
  WF32((uint32_t)(edi + 0x58u), ST0);
/* 88df5b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88df61: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df63: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88df66: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88df68: /* 88df68: mov dword ptr [edi + 0x38], ebx */
  W32((uint32_t)(edi + 0x38u), ebx);
/* 88df6b: jmp 0x88df70 */
  goto L_88df70;
L_88df70: /* 88df70: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88df74: jle 0x88e29e */
  if ((zf || sf != of)) goto L_88e29e;
L_88df7a: /* 88df7a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88df7c: mov ecx, esi */
  ecx = esi;
/* 88df7e: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88df84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88df84: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88df87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88df88: mov ecx, eax */
  ecx = eax;
/* 88df8a: call 0x6c5961 */
  esp -= 4; W32(esp, 0x88df8fu); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 88df8f: xor ecx, ecx */
  ecx = 0;
/* 88df91: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88df93: je 0x88e2a3 */
  if (zf) goto L_88e2a3;
L_88df99: /* 88df99: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88df9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfa2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfa4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfa7: jne 0x88e2a3 */
  if (!zf) goto L_88e2a3;
L_88dfad: /* 88dfad: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 88dfb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88dfb1: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88dfb4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 88dfb7: jg 0x88e2a3 */
  if ((!zf && sf == of)) goto L_88e2a3;
L_88dfbd: /* 88dfbd: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88dfc0: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 88dfc3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfc9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 88dfcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfce: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfd1: jne 0x88e250 */
  if (!zf) goto L_88e250;
L_88dfd7: /* 88dfd7: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88dfda: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfe0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfe2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfe5: jne 0x88dfef */
  if (!zf) goto L_88dfef;
L_88dfe7: /* 88dfe7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88dfea: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88dfed: jmp 0x88e029 */
  goto L_88e029;
L_88dfef: /* 88dfef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88dff1: mov ecx, esi */
  ecx = esi;
/* 88dff3: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88dff9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dff9: lea ecx, [eax + 0x188] */
  ecx = (uint32_t)(eax + 0x188u);
/* 88dfff: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x88e005u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 88e005: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 88e008: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88e00b: fchs  */
  ST0 = -ST0;
/* 88e00d: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
/* 88e013: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 88e015: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e017: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e01a: jne 0x88e024 */
  if (!zf) goto L_88e024;
L_88e01c: /* 88e01c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88e01e: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
L_88e024: /* 88e024: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e027: xor ecx, ecx */
  ecx = 0;
L_88e029: /* 88e029: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 88e02c: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 88e02f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e031: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 88e034: je 0x88e17e */
  if (zf) goto L_88e17e;
L_88e03a: /* 88e03a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e03c: mov ecx, esi */
  ecx = esi;
/* 88e03e: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88e044u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e044: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 88e04a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e04c: je 0x88e17c */
  if (zf) goto L_88e17c;
L_88e052: /* 88e052: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 88e055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e057: jne 0x88e17c */
  if (!zf) goto L_88e17c;
L_88e05d: /* 88e05d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 88e060: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e063: mov ecx, esi */
  ecx = esi;
/* 88e065: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x88e06bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e06b: mov ebx, eax */
  ebx = eax;
/* 88e06d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e06f: je 0x88e17c */
  if (zf) goto L_88e17c;
L_88e075: /* 88e075: mov dword ptr [ebp - 0x30], 0x47c35000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x47c35000u);
/* 88e07c: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 88e083: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 88e08a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_88e090: /* 88e090: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e093: mov ecx, esi */
  ecx = esi;
/* 88e095: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x88e09bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e09b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88e09e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e0a0: jge 0x88e0ff */
  if ((sf == of)) goto L_88e0ff;
L_88e0a2: /* 88e0a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e0a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e0a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e0a6: mov ecx, esi */
  ecx = esi;
/* 88e0a8: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x88e0aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e0ae: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e0b1: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 88e0b4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 88e0b7: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 88e0ba: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 88e0bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0bf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e0c2: jp 0x88e0fa */
  if (pf) goto L_88e0fa;
L_88e0c4: /* 88e0c4: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e0c7: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 88e0ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0cc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e0cf: jne 0x88e0fa */
  if (!zf) goto L_88e0fa;
L_88e0d1: /* 88e0d1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e0d4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 88e0d7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e0da: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e0dd: je 0x88e0e9 */
  if (zf) goto L_88e0e9;
L_88e0df: /* 88e0df: fcom dword ptr [ebp - 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd0u)));
/* 88e0e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e0e7: jp 0x88e0f8 */
  if (pf) goto L_88e0f8;
L_88e0e9: /* 88e0e9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88e0ec: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 88e0ef: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 88e0f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88e0f3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 88e0f6: jmp 0x88e090 */
  goto L_88e090;
L_88e0f8: /* 88e0f8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_88e0fa: /* 88e0fa: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 88e0fd: jmp 0x88e090 */
  goto L_88e090;
L_88e0ff: /* 88e0ff: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e102: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e105: jle 0x88e17c */
  if ((zf || sf != of)) goto L_88e17c;
L_88e107: /* 88e107: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e10a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e10b: mov ecx, esi */
  ecx = esi;
/* 88e10d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x88e113u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e113: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e116: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e119: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e11c: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 88e11f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e122: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e123: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e126: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e129: mov ecx, esi */
  ecx = esi;
/* 88e12b: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e12e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e130: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e133: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x88e139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e139: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e13c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e13f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 88e142: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e145: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e148: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e149: mov ecx, esi */
  ecx = esi;
/* 88e14b: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x88e151u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e151: mov ebx, eax */
  ebx = eax;
/* 88e153: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e155: je 0x88df70 */
  if (zf) goto L_88df70;
L_88e15b: /* 88e15b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e15e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e160: mov dword ptr [esi + 0x128], ecx */
  W32((uint32_t)(esi + 0x128u), ecx);
/* 88e166: mov ecx, esi */
  ecx = esi;
/* 88e168: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e16eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e16e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 88e170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88e172: mov ecx, ebx */
  ecx = ebx;
/* 88e174: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x88e177u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e177: jmp 0x88df70 */
  goto L_88df70;
L_88e17c: /* 88e17c: xor ecx, ecx */
  ecx = 0;
L_88e17e: /* 88e17e: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e181: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 88e184: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e186: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e189: jnp 0x88e2a0 */
  if (!pf) goto L_88e2a0;
L_88e18f: /* 88e18f: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 88e192: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e195: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e197: je 0x88e20e */
  if (zf) goto L_88e20e;
L_88e199: /* 88e199: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 88e19f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e1a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e1a4: jp 0x88e1af */
  if (pf) goto L_88e1af;
L_88e1a6: /* 88e1a6: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 88e1ad: jmp 0x88e1c9 */
  goto L_88e1c9;
L_88e1af: /* 88e1af: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e1b2: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 88e1b8: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e1bb: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e1be: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e1c1: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e1c4: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e1c6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_88e1c9: /* 88e1c9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 88e1cc: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 88e1cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e1d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e1d4: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88e1da: /* 88e1da: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e1dd: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
L_88e1e3: /* 88e1e3: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 88e1e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e1e8: jne 0x88df70 */
  if (!zf) goto L_88df70;
L_88e1ee: /* 88e1ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e1f0: mov ecx, esi */
  ecx = esi;
/* 88e1f2: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e1f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e1f8: mov ecx, dword ptr [esi + 0x12c] */
  ecx = R32((uint32_t)(esi + 0x12cu));
/* 88e1fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88e200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e201: mov ecx, eax */
  ecx = eax;
/* 88e203: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x88e209u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e209: jmp 0x88df70 */
  goto L_88df70;
L_88e20e: /* 88e20e: fsub dword ptr [edi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x14u)));
/* 88e211: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 88e214: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e217: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e21a: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e21d: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 88e220: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e223: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 88e229: cmp dword ptr [edi + 0x44], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x44u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e22c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e22e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e231: jne 0x88e248 */
  if (!zf) goto L_88e248;
L_88e233: /* 88e233: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88e236: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88e23c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e23e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e241: jne 0x88e248 */
  if (!zf) goto L_88e248;
L_88e243: /* 88e243: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 88e246: jmp 0x88e1ee */
  goto L_88e1ee;
L_88e248: /* 88e248: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 88e24b: jmp 0x88df70 */
  goto L_88df70;
L_88e250: /* 88e250: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88e253: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 88e256: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 88e259: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88e25f: fst dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0);
/* 88e262: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e264: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e267: jne 0x88e29a */
  if (!zf) goto L_88e29a;
L_88e269: /* 88e269: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88e26c: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e26f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88e271: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88e273: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e276: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e278: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e27b: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88e27e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88e284: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e286: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e289: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88e28f: /* 88e28f: mov dword ptr [esi + 0x12c], ebx */
  W32((uint32_t)(esi + 0x12cu), ebx);
/* 88e295: jmp 0x88e1e3 */
  goto L_88e1e3;
L_88e29a: /* 88e29a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88e29c: jmp 0x88e2a3 */
  goto L_88e2a3;
L_88e29e: /* 88e29e: xor ecx, ecx */
  ecx = 0;
L_88e2a0: /* 88e2a0: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_88e2a3: /* 88e2a3: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e2a5: jne 0x88e2d2 */
  if (!zf) goto L_88e2d2;
L_88e2a7: /* 88e2a7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e2a9: mov ecx, esi */
  ecx = esi;
/* 88e2ab: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e2b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2b1: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 88e2b4: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 88e2b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2b8: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 88e2bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2bc: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 88e2bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2c0: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 88e2c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 88e2c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e2cb: mov ecx, eax */
  ecx = eax;
/* 88e2cd: call 0x6c21c1 */
  esp -= 4; W32(esp, 0x88e2d2u); SPILL(); f_6c21c1(); if (g_unwind) return; RELOAD();
L_88e2d2: /* 88e2d2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88e2d3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 88e2d6: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e2d9: xor ebx, ebx */
  ebx = 0;
/* 88e2db: jmp 0x88ded0 */
  goto L_88ded0;
L_88e2e0: /* 88e2e0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e2e2: mov ecx, esi */
  ecx = esi;
/* 88e2e4: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x88e2eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2ea: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e2ec: mov ecx, esi */
  ecx = esi;
/* 88e2ee: je 0x88e2fc */
  if (zf) goto L_88e2fc;
L_88e2f0: /* 88e2f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e2f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88e2f4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x88e2f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2f7: jmp 0x88de89 */
  goto L_88de89;
L_88e2fc: /* 88e2fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e2fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e2ff: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x88e305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e305: jmp 0x88de89 */
  goto L_88de89;
}

void f_88df6d(void) {
  LOAD_REGS();
  goto L_88df6d;
L_88de89: /* 88de89: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88de8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88de8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88de8e: mov eax, 1 */
  eax = 0x1u;
/* 88de93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88de9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88de9b: mov esp, ebp */
  esp = ebp;
/* 88de9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88de9e: ret 4 */
  esp += 8; SPILL(); return;
L_88ded0: /* 88ded0: cmp edi, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ded6: jge 0x88e2e0 */
  if ((sf == of)) goto L_88e2e0;
L_88dedc: /* 88dedc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 88dedf: imul edi, edi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x70u);
  edi = (uint32_t)r;
  }
/* 88dee2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88dee5: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 88deeb: mov eax, dword ptr [edi + ecx + 0x38] */
  eax = R32((uint32_t)(edi + ecx + 0x38u));
/* 88deef: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88def1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88def3: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 88def6: je 0x88df70 */
  if (zf) goto L_88df70;
L_88def8: /* 88def8: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88defc: jle 0x88e29e */
  if ((zf || sf != of)) goto L_88e29e;
L_88df02: /* 88df02: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88df05: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88df0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df0d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88df10: jne 0x88df70 */
  if (!zf) goto L_88df70;
L_88df12: /* 88df12: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88df15: fdiv dword ptr [edi + 0x58] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x58u)));
/* 88df18: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88df1e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 88df20: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df22: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88df25: jp 0x88df2f */
  if (pf) goto L_88df2f;
L_88df27: /* 88df27: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88df29: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_88df2f: /* 88df2f: fld dword ptr [edi + 0x5c] */
  { double v = F32((uint32_t)(edi + 0x5cu)); FPUSH(v); }
/* 88df32: fsub dword ptr [edi + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4cu)));
/* 88df35: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 88df37: fadd dword ptr [edi + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4cu)));
/* 88df3a: fstp dword ptr [edi + 0x4c] */
  WF32((uint32_t)(edi + 0x4cu), ST0); FPOP();
/* 88df3d: fld dword ptr [edi + 0x58] */
  { double v = F32((uint32_t)(edi + 0x58u)); FPUSH(v); }
/* 88df40: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 88df43: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88df49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df4b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88df4e: je 0x88df58 */
  if (zf) goto L_88df58;
L_88df50: /* 88df50: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88df52: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_88df58: /* 88df58: fst dword ptr [edi + 0x58] */
  WF32((uint32_t)(edi + 0x58u), ST0);
/* 88df5b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88df61: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88df63: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88df66: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88df68: /* 88df68: mov dword ptr [edi + 0x38], ebx */
  W32((uint32_t)(edi + 0x38u), ebx);
/* 88df6b: jmp 0x88df70 */
  goto L_88df70;
L_88df6d: /* 88df6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_88df70: /* 88df70: cmp dword ptr [edi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88df74: jle 0x88e29e */
  if ((zf || sf != of)) goto L_88e29e;
L_88df7a: /* 88df7a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88df7c: mov ecx, esi */
  ecx = esi;
/* 88df7e: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88df84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88df84: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88df87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88df88: mov ecx, eax */
  ecx = eax;
/* 88df8a: call 0x6c5961 */
  esp -= 4; W32(esp, 0x88df8fu); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 88df8f: xor ecx, ecx */
  ecx = 0;
/* 88df91: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88df93: je 0x88e2a3 */
  if (zf) goto L_88e2a3;
L_88df99: /* 88df99: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88df9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfa2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfa4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfa7: jne 0x88e2a3 */
  if (!zf) goto L_88e2a3;
L_88dfad: /* 88dfad: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 88dfb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88dfb1: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88dfb4: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 88dfb7: jg 0x88e2a3 */
  if ((!zf && sf == of)) goto L_88e2a3;
L_88dfbd: /* 88dfbd: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88dfc0: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 88dfc3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfc9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 88dfcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfce: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfd1: jne 0x88e250 */
  if (!zf) goto L_88e250;
L_88dfd7: /* 88dfd7: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88dfda: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88dfe0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88dfe2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88dfe5: jne 0x88dfef */
  if (!zf) goto L_88dfef;
L_88dfe7: /* 88dfe7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88dfea: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88dfed: jmp 0x88e029 */
  goto L_88e029;
L_88dfef: /* 88dfef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88dff1: mov ecx, esi */
  ecx = esi;
/* 88dff3: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88dff9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88dff9: lea ecx, [eax + 0x188] */
  ecx = (uint32_t)(eax + 0x188u);
/* 88dfff: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x88e005u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 88e005: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 88e008: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88e00b: fchs  */
  ST0 = -ST0;
/* 88e00d: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
/* 88e013: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 88e015: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e017: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e01a: jne 0x88e024 */
  if (!zf) goto L_88e024;
L_88e01c: /* 88e01c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88e01e: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
L_88e024: /* 88e024: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e027: xor ecx, ecx */
  ecx = 0;
L_88e029: /* 88e029: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 88e02c: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 88e02f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e031: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 88e034: je 0x88e17e */
  if (zf) goto L_88e17e;
L_88e03a: /* 88e03a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e03c: mov ecx, esi */
  ecx = esi;
/* 88e03e: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88e044u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e044: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 88e04a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e04c: je 0x88e17c */
  if (zf) goto L_88e17c;
L_88e052: /* 88e052: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 88e055: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e057: jne 0x88e17c */
  if (!zf) goto L_88e17c;
L_88e05d: /* 88e05d: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 88e060: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e063: mov ecx, esi */
  ecx = esi;
/* 88e065: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x88e06bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e06b: mov ebx, eax */
  ebx = eax;
/* 88e06d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e06f: je 0x88e17c */
  if (zf) goto L_88e17c;
L_88e075: /* 88e075: mov dword ptr [ebp - 0x30], 0x47c35000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x47c35000u);
/* 88e07c: mov dword ptr [ebp - 0x20], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffffffffu);
/* 88e083: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 88e08a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_88e090: /* 88e090: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e093: mov ecx, esi */
  ecx = esi;
/* 88e095: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x88e09bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e09b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88e09e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e0a0: jge 0x88e0ff */
  if ((sf == of)) goto L_88e0ff;
L_88e0a2: /* 88e0a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e0a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e0a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e0a6: mov ecx, esi */
  ecx = esi;
/* 88e0a8: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x88e0aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e0ae: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e0b1: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 88e0b4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 88e0b7: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 88e0ba: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 88e0bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0bf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e0c2: jp 0x88e0fa */
  if (pf) goto L_88e0fa;
L_88e0c4: /* 88e0c4: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e0c7: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 88e0ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0cc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e0cf: jne 0x88e0fa */
  if (!zf) goto L_88e0fa;
L_88e0d1: /* 88e0d1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e0d4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 88e0d7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e0da: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e0dd: je 0x88e0e9 */
  if (zf) goto L_88e0e9;
L_88e0df: /* 88e0df: fcom dword ptr [ebp - 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd0u)));
/* 88e0e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e0e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e0e7: jp 0x88e0f8 */
  if (pf) goto L_88e0f8;
L_88e0e9: /* 88e0e9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88e0ec: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 88e0ef: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 88e0f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88e0f3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 88e0f6: jmp 0x88e090 */
  goto L_88e090;
L_88e0f8: /* 88e0f8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_88e0fa: /* 88e0fa: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 88e0fd: jmp 0x88e090 */
  goto L_88e090;
L_88e0ff: /* 88e0ff: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e102: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e105: jle 0x88e17c */
  if ((zf || sf != of)) goto L_88e17c;
L_88e107: /* 88e107: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e10a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e10b: mov ecx, esi */
  ecx = esi;
/* 88e10d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x88e113u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e113: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e116: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e119: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e11c: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 88e11f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e122: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e123: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e126: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e129: mov ecx, esi */
  ecx = esi;
/* 88e12b: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e12e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e130: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e133: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x88e139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e139: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 88e13c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88e13f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 88e142: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e145: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e148: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e149: mov ecx, esi */
  ecx = esi;
/* 88e14b: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x88e151u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e151: mov ebx, eax */
  ebx = eax;
/* 88e153: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e155: je 0x88df70 */
  if (zf) goto L_88df70;
L_88e15b: /* 88e15b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e15e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e160: mov dword ptr [esi + 0x128], ecx */
  W32((uint32_t)(esi + 0x128u), ecx);
/* 88e166: mov ecx, esi */
  ecx = esi;
/* 88e168: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e16eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e16e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 88e170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88e172: mov ecx, ebx */
  ecx = ebx;
/* 88e174: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x88e177u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e177: jmp 0x88df70 */
  goto L_88df70;
L_88e17c: /* 88e17c: xor ecx, ecx */
  ecx = 0;
L_88e17e: /* 88e17e: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e181: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 88e184: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e186: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e189: jnp 0x88e2a0 */
  if (!pf) goto L_88e2a0;
L_88e18f: /* 88e18f: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 88e192: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e195: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e197: je 0x88e20e */
  if (zf) goto L_88e20e;
L_88e199: /* 88e199: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 88e19f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e1a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e1a4: jp 0x88e1af */
  if (pf) goto L_88e1af;
L_88e1a6: /* 88e1a6: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 88e1ad: jmp 0x88e1c9 */
  goto L_88e1c9;
L_88e1af: /* 88e1af: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e1b2: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 88e1b8: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e1bb: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e1be: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e1c1: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e1c4: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e1c6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_88e1c9: /* 88e1c9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 88e1cc: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 88e1cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e1d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e1d4: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88e1da: /* 88e1da: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e1dd: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
L_88e1e3: /* 88e1e3: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 88e1e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e1e8: jne 0x88df70 */
  if (!zf) goto L_88df70;
L_88e1ee: /* 88e1ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e1f0: mov ecx, esi */
  ecx = esi;
/* 88e1f2: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e1f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e1f8: mov ecx, dword ptr [esi + 0x12c] */
  ecx = R32((uint32_t)(esi + 0x12cu));
/* 88e1fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88e200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e201: mov ecx, eax */
  ecx = eax;
/* 88e203: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x88e209u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e209: jmp 0x88df70 */
  goto L_88df70;
L_88e20e: /* 88e20e: fsub dword ptr [edi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x14u)));
/* 88e211: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 88e214: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e217: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 88e21a: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 88e21d: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 88e220: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e223: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 88e229: cmp dword ptr [edi + 0x44], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x44u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e22c: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e22e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e231: jne 0x88e248 */
  if (!zf) goto L_88e248;
L_88e233: /* 88e233: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88e236: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88e23c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e23e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e241: jne 0x88e248 */
  if (!zf) goto L_88e248;
L_88e243: /* 88e243: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 88e246: jmp 0x88e1ee */
  goto L_88e1ee;
L_88e248: /* 88e248: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 88e24b: jmp 0x88df70 */
  goto L_88df70;
L_88e250: /* 88e250: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88e253: fmul dword ptr [edi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x18u)));
/* 88e256: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 88e259: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88e25f: fst dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0);
/* 88e262: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e264: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e267: jne 0x88e29a */
  if (!zf) goto L_88e29a;
L_88e269: /* 88e269: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 88e26c: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 88e26f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88e271: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88e273: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 88e276: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 88e278: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 88e27b: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 88e27e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88e284: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88e286: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88e289: jp 0x88df70 */
  if (pf) goto L_88df70;
L_88e28f: /* 88e28f: mov dword ptr [esi + 0x12c], ebx */
  W32((uint32_t)(esi + 0x12cu), ebx);
/* 88e295: jmp 0x88e1e3 */
  goto L_88e1e3;
L_88e29a: /* 88e29a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88e29c: jmp 0x88e2a3 */
  goto L_88e2a3;
L_88e29e: /* 88e29e: xor ecx, ecx */
  ecx = 0;
L_88e2a0: /* 88e2a0: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_88e2a3: /* 88e2a3: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88e2a5: jne 0x88e2d2 */
  if (!zf) goto L_88e2d2;
L_88e2a7: /* 88e2a7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e2a9: mov ecx, esi */
  ecx = esi;
/* 88e2ab: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x88e2b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2b1: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 88e2b4: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 88e2b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2b8: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 88e2bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2bc: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 88e2bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2c0: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 88e2c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2c4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 88e2c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e2c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e2cb: mov ecx, eax */
  ecx = eax;
/* 88e2cd: call 0x6c21c1 */
  esp -= 4; W32(esp, 0x88e2d2u); SPILL(); f_6c21c1(); if (g_unwind) return; RELOAD();
L_88e2d2: /* 88e2d2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88e2d3: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 88e2d6: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e2d9: xor ebx, ebx */
  ebx = 0;
/* 88e2db: jmp 0x88ded0 */
  goto L_88ded0;
L_88e2e0: /* 88e2e0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e2e2: mov ecx, esi */
  ecx = esi;
/* 88e2e4: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x88e2eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2ea: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88e2ec: mov ecx, esi */
  ecx = esi;
/* 88e2ee: je 0x88e2fc */
  if (zf) goto L_88e2fc;
L_88e2f0: /* 88e2f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88e2f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88e2f4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x88e2f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e2f7: jmp 0x88de89 */
  goto L_88de89;
L_88e2fc: /* 88e2fc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88e2fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e2ff: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x88e305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e305: jmp 0x88de89 */
  goto L_88de89;
}

void f_88e30a(void) {
  LOAD_REGS();
L_88e30a: /* 88e30a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 88e30d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88e312: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 88e315: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e316: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 88e319: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88e31eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88e31e(); return;
}

void f_88e31e(void) {
  LOAD_REGS();
L_88e31e: /* 88e31e: push 0xa19e64 */
  { uint32_t v = 0xa19e64u; esp -= 4; W32(esp, v); }
/* 88e323: push 0xae7ba8 */
  { uint32_t v = 0xae7ba8u; esp -= 4; W32(esp, v); }
/* 88e328: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88e32eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88e32e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88e331: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e333: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e335: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88e33au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88e33a: guest_badaddr(0x88e33a); return;
}

void f_88e4a0(void) {
  LOAD_REGS();
L_88e4a0: /* 88e4a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88e4a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e4a2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88e4a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88e4a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88e4a5: mov esi, ecx */
  esi = ecx;
/* 88e4a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e4a9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 88e4ad: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 88e4b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88e4b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88e4b6: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 88e4ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e4bb: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88e4bf: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x88e4c5u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 88e4c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e4c7: je 0x88e53a */
  if (zf) goto L_88e53a;
L_88e4c9: /* 88e4c9: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* 88e4cf: xor edi, edi */
  edi = 0;
/* 88e4d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88e4d3: jle 0x88e507 */
  if ((zf || sf != of)) goto L_88e507;
L_88e4d5: /* 88e4d5: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* 88e4db: lea edx, [ecx + edi*4] */
  edx = (uint32_t)(ecx + edi*4);
/* 88e4de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e4df: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88e4e3: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88e4e9u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88e4e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e4eb: jne 0x88e4fa */
  if (!zf) goto L_88e4fa;
L_88e4ed: /* 88e4ed: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* 88e4f3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88e4f4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e4f6: jl 0x88e4d5 */
  if ((sf != of)) goto L_88e4d5;
L_88e4f8: /* 88e4f8: jmp 0x88e507 */
  goto L_88e507;
L_88e4fa: /* 88e4fa: mov eax, dword ptr [esi + 0x2f8] */
  eax = R32((uint32_t)(esi + 0x2f8u));
/* 88e500: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 88e503: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_88e507: /* 88e507: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* 88e50d: xor edi, edi */
  edi = 0;
/* 88e50f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88e511: jle 0x88e53a */
  if ((zf || sf != of)) goto L_88e53a;
L_88e513: /* 88e513: xor ebx, ebx */
  ebx = 0;
L_88e515: /* 88e515: mov ecx, dword ptr [esi + 0x1dc] */
  ecx = R32((uint32_t)(esi + 0x1dcu));
/* 88e51b: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 88e51f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e520: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88e522: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88e528u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88e528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e52a: jne 0x88e544 */
  if (!zf) goto L_88e544;
L_88e52c: /* 88e52c: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* 88e532: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88e533: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 88e536: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e538: jl 0x88e515 */
  if ((sf != of)) goto L_88e515;
L_88e53a: /* 88e53a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88e53b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88e53c: mov eax, ebp */
  eax = ebp;
/* 88e53e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88e53f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88e540: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88e541: ret 4 */
  esp += 8; SPILL(); return;
L_88e544: /* 88e544: mov eax, edi */
  eax = edi;
/* 88e546: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88e547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88e548: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88e549: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88e54a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88e54b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88e580(void) {
  LOAD_REGS();
L_88e580: /* 88e580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88e581: mov ebp, esp */
  ebp = esp;
/* 88e583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88e585: push 0x9d5550 */
  { uint32_t v = 0x9d5550u; esp -= 4; W32(esp, v); }
/* 88e58a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88e590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88e598: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88e59b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88e59c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88e59d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88e59e: xor edi, edi */
  edi = 0;
/* 88e5a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88e5a3: mov ebx, ecx */
  ebx = ecx;
/* 88e5a5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
L_88e5a8: /* 88e5a8: cmp edi, dword ptr [ebx + 0x314] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x314u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e5ae: jge 0x88e61a */
  if ((sf == of)) goto L_88e61a;
L_88e5b0: /* 88e5b0: mov ecx, dword ptr [ebx + 0x310] */
  ecx = R32((uint32_t)(ebx + 0x310u));
/* 88e5b6: lea esi, [edi + edi*4] */
  esi = (uint32_t)(edi + edi*4);
/* 88e5b9: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 88e5bc: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 88e5bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e5c0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88e5c2: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88e5c8u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88e5c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e5ca: je 0x88e5e7 */
  if (zf) goto L_88e5e7;
L_88e5cc: /* 88e5cc: mov eax, dword ptr [ebx + 0x310] */
  eax = R32((uint32_t)(ebx + 0x310u));
/* 88e5d2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88e5d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88e5d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88e5de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88e5df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88e5e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88e5e1: mov esp, ebp */
  esp = ebp;
/* 88e5e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88e5e4: ret 4 */
  esp += 8; SPILL(); return;
L_88e5e7: /* 88e5e7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88e5e8: jmp 0x88e5a8 */
  goto L_88e5a8;
L_88e61a: /* 88e61a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88e61d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88e61e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88e61f: xor eax, eax */
  eax = 0;
/* 88e621: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88e628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88e629: mov esp, ebp */
  esp = ebp;
/* 88e62b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88e62c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88e5ea(void) {
  LOAD_REGS();
L_88e5ea: /* 88e5ea: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88e5ed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88e5f2: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 88e5f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e5f6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88e5f9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88e5feu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88e5fe(); return;
}

void f_88e5fe(void) {
  LOAD_REGS();
L_88e5fe: /* 88e5fe: push 0xa19e90 */
  { uint32_t v = 0xa19e90u; esp -= 4; W32(esp, v); }
/* 88e603: push 0xae7bb8 */
  { uint32_t v = 0xae7bb8u; esp -= 4; W32(esp, v); }
/* 88e608: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88e60eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88e60e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88e611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e613: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e615: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88e61au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 88e61a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88e61d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88e61e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88e61f: xor eax, eax */
  eax = 0;
/* 88e621: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88e628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88e629: mov esp, ebp */
  esp = ebp;
/* 88e62b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88e62c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88e660(void) {
  LOAD_REGS();
L_88e660: /* 88e660: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88e662: push 0x9d5578 */
  { uint32_t v = 0x9d5578u; esp -= 4; W32(esp, v); }
/* 88e667: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88e66d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e66e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88e675: sub esp, 0x11c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88e67b: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 88e67f: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 88e685: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e687: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88e688: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88e689: je 0x88e6a1 */
  if (zf) goto L_88e6a1;
L_88e68b: /* 88e68b: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 88e690: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 88e693: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88e696: jg 0x88e6cb */
  if ((!zf && sf == of)) goto L_88e6cb;
L_88e698: /* 88e698: jl 0x88e6a1 */
  if ((sf != of)) goto L_88e6a1;
L_88e69a: /* 88e69a: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 88e69d: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88e69f: jae 0x88e6cb */
  if (!cf) goto L_88e6cb;
L_88e6a1: /* 88e6a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88e6a3: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88e6a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e6a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e6ab: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 88e6af: je 0x88e6cb */
  if (zf) goto L_88e6cb;
L_88e6b1: /* 88e6b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88e6b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 88e6b5: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* 88e6b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88e6ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e6bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e6be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88e6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e6c1: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x88e6c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e6c7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
L_88e6cb: /* 88e6cb: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 88e6d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88e6d3: je 0x88eb63 */
  if (zf) goto L_88eb63;
L_88e6d9: /* 88e6d9: cmp dword ptr [esp + 0x138], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x138u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88e6e0: jae 0x88eb63 */
  if (!cf) goto L_88eb63;
L_88e6e6: /* 88e6e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88e6e8: lea edx, [esp + 0xa4] */
  edx = (uint32_t)(esp + 0xa4u);
/* 88e6ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88e6f0: call dword ptr [eax + 0x118] */
  { uint32_t t = R32((uint32_t)(eax + 0x118u)); esp -= 4; W32(esp, 0x88e6f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88e6f6: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88e6fa: mov esi, dword ptr [edx + 0xb4] */
  esi = R32((uint32_t)(edx + 0xb4u));
/* 88e700: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 88e704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e705: mov eax, dword ptr [esp + 0x13c] */
  eax = R32((uint32_t)(esp + 0x13cu));
/* 88e70c: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 88e70f: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 88e712: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88e714: mov dword ptr [esp + 0x130], 0 */
  W32((uint32_t)(esp + 0x130u), 0x0u);
/* 88e71f: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x88e725u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 88e725: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88e728: mov edi, esp */
  edi = esp;
/* 88e72a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 88e72f: lea esi, [esp + 0xe4] */
  esi = (uint32_t)(esp + 0xe4u);
/* 88e736: lea eax, [esp + 0x124] */
  eax = (uint32_t)(esp + 0x124u);
/* 88e73d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 88e73f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88e740: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 88e747: mov byte ptr [esp + 0x170], 1 */
  W8((uint32_t)(esp + 0x170u), 0x1u);
/* 88e74f: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x88e755u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 88e755: mov esi, eax */
  esi = eax;
/* 88e757: mov ecx, 0x10 */
  ecx = 0x10u;
/* 88e75c: lea edi, [esp + 0x64] */
  edi = (uint32_t)(esp + 0x64u);
/* 88e760: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 88e762: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* 88e769: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x88e76fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 88e76f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 88e773: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 88e777: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 88e77f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 88e787: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 88e78f: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 88e797: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 88e79b: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 88e79f: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 88e7a3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 88e7a7: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 88e7ab: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e7ad: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 88e7af: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e7b1: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 88e7b4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e7b6: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 88e7b9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e7bb: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 88e7be: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e7c1: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 88e7c4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e7c7: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 88e7ca: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e7cd: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 88e7d0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e7d3: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 88e7d6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e7d8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e7da: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e7dc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e7de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e7e0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e7e3: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 88e7e6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e7e9: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 88e7ec: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e7ef: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 88e7f2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e7f5: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 88e7f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e7fa: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e7fc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e7fe: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e800: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e802: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e805: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 88e808: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e80b: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 88e80e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e811: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 88e814: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e817: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 88e81a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e81c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e81e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e820: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e822: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e824: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e826: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 88e828: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88e82a: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 88e82d: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 88e830: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 88e833: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 88e837: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 88e83b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 88e83f: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 88e843: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 88e847: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 88e84b: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 88e84f: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x88e855u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 88e855: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 88e859: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 88e85d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 88e865: mov dword ptr [esp + 0x18], 0x3f800000 */
  W32((uint32_t)(esp + 0x18u), 0x3f800000u);
/* 88e86d: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 88e875: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 88e87d: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 88e881: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 88e885: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 88e889: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 88e88d: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 88e891: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e893: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 88e895: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e897: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 88e89a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e89c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 88e89f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e8a1: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 88e8a4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e8a7: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 88e8aa: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e8ad: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 88e8b0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e8b3: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 88e8b6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e8b9: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 88e8bc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e8be: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e8c0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e8c2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e8c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e8c6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e8c9: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 88e8cc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e8cf: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 88e8d2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e8d5: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 88e8d8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e8db: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 88e8de: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e8e0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e8e2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e8e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e8e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e8e8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e8eb: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 88e8ee: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e8f1: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 88e8f4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e8f7: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 88e8fa: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e8fd: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 88e900: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e902: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e904: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e906: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e908: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e90a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e90c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 88e90e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88e910: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 88e913: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 88e916: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 88e919: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 88e91d: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 88e921: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 88e925: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 88e929: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 88e92d: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 88e931: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 88e935: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x88e93bu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 88e93b: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 88e93f: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 88e943: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 88e94b: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 88e953: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
/* 88e95b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 88e963: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 88e967: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 88e96b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 88e96f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 88e973: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 88e977: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e979: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 88e97b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e97d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 88e980: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e982: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 88e985: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88e987: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 88e98a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e98d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 88e990: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e993: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 88e996: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e999: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 88e99c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88e99f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 88e9a2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e9a4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e9a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e9a8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e9aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e9ac: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e9af: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 88e9b2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e9b5: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 88e9b8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e9bb: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 88e9be: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88e9c1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 88e9c4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e9c6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e9c8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e9ca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e9cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e9ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e9d1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 88e9d4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e9d7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 88e9da: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e9dd: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 88e9e0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88e9e3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 88e9e6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e9e8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88e9ea: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e9ec: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88e9ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88e9f0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88e9f2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 88e9f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88e9f6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 88e9f9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 88e9fc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 88e9ff: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 88ea03: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 88ea07: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 88ea0b: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 88ea0f: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 88ea13: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 88ea17: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 88ea1b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x88ea21u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 88ea21: mov eax, dword ptr [esp + 0x138] */
  eax = R32((uint32_t)(esp + 0x138u));
/* 88ea28: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 88ea2c: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 88ea32: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 88ea35: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 88ea38: fld dword ptr [eax + edx + 8] */
  { double v = F32((uint32_t)(eax + edx + 0x8u)); FPUSH(v); }
/* 88ea3c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88ea3e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 88ea41: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88ea43: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 88ea47: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 88ea4b: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 88ea52: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 88ea56: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 88ea5a: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 88ea62: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 88ea66: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 88ea6a: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 88ea6e: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 88ea72: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 88ea76: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88ea78: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 88ea7a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88ea7c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 88ea7f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88ea81: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 88ea84: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88ea86: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 88ea89: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88ea8c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 88ea8f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88ea92: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 88ea95: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88ea98: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 88ea9b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88ea9e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 88eaa1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88eaa3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88eaa5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88eaa7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88eaa9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88eaab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88eaae: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 88eab1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88eab4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 88eab7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88eaba: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 88eabd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88eac0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 88eac3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88eac5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88eac7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88eac9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88eacb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88eacd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88ead0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 88ead3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88ead6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 88ead9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88eadc: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 88eadf: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 88eae2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 88eae5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88eae7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 88eae9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88eaeb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 88eaed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88eaef: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 88eaf1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 88eaf3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88eaf5: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 88eaf8: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 88eafb: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 88eafe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 88eb02: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 88eb06: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 88eb0a: mov dword ptr [esp + 0x58], edx */
  W32((uint32_t)(esp + 0x58u), edx);
/* 88eb0e: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 88eb12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88eb13: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 88eb17: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 88eb1b: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 88eb1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88eb20: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 88eb24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88eb25: mov ecx, dword ptr [esp + 0x140] */
  ecx = R32((uint32_t)(esp + 0x140u));
/* 88eb2c: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 88eb30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88eb31: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x88eb37u); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 88eb37: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 88eb3b: mov byte ptr [esp + 0x12c], 0 */
  W8((uint32_t)(esp + 0x12cu), 0x0u);
/* 88eb43: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x88eb49u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 88eb49: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 88eb50: mov dword ptr [esp + 0x12c], 0xffffffff */
  W32((uint32_t)(esp + 0x12cu), 0xffffffffu);
/* 88eb5b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x88eb61u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 88eb61: jmp 0x88eb7a */
  goto L_88eb7a;
L_88eb63: /* 88eb63: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 88eb69: mov edi, dword ptr [esp + 0x134] */
  edi = R32((uint32_t)(esp + 0x134u));
/* 88eb70: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88eb73: mov ecx, 0xc */
  ecx = 0xcu;
/* 88eb78: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_88eb7a: /* 88eb7a: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 88eb81: mov eax, dword ptr [esp + 0x134] */
  eax = R32((uint32_t)(esp + 0x134u));
/* 88eb88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88eb89: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88eb90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88eb91: add esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88eb97: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88ecf0(void) {
  LOAD_REGS();
L_88ecf0: /* 88ecf0: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88ecf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ecf4: mov esi, ecx */
  esi = ecx;
/* 88ecf6: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* 88ecfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88ecfe: je 0x88ed16 */
  if (zf) goto L_88ed16;
L_88ed00: /* 88ed00: mov eax, dword ptr [0xcfa92c] */
  eax = R32((uint32_t)(0xcfa92cu));
/* 88ed05: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 88ed08: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ed0b: jg 0x88ed3c */
  if ((!zf && sf == of)) goto L_88ed3c;
L_88ed0d: /* 88ed0d: jl 0x88ed16 */
  if ((sf != of)) goto L_88ed16;
L_88ed0f: /* 88ed0f: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 88ed12: cmp edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88ed14: jae 0x88ed3c */
  if (!cf) goto L_88ed3c;
L_88ed16: /* 88ed16: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88ed18: mov ecx, esi */
  ecx = esi;
/* 88ed1a: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88ed20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ed20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88ed22: je 0x88ed3c */
  if (zf) goto L_88ed3c;
L_88ed24: /* 88ed24: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88ed26: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 88ed28: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 88ed2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ed2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88ed2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88ed31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88ed33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ed34: mov ecx, esi */
  ecx = esi;
/* 88ed36: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x88ed3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88ed3c: /* 88ed3c: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* 88ed42: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88ed44: je 0x88edad */
  if (zf) goto L_88edad;
L_88ed46: /* 88ed46: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 88ed4a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88ed4c: jae 0x88edad */
  if (!cf) goto L_88edad;
L_88ed4e: /* 88ed4e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 88ed51: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 88ed57: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 88ed5b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 88ed5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88ed5f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88ed61: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x88ed67u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 88ed67: add esi, 0xc0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88ed6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ed6e: lea eax, [esp + 0x48] */
  eax = (uint32_t)(esp + 0x48u);
/* 88ed72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ed73: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88ed77: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x88ed7du); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 88ed7d: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 88ed81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ed82: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 88ed86: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x88ed8cu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 88ed8c: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 88ed90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 88ed94: mov edx, eax */
  edx = eax;
/* 88ed96: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 88ed98: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 88ed9c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 88ed9f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88eda3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 88eda6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88eda7: add esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88edaa: ret 0xc */
  esp += 16; SPILL(); return;
L_88edad: /* 88edad: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* 88edb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88edb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88edb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88edb7: mov ecx, esi */
  ecx = esi;
/* 88edb9: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x88edbfu); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 88edbf: mov eax, esi */
  eax = esi;
/* 88edc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88edc2: add esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88edc5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88ee10(void) {
  LOAD_REGS();
L_88ee10: /* 88ee10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88ee14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ee15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ee16: mov esi, ecx */
  esi = ecx;
/* 88ee18: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88ee1du); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88ee1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88ee1f: jge 0x88ee5b */
  if ((sf == of)) goto L_88ee5b;
L_88ee21: /* 88ee21: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 88ee25: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x88ee2bu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 88ee2b: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 88ee31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88ee33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ee34: push 0xae7bc0 */
  { uint32_t v = 0xae7bc0u; esp -= 4; W32(esp, v); }
/* 88ee39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88ee3a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x88ee40u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 88ee40: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 88ee44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ee47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88ee49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88ee4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88ee4d: mov ecx, esi */
  ecx = esi;
/* 88ee4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x88ee55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 88ee55: mov eax, esi */
  eax = esi;
/* 88ee57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ee58: ret 0xc */
  esp += 16; SPILL(); return;
L_88ee5b: /* 88ee5b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88ee5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88ee60: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 88ee64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ee65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ee66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88ee67: mov ecx, esi */
  ecx = esi;
/* 88ee69: call 0x6c4b1f */
  esp -= 4; W32(esp, 0x88ee6eu); SPILL(); f_6c4b1f(); if (g_unwind) return; RELOAD();
/* 88ee6e: mov eax, edi */
  eax = edi;
/* 88ee70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ee71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ee72: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88eea0(void) {
  LOAD_REGS();
L_88eea0: /* 88eea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88eea1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88eea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88eea3: mov ebx, ecx */
  ebx = ecx;
/* 88eea5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 88eea7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88eea8: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88eeaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88eeae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88eeb0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 88eeb4: mov edi, eax */
  edi = eax;
/* 88eeb6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88eebcu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88eebc: mov eax, dword ptr [edi + 0x2f0] */
  eax = R32((uint32_t)(edi + 0x2f0u));
/* 88eec2: xor esi, esi */
  esi = 0;
/* 88eec4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88eec6: jle 0x88ef02 */
  if ((zf || sf != of)) goto L_88ef02;
L_88eec8: /* 88eec8: jmp 0x88eed0 */
  goto L_88eed0;
L_88eed0: /* 88eed0: mov edx, dword ptr [edi + 0x2ec] */
  edx = R32((uint32_t)(edi + 0x2ecu));
/* 88eed6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 88eeda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88eedb: lea ecx, [edx + esi*4] */
  ecx = (uint32_t)(edx + esi*4);
/* 88eede: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88eee4u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88eee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88eee6: jne 0x88eef5 */
  if (!zf) goto L_88eef5;
L_88eee8: /* 88eee8: mov eax, dword ptr [edi + 0x2f0] */
  eax = R32((uint32_t)(edi + 0x2f0u));
/* 88eeee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 88eeef: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88eef1: jl 0x88eed0 */
  if ((sf != of)) goto L_88eed0;
L_88eef3: /* 88eef3: jmp 0x88ef02 */
  goto L_88ef02;
L_88eef5: /* 88eef5: mov eax, dword ptr [edi + 0x2f8] */
  eax = R32((uint32_t)(edi + 0x2f8u));
/* 88eefb: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 88eefe: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_88ef02: /* 88ef02: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 88ef06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88ef07: mov ecx, ebx */
  ecx = ebx;
/* 88ef09: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88ef0eu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88ef0e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ef11: jle 0x88ef4a */
  if ((zf || sf != of)) goto L_88ef4a;
L_88ef13: /* 88ef13: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* 88ef19: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88ef1b: je 0x88ef4a */
  if (zf) goto L_88ef4a;
L_88ef1d: /* 88ef1d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ef1f: jge 0x88ef4a */
  if ((sf == of)) goto L_88ef4a;
L_88ef21: /* 88ef21: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 88ef25: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 88ef2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ef2c: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 88ef2f: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 88ef35: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 88ef38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ef39: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88ef3b: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x88ef41u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 88ef41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ef42: mov eax, esi */
  eax = esi;
/* 88ef44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ef45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ef46: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88ef47: ret 8 */
  esp += 12; SPILL(); return;
L_88ef4a: /* 88ef4a: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 88ef50: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 88ef54: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88ef57: mov ecx, 0xc */
  ecx = 0xcu;
/* 88ef5c: mov edi, eax */
  edi = eax;
/* 88ef5e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 88ef60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ef61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ef62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ef63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88ef64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88eeca(void) {
  LOAD_REGS();
L_88eeca: /* 88eeca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_88eed0: /* 88eed0: mov edx, dword ptr [edi + 0x2ec] */
  edx = R32((uint32_t)(edi + 0x2ecu));
/* 88eed6: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 88eeda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88eedb: lea ecx, [edx + esi*4] */
  ecx = (uint32_t)(edx + esi*4);
/* 88eede: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88eee4u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88eee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88eee6: jne 0x88eef5 */
  if (!zf) goto L_88eef5;
L_88eee8: /* 88eee8: mov eax, dword ptr [edi + 0x2f0] */
  eax = R32((uint32_t)(edi + 0x2f0u));
/* 88eeee: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 88eeef: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88eef1: jl 0x88eed0 */
  if ((sf != of)) goto L_88eed0;
L_88eef3: /* 88eef3: jmp 0x88ef02 */
  goto L_88ef02;
L_88eef5: /* 88eef5: mov eax, dword ptr [edi + 0x2f8] */
  eax = R32((uint32_t)(edi + 0x2f8u));
/* 88eefb: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 88eefe: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
L_88ef02: /* 88ef02: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 88ef06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88ef07: mov ecx, ebx */
  ecx = ebx;
/* 88ef09: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88ef0eu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88ef0e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ef11: jle 0x88ef4a */
  if ((zf || sf != of)) goto L_88ef4a;
L_88ef13: /* 88ef13: mov ecx, dword ptr [ebx + 0xb8] */
  ecx = R32((uint32_t)(ebx + 0xb8u));
/* 88ef19: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88ef1b: je 0x88ef4a */
  if (zf) goto L_88ef4a;
L_88ef1d: /* 88ef1d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ef1f: jge 0x88ef4a */
  if ((sf == of)) goto L_88ef4a;
L_88ef21: /* 88ef21: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 88ef25: lea ecx, [ebx + 0xc0] */
  ecx = (uint32_t)(ebx + 0xc0u);
/* 88ef2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ef2c: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 88ef2f: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 88ef35: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 88ef38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ef39: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88ef3b: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x88ef41u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 88ef41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ef42: mov eax, esi */
  eax = esi;
/* 88ef44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ef45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ef46: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88ef47: ret 8 */
  esp += 12; SPILL(); return;
L_88ef4a: /* 88ef4a: mov esi, dword ptr [0xcfa1c4] */
  esi = R32((uint32_t)(0xcfa1c4u));
/* 88ef50: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 88ef54: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88ef57: mov ecx, 0xc */
  ecx = 0xcu;
/* 88ef5c: mov edi, eax */
  edi = eax;
/* 88ef5e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 88ef60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ef61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ef62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ef63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88ef64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88efb0(void) {
  LOAD_REGS();
L_88efb0: /* 88efb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88efb1: mov ebp, esp */
  ebp = esp;
/* 88efb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88efb5: push 0x9d5590 */
  { uint32_t v = 0x9d5590u; esp -= 4; W32(esp, v); }
/* 88efba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88efc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88efc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88efc8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88efcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88efcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88efcd: mov esi, ecx */
  esi = ecx;
/* 88efcf: mov eax, dword ptr [esi + 0x208] */
  eax = R32((uint32_t)(esi + 0x208u));
/* 88efd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88efd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88efd8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88efdb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88efe2: je 0x88f007 */
  if (zf) goto L_88f007;
L_88efe4: /* 88efe4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88efe6: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x88efecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88efec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88efee: je 0x88f007 */
  if (zf) goto L_88f007;
L_88eff0: /* 88eff0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88eff2: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 88eff4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 88eff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88eff8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88effa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88effc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88effe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88efff: mov ecx, esi */
  ecx = esi;
/* 88f001: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x88f007u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88f007: /* 88f007: fld dword ptr [esi + 0x1b0] */
  { double v = F32((uint32_t)(esi + 0x1b0u)); FPUSH(v); }
/* 88f00d: mov edx, dword ptr [esi + 0x1a8] */
  edx = R32((uint32_t)(esi + 0x1a8u));
/* 88f013: fsub dword ptr [esi + 0x1c8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1c8u)));
/* 88f019: mov eax, dword ptr [esi + 0x1ac] */
  eax = R32((uint32_t)(esi + 0x1acu));
/* 88f01f: fld dword ptr [esi + 0x1ac] */
  { double v = F32((uint32_t)(esi + 0x1acu)); FPUSH(v); }
/* 88f025: mov ecx, dword ptr [esi + 0x1b0] */
  ecx = R32((uint32_t)(esi + 0x1b0u));
/* 88f02b: fsub dword ptr [esi + 0x1c4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1c4u)));
/* 88f031: fld dword ptr [esi + 0x1a8] */
  { double v = F32((uint32_t)(esi + 0x1a8u)); FPUSH(v); }
/* 88f037: fsub dword ptr [esi + 0x1c0] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x1c0u)));
/* 88f03d: mov dword ptr [esi + 0x1c0], edx */
  W32((uint32_t)(esi + 0x1c0u), edx);
/* 88f043: mov dword ptr [esi + 0x1c4], eax */
  W32((uint32_t)(esi + 0x1c4u), eax);
/* 88f049: mov eax, dword ptr [esi + 0x20c] */
  eax = R32((uint32_t)(esi + 0x20cu));
/* 88f04f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f051: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 88f054: mov dword ptr [esi + 0x1c8], ecx */
  W32((uint32_t)(esi + 0x1c8u), ecx);
/* 88f05a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 88f05d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 88f060: je 0x88f06b */
  if (zf) goto L_88f06b;
L_88f062: /* 88f062: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88f064: mov ecx, esi */
  ecx = esi;
/* 88f066: call 0x6ca489 */
  esp -= 4; W32(esp, 0x88f06bu); SPILL(); f_6ca489(); if (g_unwind) return; RELOAD();
L_88f06b: /* 88f06b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88f06e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 88f071: mov ecx, eax */
  ecx = eax;
/* 88f073: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88f075: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88f078: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 88f07b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88f07e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f07f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 88f082: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f085: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f086: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f08d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f08e: mov esp, ebp */
  esp = ebp;
/* 88f090: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f091: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88f094(void) {
  LOAD_REGS();
L_88f094: /* 88f094: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88f097: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88f09c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 88f09f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f0a0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 88f0a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f0a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88f0a8(); return;
}

void f_88f0a8(void) {
  LOAD_REGS();
L_88f0a8: /* 88f0a8: push 0xa19ef0 */
  { uint32_t v = 0xa19ef0u; esp -= 4; W32(esp, v); }
/* 88f0ad: push 0xae7c24 */
  { uint32_t v = 0xae7c24u; esp -= 4; W32(esp, v); }
/* 88f0b2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88f0b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88f0b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88f0bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f0bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f0bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f0c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88f0c4: guest_badaddr(0x88f0c4); return;
}

void f_88f120(void) {
  LOAD_REGS();
L_88f120: /* 88f120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88f121: mov ebp, esp */
  ebp = esp;
/* 88f123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88f125: push 0x9d55a0 */
  { uint32_t v = 0x9d55a0u; esp -= 4; W32(esp, v); }
/* 88f12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88f130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88f138: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88f13b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88f13c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f13d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88f140: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88f141: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88f144: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f145: mov edi, ecx */
  edi = ecx;
/* 88f147: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88f14e: call 0x6c2b21 */
  esp -= 4; W32(esp, 0x88f153u); SPILL(); f_6c2b21(); if (g_unwind) return; RELOAD();
/* 88f153: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f155: jne 0x88f16a */
  if (!zf) goto L_88f16a;
L_88f157: /* 88f157: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f15a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f161: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f163: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f164: mov esp, ebp */
  esp = ebp;
/* 88f166: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f167: ret 8 */
  esp += 12; SPILL(); return;
L_88f16a: /* 88f16a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 88f16d: xor eax, eax */
  eax = 0;
/* 88f16f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f171: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 88f177: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 88f17a: imul esi, esi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x70u);
  esi = (uint32_t)r;
  }
/* 88f17d: mov dword ptr [ecx + esi + 0x44], eax */
  W32((uint32_t)(ecx + esi + 0x44u), eax);
/* 88f181: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f184: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f185: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f186: mov eax, 1 */
  eax = 0x1u;
/* 88f18b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f192: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f193: mov esp, ebp */
  esp = ebp;
/* 88f195: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f196: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88f199(void) {
  LOAD_REGS();
L_88f199: /* 88f199: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88f19c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88f1a1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 88f1a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f1a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 88f1a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f1adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88f1ad(); return;
}

void f_88f1ad(void) {
  LOAD_REGS();
L_88f1ad: /* 88f1ad: push 0xa19f60 */
  { uint32_t v = 0xa19f60u; esp -= 4; W32(esp, v); }
/* 88f1b2: push 0xae7d84 */
  { uint32_t v = 0xae7d84u; esp -= 4; W32(esp, v); }
/* 88f1b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88f1bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88f1bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88f1c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f1c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f1c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f1c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88f1c9: guest_badaddr(0x88f1c9); return;
}

void f_88f200(void) {
  LOAD_REGS();
L_88f200: /* 88f200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88f201: mov ebp, esp */
  ebp = esp;
/* 88f203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88f205: push 0x9d55b0 */
  { uint32_t v = 0x9d55b0u; esp -= 4; W32(esp, v); }
/* 88f20a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88f210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88f218: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88f21b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88f21c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f21d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88f21e: mov edi, ecx */
  edi = ecx;
/* 88f220: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 88f223: xor ebx, ebx */
  ebx = 0;
/* 88f225: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f227: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88f22a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 88f22d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 88f230: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 88f233: jle 0x88f246 */
  if ((zf || sf != of)) goto L_88f246;
L_88f235: /* 88f235: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 88f236: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f237: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 88f23a: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f240u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f240: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 88f243: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88f244: jmp 0x88f249 */
  goto L_88f249;
L_88f246: /* 88f246: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
L_88f249: /* 88f249: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88f24c: mov esi, eax */
  esi = eax;
/* 88f24e: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 88f251: call 0x99c958 */
  esp -= 4; W32(esp, 0x88f256u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 88f256: mov ecx, eax */
  ecx = eax;
/* 88f258: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 88f25b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f25d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 88f260: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 88f263: jle 0x88f268 */
  if ((zf || sf != of)) goto L_88f268;
L_88f265: /* 88f265: lea ebx, [eax - 1] */
  ebx = (uint32_t)(eax + 0xffffffffu);
L_88f268: /* 88f268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f26a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 88f26d: jne 0x88f272 */
  if (!zf) goto L_88f272;
L_88f26f: /* 88f26f: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_88f272: /* 88f272: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88f275: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f277: jne 0x88f288 */
  if (!zf) goto L_88f288;
L_88f279: /* 88f279: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f27b: jge 0x88f364 */
  if ((sf == of)) goto L_88f364;
L_88f281: /* 88f281: mov esi, ecx */
  esi = ecx;
/* 88f283: jmp 0x88f365 */
  goto L_88f365;
L_88f288: /* 88f288: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88f28b: jne 0x88f294 */
  if (!zf) goto L_88f294;
L_88f28d: /* 88f28d: xor esi, esi */
  esi = 0;
/* 88f28f: jmp 0x88f365 */
  goto L_88f365;
L_88f294: /* 88f294: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f297: jle 0x88f33b */
  if ((zf || sf != of)) goto L_88f33b;
L_88f29d: /* 88f29d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88f29f: mov ecx, edi */
  ecx = edi;
/* 88f2a1: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f2a7u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f2a7: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 88f2aa: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88f2ad: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f2af: jge 0x88f2b8 */
  if ((sf == of)) goto L_88f2b8;
L_88f2b1: /* 88f2b1: xor esi, esi */
  esi = 0;
/* 88f2b3: jmp 0x88f365 */
  goto L_88f365;
L_88f2b8: /* 88f2b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88f2b9: mov ecx, edi */
  ecx = edi;
/* 88f2bb: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f2c1u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f2c1: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f2c4: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f2c6: mov esi, ebx */
  esi = ebx;
/* 88f2c8: jle 0x88f365 */
  if ((zf || sf != of)) goto L_88f365;
L_88f2ce: /* 88f2ce: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 88f2d0: mov edi, esi */
  edi = esi;
/* 88f2d2: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 88f2d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_88f2e0: /* 88f2e0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88f2e3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 88f2e4: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f2e7: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 88f2ea: jle 0x88f2ee */
  if ((zf || sf != of)) goto L_88f2ee;
L_88f2ec: /* 88f2ec: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
L_88f2ee: /* 88f2ee: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f2f0: jl 0x88f2f6 */
  if ((sf != of)) goto L_88f2f6;
L_88f2f2: /* 88f2f2: mov esi, ebx */
  esi = ebx;
/* 88f2f4: jmp 0x88f365 */
  goto L_88f365;
L_88f2f6: /* 88f2f6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f2f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f2fa: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88f2fd: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f303u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f303: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f306: cmp dword ptr [ebp - 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f309: jge 0x88f313 */
  if ((sf == of)) goto L_88f313;
L_88f30b: /* 88f30b: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 88f30d: jns 0x88f333 */
  if (!sf) goto L_88f333;
L_88f30f: /* 88f30f: xor esi, esi */
  esi = 0;
/* 88f311: jmp 0x88f333 */
  goto L_88f333;
L_88f313: /* 88f313: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f316: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 88f319: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f31a: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88f31d: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f323u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f323: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f326: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f329: jg 0x88f365 */
  if ((!zf && sf == of)) goto L_88f365;
L_88f32b: /* 88f32b: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88f32d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f32f: jle 0x88f333 */
  if ((zf || sf != of)) goto L_88f333;
L_88f331: /* 88f331: mov esi, ebx */
  esi = ebx;
L_88f333: /* 88f333: cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f337: jl 0x88f2e0 */
  if ((sf != of)) goto L_88f2e0;
L_88f339: /* 88f339: jmp 0x88f365 */
  goto L_88f365;
L_88f33b: /* 88f33b: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 88f33e: xor edi, edi */
  edi = 0;
L_88f340: /* 88f340: cmp edi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f343: jge 0x88f35d */
  if ((sf == of)) goto L_88f35d;
L_88f345: /* 88f345: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f348: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88f349: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88f34c: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f352u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f352: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f355: cmp dword ptr [ebp - 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f358: jge 0x88f39c */
  if ((sf == of)) goto L_88f39c;
L_88f35a: /* 88f35a: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
L_88f35d: /* 88f35d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88f35f: jge 0x88f365 */
  if ((sf == of)) goto L_88f365;
L_88f361: /* 88f361: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_88f364: /* 88f364: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_88f365: /* 88f365: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88f368: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 88f36b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f36d: jl 0x88f378 */
  if ((sf != of)) goto L_88f378;
L_88f36f: /* 88f36f: xor edi, edi */
  edi = 0;
/* 88f371: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_88f378: /* 88f378: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88f37a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f37d: je 0x88f521 */
  if (zf) goto L_88f521;
L_88f383: /* 88f383: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88f386: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f388: je 0x88f39f */
  if (zf) goto L_88f39f;
L_88f38a: /* 88f38a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f38b: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 88f38e: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f394u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f394: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 88f397: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 88f39a: jmp 0x88f3a2 */
  goto L_88f3a2;
L_88f39c: /* 88f39c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88f39d: jmp 0x88f340 */
  goto L_88f340;
L_88f39f: /* 88f39f: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_88f3a2: /* 88f3a2: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 88f3a5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88f3a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f3aa: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 88f3ad: je 0x88f3c1 */
  if (zf) goto L_88f3c1;
L_88f3af: /* 88f3af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88f3b0: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 88f3b3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f3b9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f3b9: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f3bc: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 88f3bf: jmp 0x88f3c4 */
  goto L_88f3c4;
L_88f3c1: /* 88f3c1: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
L_88f3c4: /* 88f3c4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 88f3c7: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 88f3ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f3cc: je 0x88f3d8 */
  if (zf) goto L_88f3d8;
L_88f3ce: /* 88f3ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88f3d0: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 88f3d3: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 88f3d6: jmp 0x88f3ea */
  goto L_88f3ea;
L_88f3d8: /* 88f3d8: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 88f3db: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88f3e1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88f3e3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88f3e6: je 0x88f3ea */
  if (zf) goto L_88f3ea;
L_88f3e8: /* 88f3e8: fchs  */
  ST0 = -ST0;
L_88f3ea: /* 88f3ea: fcom dword ptr [0xa19c0c] */
  fpu_com(ST0, F32((uint32_t)(0xa19c0cu)));
/* 88f3f0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88f3f2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88f3f5: jne 0x88f484 */
  if (!zf) goto L_88f484;
L_88f3fb: /* 88f3fb: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88f3fe: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 88f401: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 88f403: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 88f406: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88f40c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88f40e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88f411: jnp 0x88f521 */
  if (!pf) goto L_88f521;
L_88f417: /* 88f417: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 88f41a: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 88f41d: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 88f420: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f421: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* 88f424: call 0x6cc1a3 */
  esp -= 4; W32(esp, 0x88f429u); SPILL(); f_6cc1a3(); if (g_unwind) return; RELOAD();
/* 88f429: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 88f42c: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 88f42f: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 88f432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f433: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* 88f436: call 0x6cc1a3 */
  esp -= 4; W32(esp, 0x88f43bu); SPILL(); f_6cc1a3(); if (g_unwind) return; RELOAD();
/* 88f43b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 88f43e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88f441: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f442: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f443: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 88f446: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88f447: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 88f44a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f44b: call 0x6c59ac */
  esp -= 4; W32(esp, 0x88f450u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 88f450: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 88f453: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88f456: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88f459: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 88f45c: jne 0x88f48f */
  if (!zf) goto L_88f48f;
L_88f45e: /* 88f45e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88f460: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 88f463: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88f465: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 88f468: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 88f46b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 88f46e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 88f471: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f474: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f47b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f47c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f47d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f47e: mov esp, ebp */
  esp = ebp;
/* 88f480: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f481: ret 0x14 */
  esp += 24; SPILL(); return;
L_88f484: /* 88f484: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88f486: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
/* 88f48d: jmp 0x88f417 */
  goto L_88f417;
L_88f48f: /* 88f48f: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 88f492: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 88f495: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 88f497: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 88f49a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 88f49d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 88f4a0: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 88f4a3: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 88f4a6: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 88f4a9: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 88f4ac: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 88f4ae: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 88f4b1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 88f4b4: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 88f4b7: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 88f4ba: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 88f4bd: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 88f4c0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 88f4c3: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 88f4c6: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 88f4c9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 88f4cc: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 88f4cf: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 88f4d2: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 88f4d5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88f4d7: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 88f4da: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 88f4dd: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 88f4e0: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 88f4e3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 88f4e6: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 88f4e9: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 88f4ec: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 88f4ef: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 88f4f2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88f4f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 88f4f6: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 88f4f9: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 88f4fc: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 88f4ff: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 88f502: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 88f505: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 88f508: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 88f50b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88f50e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f511: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f518: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f519: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f51a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f51b: mov esp, ebp */
  esp = ebp;
/* 88f51d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f51e: ret 0x14 */
  esp += 24; SPILL(); return;
L_88f521: /* 88f521: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 88f524: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 88f527: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 88f52a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f52b: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* 88f52e: call 0x6cc1a3 */
  esp -= 4; W32(esp, 0x88f533u); SPILL(); f_6cc1a3(); if (g_unwind) return; RELOAD();
/* 88f533: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88f535: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 88f538: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 88f53a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 88f53d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 88f540: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88f543: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 88f546: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 88f549: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 88f54c: cmp dword ptr [ebx + 0x20], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x20u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88f550: jne 0x88f57b */
  if (!zf) goto L_88f57b;
L_88f552: /* 88f552: mov ecx, dword ptr [ebx + 0x1c] */
  ecx = R32((uint32_t)(ebx + 0x1cu));
L_88f555: /* 88f555: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88f557: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 88f55a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 88f55c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 88f55f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 88f562: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 88f565: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f566: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 88f569: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f56c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f56d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f574: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f575: mov esp, ebp */
  esp = ebp;
/* 88f577: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f578: ret 0x14 */
  esp += 24; SPILL(); return;
L_88f57b: /* 88f57b: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 88f57e: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 88f581: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 88f584: jmp 0x88f555 */
  goto L_88f555;
}

void f_88f586(void) {
  LOAD_REGS();
L_88f586: /* 88f586: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 88f589: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88f58e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 88f591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f592: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 88f595: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f59au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88f59a(); return;
}

void f_88f59a(void) {
  LOAD_REGS();
L_88f59a: /* 88f59a: push 0xa19fc8 */
  { uint32_t v = 0xa19fc8u; esp -= 4; W32(esp, v); }
/* 88f59f: push 0xae7d8c */
  { uint32_t v = 0xae7d8cu; esp -= 4; W32(esp, v); }
/* 88f5a4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88f5aau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88f5aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88f5ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f5af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f5b1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f5b6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88f5b6: guest_badaddr(0x88f5b6); return;
}

void f_88f6b0(void) {
  LOAD_REGS();
L_88f6b0: /* 88f6b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88f6b1: mov ebp, esp */
  ebp = esp;
/* 88f6b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88f6b5: push 0x9d55c0 */
  { uint32_t v = 0x9d55c0u; esp -= 4; W32(esp, v); }
/* 88f6ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88f6c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f6c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88f6c8: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88f6cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88f6cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f6cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88f6ce: mov edi, ecx */
  edi = ecx;
/* 88f6d0: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 88f6d3: xor ebx, ebx */
  ebx = 0;
/* 88f6d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f6d7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88f6da: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 88f6dd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 88f6e0: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 88f6e3: jle 0x88f6f6 */
  if ((zf || sf != of)) goto L_88f6f6;
L_88f6e5: /* 88f6e5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 88f6e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f6e7: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 88f6ea: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f6f0u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f6f0: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 88f6f3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88f6f4: jmp 0x88f6f9 */
  goto L_88f6f9;
L_88f6f6: /* 88f6f6: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
L_88f6f9: /* 88f6f9: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88f6fc: mov esi, eax */
  esi = eax;
/* 88f6fe: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 88f701: call 0x99c958 */
  esp -= 4; W32(esp, 0x88f706u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 88f706: mov ecx, eax */
  ecx = eax;
/* 88f708: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 88f70b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88f70d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 88f710: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 88f713: je 0x88f718 */
  if (zf) goto L_88f718;
L_88f715: /* 88f715: lea ebx, [eax - 1] */
  ebx = (uint32_t)(eax + 0xffffffffu);
L_88f718: /* 88f718: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f71a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 88f71d: jne 0x88f722 */
  if (!zf) goto L_88f722;
L_88f71f: /* 88f71f: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_88f722: /* 88f722: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88f725: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f727: jne 0x88f738 */
  if (!zf) goto L_88f738;
L_88f729: /* 88f729: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f72b: jge 0x88f814 */
  if ((sf == of)) goto L_88f814;
L_88f731: /* 88f731: mov esi, ecx */
  esi = ecx;
/* 88f733: jmp 0x88f815 */
  goto L_88f815;
L_88f738: /* 88f738: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88f73b: jne 0x88f744 */
  if (!zf) goto L_88f744;
L_88f73d: /* 88f73d: xor esi, esi */
  esi = 0;
/* 88f73f: jmp 0x88f815 */
  goto L_88f815;
L_88f744: /* 88f744: cmp eax, 0x1e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f747: jle 0x88f7eb */
  if ((zf || sf != of)) goto L_88f7eb;
L_88f74d: /* 88f74d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88f74f: mov ecx, edi */
  ecx = edi;
/* 88f751: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f757u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f757: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 88f75a: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88f75d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f75f: jge 0x88f768 */
  if ((sf == of)) goto L_88f768;
L_88f761: /* 88f761: xor esi, esi */
  esi = 0;
/* 88f763: jmp 0x88f815 */
  goto L_88f815;
L_88f768: /* 88f768: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88f769: mov ecx, edi */
  ecx = edi;
/* 88f76b: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f771u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f771: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f774: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f776: mov esi, ebx */
  esi = ebx;
/* 88f778: jle 0x88f815 */
  if ((zf || sf != of)) goto L_88f815;
L_88f77e: /* 88f77e: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 88f780: mov edi, esi */
  edi = esi;
/* 88f782: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 88f789: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_88f790: /* 88f790: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88f793: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 88f794: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f797: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 88f79a: jle 0x88f79e */
  if ((zf || sf != of)) goto L_88f79e;
L_88f79c: /* 88f79c: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
L_88f79e: /* 88f79e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f7a0: jl 0x88f7a6 */
  if ((sf != of)) goto L_88f7a6;
L_88f7a2: /* 88f7a2: mov esi, ebx */
  esi = ebx;
/* 88f7a4: jmp 0x88f815 */
  goto L_88f815;
L_88f7a6: /* 88f7a6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f7a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f7aa: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88f7ad: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f7b3u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f7b3: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f7b6: cmp dword ptr [ebp - 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f7b9: jge 0x88f7c3 */
  if ((sf == of)) goto L_88f7c3;
L_88f7bb: /* 88f7bb: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 88f7bd: jns 0x88f7e3 */
  if (!sf) goto L_88f7e3;
L_88f7bf: /* 88f7bf: xor esi, esi */
  esi = 0;
/* 88f7c1: jmp 0x88f7e3 */
  goto L_88f7e3;
L_88f7c3: /* 88f7c3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f7c6: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 88f7c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f7ca: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88f7cd: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f7d3u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f7d3: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f7d6: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f7d9: jg 0x88f815 */
  if ((!zf && sf == of)) goto L_88f815;
L_88f7db: /* 88f7db: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88f7dd: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f7df: jle 0x88f7e3 */
  if ((zf || sf != of)) goto L_88f7e3;
L_88f7e1: /* 88f7e1: mov esi, ebx */
  esi = ebx;
L_88f7e3: /* 88f7e3: cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f7e7: jl 0x88f790 */
  if ((sf != of)) goto L_88f790;
L_88f7e9: /* 88f7e9: jmp 0x88f815 */
  goto L_88f815;
L_88f7eb: /* 88f7eb: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 88f7ee: xor edi, edi */
  edi = 0;
L_88f7f0: /* 88f7f0: cmp edi, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f7f3: jge 0x88f80d */
  if ((sf == of)) goto L_88f80d;
L_88f7f5: /* 88f7f5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f7f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88f7f9: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88f7fc: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f802u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f802: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f805: cmp dword ptr [ebp - 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f808: jge 0x88f84c */
  if ((sf == of)) goto L_88f84c;
L_88f80a: /* 88f80a: lea esi, [edi - 1] */
  esi = (uint32_t)(edi + 0xffffffffu);
L_88f80d: /* 88f80d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88f80f: jge 0x88f815 */
  if ((sf == of)) goto L_88f815;
L_88f811: /* 88f811: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
L_88f814: /* 88f814: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_88f815: /* 88f815: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 88f818: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 88f81b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88f81d: jl 0x88f828 */
  if ((sf != of)) goto L_88f828;
L_88f81f: /* 88f81f: xor edi, edi */
  edi = 0;
/* 88f821: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_88f828: /* 88f828: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88f82a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88f82d: je 0x88f92f */
  if (zf) goto L_88f92f;
L_88f833: /* 88f833: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88f836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f838: je 0x88f84f */
  if (zf) goto L_88f84f;
L_88f83a: /* 88f83a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88f83b: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 88f83e: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f844u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f844: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 88f847: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 88f84a: jmp 0x88f852 */
  goto L_88f852;
L_88f84c: /* 88f84c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88f84d: jmp 0x88f7f0 */
  goto L_88f7f0;
L_88f84f: /* 88f84f: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_88f852: /* 88f852: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 88f855: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88f858: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f85a: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 88f85d: je 0x88f871 */
  if (zf) goto L_88f871;
L_88f85f: /* 88f85f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88f860: lea ecx, [ebx + 0x10] */
  ecx = (uint32_t)(ebx + 0x10u);
/* 88f863: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88f869u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88f869: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 88f86c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 88f86f: jmp 0x88f874 */
  goto L_88f874;
L_88f871: /* 88f871: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
L_88f874: /* 88f874: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 88f877: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 88f87a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88f87c: je 0x88f888 */
  if (zf) goto L_88f888;
L_88f87e: /* 88f87e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88f880: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 88f883: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 88f886: jmp 0x88f89a */
  goto L_88f89a;
L_88f888: /* 88f888: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 88f88b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88f891: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88f893: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88f896: je 0x88f89a */
  if (zf) goto L_88f89a;
L_88f898: /* 88f898: fchs  */
  ST0 = -ST0;
L_88f89a: /* 88f89a: fcom dword ptr [0xa19c0c] */
  fpu_com(ST0, F32((uint32_t)(0xa19c0cu)));
/* 88f8a0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88f8a2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88f8a5: jne 0x88f924 */
  if (!zf) goto L_88f924;
L_88f8a7: /* 88f8a7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 88f8aa: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 88f8ad: fdivrp st(1) */
  STI(1) = ST0 / STI(1);
  FPOP();
/* 88f8af: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 88f8b2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88f8b8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88f8ba: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88f8bd: jnp 0x88f92f */
  if (!pf) goto L_88f92f;
L_88f8bf: /* 88f8bf: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 88f8c2: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 88f8c5: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 88f8c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f8c9: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* 88f8cc: call 0x6cc1a3 */
  esp -= 4; W32(esp, 0x88f8d1u); SPILL(); f_6cc1a3(); if (g_unwind) return; RELOAD();
/* 88f8d1: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 88f8d4: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 88f8d7: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 88f8da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f8db: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* 88f8de: call 0x6cc1a3 */
  esp -= 4; W32(esp, 0x88f8e3u); SPILL(); f_6cc1a3(); if (g_unwind) return; RELOAD();
/* 88f8e3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 88f8e6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88f8e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f8ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88f8eb: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 88f8ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88f8ef: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 88f8f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f8f3: call 0x6c59ac */
  esp -= 4; W32(esp, 0x88f8f8u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 88f8f8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 88f8fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88f8fe: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 88f901: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 88f903: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 88f905: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 88f908: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 88f90b: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 88f90e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88f911: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f914: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f91b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f91c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f91d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f91e: mov esp, ebp */
  esp = ebp;
/* 88f920: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f921: ret 0x14 */
  esp += 24; SPILL(); return;
L_88f924: /* 88f924: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88f926: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
/* 88f92d: jmp 0x88f8bf */
  goto L_88f8bf;
L_88f92f: /* 88f92f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 88f932: lea edx, [ebp - 0x64] */
  edx = (uint32_t)(ebp + 0xffffff9cu);
/* 88f935: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 88f938: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88f939: lea ecx, [ecx + eax*2] */
  ecx = (uint32_t)(ecx + eax*2);
/* 88f93c: call 0x6cc1a3 */
  esp -= 4; W32(esp, 0x88f941u); SPILL(); f_6cc1a3(); if (g_unwind) return; RELOAD();
/* 88f941: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88f943: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 88f946: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 88f948: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 88f94b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 88f94e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88f951: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 88f954: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 88f957: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 88f95a: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 88f95d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 88f960: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 88f962: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88f964: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 88f967: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 88f96a: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 88f96d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88f96e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 88f971: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88f974: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88f975: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88f97c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88f97d: mov esp, ebp */
  esp = ebp;
/* 88f97f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88f980: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_88f983(void) {
  LOAD_REGS();
L_88f983: /* 88f983: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 88f986: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88f98b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 88f98e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88f98f: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 88f992: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f997u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88f997(); return;
}

void f_88f997(void) {
  LOAD_REGS();
L_88f997: /* 88f997: push 0xa1a000 */
  { uint32_t v = 0xa1a000u; esp -= 4; W32(esp, v); }
/* 88f99c: push 0xae7d94 */
  { uint32_t v = 0xae7d94u; esp -= 4; W32(esp, v); }
/* 88f9a1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88f9a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88f9a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88f9aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f9ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88f9ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88f9b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88f9b3: guest_badaddr(0x88f9b3); return;
}

void f_88fa90(void) {
  LOAD_REGS();
L_88fa90: /* 88fa90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88fa94: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 88fa97: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88fa9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88fa9b: xor esi, esi */
  esi = 0;
/* 88fa9d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88fa9f: je 0x88face */
  if (zf) goto L_88face;
L_88faa1: /* 88faa1: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* 88faa4: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 88faa8: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 88faab: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88faaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88fab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88fab2: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88fab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88fab7: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88fabb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88fabc: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88fac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88fac1: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88fac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88fac6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x88fac9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88fac9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88faca: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88facd: ret  */
  esp += 4; SPILL(); return;
L_88face: /* 88face: cmp dword ptr [ecx + 0x28], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x28u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88fad1: jne 0x88fb47 */
  if (!zf) goto L_88fb47;
L_88fad3: /* 88fad3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 88fad9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88fadb: push 0xae7da0 */
  { uint32_t v = 0xae7da0u; esp -= 4; W32(esp, v); }
/* 88fae0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88fae1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x88fae7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 88fae7: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88faeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88faee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88faef: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 88faf7: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 88fafb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 88fafd: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 88fb05: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 88fb09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88fb0a: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 88fb12: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 88fb16: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 88fb19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88fb1a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88fb1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88fb1e: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 88fb22: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x88fb28u); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 88fb28: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88fb2a: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 88fb2e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 88fb30: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 88fb33: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 88fb36: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88fb39: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 88fb3c: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 88fb3f: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 88fb42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88fb43: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88fb46: ret  */
  esp += 4; SPILL(); return;
L_88fb47: /* 88fb47: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 88fb4b: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 88fb4e: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 88fb51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88fb52: lea ebx, [eax + edx*8] */
  ebx = (uint32_t)(eax + edx*8);
/* 88fb55: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88fb56: mov ebp, dword ptr [ebx + 0x20] */
  ebp = R32((uint32_t)(ebx + 0x20u));
/* 88fb59: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fb5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88fb5d: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 88fb61: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 88fb65: lea edx, [ebp - 1] */
  edx = (uint32_t)(ebp + 0xffffffffu);
/* 88fb68: jle 0x88fbfd */
  if ((zf || sf != of)) goto L_88fbfd;
L_88fb6e: /* 88fb6e: cmp ebp, 0x1e */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fb71: jle 0x88fbd2 */
  if ((zf || sf != of)) goto L_88fbd2;
L_88fb73: /* 88fb73: mov edi, dword ptr [ebx + 0x1c] */
  edi = R32((uint32_t)(ebx + 0x1cu));
/* 88fb76: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 88fb7a: cmp eax, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88fb7d: jb 0x88fbfd */
  if (cf) goto L_88fbfd;
L_88fb7f: /* 88fb7f: cmp dword ptr [edi + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 88fb82: jbe 0x88fbfb */
  if ((cf | zf)) goto L_88fbfb;
L_88fb84: /* 88fb84: mov eax, edx */
  eax = edx;
/* 88fb86: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 88fb88: mov ecx, eax */
  ecx = eax;
/* 88fb8a: xor esi, esi */
  esi = 0;
/* 88fb8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_88fb90: /* 88fb90: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 88fb91: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fb94: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 88fb98: jle 0x88fb9c */
  if ((zf || sf != of)) goto L_88fb9c;
L_88fb9a: /* 88fb9a: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_88fb9c: /* 88fb9c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fb9e: jge 0x88fbcc */
  if ((sf == of)) goto L_88fbcc;
L_88fba0: /* 88fba0: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 88fba4: cmp esi, dword ptr [edi + eax*4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + eax*4)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88fba7: jae 0x88fbb1 */
  if (!cf) goto L_88fbb1;
L_88fba9: /* 88fba9: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 88fbab: jns 0x88fbbf */
  if (!sf) goto L_88fbbf;
L_88fbad: /* 88fbad: xor eax, eax */
  eax = 0;
/* 88fbaf: jmp 0x88fbbf */
  goto L_88fbbf;
L_88fbb1: /* 88fbb1: cmp dword ptr [edi + eax*4 + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4 + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 88fbb5: ja 0x88fbce */
  if ((!cf && !zf)) goto L_88fbce;
L_88fbb7: /* 88fbb7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88fbb9: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fbbb: jle 0x88fbbf */
  if ((zf || sf != of)) goto L_88fbbf;
L_88fbbd: /* 88fbbd: mov eax, edx */
  eax = edx;
L_88fbbf: /* 88fbbf: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 88fbc3: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fbc6: jl 0x88fb90 */
  if ((sf != of)) goto L_88fb90;
L_88fbc8: /* 88fbc8: mov esi, eax */
  esi = eax;
/* 88fbca: jmp 0x88fbfd */
  goto L_88fbfd;
L_88fbcc: /* 88fbcc: mov eax, edx */
  eax = edx;
L_88fbce: /* 88fbce: mov esi, eax */
  esi = eax;
/* 88fbd0: jmp 0x88fbfd */
  goto L_88fbfd;
L_88fbd2: /* 88fbd2: mov ecx, 1 */
  ecx = 0x1u;
/* 88fbd7: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fbd9: jle 0x88fbfb */
  if ((zf || sf != of)) goto L_88fbfb;
L_88fbdb: /* 88fbdb: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 88fbde: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 88fbe2: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_88fbe5: /* 88fbe5: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88fbe7: jb 0x88fbf3 */
  if (cf) goto L_88fbf3;
L_88fbe9: /* 88fbe9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 88fbea: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88fbed: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fbef: jl 0x88fbe5 */
  if ((sf != of)) goto L_88fbe5;
L_88fbf1: /* 88fbf1: jmp 0x88fbfb */
  goto L_88fbfb;
L_88fbf3: /* 88fbf3: lea esi, [ecx - 1] */
  esi = (uint32_t)(ecx + 0xffffffffu);
/* 88fbf6: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88fbf9: jne 0x88fbfd */
  if (!zf) goto L_88fbfd;
L_88fbfb: /* 88fbfb: mov esi, edx */
  esi = edx;
L_88fbfd: /* 88fbfd: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 88fc00: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fc02: jl 0x88fc0e */
  if ((sf != of)) goto L_88fc0e;
L_88fc04: /* 88fc04: xor edi, edi */
  edi = 0;
/* 88fc06: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
L_88fc0e: /* 88fc0e: mov ebp, dword ptr [esp + 0x64] */
  ebp = R32((uint32_t)(esp + 0x64u));
/* 88fc12: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fc14: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 88fc18: je 0x88fc3d */
  if (zf) goto L_88fc3d;
L_88fc1a: /* 88fc1a: fld dword ptr [edx + 0x168] */
  { double v = F32((uint32_t)(edx + 0x168u)); FPUSH(v); }
/* 88fc20: fcomp dword ptr [esp + 0x54] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x54u)));
  FPOP();
/* 88fc24: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88fc26: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88fc29: jne 0x88fc33 */
  if (!zf) goto L_88fc33;
L_88fc2b: /* 88fc2b: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
L_88fc33: /* 88fc33: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 88fc37: mov dword ptr [edx + 0x168], ecx */
  W32((uint32_t)(edx + 0x168u), ecx);
L_88fc3d: /* 88fc3d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88fc3f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 88fc47: je 0x88fc9b */
  if (zf) goto L_88fc9b;
L_88fc49: /* 88fc49: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 88fc4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fc4f: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 88fc52: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 88fc55: je 0x88fc62 */
  if (zf) goto L_88fc62;
L_88fc57: /* 88fc57: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 88fc5b: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 88fc5e: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 88fc60: jmp 0x88fc76 */
  goto L_88fc76;
L_88fc62: /* 88fc62: fld dword ptr [eax + edi*4] */
  { double v = F32((uint32_t)(eax + edi*4)); FPUSH(v); }
/* 88fc65: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 88fc67: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88fc6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88fc6f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88fc72: je 0x88fc76 */
  if (zf) goto L_88fc76;
L_88fc74: /* 88fc74: fchs  */
  ST0 = -ST0;
L_88fc76: /* 88fc76: fcom dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
/* 88fc7c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88fc7e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88fc81: jne 0x88fc91 */
  if (!zf) goto L_88fc91;
L_88fc83: /* 88fc83: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 88fc87: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 88fc89: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 88fc8b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88fc8f: jmp 0x88fc99 */
  goto L_88fc99;
L_88fc91: /* 88fc91: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
L_88fc99: /* 88fc99: fstp st(0) */
  STI(0) = ST0; FPOP();
L_88fc9b: /* 88fc9b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fc9d: je 0x88fcb1 */
  if (zf) goto L_88fcb1;
L_88fc9f: /* 88fc9f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 88fca3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fca5: je 0x88fcb1 */
  if (zf) goto L_88fcb1;
L_88fca7: /* 88fca7: mov dword ptr [edx + 0x20c], 1 */
  W32((uint32_t)(edx + 0x20cu), 0x1u);
L_88fcb1: /* 88fcb1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88fcb3: je 0x88ff35 */
  if (zf) goto L_88ff35;
L_88fcb9: /* 88fcb9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88fcbd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88fcc3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88fcc5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88fcc8: jnp 0x88ff35 */
  if (!pf) goto L_88ff35;
L_88fcce: /* 88fcce: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 88fcd1: mov ecx, esi */
  ecx = esi;
/* 88fcd3: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 88fcd6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88fcd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88fcda: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 88fcde: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 88fce1: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 88fce5: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 88fce8: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 88fceb: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 88fcef: mov edx, edi */
  edx = edi;
/* 88fcf1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 88fcf4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 88fcf6: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fcf8: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 88fcfc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 88fcfe: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 88fd02: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 88fd05: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 88fd09: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 88fd0c: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 88fd0f: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 88fd13: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 88fd17: je 0x88fd7b */
  if (zf) goto L_88fd7b;
L_88fd19: /* 88fd19: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88fd1d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fd1f: je 0x88fd26 */
  if (zf) goto L_88fd26;
L_88fd21: /* 88fd21: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 88fd24: jmp 0x88fd59 */
  goto L_88fd59;
L_88fd26: /* 88fd26: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88fd2a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fd2c: je 0x88fd7b */
  if (zf) goto L_88fd7b;
L_88fd2e: /* 88fd2e: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 88fd31: mov edx, ecx */
  edx = ecx;
/* 88fd33: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 88fd36: lea edx, [edx + eax - 0x10] */
  edx = (uint32_t)(edx + eax + 0xfffffff0u);
/* 88fd3a: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 88fd3c: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 88fd40: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 88fd43: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 88fd47: mov ebp, dword ptr [edx + 8] */
  ebp = R32((uint32_t)(edx + 0x8u));
/* 88fd4a: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 88fd4d: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* 88fd51: mov ebp, dword ptr [esp + 0x64] */
  ebp = R32((uint32_t)(esp + 0x64u));
/* 88fd55: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
L_88fd59: /* 88fd59: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 88fd5c: lea eax, [ecx + eax - 0x10] */
  eax = (uint32_t)(ecx + eax + 0xfffffff0u);
/* 88fd60: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88fd62: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 88fd65: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 88fd69: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88fd6c: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 88fd70: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 88fd73: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* 88fd77: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
L_88fd7b: /* 88fd7b: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88fd7f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88fd83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88fd84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88fd85: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* 88fd89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88fd8a: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 88fd8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88fd8f: call 0x6c59ac */
  esp -= 4; W32(esp, 0x88fd94u); SPILL(); f_6c59ac(); if (g_unwind) return; RELOAD();
/* 88fd94: mov ecx, dword ptr [ebx + 0x14] */
  ecx = R32((uint32_t)(ebx + 0x14u));
/* 88fd97: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88fd9a: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88fd9d: jg 0x88fdbe */
  if ((!zf && sf == of)) goto L_88fdbe;
L_88fd9f: /* 88fd9f: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 88fda2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88fda4: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 88fda8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 88fdaa: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 88fdad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88fdae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88fdaf: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 88fdb2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 88fdb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88fdb6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 88fdb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88fdba: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88fdbd: ret  */
  esp += 4; SPILL(); return;
L_88fdbe: /* 88fdbe: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fdc0: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 88fdc3: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 88fdc6: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 88fdc9: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 88fdcb: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 88fdcf: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 88fdd2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 88fdd5: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 88fdd9: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 88fddc: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 88fddf: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 88fde3: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 88fde5: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 88fde9: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 88fdec: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 88fdef: mov dword ptr [esp + 0x20], esi */
  W32((uint32_t)(esp + 0x20u), esi);
/* 88fdf3: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 88fdf7: je 0x88febd */
  if (zf) goto L_88febd;
L_88fdfd: /* 88fdfd: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 88fe01: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fe03: je 0x88fe44 */
  if (zf) goto L_88fe44;
L_88fe05: /* 88fe05: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 88fe08: fld dword ptr [eax + ecx*4 - 0xc] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0xfffffff4u)); FPUSH(v); }
/* 88fe0c: lea ecx, [eax + ecx*4 - 0xc] */
  ecx = (uint32_t)(eax + ecx*4 + 0xfffffff4u);
/* 88fe10: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 88fe12: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 88fe15: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 88fe18: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 88fe1b: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 88fe1e: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 88fe22: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 88fe26: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 88fe28: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 88fe2c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 88fe30: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 88fe32: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 88fe36: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88fe38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88fe3a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 88fe3e: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 88fe42: jmp 0x88fec1 */
  goto L_88fec1;
L_88fe44: /* 88fe44: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 88fe48: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88fe4a: je 0x88febd */
  if (zf) goto L_88febd;
L_88fe4c: /* 88fe4c: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 88fe4f: fld dword ptr [eax + edx*4 - 0xc] */
  { double v = F32((uint32_t)(eax + edx*4 + 0xfffffff4u)); FPUSH(v); }
/* 88fe53: lea ecx, [eax + edx*4 - 0xc] */
  ecx = (uint32_t)(eax + edx*4 + 0xfffffff4u);
/* 88fe57: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 88fe59: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 88fe5c: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 88fe5f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 88fe62: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 88fe65: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 88fe69: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88fe6d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 88fe6f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 88fe73: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88fe77: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 88fe79: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 88fe7d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88fe7f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88fe81: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 88fe85: fadd dword ptr [esp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x40u)));
/* 88fe89: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 88fe8d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 88fe8f: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 88fe91: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 88fe94: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 88fe97: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 88fe9a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 88fe9d: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 88fea1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88fea3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 88fea7: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 88feab: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 88feaf: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 88feb3: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 88feb7: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 88febb: jmp 0x88fec1 */
  goto L_88fec1;
L_88febd: /* 88febd: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_88fec1: /* 88fec1: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 88fec5: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 88fec9: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 88fecd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88fece: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 88fed2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88fed3: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 88fed7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88fed8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88fed9: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88fedd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88fedf: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 88fee3: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 88fee7: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 88feeb: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88feef: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 88fef3: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88fef7: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 88fefb: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 88feff: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88ff01: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 88ff05: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 88ff09: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 88ff0d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 88ff0f: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 88ff13: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88ff17: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 88ff1b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 88ff1f: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 88ff23: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 88ff26: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 88ff2a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88ff2e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88ff31: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ff34: ret  */
  esp += 4; SPILL(); return;
L_88ff35: /* 88ff35: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 88ff38: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 88ff3c: mov edx, esi */
  edx = esi;
/* 88ff3e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 88ff41: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 88ff43: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 88ff45: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 88ff47: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 88ff4a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 88ff4d: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 88ff50: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88ff53: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 88ff56: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 88ff59: cmp dword ptr [ebx + 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88ff5d: jg 0x88ff64 */
  if ((!zf && sf == of)) goto L_88ff64;
L_88ff5f: /* 88ff5f: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 88ff62: jmp 0x88ff6d */
  goto L_88ff6d;
L_88ff64: /* 88ff64: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 88ff67: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 88ff6a: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
L_88ff6d: /* 88ff6d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88ff6f: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 88ff73: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88ff75: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 88ff78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ff79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88ff7a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 88ff7d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 88ff80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ff81: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 88ff84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ff85: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ff88: ret  */
  esp += 4; SPILL(); return;
}

void f_8900d0(void) {
  LOAD_REGS();
L_8900d0: /* 8900d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8900d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8900d3: mov esi, dword ptr [ecx + 0xf0] */
  esi = R32((uint32_t)(ecx + 0xf0u));
/* 8900d9: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8900dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8900df: imul esi, esi, 0x11c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x11cu);
  esi = (uint32_t)r;
  }
/* 8900e5: mov ecx, dword ptr [eax + 0x1ec] */
  ecx = R32((uint32_t)(eax + 0x1ecu));
/* 8900eb: add eax, 0x1ec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8900f0: mov eax, dword ptr [esi + ecx + 0x18] */
  eax = R32((uint32_t)(esi + ecx + 0x18u));
/* 8900f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8900f5: ret  */
  esp += 4; SPILL(); return;
}

void f_890110(void) {
  LOAD_REGS();
L_890110: /* 890110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 890112: push 0x9d56a1 */
  { uint32_t v = 0x9d56a1u; esp -= 4; W32(esp, v); }
/* 890117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 89011d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89011e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 890125: sub esp, 0x3b0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3b0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89012b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89012c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 89012d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89012e: mov ebp, ecx */
  ebp = ecx;
/* 890130: mov dword ptr [esp + 0xac], 0 */
  W32((uint32_t)(esp + 0xacu), 0x0u);
/* 89013b: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 89013e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89013f: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x890145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 890145: mov ebx, eax */
  ebx = eax;
/* 890147: mov eax, dword ptr [ebp + 0x78] */
  eax = R32((uint32_t)(ebp + 0x78u));
/* 89014a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89014c: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 89014f: mov dword ptr [esp + 0x3c8], 1 */
  W32((uint32_t)(esp + 0x3c8u), 0x1u);
/* 89015a: mov ecx, ebp */
  ecx = ebp;
/* 89015c: je 0x890444 */
  if (zf) goto L_890444;
L_890162: /* 890162: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x890168u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 890168: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89016d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89016f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 890172: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 890175: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 890179: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 89017d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 890181: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 890189: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 890191: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 890199: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 8901a1: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8901a9: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 8901b1: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8901b9: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 8901c1: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 8901c9: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 8901d1: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 8901d9: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 8901e1: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 8901e5: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 8901e9: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8901ed: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* 8901f5: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8901fa: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 8901fe: lea edi, [esp + 0x180] */
  edi = (uint32_t)(esp + 0x180u);
/* 890205: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890207: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 89020a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89020f: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 890213: lea edi, [esp + 0x200] */
  edi = (uint32_t)(esp + 0x200u);
/* 89021a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89021c: mov ecx, ebp */
  ecx = ebp;
/* 89021e: mov byte ptr [esp + 0x3c8], 3 */
  W8((uint32_t)(esp + 0x3c8u), 0x3u);
/* 890226: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x89022cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89022c: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 890231: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 890233: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 890236: mov ecx, esp */
  ecx = esp;
/* 890238: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89023a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89023d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 890240: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 890243: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 890246: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* 89024d: call 0x6c9160 */
  esp -= 4; W32(esp, 0x890252u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 890252: mov ecx, 0x10 */
  ecx = 0x10u;
/* 890257: mov esi, eax */
  esi = eax;
/* 890259: lea edi, [esp + 0x240] */
  edi = (uint32_t)(esp + 0x240u);
/* 890260: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890262: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 890265: mov esi, eax */
  esi = eax;
/* 890267: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89026c: lea edi, [esp + 0x100] */
  edi = (uint32_t)(esp + 0x100u);
/* 890273: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890275: mov ecx, ebp */
  ecx = ebp;
/* 890277: mov byte ptr [esp + 0x3c8], 5 */
  W8((uint32_t)(esp + 0x3c8u), 0x5u);
/* 89027f: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x890285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 890285: mov eax, dword ptr [eax + 0x284] */
  eax = R32((uint32_t)(eax + 0x284u));
/* 89028b: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 89028e: mov ecx, ebp */
  ecx = ebp;
/* 890290: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 890294: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x89029au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89029a: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89029e: add eax, 0x288 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x288u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8902a3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8902a6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8902aa: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8902ad: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8902b1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8902b5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8902b7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8902bb: fmul dword ptr [ebx + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x80u)));
/* 8902c1: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8902c5: fmul dword ptr [ebx + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x7cu)));
/* 8902c8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8902cc: fmul dword ptr [ebx + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x78u)));
/* 8902cf: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 8902d7: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 8902df: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 8902e7: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8902eb: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 8902f6: mov dword ptr [esp + 0x88], 0 */
  W32((uint32_t)(esp + 0x88u), 0x0u);
/* 890301: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 890308: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 890313: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 89031e: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 890325: mov dword ptr [esp + 0x94], 0 */
  W32((uint32_t)(esp + 0x94u), 0x0u);
/* 890330: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 89033b: mov dword ptr [esp + 0xa0], 0 */
  W32((uint32_t)(esp + 0xa0u), 0x0u);
/* 890346: mov dword ptr [esp + 0xa4], 0 */
  W32((uint32_t)(esp + 0xa4u), 0x0u);
/* 890351: mov dword ptr [esp + 0xa8], 0 */
  W32((uint32_t)(esp + 0xa8u), 0x0u);
/* 89035c: mov dword ptr [esp + 0xac], 0x3f800000 */
  W32((uint32_t)(esp + 0xacu), 0x3f800000u);
/* 890367: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89036a: mov edi, esp */
  edi = esp;
/* 89036c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 890371: lea esi, [esp + 0x140] */
  esi = (uint32_t)(esp + 0x140u);
/* 890378: lea eax, [esp + 0x2c0] */
  eax = (uint32_t)(esp + 0x2c0u);
/* 89037f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 890382: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 890389: mov byte ptr [esp + 0x40c], 6 */
  W8((uint32_t)(esp + 0x40cu), 0x6u);
/* 890391: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x890397u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 890397: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89039a: mov edi, esp */
  edi = esp;
/* 89039c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8903a1: lea esi, [esp + 0x240] */
  esi = (uint32_t)(esp + 0x240u);
/* 8903a8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8903aa: lea ecx, [esp + 0x200] */
  ecx = (uint32_t)(esp + 0x200u);
/* 8903b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8903b2: mov ecx, eax */
  ecx = eax;
/* 8903b4: mov byte ptr [esp + 0x40c], 7 */
  W8((uint32_t)(esp + 0x40cu), 0x7u);
/* 8903bc: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8903c2u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8903c2: mov esi, eax */
  esi = eax;
/* 8903c4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8903c9: lea edi, [esp + 0xc0] */
  edi = (uint32_t)(esp + 0xc0u);
/* 8903d0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8903d2: lea ecx, [esp + 0x1c0] */
  ecx = (uint32_t)(esp + 0x1c0u);
/* 8903d9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8903dfu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8903df: lea ecx, [esp + 0x280] */
  ecx = (uint32_t)(esp + 0x280u);
/* 8903e6: mov byte ptr [esp + 0x3c8], 6 */
  W8((uint32_t)(esp + 0x3c8u), 0x6u);
/* 8903ee: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8903f4u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8903f4: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 8903f8: mov byte ptr [esp + 0x3c8], 5 */
  W8((uint32_t)(esp + 0x3c8u), 0x5u);
/* 890400: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x890406u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 890406: lea ecx, [esp + 0x240] */
  ecx = (uint32_t)(esp + 0x240u);
/* 89040d: mov byte ptr [esp + 0x3c8], 4 */
  W8((uint32_t)(esp + 0x3c8u), 0x4u);
/* 890415: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89041bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89041b: lea ecx, [esp + 0x140] */
  ecx = (uint32_t)(esp + 0x140u);
/* 890422: mov byte ptr [esp + 0x3c8], 3 */
  W8((uint32_t)(esp + 0x3c8u), 0x3u);
/* 89042a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x890430u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 890430: mov byte ptr [esp + 0x3c8], 2 */
  W8((uint32_t)(esp + 0x3c8u), 0x2u);
/* 890438: lea ecx, [esp + 0x180] */
  ecx = (uint32_t)(esp + 0x180u);
/* 89043f: jmp 0x8907e4 */
  goto L_8907e4;
L_890444: /* 890444: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x89044au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89044a: mov esi, eax */
  esi = eax;
/* 89044c: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 89044f: mov ecx, ebp */
  ecx = ebp;
/* 890451: add esi, 0x294 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 890457: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x89045du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89045d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 890460: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 890466: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89046b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89046e: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 890471: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 890473: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 890475: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 89047d: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 890485: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 89048d: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 890491: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 890499: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8904a1: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8904a5: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 8904ad: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8904b5: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 8904b9: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 8904c1: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 8904c9: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 8904d1: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 8904d9: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 8904e1: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* 8904e9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8904ee: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 8904f2: lea edi, [esp + 0x380] */
  edi = (uint32_t)(esp + 0x380u);
/* 8904f9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8904fb: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8904fe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 890503: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 890507: lea edi, [esp + 0x240] */
  edi = (uint32_t)(esp + 0x240u);
/* 89050e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890510: mov ecx, ebp */
  ecx = ebp;
/* 890512: mov byte ptr [esp + 0x3c8], 9 */
  W8((uint32_t)(esp + 0x3c8u), 0x9u);
/* 89051a: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x890520u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 890520: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 890525: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 890527: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89052a: mov ecx, esp */
  ecx = esp;
/* 89052c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89052e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 890531: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 890534: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 890537: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89053a: lea ecx, [esp + 0x30c] */
  ecx = (uint32_t)(esp + 0x30cu);
/* 890541: call 0x6c9160 */
  esp -= 4; W32(esp, 0x890546u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 890546: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89054b: mov esi, eax */
  esi = eax;
/* 89054d: lea edi, [esp + 0x340] */
  edi = (uint32_t)(esp + 0x340u);
/* 890554: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890556: mov esi, eax */
  esi = eax;
/* 890558: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89055d: lea edi, [esp + 0x140] */
  edi = (uint32_t)(esp + 0x140u);
/* 890564: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890566: lea ecx, [ebx + 0x90] */
  ecx = (uint32_t)(ebx + 0x90u);
/* 89056c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89056e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 890571: mov edx, esp */
  edx = esp;
/* 890573: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 890575: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 890578: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89057b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89057e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 890581: lea ecx, [esp + 0x2cc] */
  ecx = (uint32_t)(esp + 0x2ccu);
/* 890588: call 0x6c9160 */
  esp -= 4; W32(esp, 0x89058du); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 89058d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 890592: mov esi, eax */
  esi = eax;
/* 890594: lea edi, [esp + 0x100] */
  edi = (uint32_t)(esp + 0x100u);
/* 89059b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89059d: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8905a0: mov esi, eax */
  esi = eax;
/* 8905a2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8905a7: lea edi, [esp + 0x180] */
  edi = (uint32_t)(esp + 0x180u);
/* 8905ae: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8905b0: mov ecx, ebp */
  ecx = ebp;
/* 8905b2: mov byte ptr [esp + 0x3c8], 0xd */
  W8((uint32_t)(esp + 0x3c8u), 0xdu);
/* 8905ba: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x8905c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8905c0: mov eax, dword ptr [eax + 0x284] */
  eax = R32((uint32_t)(eax + 0x284u));
/* 8905c6: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 8905c9: mov ecx, ebp */
  ecx = ebp;
/* 8905cb: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8905cf: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x8905d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8905d5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8905d9: add eax, 0x288 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x288u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8905de: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8905e1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8905e5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8905e8: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8905ec: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8905f0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8905f2: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 8905fa: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 890602: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 89060a: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 89060e: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 890619: mov dword ptr [esp + 0x88], 0 */
  W32((uint32_t)(esp + 0x88u), 0x0u);
/* 890624: fmul dword ptr [ebx + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x80u)));
/* 89062a: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 890635: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 890639: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 890644: fmul dword ptr [ebx + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x7cu)));
/* 890647: mov dword ptr [esp + 0x94], 0 */
  W32((uint32_t)(esp + 0x94u), 0x0u);
/* 890652: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 890656: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 890661: fmul dword ptr [ebx + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x78u)));
/* 890664: mov dword ptr [esp + 0xa0], 0 */
  W32((uint32_t)(esp + 0xa0u), 0x0u);
/* 89066f: mov dword ptr [esp + 0xa4], 0 */
  W32((uint32_t)(esp + 0xa4u), 0x0u);
/* 89067a: mov dword ptr [esp + 0xa8], 0 */
  W32((uint32_t)(esp + 0xa8u), 0x0u);
/* 890685: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 890689: mov dword ptr [esp + 0xac], 0x3f800000 */
  W32((uint32_t)(esp + 0xacu), 0x3f800000u);
/* 890694: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 89069b: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8906a2: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8906a5: mov edi, esp */
  edi = esp;
/* 8906a7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8906ac: lea esi, [esp + 0x1c0] */
  esi = (uint32_t)(esp + 0x1c0u);
/* 8906b3: lea eax, [esp + 0x240] */
  eax = (uint32_t)(esp + 0x240u);
/* 8906ba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8906bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8906bd: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8906c4: mov byte ptr [esp + 0x40c], 0xe */
  W8((uint32_t)(esp + 0x40cu), 0xeu);
/* 8906cc: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8906d2u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8906d2: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8906d5: mov edi, esp */
  edi = esp;
/* 8906d7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8906dc: lea esi, [esp + 0x180] */
  esi = (uint32_t)(esp + 0x180u);
/* 8906e3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8906e5: lea ecx, [esp + 0x200] */
  ecx = (uint32_t)(esp + 0x200u);
/* 8906ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8906ed: mov ecx, eax */
  ecx = eax;
/* 8906ef: mov byte ptr [esp + 0x40c], 0xf */
  W8((uint32_t)(esp + 0x40cu), 0xfu);
/* 8906f7: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8906fdu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8906fd: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 890700: mov edi, esp */
  edi = esp;
/* 890702: mov ecx, 0x10 */
  ecx = 0x10u;
/* 890707: lea esi, [esp + 0x280] */
  esi = (uint32_t)(esp + 0x280u);
/* 89070e: lea edx, [esp + 0x2c0] */
  edx = (uint32_t)(esp + 0x2c0u);
/* 890715: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890717: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 890718: mov ecx, eax */
  ecx = eax;
/* 89071a: mov byte ptr [esp + 0x40c], 0x10 */
  W8((uint32_t)(esp + 0x40cu), 0x10u);
/* 890722: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x890728u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 890728: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89072d: mov esi, eax */
  esi = eax;
/* 89072f: lea edi, [esp + 0xc0] */
  edi = (uint32_t)(esp + 0xc0u);
/* 890736: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 890738: lea ecx, [esp + 0x280] */
  ecx = (uint32_t)(esp + 0x280u);
/* 89073f: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x890745u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 890745: lea ecx, [esp + 0x1c0] */
  ecx = (uint32_t)(esp + 0x1c0u);
/* 89074c: mov byte ptr [esp + 0x3c8], 0xf */
  W8((uint32_t)(esp + 0x3c8u), 0xfu);
/* 890754: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89075au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89075a: lea ecx, [esp + 0x200] */
  ecx = (uint32_t)(esp + 0x200u);
/* 890761: mov byte ptr [esp + 0x3c8], 0xe */
  W8((uint32_t)(esp + 0x3c8u), 0xeu);
/* 890769: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89076fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89076f: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 890773: mov byte ptr [esp + 0x3c8], 0xd */
  W8((uint32_t)(esp + 0x3c8u), 0xdu);
/* 89077b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x890781u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 890781: lea ecx, [esp + 0x100] */
  ecx = (uint32_t)(esp + 0x100u);
/* 890788: mov byte ptr [esp + 0x3c8], 0xc */
  W8((uint32_t)(esp + 0x3c8u), 0xcu);
/* 890790: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x890796u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 890796: lea ecx, [esp + 0x2c0] */
  ecx = (uint32_t)(esp + 0x2c0u);
/* 89079d: mov byte ptr [esp + 0x3c8], 0xb */
  W8((uint32_t)(esp + 0x3c8u), 0xbu);
/* 8907a5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8907abu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8907ab: lea ecx, [esp + 0x340] */
  ecx = (uint32_t)(esp + 0x340u);
/* 8907b2: mov byte ptr [esp + 0x3c8], 0xa */
  W8((uint32_t)(esp + 0x3c8u), 0xau);
/* 8907ba: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8907c0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8907c0: lea ecx, [esp + 0x300] */
  ecx = (uint32_t)(esp + 0x300u);
/* 8907c7: mov byte ptr [esp + 0x3c8], 9 */
  W8((uint32_t)(esp + 0x3c8u), 0x9u);
/* 8907cf: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8907d5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8907d5: mov byte ptr [esp + 0x3c8], 8 */
  W8((uint32_t)(esp + 0x3c8u), 0x8u);
/* 8907dd: lea ecx, [esp + 0x380] */
  ecx = (uint32_t)(esp + 0x380u);
L_8907e4: /* 8907e4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8907eau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8907ea: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8907ee: mov byte ptr [esp + 0x3c8], 1 */
  W8((uint32_t)(esp + 0x3c8u), 0x1u);
/* 8907f6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8907fcu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8907fc: mov eax, dword ptr [esp + 0xd0] */
  eax = R32((uint32_t)(esp + 0xd0u));
/* 890803: mov ecx, dword ptr [esp + 0xe0] */
  ecx = R32((uint32_t)(esp + 0xe0u));
/* 89080a: mov edx, dword ptr [esp + 0xd4] */
  edx = R32((uint32_t)(esp + 0xd4u));
/* 890811: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 890815: mov eax, dword ptr [esp + 0xe4] */
  eax = R32((uint32_t)(esp + 0xe4u));
/* 89081c: mov dword ptr [esp + 0xbc], eax */
  W32((uint32_t)(esp + 0xbcu), eax);
/* 890823: mov eax, dword ptr [ebp + 0x74] */
  eax = R32((uint32_t)(ebp + 0x74u));
/* 890826: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 890828: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 89082c: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 890833: mov dword ptr [esp + 0xb8], edx */
  W32((uint32_t)(esp + 0xb8u), edx);
/* 89083a: mov edx, dword ptr [esp + 0xe8] */
  edx = R32((uint32_t)(esp + 0xe8u));
/* 890841: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 890845: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 890849: jne 0x890923 */
  if (!zf) goto L_890923;
L_89084f: /* 89084f: mov eax, dword ptr [ebp + 0x78] */
  eax = R32((uint32_t)(ebp + 0x78u));
/* 890852: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 890854: jne 0x890923 */
  if (!zf) goto L_890923;
L_89085a: /* 89085a: fld dword ptr [ebx + 0x8c] */
  { double v = F32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 890860: fchs  */
  ST0 = -ST0;
/* 890862: fld dword ptr [ebx + 0x88] */
  { double v = F32((uint32_t)(ebx + 0x88u)); FPUSH(v); }
/* 890868: fchs  */
  ST0 = -ST0;
/* 89086a: fld dword ptr [ebx + 0x84] */
  { double v = F32((uint32_t)(ebx + 0x84u)); FPUSH(v); }
/* 890870: fchs  */
  ST0 = -ST0;
/* 890872: fmul dword ptr [esp + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc0u)));
/* 890879: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89087d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 89087f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 890881: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 890885: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 890887: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 890889: fadd dword ptr [esp + 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf0u)));
/* 890890: fstp dword ptr [esp + 0xf0] */
  WF32((uint32_t)(esp + 0xf0u), ST0); FPOP();
/* 890897: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 890899: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89089b: fld dword ptr [ebx + 0x8c] */
  { double v = F32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8908a1: fchs  */
  ST0 = -ST0;
/* 8908a3: fld dword ptr [ebx + 0x88] */
  { double v = F32((uint32_t)(ebx + 0x88u)); FPUSH(v); }
/* 8908a9: fchs  */
  ST0 = -ST0;
/* 8908ab: fld dword ptr [ebx + 0x84] */
  { double v = F32((uint32_t)(ebx + 0x84u)); FPUSH(v); }
/* 8908b1: fchs  */
  ST0 = -ST0;
/* 8908b3: fmul dword ptr [esp + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc4u)));
/* 8908ba: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8908c1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8908c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8908c5: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 8908cc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8908ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8908d0: fadd dword ptr [esp + 0xf4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf4u)));
/* 8908d7: fstp dword ptr [esp + 0xf4] */
  WF32((uint32_t)(esp + 0xf4u), ST0); FPOP();
/* 8908de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8908e0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8908e2: fld dword ptr [ebx + 0x8c] */
  { double v = F32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8908e8: fchs  */
  ST0 = -ST0;
/* 8908ea: fld dword ptr [ebx + 0x88] */
  { double v = F32((uint32_t)(ebx + 0x88u)); FPUSH(v); }
/* 8908f0: fchs  */
  ST0 = -ST0;
/* 8908f2: fld dword ptr [ebx + 0x84] */
  { double v = F32((uint32_t)(ebx + 0x84u)); FPUSH(v); }
/* 8908f8: fchs  */
  ST0 = -ST0;
/* 8908fa: fmul dword ptr [esp + 0xc8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc8u)));
/* 890901: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 890905: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 890907: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 890909: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 89090d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 89090f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 890911: fadd dword ptr [esp + 0xf8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf8u)));
/* 890918: fstp dword ptr [esp + 0xf8] */
  WF32((uint32_t)(esp + 0xf8u), ST0); FPOP();
/* 89091f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 890921: fstp st(0) */
  STI(0) = ST0; FPOP();
L_890923: /* 890923: mov ebx, dword ptr [esp + 0x3d0] */
  ebx = R32((uint32_t)(esp + 0x3d0u));
/* 89092a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89092f: lea esi, [esp + 0xc0] */
  esi = (uint32_t)(esp + 0xc0u);
/* 890936: mov edi, ebx */
  edi = ebx;
/* 890938: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89093a: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 890941: mov dword ptr [esp + 0xb0], 1 */
  W32((uint32_t)(esp + 0xb0u), 0x1u);
/* 89094c: mov byte ptr [esp + 0x3c8], 0 */
  W8((uint32_t)(esp + 0x3c8u), 0x0u);
/* 890954: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89095au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89095a: mov ecx, dword ptr [esp + 0x3c0] */
  ecx = R32((uint32_t)(esp + 0x3c0u));
/* 890961: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 890962: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 890963: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 890964: mov eax, ebx */
  eax = ebx;
/* 890966: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89096d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89096e: add esp, 0x3bc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 890974: ret 4 */
  esp += 8; SPILL(); return;
}

void f_890ba0(void) {
  LOAD_REGS();
L_890ba0: /* 890ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 890ba1: mov ebp, esp */
  ebp = esp;
/* 890ba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 890ba5: push 0x9d56f0 */
  { uint32_t v = 0x9d56f0u; esp -= 4; W32(esp, v); }
/* 890baa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 890bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 890bb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 890bb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 890bbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 890bbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 890bbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 890bbe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 890bc1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890bc3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 890bc6: mov ebx, ecx */
  ebx = ecx;
/* 890bc8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 890bcf: jl 0x890c5c */
  if ((sf != of)) goto L_890c5c;
L_890bd5: /* 890bd5: cmp edi, dword ptr [ebx + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890bdb: jge 0x890c5c */
  if ((sf == of)) goto L_890c5c;
L_890bdd: /* 890bdd: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 890be0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890be2: jl 0x890c5c */
  if ((sf != of)) goto L_890c5c;
L_890be4: /* 890be4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 890be5: call 0x6c2b21 */
  esp -= 4; W32(esp, 0x890beau); SPILL(); f_6c2b21(); if (g_unwind) return; RELOAD();
/* 890bea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 890bec: je 0x890c5c */
  if (zf) goto L_890c5c;
L_890bee: /* 890bee: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 890bf4: imul edi, edi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x70u);
  edi = (uint32_t)r;
  }
/* 890bf7: imul esi, esi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x70u);
  esi = (uint32_t)r;
  }
/* 890bfa: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 890bfc: mov eax, edi */
  eax = edi;
/* 890bfe: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 890c01: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 890c03: mov ecx, esi */
  ecx = esi;
/* 890c05: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 890c08: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 890c0b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 890c0e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 890c11: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 890c14: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 890c17: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 890c1a: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 890c1d: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 890c20: mov edx, dword ptr [eax + 0x4c] */
  edx = R32((uint32_t)(eax + 0x4cu));
/* 890c23: mov dword ptr [ecx + 0x4c], edx */
  W32((uint32_t)(ecx + 0x4cu), edx);
/* 890c26: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 890c29: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 890c2c: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 890c2f: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 890c32: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 890c35: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 890c38: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 890c3b: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 890c3e: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 890c41: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 890c44: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 890c47: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 890c4a: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 890c4d: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 890c50: mov edx, dword ptr [eax + 0x5c] */
  edx = R32((uint32_t)(eax + 0x5cu));
/* 890c53: mov dword ptr [ecx + 0x5c], edx */
  W32((uint32_t)(ecx + 0x5cu), edx);
/* 890c56: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 890c59: mov dword ptr [ecx + 0x58], eax */
  W32((uint32_t)(ecx + 0x58u), eax);
L_890c5c: /* 890c5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 890c5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 890c60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 890c61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 890c68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 890c69: mov esp, ebp */
  esp = ebp;
/* 890c6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 890c6c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_890c6f(void) {
  LOAD_REGS();
L_890c6f: /* 890c6f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 890c72: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 890c77: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 890c7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 890c7b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 890c7e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x890c83u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_890c83(); return;
}

void f_890c83(void) {
  LOAD_REGS();
L_890c83: /* 890c83: push 0xa1a048 */
  { uint32_t v = 0xa1a048u; esp -= 4; W32(esp, v); }
/* 890c88: push 0xae8104 */
  { uint32_t v = 0xae8104u; esp -= 4; W32(esp, v); }
/* 890c8d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x890c93u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 890c93: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 890c96: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 890c98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 890c9a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x890c9fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_890c9f: guest_badaddr(0x890c9f); return;
}

void f_890ce0(void) {
  LOAD_REGS();
L_890ce0: /* 890ce0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 890ce4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890ce6: jl 0x890d07 */
  if ((sf != of)) goto L_890d07;
L_890ce8: /* 890ce8: cmp eax, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890cee: jge 0x890d07 */
  if ((sf == of)) goto L_890d07;
L_890cf0: /* 890cf0: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 890cf6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 890cfa: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 890cfd: fmul dword ptr [eax + edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + edx + 0x20u)));
/* 890d01: fstp dword ptr [eax + edx + 0xc] */
  WF32((uint32_t)(eax + edx + 0xcu), ST0); FPOP();
/* 890d05: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_890d07: /* 890d07: ret 8 */
  esp += 12; SPILL(); return;
}

void f_890d20(void) {
  LOAD_REGS();
L_890d20: /* 890d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 890d24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890d26: jl 0x890d41 */
  if ((sf != of)) goto L_890d41;
L_890d28: /* 890d28: cmp eax, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890d2e: jge 0x890d41 */
  if ((sf == of)) goto L_890d41;
L_890d30: /* 890d30: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 890d36: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 890d3a: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 890d3d: fstp dword ptr [ecx + eax + 0xc] */
  WF32((uint32_t)(ecx + eax + 0xcu), ST0); FPOP();
L_890d41: /* 890d41: ret 8 */
  esp += 12; SPILL(); return;
}

void f_890d60(void) {
  LOAD_REGS();
L_890d60: /* 890d60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 890d64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890d66: jl 0x890dbe */
  if ((sf != of)) goto L_890dbe;
L_890d68: /* 890d68: cmp eax, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890d6e: jge 0x890dbe */
  if ((sf == of)) goto L_890dbe;
L_890d70: /* 890d70: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 890d74: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 890d7a: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 890d7d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 890d83: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 890d85: mov ecx, eax */
  ecx = eax;
/* 890d87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 890d89: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 890d8c: jp 0x890d9a */
  if (pf) goto L_890d9a;
L_890d8e: /* 890d8e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 890d94: fstp dword ptr [ecx + 0x4c] */
  WF32((uint32_t)(ecx + 0x4cu), ST0); FPOP();
/* 890d97: ret 8 */
  esp += 12; SPILL(); return;
L_890d9a: /* 890d9a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 890d9e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 890da4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 890da6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 890da9: jp 0x890db5 */
  if (pf) goto L_890db5;
L_890dab: /* 890dab: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 890daf: fstp dword ptr [ecx + 0x4c] */
  WF32((uint32_t)(ecx + 0x4cu), ST0); FPOP();
/* 890db2: ret 8 */
  esp += 12; SPILL(); return;
L_890db5: /* 890db5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 890dbb: fstp dword ptr [ecx + 0x4c] */
  WF32((uint32_t)(ecx + 0x4cu), ST0); FPOP();
L_890dbe: /* 890dbe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_890df0(void) {
  LOAD_REGS();
L_890df0: /* 890df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 890df4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890df6: jl 0x890e10 */
  if ((sf != of)) goto L_890e10;
L_890df8: /* 890df8: cmp eax, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890dfe: jge 0x890e10 */
  if ((sf == of)) goto L_890e10;
L_890e00: /* 890e00: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 890e06: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 890e09: fld dword ptr [ecx + eax + 0x4c] */
  { double v = F32((uint32_t)(ecx + eax + 0x4cu)); FPUSH(v); }
/* 890e0d: ret 4 */
  esp += 8; SPILL(); return;
L_890e10: /* 890e10: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 890e16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_890e30(void) {
  LOAD_REGS();
L_890e30: /* 890e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 890e31: mov ebp, esp */
  ebp = esp;
/* 890e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 890e35: push 0x9d5700 */
  { uint32_t v = 0x9d5700u; esp -= 4; W32(esp, v); }
/* 890e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 890e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 890e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 890e48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 890e4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 890e4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890e50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 890e51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 890e52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 890e53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 890e56: mov esi, ecx */
  esi = ecx;
/* 890e58: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 890e5f: jl 0x890e83 */
  if ((sf != of)) goto L_890e83;
L_890e61: /* 890e61: cmp eax, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890e67: jge 0x890e83 */
  if ((sf == of)) goto L_890e83;
L_890e69: /* 890e69: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 890e6f: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 890e72: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 890e74: mov edi, eax */
  edi = eax;
/* 890e76: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 890e79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 890e7b: jne 0x890e96 */
  if (!zf) goto L_890e96;
L_890e7d: /* 890e7d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 890e80: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
L_890e83: /* 890e83: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 890e86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 890e8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 890e8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 890e8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 890e90: mov esp, ebp */
  esp = ebp;
/* 890e92: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 890e93: ret 0xc */
  esp += 16; SPILL(); return;
L_890e96: /* 890e96: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 890e99: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 890e9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 890e9c: mov ecx, esi */
  ecx = esi;
/* 890e9e: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x890ea4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 890ea4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 890ea6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 890ea7: mov ecx, esi */
  ecx = esi;
/* 890ea9: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x890eafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 890eaf: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 890eb5: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 890eb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 890eba: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 890ebd: jne 0x890ede */
  if (!zf) goto L_890ede;
L_890ebf: /* 890ebf: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 890ec5: fdivr dword ptr [ebp + 0xc] */
  ST0 = (F32((uint32_t)(ebp + 0xcu))) / ST0;
/* 890ec8: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 890ecb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 890ece: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 890ed5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 890ed6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 890ed7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 890ed8: mov esp, ebp */
  esp = ebp;
/* 890eda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 890edb: ret 0xc */
  esp += 16; SPILL(); return;
L_890ede: /* 890ede: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 890ee1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 890ee3: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 890ee6: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 890ee9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 890eea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 890eeb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 890ef2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 890ef3: mov esp, ebp */
  esp = ebp;
/* 890ef5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 890ef6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_890ef9(void) {
  LOAD_REGS();
L_890ef9: /* 890ef9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 890efc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 890f01: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 890f04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 890f05: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 890f08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x890f0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_890f0d(); return;
}

void f_890f0d(void) {
  LOAD_REGS();
L_890f0d: /* 890f0d: push 0xa1a0a0 */
  { uint32_t v = 0xa1a0a0u; esp -= 4; W32(esp, v); }
/* 890f12: push 0xae812c */
  { uint32_t v = 0xae812cu; esp -= 4; W32(esp, v); }
/* 890f17: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x890f1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 890f1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 890f20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 890f22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 890f24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x890f29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_890f29: guest_badaddr(0x890f29); return;
}

void f_890f70(void) {
  LOAD_REGS();
L_890f70: /* 890f70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 890f74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890f76: jl 0x890f90 */
  if ((sf != of)) goto L_890f90;
L_890f78: /* 890f78: cmp eax, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890f7e: jge 0x890f90 */
  if ((sf == of)) goto L_890f90;
L_890f80: /* 890f80: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 890f86: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 890f89: fld dword ptr [ecx + eax + 0x10] */
  { double v = F32((uint32_t)(ecx + eax + 0x10u)); FPUSH(v); }
/* 890f8d: ret 4 */
  esp += 8; SPILL(); return;
L_890f90: /* 890f90: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 890f96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_890fb0(void) {
  LOAD_REGS();
L_890fb0: /* 890fb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 890fb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 890fb6: jl 0x891011 */
  if ((sf != of)) goto L_891011;
L_890fb8: /* 890fb8: cmp eax, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 890fbe: jge 0x891011 */
  if ((sf == of)) goto L_891011;
L_890fc0: /* 890fc0: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 890fc6: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 890fca: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 890fcd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 890fcf: mov ecx, eax */
  ecx = eax;
/* 890fd1: fld dword ptr [ecx + 0x4c] */
  { double v = F32((uint32_t)(ecx + 0x4cu)); FPUSH(v); }
/* 890fd4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 890fd6: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 890fdc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 890fde: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 890fe1: je 0x890fe5 */
  if (zf) goto L_890fe5;
L_890fe3: /* 890fe3: fchs  */
  ST0 = -ST0;
L_890fe5: /* 890fe5: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 890fe9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 890feb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 890fee: jnp 0x89100e */
  if (!pf) goto L_89100e;
L_890ff0: /* 890ff0: fcomp dword ptr [ecx + 0x4c] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4cu)));
  FPOP();
/* 890ff3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 890ff5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 890ff8: jne 0x891007 */
  if (!zf) goto L_891007;
L_890ffa: /* 890ffa: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 890ffe: fadd dword ptr [ecx + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4cu)));
/* 891001: fstp dword ptr [ecx + 0x4c] */
  WF32((uint32_t)(ecx + 0x4cu), ST0); FPOP();
/* 891004: ret 0xc */
  esp += 16; SPILL(); return;
L_891007: /* 891007: fld dword ptr [ecx + 0x4c] */
  { double v = F32((uint32_t)(ecx + 0x4cu)); FPUSH(v); }
/* 89100a: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
L_89100e: /* 89100e: fstp dword ptr [ecx + 0x4c] */
  WF32((uint32_t)(ecx + 0x4cu), ST0); FPOP();
L_891011: /* 891011: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_891040(void) {
  LOAD_REGS();
L_891040: /* 891040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891041: mov ebp, esp */
  ebp = esp;
/* 891043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 891045: push 0x9d5710 */
  { uint32_t v = 0x9d5710u; esp -= 4; W32(esp, v); }
/* 89104a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 891050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 891058: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89105b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89105e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891061: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891062: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891063: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 891066: mov esi, ecx */
  esi = ecx;
/* 891068: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 89106f: jl 0x8910c2 */
  if ((sf != of)) goto L_8910c2;
L_891071: /* 891071: cmp eax, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891077: jge 0x8910c2 */
  if ((sf == of)) goto L_8910c2;
L_891079: /* 891079: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 89107f: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 891082: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 891084: mov ebx, eax */
  ebx = eax;
/* 891086: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 891089: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 89108c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89108e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89108f: mov ecx, esi */
  ecx = esi;
/* 891091: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x891097u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 891097: mov edi, eax */
  edi = eax;
/* 891099: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89109b: je 0x8910d5 */
  if (zf) goto L_8910d5;
L_89109d: /* 89109d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89109f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8910a0: mov ecx, esi */
  ecx = esi;
/* 8910a2: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x8910a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8910a8: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8910ab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8910ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8910ae: mov ecx, esi */
  ecx = esi;
/* 8910b0: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8910b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8910b6: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 8910b9: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8910bc: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* 8910bf: fstp dword ptr [ebx + 0x20] */
  WF32((uint32_t)(ebx + 0x20u), ST0); FPOP();
L_8910c2: /* 8910c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8910c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8910cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8910cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8910ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8910cf: mov esp, ebp */
  esp = ebp;
/* 8910d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8910d2: ret 8 */
  esp += 12; SPILL(); return;
L_8910d5: /* 8910d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8910d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8910d9: mov dword ptr [ebx + 0x20], 0 */
  W32((uint32_t)(ebx + 0x20u), 0x0u);
/* 8910e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8910e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8910e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8910e9: mov esp, ebp */
  esp = ebp;
/* 8910eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8910ec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8910ef(void) {
  LOAD_REGS();
L_8910ef: /* 8910ef: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8910f2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8910f7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8910fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8910fb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8910fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x891103u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_891103(); return;
}

void f_891103(void) {
  LOAD_REGS();
L_891103: /* 891103: push 0xa1a0f8 */
  { uint32_t v = 0xa1a0f8u; esp -= 4; W32(esp, v); }
/* 891108: push 0xae8144 */
  { uint32_t v = 0xae8144u; esp -= 4; W32(esp, v); }
/* 89110d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x891113u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 891113: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891116: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891118: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89111a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89111fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89111f: guest_badaddr(0x89111f); return;
}

void f_891160(void) {
  LOAD_REGS();
L_891160: /* 891160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891161: mov ebp, esp */
  ebp = esp;
/* 891163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 891165: push 0x9d5720 */
  { uint32_t v = 0x9d5720u; esp -= 4; W32(esp, v); }
/* 89116a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 891170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 891178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89117b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89117e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891180: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891182: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891183: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 891186: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 89118d: jl 0x8911bc */
  if ((sf != of)) goto L_8911bc;
L_89118f: /* 89118f: cmp eax, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891195: jge 0x8911bc */
  if ((sf == of)) goto L_8911bc;
L_891197: /* 891197: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 89119d: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 8911a0: mov edx, dword ptr [ecx + eax + 8] */
  edx = R32((uint32_t)(ecx + eax + 0x8u));
/* 8911a4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8911a7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8911a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8911ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8911b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8911b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8911b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8911b6: mov esp, ebp */
  esp = ebp;
/* 8911b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8911b9: ret 8 */
  esp += 12; SPILL(); return;
L_8911bc: /* 8911bc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8911bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8911c1: mov ecx, esi */
  ecx = esi;
/* 8911c3: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8911c9u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8911c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8911cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8911cd: mov eax, esi */
  eax = esi;
/* 8911cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8911d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8911d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8911d8: mov esp, ebp */
  esp = ebp;
/* 8911da: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8911db: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8911de(void) {
  LOAD_REGS();
L_8911de: /* 8911de: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8911e1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8911e6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8911e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8911ea: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8911ed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8911f2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8911f2(); return;
}

void f_8911f2(void) {
  LOAD_REGS();
L_8911f2: /* 8911f2: push 0xa1a158 */
  { uint32_t v = 0xa1a158u; esp -= 4; W32(esp, v); }
/* 8911f7: push 0xae814c */
  { uint32_t v = 0xae814cu; esp -= 4; W32(esp, v); }
/* 8911fc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x891202u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 891202: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891205: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891207: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891209: call 0x99caf8 */
  esp -= 4; W32(esp, 0x89120eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_89120e: guest_badaddr(0x89120e); return;
}

void f_891240(void) {
  LOAD_REGS();
L_891240: /* 891240: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 891244: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891246: jl 0x891250 */
  if ((sf != of)) goto L_891250;
L_891248: /* 891248: cmp edx, dword ptr [ecx + 0xfc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89124e: jl 0x891261 */
  if ((sf != of)) goto L_891261;
L_891250: /* 891250: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 891254: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 89125a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89125c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89125f: je 0x891281 */
  if (zf) goto L_891281;
L_891261: /* 891261: mov eax, dword ptr [ecx + 0xf8] */
  eax = R32((uint32_t)(ecx + 0xf8u));
/* 891267: imul edx, edx, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x70u);
  edx = (uint32_t)r;
  }
/* 89126a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 89126e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 891270: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 891274: mov dword ptr [edx + 0x5c], eax */
  W32((uint32_t)(edx + 0x5cu), eax);
/* 891277: mov dword ptr [edx + 0x58], ecx */
  W32((uint32_t)(edx + 0x58u), ecx);
/* 89127a: mov dword ptr [edx + 0x38], 1 */
  W32((uint32_t)(edx + 0x38u), 0x1u);
L_891281: /* 891281: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8912b0(void) {
  LOAD_REGS();
L_8912b0: /* 8912b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8912b1: mov ebp, esp */
  ebp = esp;
/* 8912b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8912b5: push 0x9d5730 */
  { uint32_t v = 0x9d5730u; esp -= 4; W32(esp, v); }
/* 8912ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8912c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8912c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8912c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8912cb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8912d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8912d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8912d2: mov esi, ecx */
  esi = ecx;
/* 8912d4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8912d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8912d8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8912db: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8912e2: je 0x891309 */
  if (zf) goto L_891309;
L_8912e4: /* 8912e4: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 8912e7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8912e9: je 0x891309 */
  if (zf) goto L_891309;
L_8912eb: /* 8912eb: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8912f1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8912f1: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8912f7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8912f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8912fa: push 0xae827c */
  { uint32_t v = 0xae827cu; esp -= 4; W32(esp, v); }
/* 8912ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891300: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891306u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891306: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891309: /* 891309: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 89130c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89130e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 891311: je 0x89138a */
  if (zf) goto L_89138a;
L_891313: /* 891313: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 891316: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891318: je 0x89138a */
  if (zf) goto L_89138a;
L_89131a: /* 89131a: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 891320: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 891323: mov edi, dword ptr [edx + 0x34] */
  edi = R32((uint32_t)(edx + 0x34u));
/* 891326: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891328: je 0x89138a */
  if (zf) goto L_89138a;
L_89132a: /* 89132a: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 89132d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89132f: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 891332: je 0x89133c */
  if (zf) goto L_89133c;
L_891334: /* 891334: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 891337: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 89133a: jmp 0x891347 */
  goto L_891347;
L_89133c: /* 89133c: mov edx, dword ptr [0xcfab64] */
  edx = R32((uint32_t)(0xcfab64u));
/* 891342: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 891344: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_891347: /* 891347: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 89134a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 89134d: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 891350: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891352: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 891355: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891357: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89135b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 891360: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891362: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 891365: lea esi, [eax + 0x170] */
  esi = (uint32_t)(eax + 0x170u);
/* 89136b: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 89136d: mov edi, esp */
  edi = esp;
/* 89136f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 891371: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 891374: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 891377: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 89137a: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 89137d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 891380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891381: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891384: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x89138au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89138a: /* 89138a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89138d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89138e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89138f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 891396: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891397: mov esp, ebp */
  esp = ebp;
/* 891399: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 89139a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_89139d(void) {
  LOAD_REGS();
L_89139d: /* 89139d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8913a0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8913a5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8913a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8913a9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8913ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8913b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8913b1(); return;
}

void f_8913b1(void) {
  LOAD_REGS();
L_8913b1: /* 8913b1: push 0xa1a1b8 */
  { uint32_t v = 0xa1a1b8u; esp -= 4; W32(esp, v); }
/* 8913b6: push 0xae82b8 */
  { uint32_t v = 0xae82b8u; esp -= 4; W32(esp, v); }
/* 8913bb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8913c1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8913c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8913c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8913c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8913c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8913cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8913cd: guest_badaddr(0x8913cd); return;
}

void f_891420(void) {
  LOAD_REGS();
L_891420: /* 891420: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891421: mov ebp, esp */
  ebp = esp;
/* 891423: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 891425: push 0x9d5740 */
  { uint32_t v = 0x9d5740u; esp -= 4; W32(esp, v); }
/* 89142a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 891430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891431: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 891438: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89143b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 891440: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891442: mov esi, ecx */
  esi = ecx;
/* 891444: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 891447: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891448: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 89144b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 891452: je 0x89148c */
  if (zf) goto L_89148c;
L_891454: /* 891454: mov ecx, esi */
  ecx = esi;
/* 891456: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89145cu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89145c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 891462: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891464: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891465: push 0xae8388 */
  { uint32_t v = 0xae8388u; esp -= 4; W32(esp, v); }
/* 89146a: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 89146f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891470: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x891476u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 891476: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891479: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 89147c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 891483: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891484: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891485: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891486: mov esp, ebp */
  esp = ebp;
/* 891488: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891489: ret 8 */
  esp += 12; SPILL(); return;
L_89148c: /* 89148c: mov ecx, dword ptr [0xb7e4a8] */
  ecx = R32((uint32_t)(0xb7e4a8u));
/* 891492: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 891495: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891497: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 891498: mov ecx, esi */
  ecx = esi;
/* 89149a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 89149d: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x8914a3u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 8914a3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8914a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8914a7: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8914aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8914ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8914ac: mov ecx, esi */
  ecx = esi;
/* 8914ae: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x8914b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8914b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8914b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8914b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8914b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8914bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8914be: mov esp, ebp */
  esp = ebp;
/* 8914c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8914c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8914c4(void) {
  LOAD_REGS();
L_8914c4: /* 8914c4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8914c7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8914cc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8914cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8914d0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8914d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8914d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8914d8(); return;
}

void f_8914d8(void) {
  LOAD_REGS();
L_8914d8: /* 8914d8: push 0xa1a1f8 */
  { uint32_t v = 0xa1a1f8u; esp -= 4; W32(esp, v); }
/* 8914dd: push 0xae83d8 */
  { uint32_t v = 0xae83d8u; esp -= 4; W32(esp, v); }
/* 8914e2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8914e8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8914e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8914eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8914ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8914ef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8914f4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8914f4: guest_badaddr(0x8914f4); return;
}

void f_891540(void) {
  LOAD_REGS();
L_891540: /* 891540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891543: mov edi, ecx */
  edi = ecx;
/* 891545: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 891548: xor esi, esi */
  esi = 0;
/* 89154a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89154c: jle 0x89156a */
  if ((zf || sf != of)) goto L_89156a;
L_89154e: /* 89154e: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_891552: /* 891552: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 891554: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891555: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 891558: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x89155eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 89155e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891560: jne 0x891573 */
  if (!zf) goto L_891573;
L_891562: /* 891562: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 891565: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 891566: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891568: jl 0x891552 */
  if ((sf != of)) goto L_891552;
L_89156a: /* 89156a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 89156b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89156c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 89156f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891570: ret 4 */
  esp += 8; SPILL(); return;
L_891573: /* 891573: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891574: mov eax, esi */
  eax = esi;
/* 891576: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891577: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891578: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891590(void) {
  LOAD_REGS();
L_891590: /* 891590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891592: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 891594: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 891596: mov esi, ecx */
  esi = ecx;
/* 891598: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x89159eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 89159e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8915a0: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8915a4: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 8915a7: shl edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8915aa: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8915ac: mov ecx, 0xc */
  ecx = 0xcu;
/* 8915b1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8915b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8915b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8915b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8915d0(void) {
  LOAD_REGS();
L_8915d0: /* 8915d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8915d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8915d5: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8915d7: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8915ddu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8915dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8915f0(void) {
  LOAD_REGS();
L_8915f0: /* 8915f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8915f1: mov esi, ecx */
  esi = ecx;
/* 8915f3: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x8915f9u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 8915f9: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8915fc: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x891602u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 891602: mov eax, esi */
  eax = esi;
/* 891604: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891605: ret  */
  esp += 4; SPILL(); return;
}

void f_891620(void) {
  LOAD_REGS();
L_891620: /* 891620: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891621: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891622: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 891628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891629: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89162a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 89162e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891630: mov esi, ecx */
  esi = ecx;
/* 891632: jge 0x891648 */
  if ((sf == of)) goto L_891648;
L_891634: /* 891634: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 891639: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 89163e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 891643: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x891645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 891645: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891648: /* 891648: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89164b: jle 0x891661 */
  if ((zf || sf != of)) goto L_891661;
L_89164d: /* 89164d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 891652: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 891657: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 89165c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x89165eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89165e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891661: /* 891661: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 891665: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 891668: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 89166b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89166d: jle 0x891683 */
  if ((zf || sf != of)) goto L_891683;
L_89166f: /* 89166f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 891674: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 891679: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 89167e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x891680u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 891680: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891683: /* 891683: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 891685: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891686: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891687: mov ecx, esi */
  ecx = esi;
/* 891689: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x89168fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 89168f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891690: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891691: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891692: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891693: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8916c0(void) {
  LOAD_REGS();
L_8916c0: /* 8916c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8916c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8916c2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 8916c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8916c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8916ca: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 8916ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8916d0: mov esi, ecx */
  esi = ecx;
/* 8916d2: jge 0x8916e8 */
  if ((sf == of)) goto L_8916e8;
L_8916d4: /* 8916d4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8916d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8916de: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8916e3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8916e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8916e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8916e8: /* 8916e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8916eb: jle 0x891701 */
  if ((zf || sf != of)) goto L_891701;
L_8916ed: /* 8916ed: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8916f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8916f7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8916fc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x8916feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8916fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891701: /* 891701: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 891705: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 891708: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 89170b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89170d: jle 0x891723 */
  if ((zf || sf != of)) goto L_891723;
L_89170f: /* 89170f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 891714: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 891719: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 89171e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x891720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 891720: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891723: /* 891723: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 891725: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891726: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891727: mov ecx, esi */
  ecx = esi;
/* 891729: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x89172fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 89172f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891730: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891731: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891732: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891733: ret 8 */
  esp += 12; SPILL(); return;
}

void f_891760(void) {
  LOAD_REGS();
L_891760: /* 891760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891761: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 891765: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891767: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891769: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 89176f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891770: mov ebp, ecx */
  ebp = ecx;
/* 891772: jge 0x891788 */
  if ((sf == of)) goto L_891788;
L_891774: /* 891774: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 891779: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 89177e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 891783: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x891785u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 891785: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891788: /* 891788: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89178b: jle 0x8917a1 */
  if ((zf || sf != of)) goto L_8917a1;
L_89178d: /* 89178d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 891792: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 891797: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 89179c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x89179eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89179e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8917a1: /* 8917a1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8917a5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 8917a8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8917ab: jle 0x8917c1 */
  if ((zf || sf != of)) goto L_8917c1;
L_8917ad: /* 8917ad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8917b2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8917b7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8917bc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8917beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8917be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8917c1: /* 8917c1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8917c3: jge 0x8917e1 */
  if ((sf == of)) goto L_8917e1;
L_8917c5: /* 8917c5: mov esi, ebx */
  esi = ebx;
/* 8917c7: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8917ca: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8917cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8917d0: /* 8917d0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8917d3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8917d5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8917dbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8917db: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8917de: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8917df: jne 0x8917d0 */
  if (!zf) goto L_8917d0;
L_8917e1: /* 8917e1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8917e5: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8917e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8917e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8917e9: mov ecx, ebp */
  ecx = ebp;
/* 8917eb: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8917f1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8917f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8917f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8917f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8917f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8917f5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_891830(void) {
  LOAD_REGS();
L_891830: /* 891830: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 891834: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891837: mov esi, ecx */
  esi = ecx;
/* 891839: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 89183b: je 0x89184e */
  if (zf) goto L_89184e;
L_89183d: /* 89183d: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 891840: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 891843: call 0x6c1212 */
  esp -= 4; W32(esp, 0x891848u); SPILL(); f_6c1212(); if (g_unwind) return; RELOAD();
/* 891848: mov eax, esi */
  eax = esi;
/* 89184a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89184b: ret 4 */
  esp += 8; SPILL(); return;
L_89184e: /* 89184e: xor eax, eax */
  eax = 0;
/* 891850: mov ecx, esi */
  ecx = esi;
/* 891852: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 891855: call 0x6c1212 */
  esp -= 4; W32(esp, 0x89185au); SPILL(); f_6c1212(); if (g_unwind) return; RELOAD();
/* 89185a: mov eax, esi */
  eax = esi;
/* 89185c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 89185d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891870(void) {
  LOAD_REGS();
L_891870: /* 891870: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 891873: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 891876: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 891879: jmp 0x6c1212 */
  SPILL(); f_6c1212(); return;
}

void f_891890(void) {
  LOAD_REGS();
L_891890: /* 891890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891891: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891892: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891894: mov esi, ecx */
  esi = ecx;
/* 891896: mov dword ptr [esi], 0xa1a240 */
  W32((uint32_t)(esi), 0xa1a240u);
/* 89189c: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8918a2: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8918a5: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8918a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8918aa: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8918af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8918b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8918b1: call 0x99c910 */
  esp -= 4; W32(esp, 0x8918b6u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8918b6: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8918bb: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8918be: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8918c1: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8918c4: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8918ca: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8918cd: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8918d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8918d1: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 8918d7: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 8918dd: mov eax, esi */
  eax = esi;
/* 8918df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8918e0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8918e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8918e2: ret  */
  esp += 4; SPILL(); return;
}

void f_891910(void) {
  LOAD_REGS();
L_891910: /* 891910: mov eax, dword ptr [ecx + 0x94] */
  eax = R32((uint32_t)(ecx + 0x94u));
/* 891916: mov edx, dword ptr [ecx + 0x98] */
  edx = R32((uint32_t)(ecx + 0x98u));
/* 89191c: ret  */
  esp += 4; SPILL(); return;
}

void f_891930(void) {
  LOAD_REGS();
L_891930: /* 891930: mov eax, 1 */
  eax = 0x1u;
/* 891935: ret  */
  esp += 4; SPILL(); return;
}

void f_891950(void) {
  LOAD_REGS();
L_891950: /* 891950: mov eax, 0x90 */
  eax = 0x90u;
/* 891955: ret  */
  esp += 4; SPILL(); return;
}

void f_891970(void) {
  LOAD_REGS();
L_891970: /* 891970: mov eax, 0x24 */
  eax = 0x24u;
/* 891975: ret  */
  esp += 4; SPILL(); return;
}

void f_891990(void) {
  LOAD_REGS();
L_891990: /* 891990: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 891994: mov eax, 1 */
  eax = 0x1u;
/* 891999: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 89199b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89199e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8919a1: mov eax, 4 */
  eax = 0x4u;
/* 8919a6: mov edx, 2 */
  edx = 0x2u;
/* 8919ab: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 8919b2: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 8919b5: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 8919b8: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 8919bb: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 8919be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8919e0(void) {
  LOAD_REGS();
L_8919e0: /* 8919e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8919e4: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* 8919e9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8919ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8919ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8919ee: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8919f3u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8919f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8919f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891a10(void) {
  LOAD_REGS();
L_891a10: /* 891a10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 891a14: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 891a18: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 891a1b: lea ecx, [ecx + eax*4 + 4] */
  ecx = (uint32_t)(ecx + eax*4 + 0x4u);
/* 891a1f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 891a21: ret 8 */
  esp += 12; SPILL(); return;
}

void f_891a40(void) {
  LOAD_REGS();
L_891a40: /* 891a40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891a41: mov ebp, esp */
  ebp = esp;
/* 891a43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 891a45: push 0x9d5750 */
  { uint32_t v = 0x9d5750u; esp -= 4; W32(esp, v); }
/* 891a4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 891a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891a51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 891a58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 891a5b: mov eax, dword ptr [0xcfa5f4] */
  eax = R32((uint32_t)(0xcfa5f4u));
/* 891a60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891a61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891a62: mov esi, ecx */
  esi = ecx;
/* 891a64: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 891a67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891a68: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 891a6b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 891a72: jne 0x891ad4 */
  if (!zf) goto L_891ad4;
L_891a74: /* 891a74: mov eax, dword ptr [esi + 0x32c] */
  eax = R32((uint32_t)(esi + 0x32cu));
/* 891a7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891a7c: jle 0x891ab9 */
  if ((zf || sf != of)) goto L_891ab9;
L_891a7e: /* 891a7e: xor edi, edi */
  edi = 0;
L_891a80: /* 891a80: cmp edi, dword ptr [esi + 0x32c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891a86: jge 0x891a9f */
  if ((sf == of)) goto L_891a9f;
L_891a88: /* 891a88: mov ecx, dword ptr [esi + 0x328] */
  ecx = R32((uint32_t)(esi + 0x328u));
/* 891a8e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 891a91: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891a93: je 0x891a9c */
  if (zf) goto L_891a9c;
L_891a95: /* 891a95: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891a97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 891a99: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x891a9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_891a9c: /* 891a9c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 891a9d: jmp 0x891a80 */
  goto L_891a80;
L_891a9f: /* 891a9f: lea ecx, [esi + 0x328] */
  ecx = (uint32_t)(esi + 0x328u);
/* 891aa5: xor eax, eax */
  eax = 0;
L_891aa7: /* 891aa7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891aaa: jge 0x891aaf */
  if ((sf == of)) goto L_891aaf;
L_891aac: /* 891aac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 891aad: jmp 0x891aa7 */
  goto L_891aa7;
L_891aaf: /* 891aaf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891ab1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 891ab3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x891ab9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_891ab9: /* 891ab9: mov ecx, dword ptr [esi + 0x334] */
  ecx = R32((uint32_t)(esi + 0x334u));
/* 891abf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891ac1: je 0x891ad4 */
  if (zf) goto L_891ad4;
L_891ac3: /* 891ac3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 891ac5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 891ac7: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x891acau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 891aca: mov dword ptr [esi + 0x334], 0 */
  W32((uint32_t)(esi + 0x334u), 0x0u);
L_891ad4: /* 891ad4: mov ecx, esi */
  ecx = esi;
/* 891ad6: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x891adcu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 891adc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 891adf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891ae0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891ae1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 891ae8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891ae9: mov esp, ebp */
  esp = ebp;
/* 891aeb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891aec: ret  */
  esp += 4; SPILL(); return;
}

void f_891aed(void) {
  LOAD_REGS();
L_891aed: /* 891aed: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 891af0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 891af5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 891af8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891af9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 891afc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x891b01u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_891b01(); return;
}

void f_891b01(void) {
  LOAD_REGS();
L_891b01: /* 891b01: push 0xa1a26c */
  { uint32_t v = 0xa1a26cu; esp -= 4; W32(esp, v); }
/* 891b06: push 0xae7674 */
  { uint32_t v = 0xae7674u; esp -= 4; W32(esp, v); }
/* 891b0b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x891b11u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 891b11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891b14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891b16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891b18: call 0x99caf8 */
  esp -= 4; W32(esp, 0x891b1du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_891b1d: guest_badaddr(0x891b1d); return;
}

void f_891b60(void) {
  LOAD_REGS();
L_891b60: /* 891b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891b61: mov ebp, esp */
  ebp = esp;
/* 891b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 891b65: push 0x9d5768 */
  { uint32_t v = 0x9d5768u; esp -= 4; W32(esp, v); }
/* 891b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 891b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 891b78: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 891b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891b7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891b7e: mov ebx, ecx */
  ebx = ecx;
/* 891b80: xor edi, edi */
  edi = 0;
/* 891b82: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 891b85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 891b88: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 891b8b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 891b8e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x891b94u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 891b94: mov eax, dword ptr [ebx + 0x1e0] */
  eax = R32((uint32_t)(ebx + 0x1e0u));
/* 891b9a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 891b9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891b9d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 891ba0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 891ba4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x891baau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 891baa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 891bad: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891bb3u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891bb3: mov ecx, ebx */
  ecx = ebx;
/* 891bb5: mov esi, eax */
  esi = eax;
/* 891bb7: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891bbdu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891bbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891bbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891bbf: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 891bc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 891bc6: push 0xae7684 */
  { uint32_t v = 0xae7684u; esp -= 4; W32(esp, v); }
/* 891bcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 891bcc: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891bd2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891bd2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891bd5: jmp 0x891be0 */
  goto L_891be0;
L_891be0: /* 891be0: cmp edi, dword ptr [ebx + 0x1e0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891be6: jge 0x891cbc */
  if ((sf == of)) goto L_891cbc;
L_891bec: /* 891bec: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891bef: mov dword ptr [edx + edi*4], 0xffffffff */
  W32((uint32_t)(edx + edi*4), 0xffffffffu);
/* 891bf6: xor ebx, ebx */
  ebx = 0;
/* 891bf8: jmp 0x891c00 */
  goto L_891c00;
L_891c00: /* 891c00: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 891c03: cmp ebx, dword ptr [eax + 0x1e0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891c09: jge 0x891c67 */
  if ((sf == of)) goto L_891c67;
L_891c0b: /* 891c0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c0e: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 891c14: mov esi, edi */
  esi = edi;
/* 891c16: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 891c19: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 891c1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891c1c: mov edx, dword ptr [eax + 0x1dc] */
  edx = R32((uint32_t)(eax + 0x1dcu));
/* 891c22: mov ecx, ebx */
  ecx = ebx;
/* 891c24: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 891c27: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891c29: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x891c2fu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 891c2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891c31: je 0x891cb6 */
  if (zf) goto L_891cb6;
L_891c37: /* 891c37: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891c3a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c3d: mov dword ptr [ecx + edi*4], ebx */
  W32((uint32_t)(ecx + edi*4), ebx);
/* 891c40: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 891c46: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891c48: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x891c4eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 891c4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891c4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891c51: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 891c56: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 891c58: push 0xae76c8 */
  { uint32_t v = 0xae76c8u; esp -= 4; W32(esp, v); }
/* 891c5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 891c5e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891c64u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891c64: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891c67: /* 891c67: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891c6a: cmp dword ptr [edx + edi*4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi*4))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 891c6e: jne 0x891cad */
  if (!zf) goto L_891cad;
L_891c70: /* 891c70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c73: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 891c79: mov esi, edi */
  esi = edi;
/* 891c7b: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 891c7e: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 891c80: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 891c83: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891c89u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891c89: mov ecx, esi */
  ecx = esi;
/* 891c8b: mov ebx, eax */
  ebx = eax;
/* 891c8d: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x891c93u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 891c93: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 891c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891c9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891c9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891c9e: push 0xae7738 */
  { uint32_t v = 0xae7738u; esp -= 4; W32(esp, v); }
/* 891ca3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891ca4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891caau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891caa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891cad: /* 891cad: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891cb0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 891cb1: jmp 0x891be0 */
  goto L_891be0;
L_891cb6: /* 891cb6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 891cb7: jmp 0x891c00 */
  goto L_891c00;
L_891cbc: /* 891cbc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 891cbf: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 891cc3: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x891cc8u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 891cc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 891ccb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891ccc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891ccd: mov eax, 1 */
  eax = 0x1u;
/* 891cd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 891cd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891cda: mov esp, ebp */
  esp = ebp;
/* 891cdc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891cdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891bd7(void) {
  LOAD_REGS();
L_891bd7: /* 891bd7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 891bde: mov edi, edi */
  edi = edi;
L_891be0: /* 891be0: cmp edi, dword ptr [ebx + 0x1e0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891be6: jge 0x891cbc */
  if ((sf == of)) goto L_891cbc;
L_891bec: /* 891bec: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891bef: mov dword ptr [edx + edi*4], 0xffffffff */
  W32((uint32_t)(edx + edi*4), 0xffffffffu);
/* 891bf6: xor ebx, ebx */
  ebx = 0;
/* 891bf8: jmp 0x891c00 */
  goto L_891c00;
L_891c00: /* 891c00: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 891c03: cmp ebx, dword ptr [eax + 0x1e0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891c09: jge 0x891c67 */
  if ((sf == of)) goto L_891c67;
L_891c0b: /* 891c0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c0e: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 891c14: mov esi, edi */
  esi = edi;
/* 891c16: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 891c19: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 891c1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891c1c: mov edx, dword ptr [eax + 0x1dc] */
  edx = R32((uint32_t)(eax + 0x1dcu));
/* 891c22: mov ecx, ebx */
  ecx = ebx;
/* 891c24: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 891c27: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891c29: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x891c2fu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 891c2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891c31: je 0x891cb6 */
  if (zf) goto L_891cb6;
L_891c37: /* 891c37: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891c3a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c3d: mov dword ptr [ecx + edi*4], ebx */
  W32((uint32_t)(ecx + edi*4), ebx);
/* 891c40: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 891c46: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891c48: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x891c4eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 891c4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891c4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891c51: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 891c56: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 891c58: push 0xae76c8 */
  { uint32_t v = 0xae76c8u; esp -= 4; W32(esp, v); }
/* 891c5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 891c5e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891c64u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891c64: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891c67: /* 891c67: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891c6a: cmp dword ptr [edx + edi*4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi*4))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 891c6e: jne 0x891cad */
  if (!zf) goto L_891cad;
L_891c70: /* 891c70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c73: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 891c79: mov esi, edi */
  esi = edi;
/* 891c7b: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 891c7e: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 891c80: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 891c83: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891c89u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891c89: mov ecx, esi */
  ecx = esi;
/* 891c8b: mov ebx, eax */
  ebx = eax;
/* 891c8d: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x891c93u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 891c93: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 891c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891c9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891c9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891c9e: push 0xae7738 */
  { uint32_t v = 0xae7738u; esp -= 4; W32(esp, v); }
/* 891ca3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891ca4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891caau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891caa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891cad: /* 891cad: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891cb0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 891cb1: jmp 0x891be0 */
  goto L_891be0;
L_891cb6: /* 891cb6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 891cb7: jmp 0x891c00 */
  goto L_891c00;
L_891cbc: /* 891cbc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 891cbf: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 891cc3: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x891cc8u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 891cc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 891ccb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891ccc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891ccd: mov eax, 1 */
  eax = 0x1u;
/* 891cd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 891cd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891cda: mov esp, ebp */
  esp = ebp;
/* 891cdc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891cdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891bfa(void) {
  LOAD_REGS();
  goto L_891bfa;
L_891be0: /* 891be0: cmp edi, dword ptr [ebx + 0x1e0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891be6: jge 0x891cbc */
  if ((sf == of)) goto L_891cbc;
L_891bec: /* 891bec: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891bef: mov dword ptr [edx + edi*4], 0xffffffff */
  W32((uint32_t)(edx + edi*4), 0xffffffffu);
/* 891bf6: xor ebx, ebx */
  ebx = 0;
/* 891bf8: jmp 0x891c00 */
  goto L_891c00;
L_891bfa: /* 891bfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_891c00: /* 891c00: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 891c03: cmp ebx, dword ptr [eax + 0x1e0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891c09: jge 0x891c67 */
  if ((sf == of)) goto L_891c67;
L_891c0b: /* 891c0b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c0e: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 891c14: mov esi, edi */
  esi = edi;
/* 891c16: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 891c19: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 891c1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891c1c: mov edx, dword ptr [eax + 0x1dc] */
  edx = R32((uint32_t)(eax + 0x1dcu));
/* 891c22: mov ecx, ebx */
  ecx = ebx;
/* 891c24: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 891c27: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891c29: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x891c2fu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 891c2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891c31: je 0x891cb6 */
  if (zf) goto L_891cb6;
L_891c37: /* 891c37: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891c3a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c3d: mov dword ptr [ecx + edi*4], ebx */
  W32((uint32_t)(ecx + edi*4), ebx);
/* 891c40: mov ecx, dword ptr [edx + 0x1dc] */
  ecx = R32((uint32_t)(edx + 0x1dcu));
/* 891c46: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891c48: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x891c4eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 891c4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891c4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891c51: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 891c56: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 891c58: push 0xae76c8 */
  { uint32_t v = 0xae76c8u; esp -= 4; W32(esp, v); }
/* 891c5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 891c5e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891c64u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891c64: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891c67: /* 891c67: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 891c6a: cmp dword ptr [edx + edi*4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi*4))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 891c6e: jne 0x891cad */
  if (!zf) goto L_891cad;
L_891c70: /* 891c70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 891c73: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 891c79: mov esi, edi */
  esi = edi;
/* 891c7b: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 891c7e: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 891c80: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 891c83: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891c89u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891c89: mov ecx, esi */
  ecx = esi;
/* 891c8b: mov ebx, eax */
  ebx = eax;
/* 891c8d: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x891c93u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 891c93: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 891c99: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891c9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891c9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891c9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891c9e: push 0xae7738 */
  { uint32_t v = 0xae7738u; esp -= 4; W32(esp, v); }
/* 891ca3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891ca4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891caau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891caa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891cad: /* 891cad: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 891cb0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 891cb1: jmp 0x891be0 */
  goto L_891be0;
L_891cb6: /* 891cb6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 891cb7: jmp 0x891c00 */
  goto L_891c00;
L_891cbc: /* 891cbc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 891cbf: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 891cc3: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x891cc8u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 891cc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 891ccb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891ccc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891ccd: mov eax, 1 */
  eax = 0x1u;
/* 891cd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 891cd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891cda: mov esp, ebp */
  esp = ebp;
/* 891cdc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891cdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891ce0(void) {
  LOAD_REGS();
L_891ce0: /* 891ce0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 891ce3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 891ce8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 891ceb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 891cec: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 891cef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x891cf4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_891cf4(); return;
}

void f_891cf4(void) {
  LOAD_REGS();
L_891cf4: /* 891cf4: push 0xa1a2a0 */
  { uint32_t v = 0xa1a2a0u; esp -= 4; W32(esp, v); }
/* 891cf9: push 0xae77a4 */
  { uint32_t v = 0xae77a4u; esp -= 4; W32(esp, v); }
/* 891cfe: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x891d04u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 891d04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 891d0b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x891d10u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_891d10: guest_badaddr(0x891d10); return;
}

void f_891d90(void) {
  LOAD_REGS();
L_891d90: /* 891d90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891d91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891d92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891d93: mov esi, ecx */
  esi = ecx;
/* 891d95: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* 891d9b: xor ebp, ebp */
  ebp = 0;
/* 891d9d: xor ecx, ecx */
  ecx = 0;
/* 891d9f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891da1: jle 0x891dd2 */
  if ((zf || sf != of)) goto L_891dd2;
L_891da3: /* 891da3: xor eax, eax */
  eax = 0;
/* 891da5: jmp 0x891db0 */
  goto L_891db0;
L_891db0: /* 891db0: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 891db6: mov dword ptr [eax + edx + 0xc], ebp */
  W32((uint32_t)(eax + edx + 0xcu), ebp);
/* 891dba: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 891dc0: mov dword ptr [eax + edx + 0x18], ebp */
  W32((uint32_t)(eax + edx + 0x18u), ebp);
/* 891dc4: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 891dca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 891dcb: add eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 891dce: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891dd0: jl 0x891db0 */
  if ((sf != of)) goto L_891db0;
L_891dd2: /* 891dd2: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 891dd6: je 0x891e42 */
  if (zf) goto L_891e42;
L_891dd8: /* 891dd8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891dd9: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 891ddf: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 891de1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x891de7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 891de7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891de8: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 891dee: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 891df0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x891df6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 891df6: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 891dfc: mov eax, 1 */
  eax = 0x1u;
/* 891e01: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891e03: mov ebx, eax */
  ebx = eax;
/* 891e05: jle 0x891e47 */
  if ((zf || sf != of)) goto L_891e47;
L_891e07: /* 891e07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891e08: mov edi, 0x70 */
  edi = 0x70u;
/* 891e0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_891e10: /* 891e10: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 891e16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891e17: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 891e1b: mov dword ptr [edi + eax + 0x4c], ebp */
  W32((uint32_t)(edi + eax + 0x4cu), ebp);
/* 891e1f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x891e25u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 891e25: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 891e2b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 891e2f: mov dword ptr [edi + ecx + 8], edx */
  W32((uint32_t)(edi + ecx + 0x8u), edx);
/* 891e33: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* 891e39: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 891e3a: add edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 891e3d: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891e3f: jl 0x891e10 */
  if ((sf != of)) goto L_891e10;
L_891e41: /* 891e41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_891e42: /* 891e42: mov eax, 1 */
  eax = 0x1u;
L_891e47: /* 891e47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891e48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891e49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891e4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891da7(void) {
  LOAD_REGS();
L_891da7: /* 891da7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 891dae: mov edi, edi */
  edi = edi;
L_891db0: /* 891db0: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 891db6: mov dword ptr [eax + edx + 0xc], ebp */
  W32((uint32_t)(eax + edx + 0xcu), ebp);
/* 891dba: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 891dc0: mov dword ptr [eax + edx + 0x18], ebp */
  W32((uint32_t)(eax + edx + 0x18u), ebp);
/* 891dc4: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 891dca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 891dcb: add eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 891dce: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891dd0: jl 0x891db0 */
  if ((sf != of)) goto L_891db0;
L_891dd2: /* 891dd2: cmp dword ptr [esp + 0x10], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 891dd6: je 0x891e42 */
  if (zf) goto L_891e42;
L_891dd8: /* 891dd8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891dd9: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 891ddf: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 891de1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x891de7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 891de7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891de8: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 891dee: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 891df0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x891df6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 891df6: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 891dfc: mov eax, 1 */
  eax = 0x1u;
/* 891e01: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891e03: mov ebx, eax */
  ebx = eax;
/* 891e05: jle 0x891e47 */
  if ((zf || sf != of)) goto L_891e47;
L_891e07: /* 891e07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891e08: mov edi, 0x70 */
  edi = 0x70u;
/* 891e0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_891e10: /* 891e10: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 891e16: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891e17: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 891e1b: mov dword ptr [edi + eax + 0x4c], ebp */
  W32((uint32_t)(edi + eax + 0x4cu), ebp);
/* 891e1f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x891e25u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 891e25: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 891e2b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 891e2f: mov dword ptr [edi + ecx + 8], edx */
  W32((uint32_t)(edi + ecx + 0x8u), edx);
/* 891e33: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* 891e39: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 891e3a: add edi, 0x70 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 891e3d: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891e3f: jl 0x891e10 */
  if ((sf != of)) goto L_891e10;
L_891e41: /* 891e41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_891e42: /* 891e42: mov eax, 1 */
  eax = 0x1u;
L_891e47: /* 891e47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891e48: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891e49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891e4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_891e80(void) {
  LOAD_REGS();
L_891e80: /* 891e80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 891e83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 891e84: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 891e86: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 891e8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 891e8b: xor ebp, ebp */
  ebp = 0;
/* 891e8d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 891e8e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 891e90: mov ecx, esi */
  ecx = esi;
/* 891e92: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 891e96: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x891e9cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 891e9c: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 891ea0: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* 891ea6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 891ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891ea9: mov ecx, esi */
  ecx = esi;
/* 891eab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x891eb1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 891eb1: cmp dword ptr [edi + 0x1e0], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1e0u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891eb7: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 891ebb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 891ebf: jg 0x891f00 */
  if ((!zf && sf == of)) goto L_891f00;
L_891ec1: /* 891ec1: mov esi, ebp */
  esi = ebp;
L_891ec3: /* 891ec3: mov ecx, edi */
  ecx = edi;
/* 891ec5: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891ecbu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891ecb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891ecc: mov ecx, ebx */
  ecx = ebx;
/* 891ece: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x891ed4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 891ed4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 891eda: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891edc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 891edd: push 0xae7800 */
  { uint32_t v = 0xae7800u; esp -= 4; W32(esp, v); }
/* 891ee2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891ee3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x891ee9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 891ee9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_891eec: /* 891eec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 891eed: mov eax, esi */
  eax = esi;
/* 891eef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 891ef0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 891ef1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 891ef2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 891ef5: ret  */
  esp += 4; SPILL(); return;
L_891ef6: /* 891ef6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 891efa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_891f00: /* 891f00: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 891f02: mov dword ptr [ecx + ebp*4], 0xffffffff */
  W32((uint32_t)(ecx + ebp*4), 0xffffffffu);
/* 891f09: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 891f0c: xor esi, esi */
  esi = 0;
/* 891f0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 891f10: jle 0x891f5e */
  if ((zf || sf != of)) goto L_891f5e;
L_891f12: /* 891f12: shl ebp, 6 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 891f15: xor edi, edi */
  edi = 0;
/* 891f17: jmp 0x891f20 */
  goto L_891f20;
L_891f20: /* 891f20: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 891f23: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 891f27: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 891f2d: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 891f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 891f30: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 891f32: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x891f38u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 891f38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891f3a: jne 0x891f49 */
  if (!zf) goto L_891f49;
L_891f3c: /* 891f3c: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 891f3f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 891f40: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 891f43: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891f45: jl 0x891f20 */
  if ((sf != of)) goto L_891f20;
L_891f47: /* 891f47: jmp 0x891f5a */
  goto L_891f5a;
L_891f49: /* 891f49: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 891f4d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 891f51: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 891f53: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 891f56: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
L_891f5a: /* 891f5a: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_891f5e: /* 891f5e: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 891f62: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* 891f68: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 891f69: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 891f6b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 891f6f: jl 0x891ef6 */
  if ((sf != of)) goto L_891ef6;
L_891f71: /* 891f71: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 891f75: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 891f77: jne 0x891eec */
  if (!zf) goto L_891eec;
L_891f7d: /* 891f7d: jmp 0x891ec3 */
  goto L_891ec3;
}
