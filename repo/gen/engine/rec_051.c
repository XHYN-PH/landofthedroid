#include "recomp.h"
#include "rec_mod.h"

void f_7e5de8(void) {
  LOAD_REGS();
L_7e5de8: /* 7e5de8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7e5def: nop  */
L_7e5df0: /* 7e5df0: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e5df6: jge 0x7e5eb1 */
  if ((sf == of)) goto L_7e5eb1;
L_7e5dfc: /* 7e5dfc: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e5e02: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e5e05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5e07: je 0x7e5eab */
  if (zf) goto L_7e5eab;
L_7e5e0d: /* 7e5e0d: xor edx, edx */
  edx = 0;
/* 7e5e0f: nop  */
L_7e5e10: /* 7e5e10: cmp edx, dword ptr [eax + 0x114] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e5e16: jge 0x7e5eab */
  if ((sf == of)) goto L_7e5eab;
L_7e5e1c: /* 7e5e1c: mov edi, dword ptr [eax + 0x110] */
  edi = R32((uint32_t)(eax + 0x110u));
/* 7e5e22: cmp dword ptr [edi + edx*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5e25: je 0x7e5e2a */
  if (zf) goto L_7e5e2a;
L_7e5e27: /* 7e5e27: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e5e28: jmp 0x7e5e10 */
  goto L_7e5e10;
L_7e5e2a: /* 7e5e2a: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e5e30: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e5e33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5e35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e5e36: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e5e3bu); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e5e3b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5e3e: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7e5e44: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7e5e45: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5e48: je 0x7e5eab */
  if (zf) goto L_7e5eab;
L_7e5e4a: /* 7e5e4a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e5e4f: mov ecx, dword ptr [0xce8468] */
  ecx = R32((uint32_t)(0xce8468u));
/* 7e5e55: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e5e58: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e5e5a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5e5c: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e5e5f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e5e61: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_7e5e63: /* 7e5e63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e5e66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e5e67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5e68: mov eax, 1 */
  eax = 0x1u;
/* 7e5e6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5e74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5e75: mov esp, ebp */
  esp = ebp;
/* 7e5e77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e5e78: ret 8 */
  esp += 12; SPILL(); return;
L_7e5eab: /* 7e5eab: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e5eac: jmp 0x7e5df0 */
  goto L_7e5df0;
L_7e5eb1: /* 7e5eb1: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e5eb7: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7e5ebd: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e5ec0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e5ec2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5ec4: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e5ec7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e5ec9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e5ecb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5ece: mov esi, dword ptr [eax + 0x58] */
  esi = R32((uint32_t)(eax + 0x58u));
/* 7e5ed1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ed3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e5eda: je 0x7e5f2b */
  if (zf) goto L_7e5f2b;
L_7e5edc: /* 7e5edc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5edd: mov ecx, esp */
  ecx = esp;
/* 7e5edf: push 0x12f */
  { uint32_t v = 0x12fu; esp -= 4; W32(esp, v); }
/* 7e5ee4: mov edi, eax */
  edi = eax;
/* 7e5ee6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e5eecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e5eec: mov ecx, esi */
  ecx = esi;
/* 7e5eee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7e5ef4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7e5ef4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ef6: je 0x7e5f19 */
  if (zf) goto L_7e5f19;
L_7e5ef8: /* 7e5ef8: mov eax, dword ptr [0xb7e294] */
  eax = R32((uint32_t)(0xb7e294u));
/* 7e5efd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5eff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f00: mov ecx, esi */
  ecx = esi;
/* 7e5f02: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7e5f05: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e5f0bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e5f0b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e5f0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5f0f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e5f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f14: mov ecx, esi */
  ecx = esi;
/* 7e5f16: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e5f19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5f19: /* 7e5f19: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5f1c: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e5f22: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f25: jne 0x7e5e63 */
  if (!zf) goto L_7e5e63;
L_7e5f2b: /* 7e5f2b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f2e: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7e5f31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f33: je 0x7e5f41 */
  if (zf) goto L_7e5f41;
L_7e5f35: /* 7e5f35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f38: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e5f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f41: /* 7e5f41: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f44: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7e5f4a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f4c: je 0x7e5f61 */
  if (zf) goto L_7e5f61;
L_7e5f4e: /* 7e5f4e: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 7e5f51: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f53: jne 0x7e5f61 */
  if (!zf) goto L_7e5f61;
L_7e5f55: /* 7e5f55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f58: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e5f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f61: /* 7e5f61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f64: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e5f6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f6c: je 0x7e5f80 */
  if (zf) goto L_7e5f80;
L_7e5f6e: /* 7e5f6e: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f75: je 0x7e5f80 */
  if (zf) goto L_7e5f80;
L_7e5f77: /* 7e5f77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f7a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e5f7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f7d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f80: /* 7e5f80: mov ecx, eax */
  ecx = eax;
/* 7e5f82: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e5f87u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7e5f87: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f8a: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e5f8d: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7e5f90: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5f93: je 0x7e5fad */
  if (zf) goto L_7e5fad;
L_7e5f95: /* 7e5f95: push 0x173 */
  { uint32_t v = 0x173u; esp -= 4; W32(esp, v); }
/* 7e5f9a: push 0xaddf08 */
  { uint32_t v = 0xaddf08u; esp -= 4; W32(esp, v); }
/* 7e5f9f: push 0xaddf18 */
  { uint32_t v = 0xaddf18u; esp -= 4; W32(esp, v); }
/* 7e5fa4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e5faau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e5faa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e5fad: /* 7e5fad: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5fb0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e5fb3: mov dword ptr [ecx + ebx*4], 0 */
  W32((uint32_t)(ecx + ebx*4), 0x0u);
/* 7e5fba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5fbd: or dword ptr [eax + 0x80], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7e5fc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5fca: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 7e5fcd: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 7e5fd0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5fd2: je 0x7e5fe0 */
  if (zf) goto L_7e5fe0;
L_7e5fd4: /* 7e5fd4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5fd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5fda: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7e5fe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5fe0: /* 7e5fe0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5fe3: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7e5fe9u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7e5fe9: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e5fef: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5ff2: jne 0x7e6017 */
  if (!zf) goto L_7e6017;
L_7e5ff4: /* 7e5ff4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5ff7: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 7e5ffd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6000: mov dword ptr [ecx + 0x15c], eax */
  W32((uint32_t)(ecx + 0x15cu), eax);
/* 7e6006: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6009: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e600c: mov dword ptr [edx + 0xf0], eax */
  W32((uint32_t)(edx + 0xf0u), eax);
/* 7e6012: jmp 0x7e5e63 */
  goto L_7e5e63;
L_7e6017: /* 7e6017: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e601a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e601c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e601e: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7e6024u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6024: jmp 0x7e5e63 */
  goto L_7e5e63;
}

void f_7e5e7b(void) {
  LOAD_REGS();
L_7e5e7b: /* 7e5e7b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e5e7e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e5e83: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e5e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5e87: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7e5e8a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e5e8fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e5e8f(); return;
}

void f_7e5e8f(void) {
  LOAD_REGS();
  goto L_7e5e8f;
L_7e5df0: /* 7e5df0: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e5df6: jge 0x7e5eb1 */
  if ((sf == of)) goto L_7e5eb1;
L_7e5dfc: /* 7e5dfc: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e5e02: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e5e05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5e07: je 0x7e5eab */
  if (zf) goto L_7e5eab;
L_7e5e0d: /* 7e5e0d: xor edx, edx */
  edx = 0;
/* 7e5e0f: nop  */
L_7e5e10: /* 7e5e10: cmp edx, dword ptr [eax + 0x114] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e5e16: jge 0x7e5eab */
  if ((sf == of)) goto L_7e5eab;
L_7e5e1c: /* 7e5e1c: mov edi, dword ptr [eax + 0x110] */
  edi = R32((uint32_t)(eax + 0x110u));
/* 7e5e22: cmp dword ptr [edi + edx*4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5e25: je 0x7e5e2a */
  if (zf) goto L_7e5e2a;
L_7e5e27: /* 7e5e27: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7e5e28: jmp 0x7e5e10 */
  goto L_7e5e10;
L_7e5e2a: /* 7e5e2a: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e5e30: mov edx, dword ptr [eax + esi*4] */
  edx = R32((uint32_t)(eax + esi*4));
/* 7e5e33: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e5e35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e5e36: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e5e3bu); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e5e3b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5e3e: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7e5e44: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7e5e45: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5e48: je 0x7e5eab */
  if (zf) goto L_7e5eab;
L_7e5e4a: /* 7e5e4a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e5e4f: mov ecx, dword ptr [0xce8468] */
  ecx = R32((uint32_t)(0xce8468u));
/* 7e5e55: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e5e58: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e5e5a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5e5c: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e5e5f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e5e61: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_7e5e63: /* 7e5e63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e5e66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e5e67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e5e68: mov eax, 1 */
  eax = 0x1u;
/* 7e5e6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e5e74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e5e75: mov esp, ebp */
  esp = ebp;
/* 7e5e77: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e5e78: ret 8 */
  esp += 12; SPILL(); return;
L_7e5e8f: /* 7e5e8f: push 0xa10bbc */
  { uint32_t v = 0xa10bbcu; esp -= 4; W32(esp, v); }
/* 7e5e94: push 0xaddf00 */
  { uint32_t v = 0xaddf00u; esp -= 4; W32(esp, v); }
/* 7e5e99: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e5e9fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e5e9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e5ea2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5ea4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5ea6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e5eabu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e5eab: /* 7e5eab: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e5eac: jmp 0x7e5df0 */
  goto L_7e5df0;
L_7e5eb1: /* 7e5eb1: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e5eb7: mov edx, dword ptr [0xce8468] */
  edx = R32((uint32_t)(0xce8468u));
/* 7e5ebd: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e5ec0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e5ec2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5ec4: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e5ec7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e5ec9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e5ecb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5ece: mov esi, dword ptr [eax + 0x58] */
  esi = R32((uint32_t)(eax + 0x58u));
/* 7e5ed1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ed3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e5eda: je 0x7e5f2b */
  if (zf) goto L_7e5f2b;
L_7e5edc: /* 7e5edc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5edd: mov ecx, esp */
  ecx = esp;
/* 7e5edf: push 0x12f */
  { uint32_t v = 0x12fu; esp -= 4; W32(esp, v); }
/* 7e5ee4: mov edi, eax */
  edi = eax;
/* 7e5ee6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e5eecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e5eec: mov ecx, esi */
  ecx = esi;
/* 7e5eee: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7e5ef4u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7e5ef4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5ef6: je 0x7e5f19 */
  if (zf) goto L_7e5f19;
L_7e5ef8: /* 7e5ef8: mov eax, dword ptr [0xb7e294] */
  eax = R32((uint32_t)(0xb7e294u));
/* 7e5efd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5eff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f00: mov ecx, esi */
  ecx = esi;
/* 7e5f02: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7e5f05: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e5f0bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e5f0b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e5f0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e5f0f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e5f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e5f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f14: mov ecx, esi */
  ecx = esi;
/* 7e5f16: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e5f19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5f19: /* 7e5f19: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5f1c: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 7e5f22: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f25: jne 0x7e5e63 */
  if (!zf) goto L_7e5e63;
L_7e5f2b: /* 7e5f2b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f2e: mov ecx, dword ptr [edx + 0x3c] */
  ecx = R32((uint32_t)(edx + 0x3cu));
/* 7e5f31: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f33: je 0x7e5f41 */
  if (zf) goto L_7e5f41;
L_7e5f35: /* 7e5f35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f38: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e5f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f41: /* 7e5f41: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f44: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7e5f4a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f4c: je 0x7e5f61 */
  if (zf) goto L_7e5f61;
L_7e5f4e: /* 7e5f4e: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 7e5f51: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f53: jne 0x7e5f61 */
  if (!zf) goto L_7e5f61;
L_7e5f55: /* 7e5f55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f58: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x7e5f5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f5e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f61: /* 7e5f61: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f64: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e5f6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f6c: je 0x7e5f80 */
  if (zf) goto L_7e5f80;
L_7e5f6e: /* 7e5f6e: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5f75: je 0x7e5f80 */
  if (zf) goto L_7e5f80;
L_7e5f77: /* 7e5f77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5f7a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e5f7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e5f7d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e5f80: /* 7e5f80: mov ecx, eax */
  ecx = eax;
/* 7e5f82: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e5f87u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
/* 7e5f87: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5f8a: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e5f8d: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7e5f90: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5f93: je 0x7e5fad */
  if (zf) goto L_7e5fad;
L_7e5f95: /* 7e5f95: push 0x173 */
  { uint32_t v = 0x173u; esp -= 4; W32(esp, v); }
/* 7e5f9a: push 0xaddf08 */
  { uint32_t v = 0xaddf08u; esp -= 4; W32(esp, v); }
/* 7e5f9f: push 0xaddf18 */
  { uint32_t v = 0xaddf18u; esp -= 4; W32(esp, v); }
/* 7e5fa4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e5faau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e5faa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e5fad: /* 7e5fad: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5fb0: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7e5fb3: mov dword ptr [ecx + ebx*4], 0 */
  W32((uint32_t)(ecx + ebx*4), 0x0u);
/* 7e5fba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5fbd: or dword ptr [eax + 0x80], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x80u), r);
  }
/* 7e5fc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5fca: mov eax, dword ptr [edx + 0x40] */
  eax = R32((uint32_t)(edx + 0x40u));
/* 7e5fcd: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 7e5fd0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e5fd2: je 0x7e5fe0 */
  if (zf) goto L_7e5fe0;
L_7e5fd4: /* 7e5fd4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e5fd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e5fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e5fda: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x7e5fe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e5fe0: /* 7e5fe0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e5fe3: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7e5fe9u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7e5fe9: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e5fef: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e5ff2: jne 0x7e6017 */
  if (!zf) goto L_7e6017;
L_7e5ff4: /* 7e5ff4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e5ff7: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 7e5ffd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6000: mov dword ptr [ecx + 0x15c], eax */
  W32((uint32_t)(ecx + 0x15cu), eax);
/* 7e6006: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6009: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e600c: mov dword ptr [edx + 0xf0], eax */
  W32((uint32_t)(edx + 0xf0u), eax);
/* 7e6012: jmp 0x7e5e63 */
  goto L_7e5e63;
L_7e6017: /* 7e6017: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e601a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e601c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e601e: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7e6024u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6024: jmp 0x7e5e63 */
  goto L_7e5e63;
}

void f_7e6029(void) {
  LOAD_REGS();
L_7e6029: /* 7e6029: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e602c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e6031: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7e6034: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6035: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7e6038: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e603du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e603d(); return;
}

void f_7e603d(void) {
  LOAD_REGS();
L_7e603d: /* 7e603d: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7e6043: push 0xa10b88 */
  { uint32_t v = 0xa10b88u; esp -= 4; W32(esp, v); }
/* 7e6048: push 0xaddf34 */
  { uint32_t v = 0xaddf34u; esp -= 4; W32(esp, v); }
/* 7e604d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7e604fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e604f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e6055: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6057: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7e605du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7e605d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e605e: push 0xaddf3c */
  { uint32_t v = 0xaddf3cu; esp -= 4; W32(esp, v); }
/* 7e6063: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7e6065u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6065: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e6068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e606a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e606c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e6071u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e6071: guest_badaddr(0x7e6071); return;
}

void f_7e61e0(void) {
  LOAD_REGS();
L_7e61e0: /* 7e61e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e61e1: mov ebp, esp */
  ebp = esp;
/* 7e61e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e61e5: push 0x9d0fd0 */
  { uint32_t v = 0x9d0fd0u; esp -= 4; W32(esp, v); }
/* 7e61ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e61f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e61f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e61f8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e61fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e61fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e61fd: mov esi, ecx */
  esi = ecx;
/* 7e61ff: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 7e6202: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7e6205: xor ebx, ebx */
  ebx = 0;
/* 7e6207: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6209: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e620a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e620d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7e6210: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e6213: jne 0x7e622d */
  if (!zf) goto L_7e622d;
L_7e6215: /* 7e6215: push 0x206 */
  { uint32_t v = 0x206u; esp -= 4; W32(esp, v); }
/* 7e621a: push 0xaddfe4 */
  { uint32_t v = 0xaddfe4u; esp -= 4; W32(esp, v); }
/* 7e621f: push 0xaddff4 */
  { uint32_t v = 0xaddff4u; esp -= 4; W32(esp, v); }
/* 7e6224: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e622au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e622a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e622d: /* 7e622d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7e6230: cmp dword ptr [edi + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6233: je 0x7e624d */
  if (zf) goto L_7e624d;
L_7e6235: /* 7e6235: push 0x207 */
  { uint32_t v = 0x207u; esp -= 4; W32(esp, v); }
/* 7e623a: push 0xade004 */
  { uint32_t v = 0xade004u; esp -= 4; W32(esp, v); }
/* 7e623f: push 0xade014 */
  { uint32_t v = 0xade014u; esp -= 4; W32(esp, v); }
/* 7e6244: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e624au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e624a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e624d: /* 7e624d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_7e6251: /* 7e6251: cmp ebx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6254: jge 0x7e62b0 */
  if ((sf == of)) goto L_7e62b0;
L_7e6256: /* 7e6256: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6259: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7e625c: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 7e625f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6261: je 0x7e6492 */
  if (zf) goto L_7e6492;
L_7e6267: /* 7e6267: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7e626c: mov ecx, esi */
  ecx = esi;
/* 7e626e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e6274u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e6274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6276: je 0x7e6492 */
  if (zf) goto L_7e6492;
L_7e627c: /* 7e627c: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 7e6282: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6284: jne 0x7e6492 */
  if (!zf) goto L_7e6492;
L_7e628a: /* 7e628a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e628d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e628e: mov ecx, edi */
  ecx = edi;
/* 7e6290: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e6296u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e6296: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 7e629c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e629d: mov ecx, eax */
  ecx = eax;
/* 7e629f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e62a5u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e62a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e62a7: je 0x7e6492 */
  if (zf) goto L_7e6492;
L_7e62ad: /* 7e62ad: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
L_7e62b0: /* 7e62b0: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e62b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e62b5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e62bc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e62c0: jne 0x7e637b */
  if (!zf) goto L_7e637b;
L_7e62c6: /* 7e62c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e62ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e62d9: mov dword ptr [ebp - 0x38], 0xc3fa0000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xc3fa0000u);
/* 7e62e0: mov dword ptr [ebp - 0x34], 0xc3960000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0xc3960000u);
/* 7e62e7: mov dword ptr [ebp - 0x30], 0x43960000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x43960000u);
/* 7e62ee: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e62f4u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e62f4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e62f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e62f9: mov ecx, esp */
  ecx = esp;
/* 7e62fb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e62fd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e6300: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6303: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e6306: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e6309: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e630c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e630f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6312: mov ecx, esp */
  ecx = esp;
/* 7e6314: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6316: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e6319: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e631c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e631d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6320: mov ecx, esp */
  ecx = esp;
/* 7e6322: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e6325: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6327: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e632du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e632d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6330: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e6332: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7e6337: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7e633du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e633d: mov esi, eax */
  esi = eax;
/* 7e633f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6341: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 7e6344: jne 0x7e635e */
  if (!zf) goto L_7e635e;
L_7e6346: /* 7e6346: push 0x21c */
  { uint32_t v = 0x21cu; esp -= 4; W32(esp, v); }
/* 7e634b: push 0xade034 */
  { uint32_t v = 0xade034u; esp -= 4; W32(esp, v); }
/* 7e6350: push 0xade044 */
  { uint32_t v = 0xade044u; esp -= 4; W32(esp, v); }
/* 7e6355: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e635bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e635b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e635e: /* 7e635e: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6361: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7e6364: mov dword ptr [ecx + 0x548], esi */
  W32((uint32_t)(ecx + 0x548u), esi);
/* 7e636a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e636b: mov ecx, edi */
  ecx = edi;
/* 7e636d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e6373u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e6373: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6375: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
L_7e637b: /* 7e637b: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7e637e: mov eax, dword ptr [esi + 0x78c] */
  eax = R32((uint32_t)(esi + 0x78cu));
/* 7e6384: xor ebx, ebx */
  ebx = 0;
/* 7e6386: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6388: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e638b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e638f: jne 0x7e6402 */
  if (!zf) goto L_7e6402;
L_7e6391: /* 7e6391: mov eax, dword ptr [0xb7e414] */
  eax = R32((uint32_t)(0xb7e414u));
/* 7e6396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e6397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6398: mov ecx, esi */
  ecx = esi;
/* 7e639a: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e63a0u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e63a0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e63a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e63a5: mov ecx, esi */
  ecx = esi;
/* 7e63a7: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e63aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e63aa: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e63ad: cmp dword ptr [eax + 0x78c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x78cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e63b3: jne 0x7e6402 */
  if (!zf) goto L_7e6402;
L_7e63b5: /* 7e63b5: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7e63bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e63bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e63bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e63c2: mov ecx, esp */
  ecx = esp;
/* 7e63c4: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e63c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63c8: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e63ceu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e63ce: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e63d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e63d2: push 0xb7ca70 */
  { uint32_t v = 0xb7ca70u; esp -= 4; W32(esp, v); }
/* 7e63d7: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7e63ddu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7e63dd: mov esi, eax */
  esi = eax;
/* 7e63df: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e63e2: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e63e4: je 0x7e63f7 */
  if (zf) goto L_7e63f7;
L_7e63e6: /* 7e63e6: push 0xb7ca70 */
  { uint32_t v = 0xb7ca70u; esp -= 4; W32(esp, v); }
/* 7e63eb: mov ecx, esi */
  ecx = esi;
/* 7e63ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e63f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e63f3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e63f5: jne 0x7e63f9 */
  if (!zf) goto L_7e63f9;
L_7e63f7: /* 7e63f7: xor esi, esi */
  esi = 0;
L_7e63f9: /* 7e63f9: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e63fc: mov dword ptr [ecx + 0x78c], esi */
  W32((uint32_t)(ecx + 0x78cu), esi);
L_7e6402: /* 7e6402: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6405: push 0x300000 */
  { uint32_t v = 0x300000u; esp -= 4; W32(esp, v); }
/* 7e640a: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7e6410u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7e6410: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6413: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e6415: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7e641bu); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7e641b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 7e641e: mov dword ptr [edx + 0x4c0], edi */
  W32((uint32_t)(edx + 0x4c0u), edi);
/* 7e6424: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e6427: mov dword ptr [eax + 0x534], 0x33c6844d */
  W32((uint32_t)(eax + 0x534u), 0x33c6844du);
/* 7e6431: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6434: mov dword ptr [ecx + 0x540], 5 */
  W32((uint32_t)(ecx + 0x540u), 0x5u);
/* 7e643e: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6441: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e6443: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e6445: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e6446: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e6449: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e644fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e644f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6452: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e645b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e645c: mov esp, ebp */
  esp = ebp;
/* 7e645e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e645f: ret 4 */
  esp += 8; SPILL(); return;
L_7e6492: /* 7e6492: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6495: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e6496: jmp 0x7e6251 */
  goto L_7e6251;
}

void f_7e6462(void) {
  LOAD_REGS();
L_7e6462: /* 7e6462: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e6465: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e646a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7e646d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e646e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7e6471: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e6476u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e6476(); return;
}

void f_7e6476(void) {
  LOAD_REGS();
  goto L_7e6476;
L_7e6251: /* 7e6251: cmp ebx, dword ptr [esi + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6254: jge 0x7e62b0 */
  if ((sf == of)) goto L_7e62b0;
L_7e6256: /* 7e6256: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6259: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7e625c: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 7e625f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6261: je 0x7e6492 */
  if (zf) goto L_7e6492;
L_7e6267: /* 7e6267: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7e626c: mov ecx, esi */
  ecx = esi;
/* 7e626e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e6274u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e6274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6276: je 0x7e6492 */
  if (zf) goto L_7e6492;
L_7e627c: /* 7e627c: mov eax, dword ptr [esi + 0x4c0] */
  eax = R32((uint32_t)(esi + 0x4c0u));
/* 7e6282: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6284: jne 0x7e6492 */
  if (!zf) goto L_7e6492;
L_7e628a: /* 7e628a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7e628d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e628e: mov ecx, edi */
  ecx = edi;
/* 7e6290: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e6296u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e6296: lea ecx, [esi + 0x100] */
  ecx = (uint32_t)(esi + 0x100u);
/* 7e629c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e629d: mov ecx, eax */
  ecx = eax;
/* 7e629f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e62a5u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e62a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e62a7: je 0x7e6492 */
  if (zf) goto L_7e6492;
L_7e62ad: /* 7e62ad: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
L_7e62b0: /* 7e62b0: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e62b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e62b5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e62bc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e62c0: jne 0x7e637b */
  if (!zf) goto L_7e637b;
L_7e62c6: /* 7e62c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e62ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e62d6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e62d9: mov dword ptr [ebp - 0x38], 0xc3fa0000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xc3fa0000u);
/* 7e62e0: mov dword ptr [ebp - 0x34], 0xc3960000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0xc3960000u);
/* 7e62e7: mov dword ptr [ebp - 0x30], 0x43960000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x43960000u);
/* 7e62ee: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e62f4u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e62f4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e62f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e62f9: mov ecx, esp */
  ecx = esp;
/* 7e62fb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e62fd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e6300: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6303: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e6306: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e6309: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e630c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e630f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6312: mov ecx, esp */
  ecx = esp;
/* 7e6314: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6316: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e6319: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e631c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e631d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6320: mov ecx, esp */
  ecx = esp;
/* 7e6322: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e6325: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6327: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e632du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e632d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6330: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e6332: push 0xb5e8e8 */
  { uint32_t v = 0xb5e8e8u; esp -= 4; W32(esp, v); }
/* 7e6337: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7e633du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e633d: mov esi, eax */
  esi = eax;
/* 7e633f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6341: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 7e6344: jne 0x7e635e */
  if (!zf) goto L_7e635e;
L_7e6346: /* 7e6346: push 0x21c */
  { uint32_t v = 0x21cu; esp -= 4; W32(esp, v); }
/* 7e634b: push 0xade034 */
  { uint32_t v = 0xade034u; esp -= 4; W32(esp, v); }
/* 7e6350: push 0xade044 */
  { uint32_t v = 0xade044u; esp -= 4; W32(esp, v); }
/* 7e6355: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e635bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e635b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e635e: /* 7e635e: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6361: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7e6364: mov dword ptr [ecx + 0x548], esi */
  W32((uint32_t)(ecx + 0x548u), esi);
/* 7e636a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e636b: mov ecx, edi */
  ecx = edi;
/* 7e636d: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x7e6373u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 7e6373: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6375: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
L_7e637b: /* 7e637b: mov esi, dword ptr [edi + 0x30] */
  esi = R32((uint32_t)(edi + 0x30u));
/* 7e637e: mov eax, dword ptr [esi + 0x78c] */
  eax = R32((uint32_t)(esi + 0x78cu));
/* 7e6384: xor ebx, ebx */
  ebx = 0;
/* 7e6386: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6388: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e638b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e638f: jne 0x7e6402 */
  if (!zf) goto L_7e6402;
L_7e6391: /* 7e6391: mov eax, dword ptr [0xb7e414] */
  eax = R32((uint32_t)(0xb7e414u));
/* 7e6396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e6397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6398: mov ecx, esi */
  ecx = esi;
/* 7e639a: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7e63a0u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7e63a0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e63a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e63a5: mov ecx, esi */
  ecx = esi;
/* 7e63a7: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7e63aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e63aa: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e63ad: cmp dword ptr [eax + 0x78c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x78cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e63b3: jne 0x7e6402 */
  if (!zf) goto L_7e6402;
L_7e63b5: /* 7e63b5: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7e63bb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e63bd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e63bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e63c2: mov ecx, esp */
  ecx = esp;
/* 7e63c4: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7e63c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e63c8: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e63ceu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e63ce: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e63d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e63d2: push 0xb7ca70 */
  { uint32_t v = 0xb7ca70u; esp -= 4; W32(esp, v); }
/* 7e63d7: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7e63ddu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7e63dd: mov esi, eax */
  esi = eax;
/* 7e63df: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e63e2: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e63e4: je 0x7e63f7 */
  if (zf) goto L_7e63f7;
L_7e63e6: /* 7e63e6: push 0xb7ca70 */
  { uint32_t v = 0xb7ca70u; esp -= 4; W32(esp, v); }
/* 7e63eb: mov ecx, esi */
  ecx = esi;
/* 7e63ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e63f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e63f3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e63f5: jne 0x7e63f9 */
  if (!zf) goto L_7e63f9;
L_7e63f7: /* 7e63f7: xor esi, esi */
  esi = 0;
L_7e63f9: /* 7e63f9: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e63fc: mov dword ptr [ecx + 0x78c], esi */
  W32((uint32_t)(ecx + 0x78cu), esi);
L_7e6402: /* 7e6402: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6405: push 0x300000 */
  { uint32_t v = 0x300000u; esp -= 4; W32(esp, v); }
/* 7e640a: call dword ptr [0xcfa604] */
  esp -= 4; W32(esp, 0x7e6410u); SPILL(); f_4e2077(); if (g_unwind) return; /* Core!?SetFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7e6410: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6413: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e6415: call dword ptr [0xcfa91c] */
  esp -= 4; W32(esp, 0x7e641bu); SPILL(); f_4e1834(); if (g_unwind) return; /* Core!?ClearFlags@UObject@@QAEXK@Z */ RELOAD();
/* 7e641b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 7e641e: mov dword ptr [edx + 0x4c0], edi */
  W32((uint32_t)(edx + 0x4c0u), edi);
/* 7e6424: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 7e6427: mov dword ptr [eax + 0x534], 0x33c6844d */
  W32((uint32_t)(eax + 0x534u), 0x33c6844du);
/* 7e6431: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6434: mov dword ptr [ecx + 0x540], 5 */
  W32((uint32_t)(ecx + 0x540u), 0x5u);
/* 7e643e: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 7e6441: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e6443: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e6445: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e6446: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e6449: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e644fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e644f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6452: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e645b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e645c: mov esp, ebp */
  esp = ebp;
/* 7e645e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e645f: ret 4 */
  esp += 8; SPILL(); return;
L_7e6476: /* 7e6476: push 0xa10c60 */
  { uint32_t v = 0xa10c60u; esp -= 4; W32(esp, v); }
/* 7e647b: push 0xade02c */
  { uint32_t v = 0xade02cu; esp -= 4; W32(esp, v); }
/* 7e6480: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e6486u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e6486: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e6489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e648b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e648d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e6492u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e6492: /* 7e6492: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6495: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7e6496: jmp 0x7e6251 */
  goto L_7e6251;
}

void f_7e649b(void) {
  LOAD_REGS();
L_7e649b: /* 7e649b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e649e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e64a3: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7e64a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e64a7: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7e64aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e64afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e64af(); return;
}

void f_7e64af(void) {
  LOAD_REGS();
L_7e64af: /* 7e64af: push 0xa10c48 */
  { uint32_t v = 0xa10c48u; esp -= 4; W32(esp, v); }
/* 7e64b4: push 0xade054 */
  { uint32_t v = 0xade054u; esp -= 4; W32(esp, v); }
/* 7e64b9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e64bfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e64bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e64c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e64c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e64c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e64cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e64cb(); return;
}

void f_7e64cb(void) {
  LOAD_REGS();
L_7e64cb: /* 7e64cb: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e64ce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e64d3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7e64d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e64d7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7e64da: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e64dfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e64df(); return;
}

void f_7e64df(void) {
  LOAD_REGS();
L_7e64df: /* 7e64df: push 0xa10c24 */
  { uint32_t v = 0xa10c24u; esp -= 4; W32(esp, v); }
/* 7e64e4: push 0xade05c */
  { uint32_t v = 0xade05cu; esp -= 4; W32(esp, v); }
/* 7e64e9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e64efu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e64ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e64f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e64f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e64f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e64fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e64fb(); return;
}

void f_7e64fb(void) {
  LOAD_REGS();
L_7e64fb: /* 7e64fb: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e64fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e6503: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7e6506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6507: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7e650a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e650fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e650f(); return;
}

void f_7e650f(void) {
  LOAD_REGS();
L_7e650f: /* 7e650f: push 0xa10bec */
  { uint32_t v = 0xa10becu; esp -= 4; W32(esp, v); }
/* 7e6514: push 0xade064 */
  { uint32_t v = 0xade064u; esp -= 4; W32(esp, v); }
/* 7e6519: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e651fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e651f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e6522: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6526: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e652bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e652b: guest_badaddr(0x7e652b); return;
}

void f_7e6610(void) {
  LOAD_REGS();
L_7e6610: /* 7e6610: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6613: mov edx, dword ptr [esp + 0x64] */
  edx = R32((uint32_t)(esp + 0x64u));
/* 7e6617: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e6618: mov ebx, dword ptr [esp + 0x60] */
  ebx = R32((uint32_t)(esp + 0x60u));
/* 7e661c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e661d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 7e6621: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 7e6625: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e6626: xor esi, esi */
  esi = 0;
/* 7e6628: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7e662a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e662b: mov edi, ecx */
  edi = ecx;
/* 7e662d: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7e6630: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 7e6634: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 7e6636: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* 7e663a: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 7e663e: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 7e6642: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 7e6646: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 7e664a: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 7e664e: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* 7e6652: mov dword ptr [esp + 0x50], esi */
  W32((uint32_t)(esp + 0x50u), esi);
/* 7e6656: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 7e665a: mov dword ptr [esp + 0x60], esi */
  W32((uint32_t)(esp + 0x60u), esi);
/* 7e665e: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 7e6666: mov dword ptr [esp + 0x5c], 0xffffffff */
  W32((uint32_t)(esp + 0x5cu), 0xffffffffu);
/* 7e666e: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e6670: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e6671: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e6672: mov esi, dword ptr [esp + 0x70] */
  esi = R32((uint32_t)(esp + 0x70u));
/* 7e6676: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6679: mov edx, esp */
  edx = esp;
/* 7e667b: mov eax, ebx */
  eax = ebx;
/* 7e667d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e667f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e6682: mov dword ptr [esp + 0x38], 0x3f800000 */
  W32((uint32_t)(esp + 0x38u), 0x3f800000u);
/* 7e668a: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 7e668e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e6691: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6694: mov ecx, esi */
  ecx = esi;
/* 7e6696: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e6698: mov edx, esp */
  edx = esp;
/* 7e669a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e669c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7e669f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e66a2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7e66a5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e66a8: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 7e66ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e66ad: mov ecx, edi */
  ecx = edi;
/* 7e66af: call dword ptr [ebp + 0xcc] */
  { uint32_t t = R32((uint32_t)(ebp + 0xccu)); esp -= 4; W32(esp, 0x7e66b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e66b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e66b7: jne 0x7e6a80 */
  if (!zf) goto L_7e6a80;
L_7e66bd: /* 7e66bd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e66bf: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 7e66c3: mov ebp, dword ptr [esp + 0x70] */
  ebp = R32((uint32_t)(esp + 0x70u));
/* 7e66c7: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e66c9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e66cc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7e66ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e66d1: mov ecx, esp */
  ecx = esp;
/* 7e66d3: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7e66d7: mov eax, ebx */
  eax = ebx;
/* 7e66d9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e66db: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7e66df: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7e66e2: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e66e7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7e66eb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e66ee: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e66f1: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7e66f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e66f4: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 7e66f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e66f9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7e66fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e66ff: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 7e6703: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e6705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6706: mov ecx, edi */
  ecx = edi;
/* 7e6708: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7e670eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e670e: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 7e6712: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 7e6716: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 7e671a: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7e671e: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 7e6722: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6724: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7e6728: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 7e672c: je 0x7e6891 */
  if (zf) goto L_7e6891;
L_7e6732: /* 7e6732: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 7e6736: fcomp dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
  FPOP();
/* 7e673c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e673e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6741: je 0x7e68bf */
  if (zf) goto L_7e68bf;
L_7e6747: /* 7e6747: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 7e674d: mov ecx, esi */
  ecx = esi;
/* 7e674f: fsub dword ptr [esp + 0x58] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x58u)));
/* 7e6753: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6755: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7e675b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e675d: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 7e6761: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7e6765: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 7e6769: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7e676d: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7e6771: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7e6773: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7e6777: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7e677a: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7e677e: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7e6781: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7e6785: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6787: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7e678b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7e678f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6791: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7e6795: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7e6799: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7e679d: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7e67a3: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e67a6: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7e67aa: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7e67ae: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e67b1: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 7e67b4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e67b6: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 7e67ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e67bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7e67bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e67bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e67c2: mov eax, esp */
  eax = esp;
/* 7e67c4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7e67c6: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 7e67c9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e67cc: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7e67d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e67d3: mov eax, esp */
  eax = esp;
/* 7e67d5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e67d7: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7e67db: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e67de: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7e67e2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e67e5: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 7e67e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e67ea: mov ecx, edi */
  ecx = edi;
/* 7e67ec: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e67f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e67f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e67f4: je 0x7e69d7 */
  if (zf) goto L_7e69d7;
L_7e67fa: /* 7e67fa: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7e67fe: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 7e6802: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7e6806: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 7e680a: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 7e680e: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7e6814: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7e6818: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e681a: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7e681c: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7e6820: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7e6824: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7e6827: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7e682b: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7e682f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7e6833: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7e6836: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e6838: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7e683b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7e683f: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7e6843: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7e6846: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 7e6849: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e684b: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7e684d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e684e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6850: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6853: mov edx, esp */
  edx = esp;
/* 7e6855: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7e6857: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 7e685e: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 7e6861: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 7e6864: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6867: mov edx, esp */
  edx = esp;
/* 7e6869: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e686b: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 7e686f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e6872: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 7e6876: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6877: mov ecx, edi */
  ecx = edi;
/* 7e6879: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e687c: call dword ptr [esi + 0xcc] */
  { uint32_t t = R32((uint32_t)(esi + 0xccu)); esp -= 4; W32(esp, 0x7e6882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6882: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e6884: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e6886: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e6887: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6888: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6889: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e688a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e688b: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e688e: ret 0x14 */
  esp += 24; SPILL(); return;
L_7e6891: /* 7e6891: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e6894: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6896: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7e689a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e689d: mov ecx, edx */
  ecx = edx;
/* 7e689f: fsub dword ptr [esp + 0x74] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x74u)));
/* 7e68a3: mov eax, esi */
  eax = esi;
/* 7e68a5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e68a7: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 7e68ab: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 7e68af: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7e68b3: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7e68b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e68ba: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e68bd: jmp 0x7e6929 */
  goto L_7e6929;
L_7e68bf: /* 7e68bf: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 7e68c3: mov edx, esi */
  edx = esi;
/* 7e68c5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e68c7: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 7e68cd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 7e68d3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e68d5: fst dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0);
/* 7e68d9: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7e68dd: fmul dword ptr [esp + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x74u)));
/* 7e68e1: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7e68e5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7e68e7: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 7e68eb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e68ee: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 7e68f2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7e68f5: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 7e68f9: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7e68fd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e68ff: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7e6903: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7e6907: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e6909: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7e690d: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7e6911: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7e6915: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7e691b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e691e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 7e6922: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7e6926: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_7e6929: /* 7e6929: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7e692c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e692e: mov ecx, dword ptr [esp + 0x74] */
  ecx = R32((uint32_t)(esp + 0x74u));
/* 7e6932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6933: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7e6935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6937: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e693a: mov eax, esp */
  eax = esp;
/* 7e693c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7e693e: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 7e6941: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6944: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6947: mov eax, esi */
  eax = esi;
/* 7e6949: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 7e694b: mov ecx, esp */
  ecx = esp;
/* 7e694d: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 7e694f: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 7e6952: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6955: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7e6958: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e695b: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 7e695f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6960: mov ecx, edi */
  ecx = edi;
/* 7e6962: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6968: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e696a: jne 0x7e69e6 */
  if (!zf) goto L_7e69e6;
L_7e696c: /* 7e696c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e696e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7e6971: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7e6973: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6976: mov ecx, esp */
  ecx = esp;
/* 7e6978: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7e697c: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 7e6980: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e6982: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e6985: mov edx, dword ptr [esp + 0x80] */
  edx = R32((uint32_t)(esp + 0x80u));
/* 7e698c: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e6991: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6994: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e6995: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7e6999: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 7e69a0: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 7e69a4: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7e69a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e69a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e69aa: lea edx, [esp + 0x50] */
  edx = (uint32_t)(esp + 0x50u);
/* 7e69ae: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 7e69b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e69b3: mov ecx, edi */
  ecx = edi;
/* 7e69b5: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7e69bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e69bb: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 7e69bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e69c1: je 0x7e69d7 */
  if (zf) goto L_7e69d7;
L_7e69c3: /* 7e69c3: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 7e69c7: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 7e69cb: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 7e69cf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e69d1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7e69d4: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7e69d7: /* 7e69d7: mov eax, 1 */
  eax = 0x1u;
/* 7e69dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e69dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e69de: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e69df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e69e0: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e69e3: ret 0x14 */
  esp += 24; SPILL(); return;
L_7e69e6: /* 7e69e6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7e69ea: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 7e69ee: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7e69f2: fmul dword ptr [esp + 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x6cu)));
/* 7e69f6: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 7e69fa: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7e6a00: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7e6a04: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6a06: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 7e6a08: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 7e6a0c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7e6a10: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 7e6a13: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7e6a17: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7e6a1b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7e6a1f: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 7e6a22: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e6a24: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7e6a27: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7e6a2b: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7e6a2f: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7e6a32: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
/* 7e6a35: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e6a37: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 7e6a39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e6a3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6a3c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6a3f: mov esi, esp */
  esi = esp;
/* 7e6a41: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7e6a43: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 7e6a4a: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7e6a4d: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 7e6a54: mov dword ptr [esi + 8], ebx */
  W32((uint32_t)(esi + 0x8u), ebx);
/* 7e6a57: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6a5a: mov esi, esp */
  esi = esp;
/* 7e6a5c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7e6a5e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7e6a61: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 7e6a65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6a66: mov ecx, edi */
  ecx = edi;
/* 7e6a68: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7e6a6b: call dword ptr [ebp + 0xcc] */
  { uint32_t t = R32((uint32_t)(ebp + 0xccu)); esp -= 4; W32(esp, 0x7e6a71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6a71: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e6a73: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e6a75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7e6a76: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6a77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6a78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6a79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6a7a: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e6a7d: ret 0x14 */
  esp += 24; SPILL(); return;
L_7e6a80: /* 7e6a80: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 7e6a84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6a85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6a86: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6a87: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 7e6a8d: xor eax, eax */
  eax = 0;
/* 7e6a8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6a90: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e6a93: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7e6bd0(void) {
  LOAD_REGS();
L_7e6bd0: /* 7e6bd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e6bd1: mov ebp, esp */
  ebp = esp;
/* 7e6bd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e6bd5: push 0x9d0fe0 */
  { uint32_t v = 0x9d0fe0u; esp -= 4; W32(esp, v); }
/* 7e6bda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e6be0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6be1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e6be8: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6beb: xor eax, eax */
  eax = 0;
/* 7e6bed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e6bee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e6bef: mov esi, ecx */
  esi = ecx;
/* 7e6bf1: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7e6bf4: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 7e6bfa: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 7e6c00: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 7e6c03: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 7e6c06: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 7e6c09: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 7e6c0c: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 7e6c0f: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 7e6c12: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 7e6c15: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7e6c18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6c19: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7e6c1c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e6c1f: mov dword ptr [ebp - 0x64], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x3f800000u);
/* 7e6c26: mov dword ptr [ebp - 0x60], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa0u), 0xffffffffu);
/* 7e6c2d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7e6c2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6c30: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6c33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6c34: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6c36: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7e6c39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6c3c: mov eax, esp */
  eax = esp;
/* 7e6c3e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6c40: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e6c43: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6c46: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e6c49: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6c4c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6c4f: mov eax, edi */
  eax = edi;
/* 7e6c51: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7e6c53: mov ecx, esp */
  ecx = esp;
/* 7e6c55: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e6c57: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7e6c5a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6c5d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7e6c60: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e6c63: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6c69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6c6a: mov ecx, esi */
  ecx = esi;
/* 7e6c6c: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6c72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6c72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6c74: je 0x7e6fdc */
  if (zf) goto L_7e6fdc;
L_7e6c7a: /* 7e6c7a: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7e6c7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e6c7e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7e6c81: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7e6c88: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7e6c8f: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 7e6c96: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x7e6c9cu); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 7e6c9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6c9e: je 0x7e6cb5 */
  if (zf) goto L_7e6cb5;
L_7e6ca0: /* 7e6ca0: xor eax, eax */
  eax = 0;
/* 7e6ca2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6ca5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e6cac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6cad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6cae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6caf: mov esp, ebp */
  esp = ebp;
/* 7e6cb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6cb2: ret 0x10 */
  esp += 20; SPILL(); return;
L_7e6cb5: /* 7e6cb5: mov eax, edi */
  eax = edi;
/* 7e6cb7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e6cb9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e6cbc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6cbf: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e6cc2: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7e6cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6cc6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e6cc9: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7e6ccc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6ccf: mov ecx, esp */
  ecx = esp;
/* 7e6cd1: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e6cd3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e6cd6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e6cd9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e6cdc: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e6cdf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6ce1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e6ce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6ce5: mov ecx, esi */
  ecx = esi;
/* 7e6ce7: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 7e6cee: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0x7e6cf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6cf4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6cf6: jne 0x7e6fdc */
  if (!zf) goto L_7e6fdc;
L_7e6cfc: /* 7e6cfc: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e6cff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6d01: je 0x7e6ca0 */
  if (zf) goto L_7e6ca0;
L_7e6d03: /* 7e6d03: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e6d06: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e6d09: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7e6d0f: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e6d12: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7e6d15: mov ecx, edi */
  ecx = edi;
/* 7e6d17: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7e6d1d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6d1f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e6d22: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e6d25: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7e6d28: xor eax, eax */
  eax = 0;
/* 7e6d2a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6d2d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7e6d30: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e6d33: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 7e6d3a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7e6d3d: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
L_7e6d44: /* 7e6d44: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6d47: mov ecx, 2 */
  ecx = 0x2u;
/* 7e6d4c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d4e: jge 0x7e6e4f */
  if ((sf == of)) goto L_7e6e4f;
L_7e6d54: /* 7e6d54: mov dword ptr [ebp + 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0x14u), 0xffffffffu);
/* 7e6d5b: jmp 0x7e6d60 */
  goto L_7e6d60;
L_7e6d60: /* 7e6d60: cmp dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d63: jge 0x7e6e47 */
  if ((sf == of)) goto L_7e6e47;
L_7e6d69: /* 7e6d69: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d6b: jge 0x7e6e32 */
  if ((sf == of)) goto L_7e6e32;
L_7e6d71: /* 7e6d71: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e6d74: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7e6d77: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6d79: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e6d7c: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 7e6d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6d80: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6d82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6d84: fmul dword ptr [0xa10cac] */
  ST0 = ST0 * (F32((uint32_t)(0xa10cacu)));
/* 7e6d8a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6d8d: mov eax, esp */
  eax = esp;
/* 7e6d8f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6d91: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e6d94: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e6d97: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7e6d9a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7e6d9d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6da3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7e6da6: mov eax, esp */
  eax = esp;
/* 7e6da8: fmul dword ptr [0xa10cac] */
  ST0 = ST0 * (F32((uint32_t)(0xa10cacu)));
/* 7e6dae: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6db1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6db4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6db7: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7e6dba: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e6dbd: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7e6dc0: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e6dc3: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6dc6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6dc8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7e6dcb: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6dce: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6dd1: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7e6dd4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6dd7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6dda: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 7e6de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6de1: mov ecx, esi */
  ecx = esi;
/* 7e6de3: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6de9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6de9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6deb: jne 0x7e6e32 */
  if (!zf) goto L_7e6e32;
L_7e6ded: /* 7e6ded: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e6df0: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6df3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7e6df4: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7e6df7: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e6dfd: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6e00: je 0x7e6e1f */
  if (zf) goto L_7e6e1f;
L_7e6e02: /* 7e6e02: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 7e6e08: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 7e6e0b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e6e0e: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e6e11: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 7e6e17: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6e19: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e6e1b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e6e1d: jmp 0x7e6e2c */
  goto L_7e6e2c;
L_7e6e1f: /* 7e6e1f: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e6e21: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 7e6e24: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7e6e27: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e6e29: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7e6e2c: /* 7e6e2c: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 7e6e2f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
L_7e6e32: /* 7e6e32: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e6e35: mov ecx, 2 */
  ecx = 0x2u;
/* 7e6e3a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e6e3c: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7e6e3f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e6e42: jmp 0x7e6d60 */
  goto L_7e6d60;
L_7e6e47: /* 7e6e47: add dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7e6e4a: jmp 0x7e6d44 */
  goto L_7e6d44;
L_7e6e4f: /* 7e6e4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6e51: je 0x7e6ca0 */
  if (zf) goto L_7e6ca0;
L_7e6e57: /* 7e6e57: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6e5a: jne 0x7e6e9b */
  if (!zf) goto L_7e6e9b;
L_7e6e5c: /* 7e6e5c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7e6e5f: mov ecx, edi */
  ecx = edi;
/* 7e6e61: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e63: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7e6e66: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e68: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e6e6b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7e6e6d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e6f: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6e72: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e6e75: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e6e78: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e6e7b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6e7e: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7e6e81: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e6e84: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6e87: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6e89: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7e6e8c: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6e8f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e6e92: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7e6e95: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6e98: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e6e9b: /* 7e6e9b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e6e9d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6ea0: mov ecx, esp */
  ecx = esp;
/* 7e6ea2: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7e6ea9: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6eac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6eae: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7e6eb5: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6eb8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e6ebb: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 7e6ec2: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6ec5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6ec8: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e6ecd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e6ed0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6ed4: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6eda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e6edb: mov ecx, esi */
  ecx = esi;
/* 7e6edd: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7e6ee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6ee3: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7e6ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6eeb: jne 0x7e6ca0 */
  if (!zf) goto L_7e6ca0;
L_7e6ef1: /* 7e6ef1: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7e6ef4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6ef6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6efa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6efe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f01: mov eax, esp */
  eax = esp;
/* 7e6f03: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6f05: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e6f08: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6f0b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e6f0e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6f11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f14: mov eax, edi */
  eax = edi;
/* 7e6f16: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7e6f18: mov ecx, esp */
  ecx = esp;
/* 7e6f1a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e6f1c: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7e6f1f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6f22: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7e6f25: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e6f28: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6f2f: mov ecx, esi */
  ecx = esi;
/* 7e6f31: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6f37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6f37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6f39: jne 0x7e6ca0 */
  if (!zf) goto L_7e6ca0;
L_7e6f3f: /* 7e6f3f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6f42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6f45: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 7e6f48: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6f4a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6f4d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f50: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 7e6f53: mov eax, esp */
  eax = esp;
/* 7e6f55: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e6f58: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6f5a: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 7e6f5c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e6f5f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6f62: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e6f65: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6f68: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e6f6d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6f6f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6f72: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6f79: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 7e6f7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6f7d: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e6f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6f82: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6f88: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6f8f: mov ecx, esi */
  ecx = esi;
/* 7e6f91: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e6f94: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6f97: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f9d: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6fa0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6fa3: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 7e6fa6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6fa9: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7e6fac: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6faf: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7e6fb2: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6fb5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e6fb8: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7e6fbb: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7e6fc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6fc1: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7e6fc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6fc9: je 0x7e6fdc */
  if (zf) goto L_7e6fdc;
L_7e6fcb: /* 7e6fcb: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7e6fce: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 7e6fd1: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7e6fd4: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7e6fd6: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 7e6fd9: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_7e6fdc: /* 7e6fdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6fdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6fe1: mov eax, 1 */
  eax = 0x1u;
/* 7e6fe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e6fed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6fee: mov esp, ebp */
  esp = ebp;
/* 7e6ff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6ff1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7e6cb5(void) {
  LOAD_REGS();
  goto L_7e6cb5;
L_7e6ca0: /* 7e6ca0: xor eax, eax */
  eax = 0;
/* 7e6ca2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6ca5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e6cac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6cad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6cae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6caf: mov esp, ebp */
  esp = ebp;
/* 7e6cb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6cb2: ret 0x10 */
  esp += 20; SPILL(); return;
L_7e6cb5: /* 7e6cb5: mov eax, edi */
  eax = edi;
/* 7e6cb7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e6cb9: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e6cbc: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6cbf: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e6cc2: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7e6cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6cc6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e6cc9: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7e6ccc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6ccf: mov ecx, esp */
  ecx = esp;
/* 7e6cd1: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e6cd3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7e6cd6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e6cd9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e6cdc: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e6cdf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6ce1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e6ce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6ce5: mov ecx, esi */
  ecx = esi;
/* 7e6ce7: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 7e6cee: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0x7e6cf4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6cf4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6cf6: jne 0x7e6fdc */
  if (!zf) goto L_7e6fdc;
L_7e6cfc: /* 7e6cfc: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e6cff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6d01: je 0x7e6ca0 */
  if (zf) goto L_7e6ca0;
L_7e6d03: /* 7e6d03: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e6d06: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e6d09: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7e6d0f: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e6d12: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7e6d15: mov ecx, edi */
  ecx = edi;
/* 7e6d17: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7e6d1d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6d1f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e6d22: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e6d25: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7e6d28: xor eax, eax */
  eax = 0;
/* 7e6d2a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6d2d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7e6d30: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e6d33: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 7e6d3a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7e6d3d: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
L_7e6d44: /* 7e6d44: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6d47: mov ecx, 2 */
  ecx = 0x2u;
/* 7e6d4c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d4e: jge 0x7e6e4f */
  if ((sf == of)) goto L_7e6e4f;
L_7e6d54: /* 7e6d54: mov dword ptr [ebp + 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0x14u), 0xffffffffu);
/* 7e6d5b: jmp 0x7e6d60 */
  goto L_7e6d60;
L_7e6d60: /* 7e6d60: cmp dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d63: jge 0x7e6e47 */
  if ((sf == of)) goto L_7e6e47;
L_7e6d69: /* 7e6d69: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d6b: jge 0x7e6e32 */
  if ((sf == of)) goto L_7e6e32;
L_7e6d71: /* 7e6d71: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e6d74: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7e6d77: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6d79: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e6d7c: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 7e6d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6d80: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6d82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6d84: fmul dword ptr [0xa10cac] */
  ST0 = ST0 * (F32((uint32_t)(0xa10cacu)));
/* 7e6d8a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6d8d: mov eax, esp */
  eax = esp;
/* 7e6d8f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6d91: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e6d94: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e6d97: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7e6d9a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7e6d9d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6da3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7e6da6: mov eax, esp */
  eax = esp;
/* 7e6da8: fmul dword ptr [0xa10cac] */
  ST0 = ST0 * (F32((uint32_t)(0xa10cacu)));
/* 7e6dae: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6db1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6db4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6db7: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7e6dba: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e6dbd: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7e6dc0: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e6dc3: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6dc6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6dc8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7e6dcb: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6dce: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6dd1: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7e6dd4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6dd7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6dda: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 7e6de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6de1: mov ecx, esi */
  ecx = esi;
/* 7e6de3: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6de9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6de9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6deb: jne 0x7e6e32 */
  if (!zf) goto L_7e6e32;
L_7e6ded: /* 7e6ded: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e6df0: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6df3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7e6df4: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7e6df7: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e6dfd: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6e00: je 0x7e6e1f */
  if (zf) goto L_7e6e1f;
L_7e6e02: /* 7e6e02: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 7e6e08: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 7e6e0b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e6e0e: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e6e11: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 7e6e17: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6e19: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e6e1b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e6e1d: jmp 0x7e6e2c */
  goto L_7e6e2c;
L_7e6e1f: /* 7e6e1f: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e6e21: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 7e6e24: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7e6e27: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e6e29: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7e6e2c: /* 7e6e2c: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 7e6e2f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
L_7e6e32: /* 7e6e32: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e6e35: mov ecx, 2 */
  ecx = 0x2u;
/* 7e6e3a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e6e3c: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7e6e3f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e6e42: jmp 0x7e6d60 */
  goto L_7e6d60;
L_7e6e47: /* 7e6e47: add dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7e6e4a: jmp 0x7e6d44 */
  goto L_7e6d44;
L_7e6e4f: /* 7e6e4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6e51: je 0x7e6ca0 */
  if (zf) goto L_7e6ca0;
L_7e6e57: /* 7e6e57: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6e5a: jne 0x7e6e9b */
  if (!zf) goto L_7e6e9b;
L_7e6e5c: /* 7e6e5c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7e6e5f: mov ecx, edi */
  ecx = edi;
/* 7e6e61: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e63: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7e6e66: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e68: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e6e6b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7e6e6d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e6f: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6e72: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e6e75: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e6e78: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e6e7b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6e7e: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7e6e81: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e6e84: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6e87: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6e89: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7e6e8c: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6e8f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e6e92: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7e6e95: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6e98: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e6e9b: /* 7e6e9b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e6e9d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6ea0: mov ecx, esp */
  ecx = esp;
/* 7e6ea2: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7e6ea9: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6eac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6eae: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7e6eb5: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6eb8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e6ebb: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 7e6ec2: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6ec5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6ec8: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e6ecd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e6ed0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6ed4: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6eda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e6edb: mov ecx, esi */
  ecx = esi;
/* 7e6edd: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7e6ee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6ee3: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7e6ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6eeb: jne 0x7e6ca0 */
  if (!zf) goto L_7e6ca0;
L_7e6ef1: /* 7e6ef1: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7e6ef4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6ef6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6efa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6efe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f01: mov eax, esp */
  eax = esp;
/* 7e6f03: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6f05: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e6f08: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6f0b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e6f0e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6f11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f14: mov eax, edi */
  eax = edi;
/* 7e6f16: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7e6f18: mov ecx, esp */
  ecx = esp;
/* 7e6f1a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e6f1c: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7e6f1f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6f22: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7e6f25: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e6f28: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6f2f: mov ecx, esi */
  ecx = esi;
/* 7e6f31: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6f37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6f37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6f39: jne 0x7e6ca0 */
  if (!zf) goto L_7e6ca0;
L_7e6f3f: /* 7e6f3f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6f42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6f45: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 7e6f48: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6f4a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6f4d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f50: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 7e6f53: mov eax, esp */
  eax = esp;
/* 7e6f55: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e6f58: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6f5a: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 7e6f5c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e6f5f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6f62: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e6f65: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6f68: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e6f6d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6f6f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6f72: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6f79: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 7e6f7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6f7d: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e6f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6f82: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6f88: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6f8f: mov ecx, esi */
  ecx = esi;
/* 7e6f91: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e6f94: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6f97: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f9d: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6fa0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6fa3: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 7e6fa6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6fa9: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7e6fac: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6faf: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7e6fb2: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6fb5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e6fb8: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7e6fbb: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7e6fc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6fc1: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7e6fc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6fc9: je 0x7e6fdc */
  if (zf) goto L_7e6fdc;
L_7e6fcb: /* 7e6fcb: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7e6fce: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 7e6fd1: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7e6fd4: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7e6fd6: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 7e6fd9: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_7e6fdc: /* 7e6fdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6fdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6fe1: mov eax, 1 */
  eax = 0x1u;
/* 7e6fe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e6fed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6fee: mov esp, ebp */
  esp = ebp;
/* 7e6ff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6ff1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7e6d5d(void) {
  LOAD_REGS();
  goto L_7e6d5d;
L_7e6ca0: /* 7e6ca0: xor eax, eax */
  eax = 0;
/* 7e6ca2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6ca5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e6cac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6cad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6cae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6caf: mov esp, ebp */
  esp = ebp;
/* 7e6cb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6cb2: ret 0x10 */
  esp += 20; SPILL(); return;
L_7e6d44: /* 7e6d44: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e6d47: mov ecx, 2 */
  ecx = 0x2u;
/* 7e6d4c: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d4e: jge 0x7e6e4f */
  if ((sf == of)) goto L_7e6e4f;
L_7e6d54: /* 7e6d54: mov dword ptr [ebp + 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0x14u), 0xffffffffu);
/* 7e6d5b: jmp 0x7e6d60 */
  goto L_7e6d60;
L_7e6d5d: /* 7e6d5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7e6d60: /* 7e6d60: cmp dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d63: jge 0x7e6e47 */
  if ((sf == of)) goto L_7e6e47;
L_7e6d69: /* 7e6d69: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e6d6b: jge 0x7e6e32 */
  if ((sf == of)) goto L_7e6e32;
L_7e6d71: /* 7e6d71: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e6d74: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7e6d77: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6d79: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e6d7c: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 7e6d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6d80: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6d82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6d84: fmul dword ptr [0xa10cac] */
  ST0 = ST0 * (F32((uint32_t)(0xa10cacu)));
/* 7e6d8a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6d8d: mov eax, esp */
  eax = esp;
/* 7e6d8f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6d91: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e6d94: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7e6d97: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7e6d9a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7e6d9d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6da3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7e6da6: mov eax, esp */
  eax = esp;
/* 7e6da8: fmul dword ptr [0xa10cac] */
  ST0 = ST0 * (F32((uint32_t)(0xa10cacu)));
/* 7e6dae: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6db1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6db4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6db7: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7e6dba: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e6dbd: fadd dword ptr [ebp - 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7e6dc0: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e6dc3: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6dc6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6dc8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7e6dcb: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6dce: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6dd1: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7e6dd4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6dd7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6dda: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 7e6de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6de1: mov ecx, esi */
  ecx = esi;
/* 7e6de3: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6de9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6de9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6deb: jne 0x7e6e32 */
  if (!zf) goto L_7e6e32;
L_7e6ded: /* 7e6ded: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e6df0: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6df3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7e6df4: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7e6df7: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e6dfd: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6e00: je 0x7e6e1f */
  if (zf) goto L_7e6e1f;
L_7e6e02: /* 7e6e02: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 7e6e08: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 7e6e0b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e6e0e: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e6e11: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 7e6e17: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6e19: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e6e1b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e6e1d: jmp 0x7e6e2c */
  goto L_7e6e2c;
L_7e6e1f: /* 7e6e1f: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 7e6e21: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 7e6e24: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7e6e27: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7e6e29: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7e6e2c: /* 7e6e2c: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 7e6e2f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
L_7e6e32: /* 7e6e32: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e6e35: mov ecx, 2 */
  ecx = 0x2u;
/* 7e6e3a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e6e3c: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 7e6e3f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e6e42: jmp 0x7e6d60 */
  goto L_7e6d60;
L_7e6e47: /* 7e6e47: add dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7e6e4a: jmp 0x7e6d44 */
  goto L_7e6d44;
L_7e6e4f: /* 7e6e4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6e51: je 0x7e6ca0 */
  if (zf) goto L_7e6ca0;
L_7e6e57: /* 7e6e57: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e6e5a: jne 0x7e6e9b */
  if (!zf) goto L_7e6e9b;
L_7e6e5c: /* 7e6e5c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7e6e5f: mov ecx, edi */
  ecx = edi;
/* 7e6e61: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e63: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7e6e66: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e68: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e6e6b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7e6e6d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e6e6f: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6e72: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e6e75: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e6e78: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e6e7b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6e7e: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7e6e81: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e6e84: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6e87: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6e89: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7e6e8c: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6e8f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e6e92: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7e6e95: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6e98: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e6e9b: /* 7e6e9b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e6e9d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6ea0: mov ecx, esp */
  ecx = esp;
/* 7e6ea2: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7e6ea9: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7e6eac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e6eae: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7e6eb5: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7e6eb8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e6ebb: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 7e6ec2: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e6ec5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e6ec8: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e6ecd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7e6ed0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6ed4: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6eda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e6edb: mov ecx, esi */
  ecx = esi;
/* 7e6edd: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7e6ee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6ee3: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7e6ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6eeb: jne 0x7e6ca0 */
  if (!zf) goto L_7e6ca0;
L_7e6ef1: /* 7e6ef1: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7e6ef4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7e6ef6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6efa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6efe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f01: mov eax, esp */
  eax = esp;
/* 7e6f03: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6f05: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e6f08: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6f0b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e6f0e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6f11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f14: mov eax, edi */
  eax = edi;
/* 7e6f16: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7e6f18: mov ecx, esp */
  ecx = esp;
/* 7e6f1a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e6f1c: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7e6f1f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e6f22: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7e6f25: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e6f28: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6f2f: mov ecx, esi */
  ecx = esi;
/* 7e6f31: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e6f37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6f37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6f39: jne 0x7e6ca0 */
  if (!zf) goto L_7e6ca0;
L_7e6f3f: /* 7e6f3f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6f42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e6f45: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 7e6f48: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e6f4a: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6f4d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e6f50: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 7e6f53: mov eax, esp */
  eax = esp;
/* 7e6f55: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e6f58: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e6f5a: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 7e6f5c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e6f5f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e6f62: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e6f65: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6f68: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7e6f6d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7e6f6f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e6f72: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e6f79: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 7e6f7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e6f7d: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e6f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e6f82: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e6f88: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e6f8f: mov ecx, esi */
  ecx = esi;
/* 7e6f91: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e6f94: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6f97: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 7e6f9d: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6fa0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e6fa3: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 7e6fa6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e6fa9: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7e6fac: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e6faf: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7e6fb2: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e6fb5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e6fb8: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 7e6fbb: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7e6fc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e6fc1: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7e6fc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e6fc9: je 0x7e6fdc */
  if (zf) goto L_7e6fdc;
L_7e6fcb: /* 7e6fcb: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 7e6fce: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 7e6fd1: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 7e6fd4: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7e6fd6: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 7e6fd9: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_7e6fdc: /* 7e6fdc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e6fdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e6fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e6fe1: mov eax, 1 */
  eax = 0x1u;
/* 7e6fe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e6fed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e6fee: mov esp, ebp */
  esp = ebp;
/* 7e6ff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e6ff1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7e6ff4(void) {
  LOAD_REGS();
L_7e6ff4: /* 7e6ff4: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e6ff7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e6ffc: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7e6fff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7000: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7e7003: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e7008u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e7008(); return;
}

void f_7e7008(void) {
  LOAD_REGS();
L_7e7008: /* 7e7008: push 0xa10c80 */
  { uint32_t v = 0xa10c80u; esp -= 4; W32(esp, v); }
/* 7e700d: push 0xade390 */
  { uint32_t v = 0xade390u; esp -= 4; W32(esp, v); }
/* 7e7012: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e7018u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e7018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e701b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e701d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e701f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e7024u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e7024: guest_badaddr(0x7e7024); return;
}

void f_7e7150(void) {
  LOAD_REGS();
L_7e7150: /* 7e7150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e7151: mov ebp, esp */
  ebp = esp;
/* 7e7153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e7155: push 0x9d0ff0 */
  { uint32_t v = 0x9d0ff0u; esp -= 4; W32(esp, v); }
/* 7e715a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e7160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e7168: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e716b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e716c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e716d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7e7170: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7172: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e7173: mov ebx, ecx */
  ebx = ecx;
/* 7e7175: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e7178: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7e717b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e7182: jne 0x7e719c */
  if (!zf) goto L_7e719c;
L_7e7184: /* 7e7184: push 0x392 */
  { uint32_t v = 0x392u; esp -= 4; W32(esp, v); }
/* 7e7189: push 0xade398 */
  { uint32_t v = 0xade398u; esp -= 4; W32(esp, v); }
/* 7e718e: push 0xade3a8 */
  { uint32_t v = 0xade3a8u; esp -= 4; W32(esp, v); }
/* 7e7193: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e7199u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e7199: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e719c: /* 7e719c: test byte ptr [esi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e71a3: jne 0x7e71b1 */
  if (!zf) goto L_7e71b1;
L_7e71a5: /* 7e71a5: test dword ptr [esi + 0x84], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e71af: jne 0x7e71d0 */
  if (!zf) goto L_7e71d0;
L_7e71b1: /* 7e71b1: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7e71b6: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e71b9: jne 0x7e71d0 */
  if (!zf) goto L_7e71d0;
L_7e71bb: /* 7e71bb: xor eax, eax */
  eax = 0;
/* 7e71bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e71c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e71c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e71c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e71c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e71ca: mov esp, ebp */
  esp = ebp;
/* 7e71cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e71cd: ret 0x1c */
  esp += 32; SPILL(); return;
L_7e71d0: /* 7e71d0: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e71d7: je 0x7e71e9 */
  if (zf) goto L_7e71e9;
L_7e71d9: /* 7e71d9: mov ecx, dword ptr [ebx + 0xec] */
  ecx = R32((uint32_t)(ebx + 0xecu));
/* 7e71df: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e71e1: je 0x7e71e9 */
  if (zf) goto L_7e71e9;
L_7e71e3: /* 7e71e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e71e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e71e6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e71e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e71e9: /* 7e71e9: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e71ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e71ee: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7e71f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e71f6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e71f9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e71fc: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7e71ff: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e7202: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7e7205: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e7208: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7e720b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e720e: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7211: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7e7214: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7e7217: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
/* 7e721e: jne 0x7e7289 */
  if (!zf) goto L_7e7289;
L_7e7220: /* 7e7220: test byte ptr [esi + 0x88], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7227: jne 0x7e7243 */
  if (!zf) goto L_7e7243;
L_7e7229: /* 7e7229: test dword ptr [esi + 0x84], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7233: je 0x7e7289 */
  if (zf) goto L_7e7289;
L_7e7235: /* 7e7235: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7e7238: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e723a: cmp byte ptr [eax + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7241: je 0x7e7289 */
  if (zf) goto L_7e7289;
L_7e7243: /* 7e7243: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 7e7249: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 7e724f: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 7e7255: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e7257: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7e725a: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 7e725d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e725e: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 7e7261: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e7264: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e7267: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e726a: mov edx, esp */
  edx = esp;
/* 7e726c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7e726e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7e7271: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e7274: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7e7277: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e727a: mov ecx, ebx */
  ecx = ebx;
/* 7e727c: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0x7e7282u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7282: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7284: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7e7287: je 0x7e72dc */
  if (zf) goto L_7e72dc;
L_7e7289: /* 7e7289: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e728c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e728e: jne 0x7e72dc */
  if (!zf) goto L_7e72dc;
L_7e7290: /* 7e7290: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7292: jne 0x7e72dc */
  if (!zf) goto L_7e72dc;
L_7e7294: /* 7e7294: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e7296: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e7298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e729b: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7e72a1: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7e72a3: mov ecx, esp */
  ecx = esp;
/* 7e72a5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e72a7: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7e72aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e72ad: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e72b0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e72b3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e72b6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e72b9: mov ecx, esp */
  ecx = esp;
/* 7e72bb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e72bd: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e72c0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e72c3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e72c6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e72c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e72ca: mov ecx, ebx */
  ecx = ebx;
/* 7e72cc: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e72d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e72d2: xor ecx, ecx */
  ecx = 0;
/* 7e72d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e72d6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e72d9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_7e72dc: /* 7e72dc: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7e72e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e72e3: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7e72e6: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x7e72ecu); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 7e72ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e72ee: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e72f1: je 0x7e72fb */
  if (zf) goto L_7e72fb;
L_7e72f3: /* 7e72f3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e72f5: je 0x7e748b */
  if (zf) goto L_7e748b;
L_7e72fb: /* 7e72fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e72fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7300: je 0x7e7451 */
  if (zf) goto L_7e7451;
L_7e7306: /* 7e7306: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7308: jne 0x7e7424 */
  if (!zf) goto L_7e7424;
L_7e730e: /* 7e730e: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7e7314: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7e7317: or ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7e731d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e731f: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 7e7325: jne 0x7e7353 */
  if (!zf) goto L_7e7353;
L_7e7327: /* 7e7327: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7e7329: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e732b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e732e: mov eax, esp */
  eax = esp;
/* 7e7330: mov ecx, edi */
  ecx = edi;
/* 7e7332: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e7334: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7337: mov dword ptr [ebp + 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0x14u), 0x3f800000u);
/* 7e733e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7e7341: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e7344: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e7345: mov ecx, esi */
  ecx = esi;
/* 7e7347: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
/* 7e734a: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 7e734d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7e7353u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e7353: /* 7e7353: xor edi, edi */
  edi = 0;
/* 7e7355: jmp 0x7e7360 */
  goto L_7e7360;
L_7e7360: /* 7e7360: cmp edi, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7366: jge 0x7e7421 */
  if ((sf == of)) goto L_7e7421;
L_7e736c: /* 7e736c: mov edx, dword ptr [esi + 0x1fc] */
  edx = R32((uint32_t)(esi + 0x1fcu));
/* 7e7372: cmp dword ptr [edx + edi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7376: je 0x7e741b */
  if (zf) goto L_7e741b;
L_7e737c: /* 7e737c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e737e: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 7e7381: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e7387u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e7387: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* 7e738d: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7e7390: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 7e7393: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7394: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e739a: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e73a0u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e73a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e73a2: je 0x7e741b */
  if (zf) goto L_7e741b;
L_7e73a4: /* 7e73a4: mov edx, dword ptr [esi + 0x1fc] */
  edx = R32((uint32_t)(esi + 0x1fcu));
/* 7e73aa: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e73ad: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7e73b0: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7e73b6: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e73b9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e73bc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e73be: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 7e73c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e73c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e73c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e73c9: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e73cc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e73cf: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e73d2: mov ecx, esp */
  ecx = esp;
/* 7e73d4: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 7e73da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e73db: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e73de: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 7e73e4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e73e7: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 7e73ed: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e73f0: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 7e73f6: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e73f9: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e73fc: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e73fe: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7e7401: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e7404: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7e7407: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7e740a: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e740d: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7e7410: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7413: mov ecx, ebx */
  ecx = ebx;
/* 7e7415: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7e741bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e741b: /* 7e741b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e741c: jmp 0x7e7360 */
  goto L_7e7360;
L_7e7421: /* 7e7421: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
L_7e7424: /* 7e7424: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 7e742a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e742c: jle 0x7e743a */
  if ((zf || sf != of)) goto L_7e743a;
L_7e742e: /* 7e742e: mov ecx, dword ptr [ebx + 0xec] */
  ecx = R32((uint32_t)(ebx + 0xecu));
/* 7e7434: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7437: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e743au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e743a: /* 7e743a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e743d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7440: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7e7446: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e7448: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e744b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e744e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_7e7451: /* 7e7451: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7458: je 0x7e746c */
  if (zf) goto L_7e746c;
L_7e745a: /* 7e745a: mov ebx, dword ptr [ebx + 0xec] */
  ebx = R32((uint32_t)(ebx + 0xecu));
/* 7e7460: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7462: je 0x7e746c */
  if (zf) goto L_7e746c;
L_7e7464: /* 7e7464: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e7466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7467: mov ecx, ebx */
  ecx = ebx;
/* 7e7469: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e746cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e746c: /* 7e746c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e746f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7471: je 0x7e7480 */
  if (zf) goto L_7e7480;
L_7e7473: /* 7e7473: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e7475: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7477: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e7478: mov ecx, esi */
  ecx = esi;
/* 7e747a: call dword ptr [eax + 0x10c] */
  { uint32_t t = R32((uint32_t)(eax + 0x10cu)); esp -= 4; W32(esp, 0x7e7480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e7480: /* 7e7480: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7482: jne 0x7e748b */
  if (!zf) goto L_7e748b;
L_7e7484: /* 7e7484: mov ecx, esi */
  ecx = esi;
/* 7e7486: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e748bu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e748b: /* 7e748b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e748e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7491: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7492: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7493: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e749a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e749b: mov esp, ebp */
  esp = ebp;
/* 7e749d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e749e: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_7e7357(void) {
  LOAD_REGS();
L_7e7357: /* 7e7357: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7e735e: mov edi, edi */
  edi = edi;
L_7e7360: /* 7e7360: cmp edi, dword ptr [esi + 0x200] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7366: jge 0x7e7421 */
  if ((sf == of)) goto L_7e7421;
L_7e736c: /* 7e736c: mov edx, dword ptr [esi + 0x1fc] */
  edx = R32((uint32_t)(esi + 0x1fcu));
/* 7e7372: cmp dword ptr [edx + edi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7376: je 0x7e741b */
  if (zf) goto L_7e741b;
L_7e737c: /* 7e737c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e737e: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 7e7381: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e7387u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e7387: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* 7e738d: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7e7390: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 7e7393: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7394: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e739a: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e73a0u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e73a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e73a2: je 0x7e741b */
  if (zf) goto L_7e741b;
L_7e73a4: /* 7e73a4: mov edx, dword ptr [esi + 0x1fc] */
  edx = R32((uint32_t)(esi + 0x1fcu));
/* 7e73aa: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e73ad: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7e73b0: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7e73b6: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e73b9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e73bc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e73be: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 7e73c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e73c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e73c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e73c9: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 7e73cc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e73cf: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e73d2: mov ecx, esp */
  ecx = esp;
/* 7e73d4: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 7e73da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e73db: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7e73de: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 7e73e4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e73e7: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 7e73ed: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e73f0: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 7e73f6: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e73f9: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e73fc: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7e73fe: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7e7401: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e7404: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7e7407: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7e740a: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e740d: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7e7410: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7413: mov ecx, ebx */
  ecx = ebx;
/* 7e7415: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7e741bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e741b: /* 7e741b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7e741c: jmp 0x7e7360 */
  goto L_7e7360;
L_7e7421: /* 7e7421: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7424: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 7e742a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e742c: jle 0x7e743a */
  if ((zf || sf != of)) goto L_7e743a;
L_7e742e: /* 7e742e: mov ecx, dword ptr [ebx + 0xec] */
  ecx = R32((uint32_t)(ebx + 0xecu));
/* 7e7434: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7437: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e743au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e743a: /* 7e743a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e743d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7440: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7e7446: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e7448: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e744b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e744e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e7451: test byte ptr [esi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7458: je 0x7e746c */
  if (zf) goto L_7e746c;
L_7e745a: /* 7e745a: mov ebx, dword ptr [ebx + 0xec] */
  ebx = R32((uint32_t)(ebx + 0xecu));
/* 7e7460: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7462: je 0x7e746c */
  if (zf) goto L_7e746c;
L_7e7464: /* 7e7464: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e7466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7467: mov ecx, ebx */
  ecx = ebx;
/* 7e7469: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e746cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e746c: /* 7e746c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e746f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7471: je 0x7e7480 */
  if (zf) goto L_7e7480;
L_7e7473: /* 7e7473: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7e7475: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7477: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e7478: mov ecx, esi */
  ecx = esi;
/* 7e747a: call dword ptr [eax + 0x10c] */
  { uint32_t t = R32((uint32_t)(eax + 0x10cu)); esp -= 4; W32(esp, 0x7e7480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e7480: /* 7e7480: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7482: jne 0x7e748b */
  if (!zf) goto L_7e748b;
L_7e7484: /* 7e7484: mov ecx, esi */
  ecx = esi;
/* 7e7486: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e748bu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e748b: /* 7e748b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e748e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7491: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7492: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7493: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e749a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e749b: mov esp, ebp */
  esp = ebp;
/* 7e749d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e749e: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_7e74a1(void) {
  LOAD_REGS();
L_7e74a1: /* 7e74a1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e74a4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7e74a9: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7e74ac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e74ad: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e74b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e74b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7e74b5(); return;
}

void f_7e74b5(void) {
  LOAD_REGS();
L_7e74b5: /* 7e74b5: push 0xa10cb0 */
  { uint32_t v = 0xa10cb0u; esp -= 4; W32(esp, v); }
/* 7e74ba: push 0xade3b4 */
  { uint32_t v = 0xade3b4u; esp -= 4; W32(esp, v); }
/* 7e74bf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7e74c5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7e74c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e74c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e74ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e74cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7e74d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7e74d1: guest_badaddr(0x7e74d1); return;
}

void f_7e75d0(void) {
  LOAD_REGS();
L_7e75d0: /* 7e75d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7e75d1: mov ebp, esp */
  ebp = esp;
/* 7e75d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7e75d5: push 0x9d103a */
  { uint32_t v = 0x9d103au; esp -= 4; W32(esp, v); }
/* 7e75da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7e75e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e75e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7e75e8: sub esp, 0x378 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e75ee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e75f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e75f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e75f3: xor ebx, ebx */
  ebx = 0;
/* 7e75f5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e75f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e75f8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7e75fb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7e75fe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7e7601: jne 0x7e761e */
  if (!zf) goto L_7e761e;
L_7e7603: /* 7e7603: push 0x403 */
  { uint32_t v = 0x403u; esp -= 4; W32(esp, v); }
/* 7e7608: push 0xade3bc */
  { uint32_t v = 0xade3bcu; esp -= 4; W32(esp, v); }
/* 7e760d: push 0xade3cc */
  { uint32_t v = 0xade3ccu; esp -= 4; W32(esp, v); }
/* 7e7612: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7e7618u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7e7618: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e761b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7e761e: /* 7e761e: test byte ptr [eax + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7625: jne 0x7e7633 */
  if (!zf) goto L_7e7633;
L_7e7627: /* 7e7627: test dword ptr [eax + 0x84], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7631: jne 0x7e7641 */
  if (!zf) goto L_7e7641;
L_7e7633: /* 7e7633: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 7e7639: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e763b: je 0x7e7ca6 */
  if (zf) goto L_7e7ca6;
L_7e7641: /* 7e7641: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7647: xor edx, edx */
  edx = 0;
/* 7e7649: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e764b: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7e764e: mov edi, edx */
  edi = edx;
/* 7e7650: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7652: je 0x7e76a2 */
  if (zf) goto L_7e76a2;
L_7e7654: /* 7e7654: xor edi, edi */
  edi = 0;
/* 7e7656: xor esi, esi */
  esi = 0;
L_7e7658: /* 7e7658: cmp esi, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e765e: jge 0x7e76a2 */
  if ((sf == of)) goto L_7e76a2;
L_7e7660: /* 7e7660: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7666: cmp dword ptr [ecx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7669: je 0x7e7736 */
  if (zf) goto L_7e7736;
L_7e766f: /* 7e766f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e7670: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7e7673: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e7679u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e7679: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e767c: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7682: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7e7685: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7e7688: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7689: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e768f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e7695u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e7695: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7697: je 0x7e7733 */
  if (zf) goto L_7e7733;
L_7e769d: /* 7e769d: mov edi, 1 */
  edi = 0x1u;
L_7e76a2: /* 7e76a2: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e76a5: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7e76abu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7e76ab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76ad: je 0x7e773c */
  if (zf) goto L_7e773c;
L_7e76b3: /* 7e76b3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e76b6: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e76bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e76bd: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e76c0: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x7e76c6u); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e76c6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76c8: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e76ca: /* 7e76ca: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76cc: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e76d2: /* 7e76d2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e76d5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e76d7: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e76ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e76dd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e76e0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e76e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e76e3: mov ecx, eax */
  ecx = eax;
/* 7e76e5: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7e76e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e76e8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76ea: je 0x7e7744 */
  if (zf) goto L_7e7744;
L_7e76ec: /* 7e76ec: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e76ef: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e76f2: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e76f8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e76fa: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e76fd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e7700: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7e7703: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e7706: cmp dword ptr [ebp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7709: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e770b: /* 7e770b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e770e: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e7713u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
/* 7e7713: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7716: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e771bu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7733: /* 7e7733: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e7736: /* 7e7736: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e7737: jmp 0x7e7658 */
  goto L_7e7658;
L_7e773c: /* 7e773c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e773e: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e7744: /* 7e7744: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7747: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7e774d: test cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7750: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e7752: /* 7e7752: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e7755: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e775a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e775c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e775e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e7761: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7764: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7767: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e776a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e776d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7770: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7773: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7775: jne 0x7e777f */
  if (!zf) goto L_7e777f;
L_7e7777: /* 7e7777: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e777a: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e777fu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e777f: /* 7e777f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7782: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7788: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7789: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e778c: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x7e7792u); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7792: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7794: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e7796: /* 7e7796: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e7799: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e779c: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e77a2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e77a4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e77a7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e77aa: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7e77ad: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e77b0: cmp dword ptr [ebp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e77b3: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e77b9: /* 7e77b9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e77bc: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e77c1u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
/* 7e77c1: jmp 0x7e771b */
  goto L_7e771b;
L_7e77c6: /* 7e77c6: mov ecx, dword ptr [0xce8484] */
  ecx = R32((uint32_t)(0xce8484u));
/* 7e77cc: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e77d1: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 7e77d4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e77da: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e77e0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e77e3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e77e5: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7e77e7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e77ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e77ed: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e77f3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e77f9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e77f9: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e77fc: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7801: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 7e7807: mov dword ptr [ebp - 0xc8], ebx */
  W32((uint32_t)(ebp + 0xffffff38u), ebx);
/* 7e780d: mov dword ptr [ebp - 0xc4], ebx */
  W32((uint32_t)(ebp + 0xffffff3cu), ebx);
/* 7e7813: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e781d: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e7827: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e7831: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e783b: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e7845: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e784f: mov dword ptr [ebp - 0xa8], ebx */
  W32((uint32_t)(ebp + 0xffffff58u), ebx);
/* 7e7855: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e785f: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e7869: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 7e786f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7871: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7874: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x7e787au); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 7e787a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e787c: je 0x7e7890 */
  if (zf) goto L_7e7890;
L_7e787e: /* 7e787e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e7881: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e7884: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e7887: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e788e: jmp 0x7e78bd */
  goto L_7e78bd;
L_7e7890: /* 7e7890: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7893: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7e7899u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7e7899: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e789c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e789f: mov edx, ecx */
  edx = ecx;
/* 7e78a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e78a2: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 7e78a8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7e78ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e78ac: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e78af: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x7e78b5u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 7e78b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e78b7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e78ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
L_7e78bd: /* 7e78bd: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7e78c0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e78c3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78c5: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e78c8: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e78cb: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e78ce: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78d0: mov dword ptr [ebp - 0x38], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x40000000u);
/* 7e78d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e78da: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 7e78e0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78e2: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 7e78e5: mov dword ptr [ebp - 0x6c], 1 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x1u);
/* 7e78ec: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e78f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e78f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7e78f7: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e78fa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e78fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7e7900: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e7902: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 7e7905: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7908: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e790b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e790d: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7e7910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7915: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7e791b: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7921: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7e7924: mov eax, edx */
  eax = edx;
/* 7e7926: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e7928: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e792b: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7e792e: jne 0x7e7939 */
  if (!zf) goto L_7e7939;
L_7e7930: /* 7e7930: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7933: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7939: /* 7e7939: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e793b: je 0x7e797a */
  if (zf) goto L_7e797a;
L_7e793d: /* 7e793d: cmp dword ptr [ecx + 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7940: je 0x7e7955 */
  if (zf) goto L_7e7955;
L_7e7942: /* 7e7942: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e7944: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x7e794au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e794a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e794c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e794f: jne 0x7e7ac7 */
  if (!zf) goto L_7e7ac7;
L_7e7955: /* 7e7955: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7958: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e795a: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7960: /* 7e7960: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7962: jne 0x7e797a */
  if (!zf) goto L_7e797a;
L_7e7964: /* 7e7964: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7969: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e796fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e796f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7971: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7974: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e797a: /* 7e797a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e797d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e7983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7985: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7988: jnp 0x7e7ac7 */
  if (!pf) goto L_7e7ac7;
L_7e798e: /* 7e798e: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e7994: xor esi, esi */
  esi = 0;
/* 7e7996: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 7e7998: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e799a: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 7e799d: je 0x7e79a9 */
  if (zf) goto L_7e79a9;
L_7e799f: /* 7e799f: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79a2: jne 0x7e79a6 */
  if (!zf) goto L_7e79a6;
L_7e79a4: /* 7e79a4: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_7e79a6: /* 7e79a6: or bl, 0x18 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79a9: /* 7e79a9: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e79ac: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e79af: je 0x7e79b4 */
  if (zf) goto L_7e79b4;
L_7e79b1: /* 7e79b1: or bl, 0x86 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x86u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79b4: /* 7e79b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79b6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e79b9: je 0x7e79c0 */
  if (zf) goto L_7e79c0;
L_7e79bb: /* 7e79bb: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e79be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
L_7e79c0: /* 7e79c0: mov eax, dword ptr [ecx + 0x2d4] */
  eax = R32((uint32_t)(ecx + 0x2d4u));
/* 7e79c6: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 7e79cc: fld dword ptr [ecx + 0x2d4] */
  { double v = F32((uint32_t)(ecx + 0x2d4u)); FPUSH(v); }
/* 7e79d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79d3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e79d6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7e79d9: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e79df: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 7e79e2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7e79e5: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e79e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79e9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e79ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e79ed: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e79f0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e79f3: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e79f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e79f9: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 7e79fc: mov ecx, esp */
  ecx = esp;
/* 7e79fe: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7a00: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a02: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e7a05: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a08: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e7a0b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7a0e: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e7a11: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e7a13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7a16: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e7a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a1b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7a1e: mov ecx, esp */
  ecx = esp;
/* 7e7a20: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a22: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7e7a25: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7a28: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a2b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a2e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7a31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a34: mov ecx, esp */
  ecx = esp;
/* 7e7a36: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e7a38: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7a3b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e7a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7a41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a44: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7e7a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a4b: mov ecx, edx */
  ecx = edx;
/* 7e7a4d: call dword ptr [edi + 0xd8] */
  { uint32_t t = R32((uint32_t)(edi + 0xd8u)); esp -= 4; W32(esp, 0x7e7a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7a53: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7a56: test byte ptr [ecx + 0x88], 0x1c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x1cu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a5d: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7e7a60: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a62: /* 7e7a62: mov esi, eax */
  esi = eax;
/* 7e7a64: mov edi, 1 */
  edi = 0x1u;
/* 7e7a69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e7a70: /* 7e7a70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a72: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a74: /* 7e7a74: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e7a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a79: je 0x7e7a8f */
  if (zf) goto L_7e7a8f;
L_7e7a7b: /* 7e7a7b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e7a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7a7f: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a84u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a86: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7a8c: /* 7e7a8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7a8f: /* 7e7a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a90: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e7a93: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a98u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a9a: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7aa0: /* 7e7aa0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e7aa3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7aa7: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 7e7aad: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e7ab2u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e7ab2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ab4: je 0x7e7b40 */
  if (zf) goto L_7e7b40;
L_7e7aba: /* 7e7aba: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e7abd: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7ac2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ac4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7ac7: /* 7e7ac7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e7aca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e7acd: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e7ad0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e7ad3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7e7ad6: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e7ad9: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7adc: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7adf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7e7ae5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7ae7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7aea: jp 0x7e7bbd */
  if (pf) goto L_7e7bbd;
L_7e7af0: /* 7e7af0: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7af3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7af5: jne 0x7e7bbd */
  if (!zf) goto L_7e7bbd;
L_7e7afb: /* 7e7afb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7e7afe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7b01: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e7b04: fcom dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7b09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7b0c: jp 0x7e7b4a */
  if (pf) goto L_7e7b4a;
L_7e7b0e: /* 7e7b0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e7b15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7b17: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b1a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e7b21: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7b24: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7e7b2b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e7b2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7b31: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7e7b34: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e7b37: mov dword ptr [edx + 0x24], 0 */
  W32((uint32_t)(edx + 0x24u), 0x0u);
/* 7e7b3e: jmp 0x7e7bba */
  goto L_7e7bba;
L_7e7b40: /* 7e7b40: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e7b42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7b45: jmp 0x7e7a70 */
  goto L_7e7a70;
L_7e7b4a: /* 7e7b4a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e7b4d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b50: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e7b53: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b56: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e7b59: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e7b5c: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b5f: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7e7b65: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7b68: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 7e7b6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b6d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7b70: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7e7b73: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b75: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e7b78: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 7e7b7b: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e7b81: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 7e7b84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e7b87: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 7e7b8a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7b90: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 7e7b96: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b9c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e7b9f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7ba5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7ba8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7bab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7bae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7bb1: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7bb4: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7bb7: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
L_7e7bba: /* 7e7bba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bbd: /* 7e7bbd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7bc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bc2: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bc8: /* 7e7bc8: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bcd: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bd3: /* 7e7bd3: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bda: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7be0: /* 7e7be0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e7be3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7be5: je 0x7e7bf6 */
  if (zf) goto L_7e7bf6;
L_7e7be7: /* 7e7be7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7be9: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x7e7befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bf1: jne 0x7e7c18 */
  if (!zf) goto L_7e7c18;
L_7e7bf3: /* 7e7bf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bf6: /* 7e7bf6: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7bf9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bfb: je 0x7e7c1b */
  if (zf) goto L_7e7c1b;
L_7e7bfd: /* 7e7bfd: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bff: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7c05: /* 7e7c05: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7c0a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e7c10u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e7c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c12: jne 0x7e7cbb */
  if (!zf) goto L_7e7cbb;
L_7e7c18: /* 7e7c18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7c1b: /* 7e7c1b: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e7c1e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7c21: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7e7c27: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7c2a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7c30: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 7e7c36: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7c38: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7c3c: fadd dword ptr [ecx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x170u)));
/* 7e7c42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c45: mov esi, esp */
  esi = esp;
/* 7e7c47: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c49: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e7c4c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7c4f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c52: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7e7c55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7c58: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7c5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7c61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c64: mov esi, esp */
  esi = esp;
/* 7e7c66: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c68: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c6e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7c72: mov ecx, eax */
  ecx = eax;
/* 7e7c74: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c77: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e7c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7c7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c7f: je 0x7e7cbb */
  if (zf) goto L_7e7cbb;
L_7e7c81: /* 7e7c81: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e7c86: mov ecx, dword ptr [0xce8480] */
  ecx = R32((uint32_t)(0xce8480u));
/* 7e7c8c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e7c8f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e7c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7c93: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7c96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e7c98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7c9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e7ca0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e7ca6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cbe: /* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}

void f_7e7733(void) {
  LOAD_REGS();
  goto L_7e7733;
L_7e7658: /* 7e7658: cmp esi, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e765e: jge 0x7e76a2 */
  if ((sf == of)) goto L_7e76a2;
L_7e7660: /* 7e7660: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7666: cmp dword ptr [ecx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7669: je 0x7e7736 */
  if (zf) goto L_7e7736;
L_7e766f: /* 7e766f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e7670: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7e7673: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e7679u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e7679: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e767c: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7682: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 7e7685: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 7e7688: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7689: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e768f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e7695u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e7695: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7697: je 0x7e7733 */
  if (zf) goto L_7e7733;
L_7e769d: /* 7e769d: mov edi, 1 */
  edi = 0x1u;
L_7e76a2: /* 7e76a2: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e76a5: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7e76abu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7e76ab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76ad: je 0x7e773c */
  if (zf) goto L_7e773c;
L_7e76b3: /* 7e76b3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e76b6: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e76bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e76bd: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e76c0: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x7e76c6u); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e76c6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76c8: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e76ca: /* 7e76ca: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76cc: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e76d2: /* 7e76d2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e76d5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e76d7: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e76ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e76dd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e76e0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e76e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e76e3: mov ecx, eax */
  ecx = eax;
/* 7e76e5: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7e76e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e76e8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e76ea: je 0x7e7744 */
  if (zf) goto L_7e7744;
L_7e76ec: /* 7e76ec: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e76ef: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e76f2: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e76f8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e76fa: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e76fd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e7700: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7e7703: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e7706: cmp dword ptr [ebp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7709: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e770b: /* 7e770b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e770e: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e7713u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
/* 7e7713: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7716: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e771bu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7733: /* 7e7733: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e7736: /* 7e7736: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e7737: jmp 0x7e7658 */
  goto L_7e7658;
L_7e773c: /* 7e773c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e773e: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e7744: /* 7e7744: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7747: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7e774d: test cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7750: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e7752: /* 7e7752: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e7755: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e775a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e775c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e775e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e7761: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7764: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7767: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e776a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e776d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7770: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7773: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7775: jne 0x7e777f */
  if (!zf) goto L_7e777f;
L_7e7777: /* 7e7777: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e777a: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e777fu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e777f: /* 7e777f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7782: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7788: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7789: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e778c: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x7e7792u); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7792: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7794: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e7796: /* 7e7796: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e7799: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e779c: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e77a2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e77a4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e77a7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e77aa: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7e77ad: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e77b0: cmp dword ptr [ebp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e77b3: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e77b9: /* 7e77b9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e77bc: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e77c1u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
/* 7e77c1: jmp 0x7e771b */
  goto L_7e771b;
L_7e77c6: /* 7e77c6: mov ecx, dword ptr [0xce8484] */
  ecx = R32((uint32_t)(0xce8484u));
/* 7e77cc: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e77d1: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 7e77d4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e77da: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e77e0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e77e3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e77e5: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7e77e7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e77ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e77ed: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e77f3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e77f9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e77f9: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e77fc: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7801: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 7e7807: mov dword ptr [ebp - 0xc8], ebx */
  W32((uint32_t)(ebp + 0xffffff38u), ebx);
/* 7e780d: mov dword ptr [ebp - 0xc4], ebx */
  W32((uint32_t)(ebp + 0xffffff3cu), ebx);
/* 7e7813: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e781d: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e7827: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e7831: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e783b: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e7845: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e784f: mov dword ptr [ebp - 0xa8], ebx */
  W32((uint32_t)(ebp + 0xffffff58u), ebx);
/* 7e7855: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e785f: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e7869: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 7e786f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7871: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7874: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x7e787au); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 7e787a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e787c: je 0x7e7890 */
  if (zf) goto L_7e7890;
L_7e787e: /* 7e787e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e7881: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e7884: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e7887: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e788e: jmp 0x7e78bd */
  goto L_7e78bd;
L_7e7890: /* 7e7890: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7893: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7e7899u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7e7899: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e789c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e789f: mov edx, ecx */
  edx = ecx;
/* 7e78a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e78a2: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 7e78a8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7e78ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e78ac: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e78af: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x7e78b5u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 7e78b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e78b7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e78ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
L_7e78bd: /* 7e78bd: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7e78c0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e78c3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78c5: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e78c8: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e78cb: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e78ce: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78d0: mov dword ptr [ebp - 0x38], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x40000000u);
/* 7e78d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e78da: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 7e78e0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78e2: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 7e78e5: mov dword ptr [ebp - 0x6c], 1 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x1u);
/* 7e78ec: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e78f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e78f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7e78f7: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e78fa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e78fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7e7900: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e7902: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 7e7905: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7908: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e790b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e790d: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7e7910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7915: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7e791b: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7921: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7e7924: mov eax, edx */
  eax = edx;
/* 7e7926: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e7928: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e792b: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7e792e: jne 0x7e7939 */
  if (!zf) goto L_7e7939;
L_7e7930: /* 7e7930: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7933: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7939: /* 7e7939: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e793b: je 0x7e797a */
  if (zf) goto L_7e797a;
L_7e793d: /* 7e793d: cmp dword ptr [ecx + 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7940: je 0x7e7955 */
  if (zf) goto L_7e7955;
L_7e7942: /* 7e7942: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e7944: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x7e794au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e794a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e794c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e794f: jne 0x7e7ac7 */
  if (!zf) goto L_7e7ac7;
L_7e7955: /* 7e7955: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7958: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e795a: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7960: /* 7e7960: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7962: jne 0x7e797a */
  if (!zf) goto L_7e797a;
L_7e7964: /* 7e7964: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7969: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e796fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e796f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7971: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7974: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e797a: /* 7e797a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e797d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e7983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7985: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7988: jnp 0x7e7ac7 */
  if (!pf) goto L_7e7ac7;
L_7e798e: /* 7e798e: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e7994: xor esi, esi */
  esi = 0;
/* 7e7996: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 7e7998: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e799a: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 7e799d: je 0x7e79a9 */
  if (zf) goto L_7e79a9;
L_7e799f: /* 7e799f: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79a2: jne 0x7e79a6 */
  if (!zf) goto L_7e79a6;
L_7e79a4: /* 7e79a4: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_7e79a6: /* 7e79a6: or bl, 0x18 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79a9: /* 7e79a9: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e79ac: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e79af: je 0x7e79b4 */
  if (zf) goto L_7e79b4;
L_7e79b1: /* 7e79b1: or bl, 0x86 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x86u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79b4: /* 7e79b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79b6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e79b9: je 0x7e79c0 */
  if (zf) goto L_7e79c0;
L_7e79bb: /* 7e79bb: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e79be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
L_7e79c0: /* 7e79c0: mov eax, dword ptr [ecx + 0x2d4] */
  eax = R32((uint32_t)(ecx + 0x2d4u));
/* 7e79c6: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 7e79cc: fld dword ptr [ecx + 0x2d4] */
  { double v = F32((uint32_t)(ecx + 0x2d4u)); FPUSH(v); }
/* 7e79d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79d3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e79d6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7e79d9: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e79df: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 7e79e2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7e79e5: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e79e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79e9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e79ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e79ed: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e79f0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e79f3: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e79f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e79f9: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 7e79fc: mov ecx, esp */
  ecx = esp;
/* 7e79fe: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7a00: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a02: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e7a05: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a08: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e7a0b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7a0e: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e7a11: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e7a13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7a16: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e7a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a1b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7a1e: mov ecx, esp */
  ecx = esp;
/* 7e7a20: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a22: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7e7a25: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7a28: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a2b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a2e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7a31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a34: mov ecx, esp */
  ecx = esp;
/* 7e7a36: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e7a38: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7a3b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e7a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7a41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a44: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7e7a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a4b: mov ecx, edx */
  ecx = edx;
/* 7e7a4d: call dword ptr [edi + 0xd8] */
  { uint32_t t = R32((uint32_t)(edi + 0xd8u)); esp -= 4; W32(esp, 0x7e7a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7a53: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7a56: test byte ptr [ecx + 0x88], 0x1c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x1cu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a5d: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7e7a60: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a62: /* 7e7a62: mov esi, eax */
  esi = eax;
/* 7e7a64: mov edi, 1 */
  edi = 0x1u;
/* 7e7a69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e7a70: /* 7e7a70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a72: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a74: /* 7e7a74: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e7a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a79: je 0x7e7a8f */
  if (zf) goto L_7e7a8f;
L_7e7a7b: /* 7e7a7b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e7a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7a7f: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a84u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a86: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7a8c: /* 7e7a8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7a8f: /* 7e7a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a90: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e7a93: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a98u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a9a: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7aa0: /* 7e7aa0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e7aa3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7aa7: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 7e7aad: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e7ab2u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e7ab2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ab4: je 0x7e7b40 */
  if (zf) goto L_7e7b40;
L_7e7aba: /* 7e7aba: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e7abd: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7ac2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ac4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7ac7: /* 7e7ac7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e7aca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e7acd: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e7ad0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e7ad3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7e7ad6: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e7ad9: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7adc: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7adf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7e7ae5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7ae7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7aea: jp 0x7e7bbd */
  if (pf) goto L_7e7bbd;
L_7e7af0: /* 7e7af0: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7af3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7af5: jne 0x7e7bbd */
  if (!zf) goto L_7e7bbd;
L_7e7afb: /* 7e7afb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7e7afe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7b01: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e7b04: fcom dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7b09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7b0c: jp 0x7e7b4a */
  if (pf) goto L_7e7b4a;
L_7e7b0e: /* 7e7b0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e7b15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7b17: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b1a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e7b21: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7b24: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7e7b2b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e7b2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7b31: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7e7b34: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e7b37: mov dword ptr [edx + 0x24], 0 */
  W32((uint32_t)(edx + 0x24u), 0x0u);
/* 7e7b3e: jmp 0x7e7bba */
  goto L_7e7bba;
L_7e7b40: /* 7e7b40: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e7b42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7b45: jmp 0x7e7a70 */
  goto L_7e7a70;
L_7e7b4a: /* 7e7b4a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e7b4d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b50: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e7b53: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b56: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e7b59: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e7b5c: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b5f: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7e7b65: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7b68: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 7e7b6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b6d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7b70: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7e7b73: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b75: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e7b78: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 7e7b7b: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e7b81: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 7e7b84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e7b87: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 7e7b8a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7b90: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 7e7b96: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b9c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e7b9f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7ba5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7ba8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7bab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7bae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7bb1: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7bb4: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7bb7: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
L_7e7bba: /* 7e7bba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bbd: /* 7e7bbd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7bc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bc2: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bc8: /* 7e7bc8: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bcd: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bd3: /* 7e7bd3: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bda: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7be0: /* 7e7be0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e7be3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7be5: je 0x7e7bf6 */
  if (zf) goto L_7e7bf6;
L_7e7be7: /* 7e7be7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7be9: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x7e7befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bf1: jne 0x7e7c18 */
  if (!zf) goto L_7e7c18;
L_7e7bf3: /* 7e7bf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bf6: /* 7e7bf6: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7bf9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bfb: je 0x7e7c1b */
  if (zf) goto L_7e7c1b;
L_7e7bfd: /* 7e7bfd: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bff: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7c05: /* 7e7c05: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7c0a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e7c10u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e7c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c12: jne 0x7e7cbb */
  if (!zf) goto L_7e7cbb;
L_7e7c18: /* 7e7c18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7c1b: /* 7e7c1b: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e7c1e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7c21: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7e7c27: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7c2a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7c30: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 7e7c36: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7c38: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7c3c: fadd dword ptr [ecx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x170u)));
/* 7e7c42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c45: mov esi, esp */
  esi = esp;
/* 7e7c47: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c49: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e7c4c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7c4f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c52: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7e7c55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7c58: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7c5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7c61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c64: mov esi, esp */
  esi = esp;
/* 7e7c66: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c68: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c6e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7c72: mov ecx, eax */
  ecx = eax;
/* 7e7c74: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c77: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e7c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7c7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c7f: je 0x7e7cbb */
  if (zf) goto L_7e7cbb;
L_7e7c81: /* 7e7c81: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e7c86: mov ecx, dword ptr [0xce8480] */
  ecx = R32((uint32_t)(0xce8480u));
/* 7e7c8c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e7c8f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e7c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7c93: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7c96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e7c98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7c9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e7ca0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e7ca6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cbe: /* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}

void f_7e773c(void) {
  LOAD_REGS();
  goto L_7e773c;
L_7e771b: /* 7e771b: mov eax, 1 */
  eax = 0x1u;
/* 7e7720: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7723: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e772a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e772b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e772c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e772d: mov esp, ebp */
  esp = ebp;
/* 7e772f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7730: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e773c: /* 7e773c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e773e: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e7744: /* 7e7744: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7747: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7e774d: test cl, 6 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7750: jne 0x7e77c6 */
  if (!zf) goto L_7e77c6;
L_7e7752: /* 7e7752: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7e7755: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e775a: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e775c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e775e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e7761: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7764: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7767: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e776a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e776d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7770: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7773: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7775: jne 0x7e777f */
  if (!zf) goto L_7e777f;
L_7e7777: /* 7e7777: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e777a: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e777fu); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e777f: /* 7e777f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7782: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7788: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7789: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 7e778c: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x7e7792u); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7792: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7794: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e7796: /* 7e7796: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e7799: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7e779c: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e77a2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7e77a4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e77a7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7e77aa: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7e77ad: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7e77b0: cmp dword ptr [ebp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e77b3: jne 0x7e771b */
  if (!zf) goto L_7e771b;
L_7e77b9: /* 7e77b9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e77bc: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e77c1u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
/* 7e77c1: jmp 0x7e771b */
  goto L_7e771b;
L_7e77c6: /* 7e77c6: mov ecx, dword ptr [0xce8484] */
  ecx = R32((uint32_t)(0xce8484u));
/* 7e77cc: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e77d1: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 7e77d4: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e77da: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e77e0: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e77e3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e77e5: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7e77e7: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 7e77ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e77ed: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e77f3: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x7e77f9u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 7e77f9: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e77fc: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7801: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 7e7807: mov dword ptr [ebp - 0xc8], ebx */
  W32((uint32_t)(ebp + 0xffffff38u), ebx);
/* 7e780d: mov dword ptr [ebp - 0xc4], ebx */
  W32((uint32_t)(ebp + 0xffffff3cu), ebx);
/* 7e7813: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e781d: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e7827: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e7831: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e783b: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e7845: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e784f: mov dword ptr [ebp - 0xa8], ebx */
  W32((uint32_t)(ebp + 0xffffff58u), ebx);
/* 7e7855: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e785f: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e7869: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 7e786f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7871: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7874: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x7e787au); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 7e787a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e787c: je 0x7e7890 */
  if (zf) goto L_7e7890;
L_7e787e: /* 7e787e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7e7881: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7e7884: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7e7887: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e788e: jmp 0x7e78bd */
  goto L_7e78bd;
L_7e7890: /* 7e7890: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e7893: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7e7899u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7e7899: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7e789c: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e789f: mov edx, ecx */
  edx = ecx;
/* 7e78a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e78a2: lea eax, [ebp - 0x144] */
  eax = (uint32_t)(ebp + 0xfffffebcu);
/* 7e78a8: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7e78ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e78ac: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7e78af: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x7e78b5u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 7e78b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e78b7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e78ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
L_7e78bd: /* 7e78bd: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 7e78c0: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e78c3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78c5: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e78c8: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e78cb: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e78ce: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78d0: mov dword ptr [ebp - 0x38], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x40000000u);
/* 7e78d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e78da: mov dword ptr [ebp - 0x8c], ebx */
  W32((uint32_t)(ebp + 0xffffff74u), ebx);
/* 7e78e0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7e78e2: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 7e78e5: mov dword ptr [ebp - 0x6c], 1 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x1u);
/* 7e78ec: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e78f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7e78f5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 7e78f7: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e78fa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7e78fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7e7900: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e7902: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 7e7905: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7908: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7e790b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e790d: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 7e7910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7915: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7e791b: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7921: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7e7924: mov eax, edx */
  eax = edx;
/* 7e7926: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e7928: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e792b: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 7e792e: jne 0x7e7939 */
  if (!zf) goto L_7e7939;
L_7e7930: /* 7e7930: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7933: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7939: /* 7e7939: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e793b: je 0x7e797a */
  if (zf) goto L_7e797a;
L_7e793d: /* 7e793d: cmp dword ptr [ecx + 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x54u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7940: je 0x7e7955 */
  if (zf) goto L_7e7955;
L_7e7942: /* 7e7942: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e7944: call dword ptr [eax + 0x178] */
  { uint32_t t = R32((uint32_t)(eax + 0x178u)); esp -= 4; W32(esp, 0x7e794au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e794a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e794c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e794f: jne 0x7e7ac7 */
  if (!zf) goto L_7e7ac7;
L_7e7955: /* 7e7955: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7958: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e795a: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7960: /* 7e7960: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7962: jne 0x7e797a */
  if (!zf) goto L_7e797a;
L_7e7964: /* 7e7964: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7969: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e796fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e796f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7971: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7974: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e797a: /* 7e797a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7e797d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e7983: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7985: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7988: jnp 0x7e7ac7 */
  if (!pf) goto L_7e7ac7;
L_7e798e: /* 7e798e: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e7994: xor esi, esi */
  esi = 0;
/* 7e7996: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 7e7998: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e799a: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 7e799d: je 0x7e79a9 */
  if (zf) goto L_7e79a9;
L_7e799f: /* 7e799f: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79a2: jne 0x7e79a6 */
  if (!zf) goto L_7e79a6;
L_7e79a4: /* 7e79a4: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_7e79a6: /* 7e79a6: or bl, 0x18 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79a9: /* 7e79a9: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7e79ac: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7e79af: je 0x7e79b4 */
  if (zf) goto L_7e79b4;
L_7e79b1: /* 7e79b1: or bl, 0x86 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x86u);
  uint8_t r = (uint8_t)(a | b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_7e79b4: /* 7e79b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e79b6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e79b9: je 0x7e79c0 */
  if (zf) goto L_7e79c0;
L_7e79bb: /* 7e79bb: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7e79be: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
L_7e79c0: /* 7e79c0: mov eax, dword ptr [ecx + 0x2d4] */
  eax = R32((uint32_t)(ecx + 0x2d4u));
/* 7e79c6: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 7e79cc: fld dword ptr [ecx + 0x2d4] */
  { double v = F32((uint32_t)(ecx + 0x2d4u)); FPUSH(v); }
/* 7e79d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79d3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e79d6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7e79d9: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e79df: movzx ecx, bl */
  ecx = (uint32_t)((ebx & 0xffu));
/* 7e79e2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7e79e5: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e79e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e79e9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e79ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e79ed: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7e79f0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e79f3: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e79f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e79f9: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 7e79fc: mov ecx, esp */
  ecx = esp;
/* 7e79fe: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7a00: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a02: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7e7a05: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a08: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7e7a0b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7a0e: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e7a11: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e7a13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7a16: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e7a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a1b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7a1e: mov ecx, esp */
  ecx = esp;
/* 7e7a20: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e7a22: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7e7a25: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7a28: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e7a2b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a2e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7a31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7a34: mov ecx, esp */
  ecx = esp;
/* 7e7a36: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7e7a38: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7a3b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e7a3e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7a41: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7a44: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 7e7a4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a4b: mov ecx, edx */
  ecx = edx;
/* 7e7a4d: call dword ptr [edi + 0xd8] */
  { uint32_t t = R32((uint32_t)(edi + 0xd8u)); esp -= 4; W32(esp, 0x7e7a53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7a53: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7a56: test byte ptr [ecx + 0x88], 0x1c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x1cu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a5d: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 7e7a60: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a62: /* 7e7a62: mov esi, eax */
  esi = eax;
/* 7e7a64: mov edi, 1 */
  edi = 0x1u;
/* 7e7a69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e7a70: /* 7e7a70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a72: je 0x7e7ac7 */
  if (zf) goto L_7e7ac7;
L_7e7a74: /* 7e7a74: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e7a77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a79: je 0x7e7a8f */
  if (zf) goto L_7e7a8f;
L_7e7a7b: /* 7e7a7b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e7a7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7a7f: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a84u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a86: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7a8c: /* 7e7a8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7a8f: /* 7e7a8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7a90: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7e7a93: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e7a98u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e7a98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7a9a: jne 0x7e7b40 */
  if (!zf) goto L_7e7b40;
L_7e7aa0: /* 7e7aa0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e7aa3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7aa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7aa7: mov dword ptr [ebp - 0x8c], edi */
  W32((uint32_t)(ebp + 0xffffff74u), edi);
/* 7e7aad: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e7ab2u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e7ab2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ab4: je 0x7e7b40 */
  if (zf) goto L_7e7b40;
L_7e7aba: /* 7e7aba: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 7e7abd: mov ecx, 0xc */
  ecx = 0xcu;
/* 7e7ac2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ac4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7ac7: /* 7e7ac7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7e7aca: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7e7acd: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7e7ad0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7e7ad3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7e7ad6: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e7ad9: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7adc: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7adf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7e7ae5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7ae7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7aea: jp 0x7e7bbd */
  if (pf) goto L_7e7bbd;
L_7e7af0: /* 7e7af0: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7af3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7af5: jne 0x7e7bbd */
  if (!zf) goto L_7e7bbd;
L_7e7afb: /* 7e7afb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7e7afe: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7b01: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7e7b04: fcom dword ptr [ebp - 0x38] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b07: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e7b09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e7b0c: jp 0x7e7b4a */
  if (pf) goto L_7e7b4a;
L_7e7b0e: /* 7e7b0e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7e7b15: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e7b17: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b1a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7e7b21: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7b24: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7e7b2b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7e7b2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7b31: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7e7b34: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7e7b37: mov dword ptr [edx + 0x24], 0 */
  W32((uint32_t)(edx + 0x24u), 0x0u);
/* 7e7b3e: jmp 0x7e7bba */
  goto L_7e7bba;
L_7e7b40: /* 7e7b40: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e7b42: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7b45: jmp 0x7e7a70 */
  goto L_7e7a70;
L_7e7b4a: /* 7e7b4a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e7b4d: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b50: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e7b53: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b56: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7e7b59: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e7b5c: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7b5f: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 7e7b65: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* 7e7b68: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 7e7b6b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b6d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e7b70: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 7e7b73: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e7b75: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e7b78: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 7e7b7b: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 7e7b81: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 7e7b84: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e7b87: fsub dword ptr [ebp - 0x7c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff84u)));
/* 7e7b8a: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 7e7b90: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 7e7b96: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7b99: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7b9c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7e7b9f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7ba2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7ba5: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7e7ba8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7bab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7bae: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7e7bb1: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e7bb4: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7e7bb7: fstp dword ptr [edx + 0x24] */
  WF32((uint32_t)(edx + 0x24u), ST0); FPOP();
L_7e7bba: /* 7e7bba: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bbd: /* 7e7bbd: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e7bc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bc2: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bc8: /* 7e7bc8: mov eax, dword ptr [ebp + 0x34] */
  eax = R32((uint32_t)(ebp + 0x34u));
/* 7e7bcb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bcd: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7bd3: /* 7e7bd3: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bda: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7be0: /* 7e7be0: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7e7be3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7be5: je 0x7e7bf6 */
  if (zf) goto L_7e7bf6;
L_7e7be7: /* 7e7be7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7be9: call dword ptr [edx + 0x178] */
  { uint32_t t = R32((uint32_t)(edx + 0x178u)); esp -= 4; W32(esp, 0x7e7befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7bef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7bf1: jne 0x7e7c18 */
  if (!zf) goto L_7e7c18;
L_7e7bf3: /* 7e7bf3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7bf6: /* 7e7bf6: mov al, byte ptr [ecx + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x50u))) & 0xffu);
/* 7e7bf9: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bfb: je 0x7e7c1b */
  if (zf) goto L_7e7c1b;
L_7e7bfd: /* 7e7bfd: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7bff: jne 0x7e7cbe */
  if (!zf) goto L_7e7cbe;
L_7e7c05: /* 7e7c05: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 7e7c0a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e7c10u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e7c10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c12: jne 0x7e7cbb */
  if (!zf) goto L_7e7cbb;
L_7e7c18: /* 7e7c18: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7c1b: /* 7e7c1b: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 7e7c1e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7c21: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7e7c27: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7e7c2a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7c2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7c30: fadd dword ptr [ecx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x174u)));
/* 7e7c36: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7c38: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7c3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e7c3c: fadd dword ptr [ecx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x170u)));
/* 7e7c42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c45: mov esi, esp */
  esi = esp;
/* 7e7c47: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c49: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 7e7c4c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7e7c4f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c52: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 7e7c55: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7e7c58: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7c5e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7e7c61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7c64: mov esi, esp */
  esi = esp;
/* 7e7c66: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e7c68: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7c6b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e7c6e: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7c71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7c72: mov ecx, eax */
  ecx = eax;
/* 7e7c74: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7e7c77: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x7e7c7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7c7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7c7f: je 0x7e7cbb */
  if (zf) goto L_7e7cbb;
L_7e7c81: /* 7e7c81: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7e7c86: mov ecx, dword ptr [0xce8480] */
  ecx = R32((uint32_t)(0xce8480u));
/* 7e7c8c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7e7c8f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e7c91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7c93: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7c96: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e7c98: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7c9a: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e7ca0: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e7ca6u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_7e7ca6: /* 7e7ca6: xor eax, eax */
  eax = 0;
/* 7e7ca8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e7cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e7cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e7cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e7cb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e7cb5: mov esp, ebp */
  esp = ebp;
/* 7e7cb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e7cb8: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e7cbb: /* 7e7cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cbe: /* 7e7cbe: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cc5: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cc7: /* 7e7cc7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e7cca: mov eax, dword ptr [edx + 0xec] */
  eax = R32((uint32_t)(edx + 0xecu));
/* 7e7cd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7cd2: je 0x7e7cdf */
  if (zf) goto L_7e7cdf;
L_7e7cd4: /* 7e7cd4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7cd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7cd7: mov ecx, eax */
  ecx = eax;
/* 7e7cd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7e7cdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e7cdc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e7cdf: /* 7e7cdf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e7ce2: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 7e7ce8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7e7cea: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e7cec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e7cef: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7e7cf2: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e7cf5: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e7cf8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7e7cfb: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e7cfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d01: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7d06: mov ecx, eax */
  ecx = eax;
/* 7e7d08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7d0a: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7e7d0d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7d10: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7e7d13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7d16: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7e7d19: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 7e7d1c: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7e7d1e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7e7d21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7e7d24: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7e7d27: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7e7d2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7d2d: mov ecx, dword ptr [eax + 0x200] */
  ecx = R32((uint32_t)(eax + 0x200u));
/* 7e7d33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7e7d35: jle 0x7e86e1 */
  if ((zf || sf != of)) goto L_7e86e1;
L_7e7d3b: /* 7e7d3b: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e7d3e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d40: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e7d46: /* 7e7d46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e7d4c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e7d4f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7d55u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7d55: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d59: lea ecx, [ebp - 0x1e4] */
  ecx = (uint32_t)(ebp + 0xfffffe1cu);
/* 7e7d5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d60: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d66: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d69: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d6fu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d6f: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e7d75: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 7e7d78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7d79: lea eax, [ebp - 0x1b4] */
  eax = (uint32_t)(ebp + 0xfffffe4cu);
/* 7e7d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e7d80: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d83: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x7e7d89u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 7e7d89: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e7d8c: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e7d92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7d93: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e7d96: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e7d9cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e7d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7d9e: je 0x7e7e07 */
  if (zf) goto L_7e7e07;
L_7e7da0: /* 7e7da0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7da3: mov edx, dword ptr [eax + 0x184] */
  edx = R32((uint32_t)(eax + 0x184u));
/* 7e7da9: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e7dac: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7db2: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7db8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dba: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e7dbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dbe: mov edx, dword ptr [eax + 0x180] */
  edx = R32((uint32_t)(eax + 0x180u));
/* 7e7dc4: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7dca: and ecx, 0xfffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7e7dd0: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dd3: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 7e7dd9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e7ddc: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7e7de2: and eax, 0xfffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e7de7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7e7de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e7dea: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 7e7df0: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7e7df6u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7e7df6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7e7df8: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7e7dfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7dfe: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7e7e01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7e04: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
L_7e7e07: /* 7e7e07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7e0a: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7e7e10: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e7e12: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7e7e15: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7e7e18: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e7e1b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e7e1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7e7e21: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7e7e24: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7e7e27: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 7e7e2d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7e7e30: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 7e7e3a: mov dword ptr [ebp - 0x180], 0 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x0u);
/* 7e7e44: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 7e7e4e: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 7e7e58: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 7e7e62: mov dword ptr [ebp - 0x170], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe90u), 0x3f800000u);
/* 7e7e6c: mov dword ptr [ebp - 0x16c], 0 */
  W32((uint32_t)(ebp + 0xfffffe94u), 0x0u);
/* 7e7e76: mov dword ptr [ebp - 0x168], 0 */
  W32((uint32_t)(ebp + 0xfffffe98u), 0x0u);
/* 7e7e80: mov dword ptr [ebp - 0x164], 0 */
  W32((uint32_t)(ebp + 0xfffffe9cu), 0x0u);
/* 7e7e8a: mov dword ptr [ebp - 0x160], 0 */
  W32((uint32_t)(ebp + 0xfffffea0u), 0x0u);
/* 7e7e94: mov dword ptr [ebp - 0x15c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffea4u), 0x3f800000u);
/* 7e7e9e: mov dword ptr [ebp - 0x158], 0 */
  W32((uint32_t)(ebp + 0xfffffea8u), 0x0u);
/* 7e7ea8: mov dword ptr [ebp - 0x150], ecx */
  W32((uint32_t)(ebp + 0xfffffeb0u), ecx);
/* 7e7eae: mov dword ptr [ebp - 0x14c], edx */
  W32((uint32_t)(ebp + 0xfffffeb4u), edx);
/* 7e7eb4: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 7e7ebe: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7ec3: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7ec9: lea edi, [ebp - 0x2e4] */
  edi = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7ecf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7ed1: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e7ed6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e7ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7edb: mov ecx, esp */
  ecx = esp;
/* 7e7edd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e7edf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7e7ee2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7e7ee5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7e7ee8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7e7eeb: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7ef1: call 0x6c9160 */
  esp -= 4; W32(esp, 0x7e7ef6u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 7e7ef6: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ef9: mov edi, esp */
  edi = esp;
/* 7e7efb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e7f00: lea esi, [ebp - 0x184] */
  esi = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f06: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e7f08: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e7f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e7f0f: mov ecx, eax */
  ecx = eax;
/* 7e7f11: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7e7f15: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e7f1bu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e7f1b: lea ecx, [ebp - 0x324] */
  ecx = (uint32_t)(ebp + 0xfffffcdcu);
/* 7e7f21: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7e7f25: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f2bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f2b: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 7e7f31: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7e7f35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f3b: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* 7e7f41: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e7f45: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e7f4bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e7f4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e7f4e: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7e7f55: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e7f60: /* 7e7f60: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7e7f63: cmp edx, dword ptr [eax + 0x200] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e7f69: jge 0x7e86ce */
  if ((sf == of)) goto L_7e86ce;
L_7e7f6f: /* 7e7f6f: mov ecx, dword ptr [eax + 0x1fc] */
  ecx = R32((uint32_t)(eax + 0x1fcu));
/* 7e7f75: mov ebx, dword ptr [ecx + edx*4] */
  ebx = R32((uint32_t)(ecx + edx*4));
/* 7e7f78: xor edi, edi */
  edi = 0;
/* 7e7f7a: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e7f7c: je 0x7e86c6 */
  if (zf) goto L_7e86c6;
L_7e7f82: /* 7e7f82: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 7e7f88: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7f8b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 7e7f8e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 7e7f91: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 7e7f94: mov dword ptr [ebp - 0x138], edi */
  W32((uint32_t)(ebp + 0xfffffec8u), edi);
/* 7e7f9a: mov dword ptr [ebp - 0x134], edi */
  W32((uint32_t)(ebp + 0xfffffeccu), edi);
/* 7e7fa0: mov dword ptr [ebp - 0x130], edi */
  W32((uint32_t)(ebp + 0xfffffed0u), edi);
/* 7e7fa6: mov dword ptr [ebp - 0x12c], edi */
  W32((uint32_t)(ebp + 0xfffffed4u), edi);
/* 7e7fac: mov dword ptr [ebp - 0x128], edi */
  W32((uint32_t)(ebp + 0xfffffed8u), edi);
/* 7e7fb2: mov dword ptr [ebp - 0x124], edi */
  W32((uint32_t)(ebp + 0xfffffedcu), edi);
/* 7e7fb8: mov dword ptr [ebp - 0x120], edi */
  W32((uint32_t)(ebp + 0xfffffee0u), edi);
/* 7e7fbe: mov dword ptr [ebp - 0x11c], edi */
  W32((uint32_t)(ebp + 0xfffffee4u), edi);
/* 7e7fc4: mov dword ptr [ebp - 0x118], edi */
  W32((uint32_t)(ebp + 0xfffffee8u), edi);
/* 7e7fca: mov dword ptr [ebp - 0x114], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x3f800000u);
/* 7e7fd4: mov dword ptr [ebp - 0x110], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffef0u), 0xffffffffu);
/* 7e7fde: mov dword ptr [ebp - 0x10c], edi */
  W32((uint32_t)(ebp + 0xfffffef4u), edi);
/* 7e7fe4: je 0x7e8111 */
  if (zf) goto L_7e8111;
L_7e7fea: /* 7e7fea: test byte ptr [ebx + 0x88], 0x18 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x88u))); uint8_t b = (uint8_t)(0x18u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e7ff1: jne 0x7e8111 */
  if (!zf) goto L_7e8111;
L_7e7ff7: /* 7e7ff7: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e7ffa: mov edi, esp */
  edi = esp;
/* 7e7ffc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7e8001: lea esi, [ebp - 0x298] */
  esi = (uint32_t)(ebp + 0xfffffd68u);
/* 7e8007: lea eax, [ebp - 0x258] */
  eax = (uint32_t)(ebp + 0xfffffda8u);
/* 7e800d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7e800f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8010: lea ecx, [ebx + 0x220] */
  ecx = (uint32_t)(ebx + 0x220u);
/* 7e8016: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7e801cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7e801c: mov ecx, dword ptr [ebp - 0x228] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd8u));
/* 7e8022: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 7e8028: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 7e802e: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7e8031: lea ecx, [ebp - 0x354] */
  ecx = (uint32_t)(ebp + 0xfffffcacu);
/* 7e8037: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8038: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e803e: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7e8042: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7e8045: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7e8048: call dword ptr [0xcfaa78] */
  esp -= 4; W32(esp, 0x7e804eu); SPILL(); f_4e1f14(); if (g_unwind) return; /* Core!?Coords@FMatrix@@QAE?AVFCoords@@XZ */ RELOAD();
/* 7e804e: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 7e8054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8055: lea edx, [ebp - 0x384] */
  edx = (uint32_t)(ebp + 0xfffffc7cu);
/* 7e805b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e805c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e805f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x7e8065u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e8065: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 7e806b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e806c: mov ecx, eax */
  ecx = eax;
/* 7e806e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x7e8074u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 7e8074: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7e8077: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 7e807d: mov esi, dword ptr [ebp - 0x98] */
  esi = R32((uint32_t)(ebp + 0xffffff68u));
/* 7e8083: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7e8086: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8089: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 7e808f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8091: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7e8094: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8096: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 7e809c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e809e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e80a2: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e80a8: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 7e80ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e80af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80b2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 7e80b8: mov eax, esp */
  eax = esp;
/* 7e80ba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80bc: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 7e80c2: mov esi, dword ptr [ebp - 0x94] */
  esi = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7e80c8: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80cb: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 7e80d1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80d4: mov esi, dword ptr [ebp - 0xec] */
  esi = R32((uint32_t)(ebp + 0xffffff14u));
/* 7e80da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e80dd: mov eax, esp */
  eax = esp;
/* 7e80df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e80e1: mov esi, dword ptr [ebp - 0xe8] */
  esi = R32((uint32_t)(ebp + 0xffffff18u));
/* 7e80e7: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e80ea: mov esi, dword ptr [ebp - 0xe4] */
  esi = R32((uint32_t)(ebp + 0xffffff1cu));
/* 7e80f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e80f1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e80f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e80fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e80fa: lea ecx, [ebp - 0x258] */
  ecx = (uint32_t)(ebp + 0xfffffda8u);
/* 7e8100: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7e8104: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e810au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e810a: xor edi, edi */
  edi = 0;
/* 7e810c: jmp 0x7e83d7 */
  goto L_7e83d7;
L_7e8111: /* 7e8111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8112: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e8115: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e811bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e811b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7e811e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e811f: lea ecx, [ebx + 0xac] */
  ecx = (uint32_t)(ebx + 0xacu);
/* 7e8125: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e812bu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e812b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e812d: je 0x7e83d7 */
  if (zf) goto L_7e83d7;
L_7e8133: /* 7e8133: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 7e8136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e8137: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7e813d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e813e: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 7e8144: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x7e814au); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 7e814a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e814d: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8154: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8157: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e815du); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e815d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e815f: je 0x7e835d */
  if (zf) goto L_7e835d;
L_7e8165: /* 7e8165: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8167: mov ecx, ebx */
  ecx = ebx;
/* 7e8169: call dword ptr [edx + 0x184] */
  { uint32_t t = R32((uint32_t)(edx + 0x184u)); esp -= 4; W32(esp, 0x7e816fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e816f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8171: je 0x7e818a */
  if (zf) goto L_7e818a;
L_7e8173: /* 7e8173: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7e8178: mov ecx, ebx */
  ecx = ebx;
/* 7e817a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7e8180u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7e8180: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7e8182: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7e8184: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7e8186: mov esi, eax */
  esi = eax;
/* 7e8188: jmp 0x7e818c */
  goto L_7e818c;
L_7e818a: /* 7e818a: xor esi, esi */
  esi = 0;
L_7e818c: /* 7e818c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e818e: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7e8195: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e8197: /* 7e8197: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7e819d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e819f: je 0x7e81c1 */
  if (zf) goto L_7e81c1;
L_7e81a1: /* 7e81a1: fild dword ptr [eax + 0x184] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x184u)); FPUSH(v); }
/* 7e81a7: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 7e81aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e81ab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 7e81b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e81b2: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7e81b5: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e81bb: call dword ptr [0xcfaa70] */
  esp -= 4; W32(esp, 0x7e81c1u); SPILL(); f_4e12e9(); if (g_unwind) return; /* Core!??YFRotator@@QAE?AV0@ABV0@@Z */ RELOAD();
L_7e81c1: /* 7e81c1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 7e81c7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e81ca: jne 0x7e81f0 */
  if (!zf) goto L_7e81f0;
L_7e81cc: /* 7e81cc: mov esi, dword ptr [esi + 0x33c] */
  esi = R32((uint32_t)(esi + 0x33cu));
/* 7e81d2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e81d4: mov eax, dword ptr [ebx + 0x184] */
  eax = R32((uint32_t)(ebx + 0x184u));
/* 7e81da: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 7e81e0: je 0x7e81f0 */
  if (zf) goto L_7e81f0;
L_7e81e2: /* 7e81e2: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 7e81e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7e81eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7e81ea: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_7e81f0: /* 7e81f0: fld dword ptr [ebp - 0x1bc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe44u)); FPUSH(v); }
/* 7e81f6: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e81fc: fld dword ptr [ebp - 0x1b8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe48u)); FPUSH(v); }
/* 7e8202: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8208: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e820a: fld dword ptr [ebp - 0x1c0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe40u)); FPUSH(v); }
/* 7e8210: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e8216: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8218: fld dword ptr [ebp - 0x188] */
  { double v = F32((uint32_t)(ebp + 0xfffffe78u)); FPUSH(v); }
/* 7e821e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8220: fld dword ptr [ebp - 0x18c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe74u)); FPUSH(v); }
/* 7e8226: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8228: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e822b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 7e8231: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8233: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 7e8239: fld dword ptr [ebp - 0x1c8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe38u)); FPUSH(v); }
/* 7e823f: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8245: fld dword ptr [ebp - 0x1c4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe3cu)); FPUSH(v); }
/* 7e824b: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e8251: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8253: fld dword ptr [ebp - 0x1cc] */
  { double v = F32((uint32_t)(ebp + 0xfffffe34u)); FPUSH(v); }
/* 7e8259: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e825f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e8261: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 7e8267: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e8269: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 7e826f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e8271: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7e8274: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 7e827a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7e827c: fstp dword ptr [ebp - 0x1f4] */
  WF32((uint32_t)(ebp + 0xfffffe0cu), ST0); FPOP();
/* 7e8282: fld dword ptr [ebp - 0x1d4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe2cu)); FPUSH(v); }
/* 7e8288: fmul dword ptr [ebx + 0x20c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20cu)));
/* 7e828e: fld dword ptr [ebp - 0x1d0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe30u)); FPUSH(v); }
/* 7e8294: fmul dword ptr [ebx + 0x210] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x210u)));
/* 7e829a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e829c: fld dword ptr [ebp - 0x1d8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe28u)); FPUSH(v); }
/* 7e82a2: fmul dword ptr [ebx + 0x208] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x208u)));
/* 7e82a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7e82aa: fld dword ptr [ebp - 0x1a0] */
  { double v = F32((uint32_t)(ebp + 0xfffffe60u)); FPUSH(v); }
/* 7e82b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82b2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82b5: fld dword ptr [ebp - 0x1a4] */
  { double v = F32((uint32_t)(ebp + 0xfffffe5cu)); FPUSH(v); }
/* 7e82bb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82bd: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 7e82c0: fld dword ptr [ebp - 0x1a8] */
  { double v = F32((uint32_t)(ebp + 0xfffffe58u)); FPUSH(v); }
/* 7e82c6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7e82c8: fstp dword ptr [ebp - 0x200] */
  WF32((uint32_t)(ebp + 0xfffffe00u), ST0); FPOP();
/* 7e82ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82d3: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82d5: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82d9: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 7e82dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 7e82df: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7e82e2: fld dword ptr [ebp - 0x200] */
  { double v = F32((uint32_t)(ebp + 0xfffffe00u)); FPUSH(v); }
/* 7e82e8: fadd dword ptr [ebp - 0x1f4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe0cu)));
/* 7e82ee: fstp dword ptr [ebp - 0x218] */
  WF32((uint32_t)(ebp + 0xfffffde8u), ST0); FPOP();
/* 7e82f4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7e82f6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 7e82f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7e82fa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7e82fd: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 7e8300: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7e8303: fld dword ptr [ebp - 0x218] */
  { double v = F32((uint32_t)(ebp + 0xfffffde8u)); FPUSH(v); }
/* 7e8309: fadd dword ptr [ebp - 0x20c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffdf4u)));
/* 7e830f: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 7e8315: fsub dword ptr [ebx + 0x210] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x210u)));
/* 7e831b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7e831e: fsub dword ptr [ebx + 0x20c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x20cu)));
/* 7e8324: fld dword ptr [ebp - 0x144] */
  { double v = F32((uint32_t)(ebp + 0xfffffebcu)); FPUSH(v); }
/* 7e832a: fsub dword ptr [ebx + 0x208] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x208u)));
/* 7e8330: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 7e8336: mov ecx, dword ptr [ebp - 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xffffff08u));
/* 7e833c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 7e8342: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 7e8348: mov edx, dword ptr [ebp - 0xf4] */
  edx = R32((uint32_t)(ebp + 0xffffff0cu));
/* 7e834e: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 7e8354: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 7e8357: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 7e835a: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
L_7e835d: /* 7e835d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7e8360: mov esi, dword ptr [ebp - 0xd4] */
  esi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 7e8366: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e8369: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e836c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7e836f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8370: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e8373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8375: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 7e8378: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e837a: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e837d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e837f: lea eax, [ebp - 0x138] */
  eax = (uint32_t)(ebp + 0xfffffec8u);
/* 7e8385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8386: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 7e838c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e838f: mov eax, esp */
  eax = esp;
/* 7e8391: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 7e8397: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e8399: mov esi, dword ptr [ebp - 0xd0] */
  esi = R32((uint32_t)(ebp + 0xffffff30u));
/* 7e839f: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 7e83a5: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83a8: mov esi, dword ptr [ebp - 0xcc] */
  esi = R32((uint32_t)(ebp + 0xffffff34u));
/* 7e83ae: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83b1: mov esi, dword ptr [ebp - 0xe0] */
  esi = R32((uint32_t)(ebp + 0xffffff20u));
/* 7e83b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e83ba: mov eax, esp */
  eax = esp;
/* 7e83bc: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7e83be: mov esi, dword ptr [ebp - 0xdc] */
  esi = R32((uint32_t)(ebp + 0xffffff24u));
/* 7e83c4: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7e83c7: mov esi, dword ptr [ebp - 0xd8] */
  esi = R32((uint32_t)(ebp + 0xffffff28u));
/* 7e83cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e83ce: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7e83d1: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e83d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e83d7: /* 7e83d7: cmp dword ptr [ebp + 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x34u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83da: jne 0x7e86c3 */
  if (!zf) goto L_7e86c3;
L_7e83e0: /* 7e83e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e83e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e83e4: mov ecx, ebx */
  ecx = ebx;
/* 7e83e6: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e83ebu); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e83eb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83ed: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e83f3: /* 7e83f3: cmp dword ptr [ebx + 0x280], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x280u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e83f9: mov dword ptr [ebp - 0xc8], edi */
  W32((uint32_t)(ebp + 0xffffff38u), edi);
/* 7e83ff: mov dword ptr [ebp - 0xc4], edi */
  W32((uint32_t)(ebp + 0xffffff3cu), edi);
/* 7e8405: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 7e840f: mov dword ptr [ebp - 0xbc], 0 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x0u);
/* 7e8419: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 7e8423: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 7e842d: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 7e8437: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 7e8441: mov dword ptr [ebp - 0xa8], edi */
  W32((uint32_t)(ebp + 0xffffff58u), edi);
/* 7e8447: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 7e8451: mov dword ptr [ebp - 0xa0], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff60u), 0xffffffffu);
/* 7e845b: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 7e8461: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8467: /* 7e8467: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7e8469: mov ecx, ebx */
  ecx = ebx;
/* 7e846b: call dword ptr [edx + 0x17c] */
  { uint32_t t = R32((uint32_t)(edx + 0x17cu)); esp -= 4; W32(esp, 0x7e8471u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8471: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8473: je 0x7e84f6 */
  if (zf) goto L_7e84f6;
L_7e8479: /* 7e8479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7e847b: mov ecx, ebx */
  ecx = ebx;
/* 7e847d: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8483u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8483: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e8486: mov ecx, dword ptr [edx + 0x2d4] */
  ecx = R32((uint32_t)(edx + 0x2d4u));
/* 7e848c: fld dword ptr [edx + 0x2d8] */
  { double v = F32((uint32_t)(edx + 0x2d8u)); FPUSH(v); }
/* 7e8492: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7e8498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e8499: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7e849b: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 7e84a1: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 7e84a7: mov edi, dword ptr [ebp - 0x108] */
  edi = R32((uint32_t)(ebp + 0xfffffef8u));
/* 7e84ad: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 7e84b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84b6: mov ecx, esp */
  ecx = esp;
/* 7e84b8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84ba: mov edi, dword ptr [ebp - 0x104] */
  edi = R32((uint32_t)(ebp + 0xfffffefcu));
/* 7e84c0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84c3: mov edi, dword ptr [ebp - 0x100] */
  edi = R32((uint32_t)(ebp + 0xffffff00u));
/* 7e84c9: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e84cc: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e84d2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7e84d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e84d7: mov ecx, esp */
  ecx = esp;
/* 7e84d9: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e84db: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7e84de: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e84e1: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e84e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7e84e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e84e8: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e84ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e84ef: mov ecx, eax */
  ecx = eax;
/* 7e84f1: call dword ptr [esi + 0x68] */
  { uint32_t t = R32((uint32_t)(esi + 0x68u)); esp -= 4; W32(esp, 0x7e84f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e84f4: jmp 0x7e8560 */
  goto L_7e8560;
L_7e84f6: /* 7e84f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e84f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e84fb: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7e8501u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8501: fld dword ptr [ebx + 0x2d8] */
  { double v = F32((uint32_t)(ebx + 0x2d8u)); FPUSH(v); }
/* 7e8507: mov ecx, dword ptr [ebx + 0x2d4] */
  ecx = R32((uint32_t)(ebx + 0x2d4u));
/* 7e850d: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7e8513: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 7e8516: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e8519: mov esi, dword ptr [ebp - 0x68] */
  esi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e851c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7e851d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8520: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e8522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8525: mov ecx, esp */
  ecx = esp;
/* 7e8527: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7e8529: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e852c: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7e852f: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8532: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7e8535: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8538: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 7e853e: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e8540: mov esi, esp */
  esi = esp;
/* 7e8542: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7e8544: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8547: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e854a: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7e854d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7e8550: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e8554: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7e855a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e855b: mov ecx, eax */
  ecx = eax;
/* 7e855d: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7e8560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e8560: /* 7e8560: xor edx, edx */
  edx = 0;
/* 7e8562: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8564: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7e8567: mov eax, edx */
  eax = edx;
/* 7e8569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e856b: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8571: /* 7e8571: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8574: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7e8575: call 0x6ccb53 */
  esp -= 4; W32(esp, 0x7e857au); SPILL(); f_6ccb53(); if (g_unwind) return; RELOAD();
/* 7e857a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e857c: je 0x7e86c3 */
  if (zf) goto L_7e86c3;
L_7e8582: /* 7e8582: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8585: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7e858b: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8590: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 7e8593: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7e8595: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7e8598: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7e859b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7e859e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7e85a1: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7e85a4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7e85a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e85aa: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7e85ad: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e85b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7e85b4: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7e85b7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7e85ba: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7e85bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7e85c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7e85c3: test byte ptr [edx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85ca: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85cc: /* 7e85cc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e85cf: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7e85d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85d7: je 0x7e85e2 */
  if (zf) goto L_7e85e2;
L_7e85d9: /* 7e85d9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7e85db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e85dc: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7e85dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e85df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e85e2: /* 7e85e2: xor esi, esi */
  esi = 0;
L_7e85e4: /* 7e85e4: cmp esi, dword ptr [edx + 0x200] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x200u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e85ea: jge 0x7e8679 */
  if ((sf == of)) goto L_7e8679;
L_7e85f0: /* 7e85f0: mov ecx, dword ptr [edx + 0x1fc] */
  ecx = R32((uint32_t)(edx + 0x1fcu));
/* 7e85f6: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 7e85f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e85fb: je 0x7e8673 */
  if (zf) goto L_7e8673;
L_7e85fd: /* 7e85fd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7e8600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8602: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8608: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e860b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7e860e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7e8610: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8616: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7e8618: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7e861b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e861d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7e8623: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8625: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 7e862b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e862c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e862f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8632: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 7e8638: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 7e863a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e863d: mov edi, esp */
  edi = esp;
/* 7e863f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e8641: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8644: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 7e8647: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e864a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e864d: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 7e8650: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8653: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e8656: mov ecx, esp */
  ecx = esp;
/* 7e8658: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7e865a: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e865d: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 7e8660: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8663: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7e8666: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e866a: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x7e8670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8670: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7e8673: /* 7e8673: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e8674: jmp 0x7e85e4 */
  goto L_7e85e4;
L_7e8679: /* 7e8679: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e867f: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8685u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8685: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7e868b: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 7e8690: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7e8693: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8695: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8697: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e869a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e869c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e869e: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86a4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86a8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86aeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7e86b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7e86b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7e86b3: xor eax, eax */
  eax = 0;
/* 7e86b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7e86bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7e86bd: mov esp, ebp */
  esp = ebp;
/* 7e86bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7e86c0: ret 0x30 */
  esp += 52; SPILL(); return;
L_7e86c3: /* 7e86c3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86c6: /* 7e86c6: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 7e86c9: jmp 0x7e7f60 */
  goto L_7e7f60;
L_7e86ce: /* 7e86ce: lea ecx, [ebp - 0x298] */
  ecx = (uint32_t)(ebp + 0xfffffd68u);
/* 7e86d4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7e86d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7e86deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7e86de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e86e1: /* 7e86e1: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7e86e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86e6: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86ec: /* 7e86ec: test byte ptr [eax + 0x82], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x82u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86f3: jne 0x7e878b */
  if (!zf) goto L_7e878b;
L_7e86f9: /* 7e86f9: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 7e86fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e86fe: je 0x7e876d */
  if (zf) goto L_7e876d;
L_7e8700: /* 7e8700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8702: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e8705: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7e870bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7e870b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7e870e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7e870f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8712: add ecx, 0xac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8718: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x7e871eu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 7e871e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8720: je 0x7e876a */
  if (zf) goto L_7e876a;
L_7e8722: /* 7e8722: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8725: mov eax, dword ptr [ecx + 0x5c] */
  eax = R32((uint32_t)(ecx + 0x5cu));
/* 7e8728: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7e872e: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7e8734: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8739: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 7e873f: add ecx, 0x208 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e8745: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7e8748: fld dword ptr [ecx - 0x98] */
  { double v = F32((uint32_t)(ecx + 0xffffff68u)); FPUSH(v); }
/* 7e874e: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7e8750: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 7e8753: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7e8756: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8758: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7e875b: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 7e875e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7e8761: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7e8764: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 7e8767: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7e876a: /* 7e876a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e876d: /* 7e876d: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e8772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8773: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7e8776: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x7e877cu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 7e877c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e877e: je 0x7e8788 */
  if (zf) goto L_7e8788;
L_7e8780: /* 7e8780: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8783: call 0x6c18d4 */
  esp -= 4; W32(esp, 0x7e8788u); SPILL(); f_6c18d4(); if (g_unwind) return; RELOAD();
L_7e8788: /* 7e8788: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e878b: /* 7e878b: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8792: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e8794: /* 7e8794: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7e8797: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 7e879d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e879f: je 0x7e87aa */
  if (zf) goto L_7e87aa;
L_7e87a1: /* 7e87a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e87a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e87a4: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7e87a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7e87aa: /* 7e87aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7e87ac: mov ecx, eax */
  ecx = eax;
/* 7e87ae: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x7e87b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e87b4: mov esi, eax */
  esi = eax;
/* 7e87b6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87b8: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e87ba: /* 7e87ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87bb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x7e87c0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 7e87c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87c2: jne 0x7e8829 */
  if (!zf) goto L_7e8829;
L_7e87c4: /* 7e87c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87c7: test byte ptr [ecx + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e87ce: jne 0x7e882c */
  if (!zf) goto L_7e882c;
L_7e87d0: /* 7e87d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e87d1: call 0x928730 */
  esp -= 4; W32(esp, 0x7e87d6u); SPILL(); f_928730(); if (g_unwind) return; RELOAD();
/* 7e87d6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e87d9: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 7e87df: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7e87e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87e4: mov edi, esp */
  edi = esp;
/* 7e87e6: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7e87e8: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7e87eb: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7e87ee: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7e87f1: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7e87f4: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7e87fa: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7e87fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7e87ff: mov edx, esp */
  edx = esp;
/* 7e8801: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7e8803: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7e8806: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7e8809: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7e880c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e880d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7e8810: call 0x6c8eae */
  esp -= 4; W32(esp, 0x7e8815u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 7e8815: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7e8818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8819: call 0x9287f0 */
  esp -= 4; W32(esp, 0x7e881eu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 7e881e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7e8821: je 0x7e8829 */
  if (zf) goto L_7e8829;
L_7e8823: /* 7e8823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7e8824: call 0x928630 */
  esp -= 4; W32(esp, 0x7e8829u); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
L_7e8829: /* 7e8829: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e882c: /* 7e882c: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e882f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8831: jne 0x7e892d */
  if (!zf) goto L_7e892d;
L_7e8837: /* 7e8837: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e883a: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7e883d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e883f: je 0x7e887e */
  if (zf) goto L_7e887e;
L_7e8841: /* 7e8841: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e884b: jne 0x7e887e */
  if (!zf) goto L_7e887e;
L_7e884d: /* 7e884d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e884e: call 0x6c699c */
  esp -= 4; W32(esp, 0x7e8853u); SPILL(); f_6c699c(); if (g_unwind) return; RELOAD();
/* 7e8853: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8855: jne 0x7e887b */
  if (!zf) goto L_7e887b;
L_7e8857: /* 7e8857: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e885a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7e885d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7e8860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8863: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e8869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e8869: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e886c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e886f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 7e8872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8875: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x7e887bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7e887b: /* 7e887b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e887e: /* 7e887e: mov eax, dword ptr [ebp - 0x8c] */
  eax = R32((uint32_t)(ebp + 0xffffff74u));
/* 7e8884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8886: jne 0x7e8896 */
  if (!zf) goto L_7e8896;
L_7e8888: /* 7e8888: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 7e888e: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8890: je 0x7e8896 */
  if (zf) goto L_7e8896;
L_7e8892: /* 7e8892: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8894: jne 0x7e88ef */
  if (!zf) goto L_7e88ef;
L_7e8896: /* 7e8896: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7e8899: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7e88a0: /* 7e88a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88a2: je 0x7e88ef */
  if (zf) goto L_7e88ef;
L_7e88a4: /* 7e88a4: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 7e88a7: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7e88aa: fcomp dword ptr [edx + 0x24] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x24u)));
  FPOP();
/* 7e88ad: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e88af: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7e88b2: jp 0x7e88ef */
  if (pf) goto L_7e88ef;
L_7e88b4: /* 7e88b4: mov eax, dword ptr [ebp + 0x30] */
  eax = R32((uint32_t)(ebp + 0x30u));
/* 7e88b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88b9: je 0x7e88cb */
  if (zf) goto L_7e88cb;
L_7e88bb: /* 7e88bb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88bf: call 0x6c2626 */
  esp -= 4; W32(esp, 0x7e88c4u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 7e88c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88c6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88c8: /* 7e88c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88cb: /* 7e88cb: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7e88ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7e88cf: call 0x6cb05a */
  esp -= 4; W32(esp, 0x7e88d4u); SPILL(); f_6cb05a(); if (g_unwind) return; RELOAD();
/* 7e88d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e88d6: jne 0x7e88e8 */
  if (!zf) goto L_7e88e8;
L_7e88d8: /* 7e88d8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7e88db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e88de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7e88e0: je 0x7e88eb */
  if (zf) goto L_7e88eb;
L_7e88e2: /* 7e88e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e88e3: call 0x6c57c7 */
  esp -= 4; W32(esp, 0x7e88e8u); SPILL(); f_6c57c7(); if (g_unwind) return; RELOAD();
L_7e88e8: /* 7e88e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7e88eb: /* 7e88eb: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 7e88ed: jmp 0x7e88a0 */
  goto L_7e88a0;
L_7e88ef: /* 7e88ef: xor esi, esi */
  esi = 0;
L_7e88f1: /* 7e88f1: cmp esi, dword ptr [ecx + 0x114] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x114u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7e88f7: jge 0x7e892d */
  if ((sf == of)) goto L_7e892d;
L_7e88f9: /* 7e88f9: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 7e88ff: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7e8902: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8904: je 0x7e892a */
  if (zf) goto L_7e892a;
L_7e8906: /* 7e8906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8909: call 0x6c2540 */
  esp -= 4; W32(esp, 0x7e890eu); SPILL(); f_6c2540(); if (g_unwind) return; RELOAD();
/* 7e890e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8910: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8913: jne 0x7e892a */
  if (!zf) goto L_7e892a;
L_7e8915: /* 7e8915: mov edx, dword ptr [ecx + 0x110] */
  edx = R32((uint32_t)(ecx + 0x110u));
/* 7e891b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e891c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 7e891f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8920: call 0x6cbc35 */
  esp -= 4; W32(esp, 0x7e8925u); SPILL(); f_6cbc35(); if (g_unwind) return; RELOAD();
/* 7e8925: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8928: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892a: /* 7e892a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7e892b: jmp 0x7e88f1 */
  goto L_7e88f1;
L_7e892d: /* 7e892d: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e8930: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7e8934: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7e8935: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x7e893bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7e893b: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7e8941: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x7e8947u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 7e8947: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 7e894a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7e894c: jne 0x7e8956 */
  if (!zf) goto L_7e8956;
L_7e894e: /* 7e894e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7e8951: call 0x6c1262 */
  esp -= 4; W32(esp, 0x7e8956u); SPILL(); f_6c1262(); if (g_unwind) return; RELOAD();
L_7e8956: /* 7e8956: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7e895c: mov edx, dword ptr [0xce8480] */
  edx = R32((uint32_t)(0xce8480u));
/* 7e8962: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7e8965: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7e8967: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7e8969: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7e896c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7e896e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7e8970: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7e8973: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7e8976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7e897c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7e897e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7e8981: jne 0x7e7ca6 */
  if (!zf) goto L_7e7ca6;
L_7e8987: /* 7e8987: jmp 0x7e771b */
  goto L_7e771b;
}
