#include "recomp.h"
#include "rec_mod.h"

void f_8b7c8a(void) {
  LOAD_REGS();
L_8b7c8a: /* 8b7c8a: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8b7c90: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b7c95: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8b7c98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7c99: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8b7c9c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b7ca1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b7ca1(); return;
}

void f_8b7ca1(void) {
  LOAD_REGS();
L_8b7ca1: /* 8b7ca1: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8b7ca7: push 0xa1bb60 */
  { uint32_t v = 0xa1bb60u; esp -= 4; W32(esp, v); }
/* 8b7cac: push 0xaea370 */
  { uint32_t v = 0xaea370u; esp -= 4; W32(esp, v); }
/* 8b7cb1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b7cb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b7cb3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b7cb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b7cb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b7cbb: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8b7cc1u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8b7cc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7cc2: push 0xaea378 */
  { uint32_t v = 0xaea378u; esp -= 4; W32(esp, v); }
/* 8b7cc7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8b7cc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b7cc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b7ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b7cce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b7cd0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b7cd5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b7cd5: guest_badaddr(0x8b7cd5); return;
}

void f_8b7f40(void) {
  LOAD_REGS();
L_8b7f40: /* 8b7f40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b7f41: mov ebp, esp */
  ebp = esp;
/* 8b7f43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b7f45: push 0x9d6dfb */
  { uint32_t v = 0x9d6dfbu; esp -= 4; W32(esp, v); }
/* 8b7f4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b7f50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7f51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b7f58: sub esp, 0x1c4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1c4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b7f5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b7f5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b7f60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b7f61: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b7f64: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b7f67: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b7f6e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8b7f70: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b7f73: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8b7f76: mov eax, dword ptr [edx + 0x88] */
  eax = R32((uint32_t)(edx + 0x88u));
/* 8b7f7c: xor ebx, ebx */
  ebx = 0;
/* 8b7f7e: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b7f81: je 0x8b7ffd */
  if (zf) goto L_8b7ffd;
L_8b7f83: /* 8b7f83: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 8b7f86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b7f87: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8b7f8a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b7f8d: mov ecx, esp */
  ecx = esp;
/* 8b7f8f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8b7f91: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8b7f94: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8b7f97: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 8b7f9a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b7f9d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8b7fa0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b7fa3: mov ecx, esp */
  ecx = esp;
/* 8b7fa5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8b7fa7: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8b7faa: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8b7fad: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8b7fb0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8b7fb3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b7fb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b7fb7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b7fb8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b7fbb: call 0x6c59c0 */
  esp -= 4; W32(esp, 0x8b7fc0u); SPILL(); f_6c59c0(); if (g_unwind) return; RELOAD();
L_8b7fc0: /* 8b7fc0: xor ebx, ebx */
  ebx = 0;
/* 8b7fc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b7fc4: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_8b7fc7: /* 8b7fc7: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8b7fcd: mov edx, dword ptr [0xce842c] */
  edx = R32((uint32_t)(0xce842cu));
/* 8b7fd3: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8b7fd6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8b7fd8: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8b7fdb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8b7fdd: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8b7fdf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b7fe1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b7fe2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b7fe4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b7fe7: xor eax, eax */
  eax = 0;
/* 8b7fe9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b7feb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b7fec: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8b7fef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b7ff6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b7ff7: mov esp, ebp */
  esp = ebp;
/* 8b7ff9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b7ffa: ret 0x24 */
  esp += 40; SPILL(); return;
L_8b7ffd: /* 8b7ffd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8000: mov ecx, dword ptr [eax + 0x104] */
  ecx = R32((uint32_t)(eax + 0x104u));
/* 8b8006: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8008: je 0x8b8053 */
  if (zf) goto L_8b8053;
L_8b800a: /* 8b800a: mov esi, dword ptr [eax + 0x124] */
  esi = R32((uint32_t)(eax + 0x124u));
/* 8b8010: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8012: je 0x8b8053 */
  if (zf) goto L_8b8053;
L_8b8014: /* 8b8014: mov esi, dword ptr [ebp + 0x28] */
  esi = R32((uint32_t)(ebp + 0x28u));
/* 8b8017: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 8b801a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b801c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b801d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b8020: mov esi, esp */
  esi = esp;
/* 8b8022: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8b8024: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 8b8027: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8b802a: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 8b802d: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 8b8030: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8b8033: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b8036: mov esi, esp */
  esi = esp;
/* 8b8038: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8b803a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 8b803d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b803e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b8041: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 8b8044: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 8b8047: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8048: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 8b804b: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x8b804eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b804e: jmp 0x8b7fc0 */
  goto L_8b7fc0;
L_8b8053: /* 8b8053: mov ecx, dword ptr [eax + 0x10c] */
  ecx = R32((uint32_t)(eax + 0x10cu));
/* 8b8059: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b805b: je 0x8b7fc7 */
  if (zf) goto L_8b7fc7;
L_8b8061: /* 8b8061: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 8b8064: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8065: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8b8068: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b806a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b806b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b806e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b806f: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8b8075: call 0x6c3a44 */
  esp -= 4; W32(esp, 0x8b807au); SPILL(); f_6c3a44(); if (g_unwind) return; RELOAD();
/* 8b807a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b807d: lea eax, [ebp - 0x1d0] */
  eax = (uint32_t)(ebp + 0xfffffe30u);
/* 8b8083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8084: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b808a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b808e: call 0x6c3c7e */
  esp -= 4; W32(esp, 0x8b8093u); SPILL(); f_6c3c7e(); if (g_unwind) return; RELOAD();
/* 8b8093: mov ebx, eax */
  ebx = eax;
/* 8b8095: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b8098: jne 0x8b82d5 */
  if (!zf) goto L_8b82d5;
L_8b809e: /* 8b809e: mov edx, dword ptr [ebp - 0xc8] */
  edx = R32((uint32_t)(ebp + 0xffffff38u));
/* 8b80a4: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8b80aa: lea ecx, [ebp - 0x17c] */
  ecx = (uint32_t)(ebp + 0xfffffe84u);
/* 8b80b0: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8b80b3: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 8b80b9: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8b80bc: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8b80bf: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8b80c2: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 8b80c5: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8b80cc: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b80cf: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b80d2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b80d5: lea edi, [ebp - 0x48] */
  edi = (uint32_t)(ebp + 0xffffffb8u);
/* 8b80d8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b80da: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b80dc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b80de: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b80e1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b80e3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b80e6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b80e8: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b80eb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b80ee: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b80f1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b80f4: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b80f7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b80fa: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b80fd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b8100: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b8103: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b8105: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b8107: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b8109: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b810b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b810d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b8110: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b8113: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b8116: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b8119: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b811c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b811f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b8122: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b8125: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b8127: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b8129: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b812b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b812d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b812f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b8132: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b8135: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b8138: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b813b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b813e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b8141: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b8144: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b8147: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b8149: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b814b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b814d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b814f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b8151: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b8153: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b8155: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b8157: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b815a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b815d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b8160: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8b8163: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8b8166: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8b8169: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8b816c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8b816f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8b8172: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8b8175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8176: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8b8179: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8b817c: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8b817f: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8b8185u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8b8185: fld dword ptr [ebp - 0xfc] */
  { double v = F32((uint32_t)(ebp + 0xffffff04u)); FPUSH(v); }
/* 8b818b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b8191: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b8193: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b8196: jp 0x8b81bc */
  if (pf) goto L_8b81bc;
L_8b8198: /* 8b8198: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8b819b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b81a1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8b81a4: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b81a7: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b81ad: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8b81b0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8b81b3: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8b81b9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_8b81bc: /* 8b81bc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b81bf: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b81c2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b81c5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8b81c8: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b81cb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8b81cd: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8b81d0: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8b81d3: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 8b81d9: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 8b81dc: lea edx, [ebp - 0x1bc] */
  edx = (uint32_t)(ebp + 0xfffffe44u);
/* 8b81e2: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 8b81e8: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8b81eb: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 8b81ee: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 8b81f5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8b81f8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8b81fb: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 8b8201: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 8b8204: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8b8207: fadd dword ptr [ebp - 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff10u)));
/* 8b820d: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 8b8213: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8b8216: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8b8219: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 8b821f: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8b8222: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8b8225: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8b8228: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8b822b: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8b822e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b8231: lea edi, [ebp - 0x48] */
  edi = (uint32_t)(ebp + 0xffffffb8u);
/* 8b8234: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b8236: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8b8238: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b823a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8b823d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b823f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8b8242: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8b8244: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8b8247: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b824a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8b824d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b8250: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8b8253: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b8256: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8b8259: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8b825c: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8b825f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b8261: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b8263: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b8265: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b8267: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b8269: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b826c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8b826f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b8272: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8b8275: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b8278: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8b827b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8b827e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8b8281: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b8283: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b8285: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b8287: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b8289: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b828b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b828e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8b8291: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b8294: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8b8297: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b829a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8b829d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8b82a0: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8b82a3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b82a5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8b82a7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b82a9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8b82ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b82ad: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8b82af: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8b82b1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8b82b3: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8b82b6: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8b82b9: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8b82bc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8b82bf: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8b82c2: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8b82c5: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8b82c8: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8b82cb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8b82cd: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8b82d0: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8b82d3: jmp 0x8b82d9 */
  goto L_8b82d9;
L_8b82d5: /* 8b82d5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b82d7: je 0x8b82f7 */
  if (zf) goto L_8b82f7;
L_8b82d9: /* 8b82d9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b82dc: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b82df: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8b82e5u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8b82e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b82e8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8b82eb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8b82ee: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b82f1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b82f4: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
L_8b82f7: /* 8b82f7: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8b82fd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b8301: call 0x6c41ba */
  esp -= 4; W32(esp, 0x8b8306u); SPILL(); f_6c41ba(); if (g_unwind) return; RELOAD();
/* 8b8306: jmp 0x8b7fc7 */
  goto L_8b7fc7;
}

void f_8b830b(void) {
  LOAD_REGS();
L_8b830b: /* 8b830b: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8b830e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b8313: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8b8316: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8317: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 8b831a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b831fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b831f(); return;
}

void f_8b831f(void) {
  LOAD_REGS();
L_8b831f: /* 8b831f: push 0xa1bb98 */
  { uint32_t v = 0xa1bb98u; esp -= 4; W32(esp, v); }
/* 8b8324: push 0xaea380 */
  { uint32_t v = 0xaea380u; esp -= 4; W32(esp, v); }
/* 8b8329: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b832fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b832f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8332: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8336: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b833bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b833b: guest_badaddr(0x8b833b); return;
}

void f_8b8440(void) {
  LOAD_REGS();
L_8b8440: /* 8b8440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b8441: mov ebp, esp */
  ebp = esp;
/* 8b8443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b8445: push 0x9d6e10 */
  { uint32_t v = 0x9d6e10u; esp -= 4; W32(esp, v); }
/* 8b844a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b8450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b8458: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b845b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b845c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b845d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b845e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b8461: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* 8b8466: mov esi, ecx */
  esi = ecx;
/* 8b8468: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8b846d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b846e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b8475: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x8b847bu); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 8b847b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b847e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8481: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b8482: mov eax, esi */
  eax = esi;
/* 8b8484: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b8485: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b848c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b848d: mov esp, ebp */
  esp = ebp;
/* 8b848f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b8490: ret  */
  esp += 4; SPILL(); return;
}

void f_8b8491(void) {
  LOAD_REGS();
L_8b8491: /* 8b8491: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b8494: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b8499: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8b849c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b849d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b84a0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b84a5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b84a5(); return;
}

void f_8b84a5(void) {
  LOAD_REGS();
L_8b84a5: /* 8b84a5: push 0xa1bbd4 */
  { uint32_t v = 0xa1bbd4u; esp -= 4; W32(esp, v); }
/* 8b84aa: push 0xaeb0f0 */
  { uint32_t v = 0xaeb0f0u; esp -= 4; W32(esp, v); }
/* 8b84af: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b84b5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b84b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b84b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b84ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b84bc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b84c1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b84c1: guest_badaddr(0x8b84c1); return;
}

void f_8b8500(void) {
  LOAD_REGS();
L_8b8500: /* 8b8500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b8504: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b8506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8507: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b850du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b850d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b8520(void) {
  LOAD_REGS();
L_8b8520: /* 8b8520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8521: mov esi, ecx */
  esi = ecx;
/* 8b8523: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b8529u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b8529: mov eax, esi */
  eax = esi;
/* 8b852b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b852c: ret  */
  esp += 4; SPILL(); return;
}

void f_8b8540(void) {
  LOAD_REGS();
L_8b8540: /* 8b8540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8541: mov esi, ecx */
  esi = ecx;
/* 8b8543: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8b8549u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8b8549: mov eax, esi */
  eax = esi;
/* 8b854b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b854c: ret  */
  esp += 4; SPILL(); return;
}

void f_8b8560(void) {
  LOAD_REGS();
L_8b8560: /* 8b8560: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b8564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8565: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b8567: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8b856du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8b856d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b8580(void) {
  LOAD_REGS();
L_8b8580: /* 8b8580: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8b8584: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8b8586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8587: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8b858du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8b858d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8b85a0(void) {
  LOAD_REGS();
L_8b85a0: /* 8b85a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b85a1: mov ebp, esp */
  ebp = esp;
/* 8b85a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b85a5: push 0x9d6e44 */
  { uint32_t v = 0x9d6e44u; esp -= 4; W32(esp, v); }
/* 8b85aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b85b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b85b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b85b8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b85bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b85bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b85bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b85be: xor esi, esi */
  esi = 0;
/* 8b85c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b85c3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b85c6: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8b85c9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8b85cb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8b85cd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b85d0: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b85d3: je 0x8b864e */
  if (zf) goto L_8b864e;
L_8b85d5: /* 8b85d5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b85d8: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8b85da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8b85e0: /* 8b85e0: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b85e3: jge 0x8b875d */
  if ((sf == of)) goto L_8b875d;
L_8b85e9: /* 8b85e9: xor edi, edi */
  edi = 0;
/* 8b85eb: jmp 0x8b85f0 */
  goto L_8b85f0;
L_8b85f0: /* 8b85f0: lea eax, [esi + esi*2 + 0x2d] */
  eax = (uint32_t)(esi + esi*2 + 0x2du);
/* 8b85f4: cmp edi, dword ptr [ecx + eax*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + eax*4)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b85f7: jge 0x8b864b */
  if ((sf == of)) goto L_8b864b;
L_8b85f9: /* 8b85f9: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b85fc: mov edx, dword ptr [ecx + edx*4 + 0xb0] */
  edx = R32((uint32_t)(ecx + edx*4 + 0xb0u));
/* 8b8603: mov ecx, dword ptr [ecx + 0x44] */
  ecx = R32((uint32_t)(ecx + 0x44u));
/* 8b8606: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8b8609: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8b860c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b860f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b8612: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8618u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8618: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8619: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b861c: push 0xaea3a0 */
  { uint32_t v = 0xaea3a0u; esp -= 4; W32(esp, v); }
/* 8b8621: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8622: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b8628u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b8628: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b862b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b862e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b862f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8b8632: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8b8638u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b8638: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b863b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b863f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b8645u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b8645: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8648: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b8649: jmp 0x8b85f0 */
  goto L_8b85f0;
L_8b864b: /* 8b864b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b864c: jmp 0x8b85e0 */
  goto L_8b85e0;
L_8b864e: /* 8b864e: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
L_8b8654: /* 8b8654: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8657: jge 0x8b875d */
  if ((sf == of)) goto L_8b875d;
L_8b865d: /* 8b865d: xor edi, edi */
  edi = 0;
/* 8b865f: nop  */
L_8b8660: /* 8b8660: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8663: lea eax, [esi + esi*2 + 0x2d] */
  eax = (uint32_t)(esi + esi*2 + 0x2du);
/* 8b8667: cmp edi, dword ptr [edx + eax*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + eax*4)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b866a: jge 0x8b8757 */
  if ((sf == of)) goto L_8b8757;
L_8b8670: /* 8b8670: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b8673: mov ecx, dword ptr [edx + ecx*4 + 0xb0] */
  ecx = R32((uint32_t)(edx + ecx*4 + 0xb0u));
/* 8b867a: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8b867d: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8b8680: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8b8683: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b8685: je 0x8b86ac */
  if (zf) goto L_8b86ac;
L_8b8687: /* 8b8687: jle 0x8b8751 */
  if ((zf || sf != of)) goto L_8b8751;
L_8b868d: /* 8b868d: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8690: jg 0x8b8751 */
  if ((!zf && sf == of)) goto L_8b8751;
L_8b8696: /* 8b8696: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8b869c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8b869e: push 0xaea3b8 */
  { uint32_t v = 0xaea3b8u; esp -= 4; W32(esp, v); }
/* 8b86a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b86a4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8b86a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b86a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b86a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b86aa: jmp 0x8b8660 */
  goto L_8b8660;
L_8b86ac: /* 8b86ac: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8b86ae: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8b86b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b86b3: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 8b86b6: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8b86b9: jl 0x8b8751 */
  if ((sf != of)) goto L_8b8751;
L_8b86bf: /* 8b86bf: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b86c2: jle 0x8b8723 */
  if ((zf || sf != of)) goto L_8b8723;
L_8b86c4: /* 8b86c4: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b86c7: jne 0x8b8751 */
  if (!zf) goto L_8b8751;
L_8b86cd: /* 8b86cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b86cf: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8b86d2: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b86d5: jge 0x8b86dd */
  if ((sf == of)) goto L_8b86dd;
L_8b86d7: /* 8b86d7: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b86dd: /* 8b86dd: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8b86e2: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8b86e4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b86e7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b86ea: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b86f0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b86f3: push 0xaea3b0 */
  { uint32_t v = 0xaea3b0u; esp -= 4; W32(esp, v); }
/* 8b86f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b86f9: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b86ffu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b86ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8702: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b8705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8706: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b870a: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8b8710u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b8710: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b8713: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b8717: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b871du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b871d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b871e: jmp 0x8b8660 */
  goto L_8b8660;
L_8b8723: /* 8b8723: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8724: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b8727: push 0xaea3a8 */
  { uint32_t v = 0xaea3a8u; esp -= 4; W32(esp, v); }
/* 8b872c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b872d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b8733u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b8733: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8736: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b8739: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b873a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b873e: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8b8744u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b8744: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b8747: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b874b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b8751u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8b8751: /* 8b8751: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b8752: jmp 0x8b8660 */
  goto L_8b8660;
L_8b8757: /* 8b8757: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b8758: jmp 0x8b8654 */
  goto L_8b8654;
L_8b875d: /* 8b875d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8b875f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b8762: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 8b8766: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b8769: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b876b: je 0x8b877d */
  if (zf) goto L_8b877d;
L_8b876d: /* 8b876d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b8770: push 0xaea3d4 */
  { uint32_t v = 0xaea3d4u; esp -= 4; W32(esp, v); }
/* 8b8775: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8b877bu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b877b: jmp 0x8b87ce */
  goto L_8b87ce;
L_8b877d: /* 8b877d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b877f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b8782: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b8785: jge 0x8b878d */
  if ((sf == of)) goto L_8b878d;
L_8b8787: /* 8b8787: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b878d: /* 8b878d: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b8793: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b8795: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b8798: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8b879b: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b87a1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b87a4: push 0xaea3f0 */
  { uint32_t v = 0xaea3f0u; esp -= 4; W32(esp, v); }
/* 8b87a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b87aa: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b87b0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b87b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b87b3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b87b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b87b7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b87bb: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8b87c1u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b87c1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b87c4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b87c8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b87ceu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8b87ce: /* 8b87ce: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b87d1: push 0xaea3f8 */
  { uint32_t v = 0xaea3f8u; esp -= 4; W32(esp, v); }
/* 8b87d6: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8b87dcu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b87dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b87df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b87e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b87e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b87e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b87e9: mov esp, ebp */
  esp = ebp;
/* 8b87eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b87ec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b85ed(void) {
  LOAD_REGS();
  goto L_8b85ed;
L_8b85e0: /* 8b85e0: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b85e3: jge 0x8b875d */
  if ((sf == of)) goto L_8b875d;
L_8b85e9: /* 8b85e9: xor edi, edi */
  edi = 0;
/* 8b85eb: jmp 0x8b85f0 */
  goto L_8b85f0;
L_8b85ed: /* 8b85ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b85f0: /* 8b85f0: lea eax, [esi + esi*2 + 0x2d] */
  eax = (uint32_t)(esi + esi*2 + 0x2du);
/* 8b85f4: cmp edi, dword ptr [ecx + eax*4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + eax*4)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b85f7: jge 0x8b864b */
  if ((sf == of)) goto L_8b864b;
L_8b85f9: /* 8b85f9: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b85fc: mov edx, dword ptr [ecx + edx*4 + 0xb0] */
  edx = R32((uint32_t)(ecx + edx*4 + 0xb0u));
/* 8b8603: mov ecx, dword ptr [ecx + 0x44] */
  ecx = R32((uint32_t)(ecx + 0x44u));
/* 8b8606: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8b8609: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8b860c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b860f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b8612: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8618u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8618: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8619: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b861c: push 0xaea3a0 */
  { uint32_t v = 0xaea3a0u; esp -= 4; W32(esp, v); }
/* 8b8621: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8622: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b8628u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b8628: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b862b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b862e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b862f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8b8632: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8b8638u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b8638: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8b863b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b863f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b8645u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b8645: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8648: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8b8649: jmp 0x8b85f0 */
  goto L_8b85f0;
L_8b864b: /* 8b864b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b864c: jmp 0x8b85e0 */
  goto L_8b85e0;
L_8b875d: /* 8b875d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8b875f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b8762: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 8b8766: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b8769: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b876b: je 0x8b877d */
  if (zf) goto L_8b877d;
L_8b876d: /* 8b876d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b8770: push 0xaea3d4 */
  { uint32_t v = 0xaea3d4u; esp -= 4; W32(esp, v); }
/* 8b8775: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8b877bu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b877b: jmp 0x8b87ce */
  goto L_8b87ce;
L_8b877d: /* 8b877d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b877f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b8782: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8b8785: jge 0x8b878d */
  if ((sf == of)) goto L_8b878d;
L_8b8787: /* 8b8787: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b878d: /* 8b878d: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b8793: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b8795: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b8798: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8b879b: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b87a1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b87a4: push 0xaea3f0 */
  { uint32_t v = 0xaea3f0u; esp -= 4; W32(esp, v); }
/* 8b87a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b87aa: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b87b0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b87b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b87b3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b87b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b87b7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b87bb: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x8b87c1u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b87c1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8b87c4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b87c8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b87ceu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8b87ce: /* 8b87ce: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b87d1: push 0xaea3f8 */
  { uint32_t v = 0xaea3f8u; esp -= 4; W32(esp, v); }
/* 8b87d6: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x8b87dcu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b87dc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b87df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b87e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b87e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b87e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b87e9: mov esp, ebp */
  esp = ebp;
/* 8b87eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b87ec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b87ef(void) {
  LOAD_REGS();
L_8b87ef: /* 8b87ef: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b87f2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b87f7: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8b87fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b87fb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8b87fe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b8803u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b8803(); return;
}

void f_8b8803(void) {
  LOAD_REGS();
L_8b8803: /* 8b8803: push 0xa1bc14 */
  { uint32_t v = 0xa1bc14u; esp -= 4; W32(esp, v); }
/* 8b8808: push 0xaea3fc */
  { uint32_t v = 0xaea3fcu; esp -= 4; W32(esp, v); }
/* 8b880d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b8813u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b8813: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8816: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8818: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b881a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b881fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8b881f: guest_badaddr(0x8b881f); return;
}

void f_8b88c0(void) {
  LOAD_REGS();
L_8b88c0: /* 8b88c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b88c1: mov ebp, esp */
  ebp = esp;
/* 8b88c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b88c5: push 0x9d6e60 */
  { uint32_t v = 0x9d6e60u; esp -= 4; W32(esp, v); }
/* 8b88ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b88d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b88d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b88d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b88db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b88dc: mov eax, ecx */
  eax = ecx;
/* 8b88de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b88df: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b88e2: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8b88e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b88e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b88e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b88eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b88f2: je 0x8b890b */
  if (zf) goto L_8b890b;
L_8b88f4: /* 8b88f4: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 8b88f7: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8b88fa: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b88fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b88fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b88ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8900: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8b8905u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8b8905: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8908: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b890b: /* 8b890b: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 8b890e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8910: je 0x8b8929 */
  if (zf) goto L_8b8929;
L_8b8912: /* 8b8912: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 8b8915: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* 8b8918: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b891b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b891c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b891d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b891e: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8b8923u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8b8923: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8926: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b8929: /* 8b8929: xor esi, esi */
  esi = 0;
/* 8b892b: jmp 0x8b8930 */
  goto L_8b8930;
L_8b8930: /* 8b8930: cmp esi, dword ptr [eax + 0x84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8936: jge 0x8b895b */
  if ((sf == of)) goto L_8b895b;
L_8b8938: /* 8b8938: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 8b893e: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b8941: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b8944: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b8946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8947: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 8b894d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b894f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8b8955u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b8955: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8958: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b8959: jmp 0x8b8930 */
  goto L_8b8930;
L_8b895b: /* 8b895b: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8b895e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8960: je 0x8b898b */
  if (zf) goto L_8b898b;
L_8b8962: /* 8b8962: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 8b8965: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8b896c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b896f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b8972: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b8975: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b8978: xor eax, eax */
  eax = 0;
/* 8b897a: mov ebx, ecx */
  ebx = ecx;
/* 8b897c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8b897f: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8b8982: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8b8984: mov ecx, ebx */
  ecx = ebx;
/* 8b8986: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8b8988: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_8b898b: /* 8b898b: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 8b898e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8990: je 0x8b89b7 */
  if (zf) goto L_8b89b7;
L_8b8992: /* 8b8992: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 8b8995: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b8998: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8b899b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b899e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b89a1: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b89a4: xor eax, eax */
  eax = 0;
/* 8b89a6: mov ebx, ecx */
  ebx = ecx;
/* 8b89a8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8b89ab: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8b89ae: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8b89b0: mov ecx, ebx */
  ecx = ebx;
/* 8b89b2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8b89b4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_8b89b7: /* 8b89b7: xor esi, esi */
  esi = 0;
/* 8b89b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b89c0: /* 8b89c0: cmp esi, dword ptr [eax + 0x84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b89c6: jge 0x8b8a15 */
  if ((sf == of)) goto L_8b8a15;
L_8b89c8: /* 8b89c8: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 8b89ce: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b89d1: push 0xce81f0 */
  { uint32_t v = 0xce81f0u; esp -= 4; W32(esp, v); }
/* 8b89d6: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b89d9: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b89dfu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b89df: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b89e2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b89e3: jmp 0x8b89c0 */
  goto L_8b89c0;
L_8b8a15: /* 8b8a15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b8a18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b8a19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b8a1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b8a21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b8a22: mov esp, ebp */
  esp = ebp;
/* 8b8a24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b8a25: ret  */
  esp += 4; SPILL(); return;
}

void f_8b892d(void) {
  LOAD_REGS();
L_8b892d: /* 8b892d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8b8930: /* 8b8930: cmp esi, dword ptr [eax + 0x84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8936: jge 0x8b895b */
  if ((sf == of)) goto L_8b895b;
L_8b8938: /* 8b8938: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 8b893e: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8b8941: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8b8944: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b8946: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8947: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 8b894d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b894f: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8b8955u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b8955: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8958: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b8959: jmp 0x8b8930 */
  goto L_8b8930;
L_8b895b: /* 8b895b: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 8b895e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8960: je 0x8b898b */
  if (zf) goto L_8b898b;
L_8b8962: /* 8b8962: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 8b8965: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8b896c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b896f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8b8972: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b8975: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b8978: xor eax, eax */
  eax = 0;
/* 8b897a: mov ebx, ecx */
  ebx = ecx;
/* 8b897c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8b897f: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8b8982: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8b8984: mov ecx, ebx */
  ecx = ebx;
/* 8b8986: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8b8988: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_8b898b: /* 8b898b: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 8b898e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8990: je 0x8b89b7 */
  if (zf) goto L_8b89b7;
L_8b8992: /* 8b8992: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 8b8995: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8b8998: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8b899b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b899e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8b89a1: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8b89a4: xor eax, eax */
  eax = 0;
/* 8b89a6: mov ebx, ecx */
  ebx = ecx;
/* 8b89a8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8b89ab: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8b89ae: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8b89b0: mov ecx, ebx */
  ecx = ebx;
/* 8b89b2: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8b89b4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_8b89b7: /* 8b89b7: xor esi, esi */
  esi = 0;
/* 8b89b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8b89c0: /* 8b89c0: cmp esi, dword ptr [eax + 0x84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b89c6: jge 0x8b8a15 */
  if ((sf == of)) goto L_8b8a15;
L_8b89c8: /* 8b89c8: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 8b89ce: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8b89d1: push 0xce81f0 */
  { uint32_t v = 0xce81f0u; esp -= 4; W32(esp, v); }
/* 8b89d6: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8b89d9: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b89dfu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b89df: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b89e2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8b89e3: jmp 0x8b89c0 */
  goto L_8b89c0;
L_8b8a15: /* 8b8a15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b8a18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b8a19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b8a1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b8a21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b8a22: mov esp, ebp */
  esp = ebp;
/* 8b8a24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b8a25: ret  */
  esp += 4; SPILL(); return;
}

void f_8b89e5(void) {
  LOAD_REGS();
L_8b89e5: /* 8b89e5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8b89e8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8b89ed: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8b89f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b89f1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8b89f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b89f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8b89f9(); return;
}

void f_8b89f9(void) {
  LOAD_REGS();
L_8b89f9: /* 8b89f9: push 0xa1bc48 */
  { uint32_t v = 0xa1bc48u; esp -= 4; W32(esp, v); }
/* 8b89fe: push 0xaea404 */
  { uint32_t v = 0xaea404u; esp -= 4; W32(esp, v); }
/* 8b8a03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8b8a09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8b8a09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8a0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8a10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8b8a15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8b8a15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8b8a18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b8a19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b8a1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8b8a21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b8a22: mov esp, ebp */
  esp = ebp;
/* 8b8a24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b8a25: ret  */
  esp += 4; SPILL(); return;
}

void f_8b8a90(void) {
  LOAD_REGS();
L_8b8a90: /* 8b8a90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8a91: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8b8a96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b8a97: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b8a98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8a99: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8b8a9d: lea ebp, [eax + esi*4] */
  ebp = (uint32_t)(eax + esi*4);
/* 8b8aa0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b8aa1: mov edi, ecx */
  edi = ecx;
/* 8b8aa3: mov ebx, dword ptr [edi + 0x108] */
  ebx = R32((uint32_t)(edi + 0x108u));
/* 8b8aa9: mov eax, esi */
  eax = esi;
/* 8b8aab: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8b8aad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b8aae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b8ab0: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8b8ab4: jle 0x8b8ac5 */
  if ((zf || sf != of)) goto L_8b8ac5;
L_8b8ab6: /* 8b8ab6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8ab7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8b8ab9: lea ecx, [edi + 0x104] */
  ecx = (uint32_t)(edi + 0x104u);
/* 8b8abf: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8b8ac5u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
L_8b8ac5: /* 8b8ac5: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* 8b8acb: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 8b8ace: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8b8ad2: lea eax, [esi + ecx + 4] */
  eax = (uint32_t)(esi + ecx + 0x4u);
/* 8b8ad6: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8b8ad8: je 0x8b8b11 */
  if (zf) goto L_8b8b11;
L_8b8ada: /* 8b8ada: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8b8adc: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* 8b8ae2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8ae4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b8ae6: lea ecx, [esi + edx + 0x10] */
  ecx = (uint32_t)(esi + edx + 0x10u);
/* 8b8aea: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8b8af0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8b8af0: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 8b8af6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b8af7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8b8af9: lea ecx, [esi + eax + 0x10] */
  ecx = (uint32_t)(esi + eax + 0x10u);
/* 8b8afd: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8b8b03u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8b8b03: mov ecx, dword ptr [edi + 0x104] */
  ecx = R32((uint32_t)(edi + 0x104u));
/* 8b8b09: mov dword ptr [esi + ecx + 8], 0 */
  W32((uint32_t)(esi + ecx + 0x8u), 0x0u);
L_8b8b11: /* 8b8b11: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* 8b8b17: mov eax, dword ptr [edx + esi + 8] */
  eax = R32((uint32_t)(edx + esi + 0x8u));
/* 8b8b1b: mov ecx, dword ptr [edx + esi + 4] */
  ecx = R32((uint32_t)(edx + esi + 0x4u));
/* 8b8b1f: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8b8b21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b8b22: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b8b25: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8b27: jg 0x8b8b2b */
  if ((!zf && sf == of)) goto L_8b8b2b;
L_8b8b29: /* 8b8b29: mov eax, ecx */
  eax = ecx;
L_8b8b2b: /* 8b8b2b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8b8b2e: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 8b8b34: mov ecx, dword ptr [eax + esi + 8] */
  ecx = R32((uint32_t)(eax + esi + 0x8u));
/* 8b8b38: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b8b3a: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8b3d: jle 0x8b8b96 */
  if ((zf || sf != of)) goto L_8b8b96;
L_8b8b3f: /* 8b8b3f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b8b41: mov ebx, dword ptr [ebp] */
  ebx = R32((uint32_t)(ebp));
/* 8b8b44: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 8b8b47: add ecx, -3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8b8b4a: mov dword ptr [eax + edx*4], ebx */
  W32((uint32_t)(eax + edx*4), ebx);
/* 8b8b4d: xor ebx, ebx */
  ebx = 0;
/* 8b8b4f: xor ebp, ebp */
  ebp = 0;
/* 8b8b51: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b8b53: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8b8b57: jle 0x8b8b70 */
  if ((zf || sf != of)) goto L_8b8b70;
L_8b8b59: /* 8b8b59: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* 8b8b5f: mov eax, dword ptr [esi + edx + 0x10] */
  eax = R32((uint32_t)(esi + edx + 0x10u));
L_8b8b63: /* 8b8b63: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8b8b65: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 8b8b67: adc ebp, 0 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebp = r;
  }
/* 8b8b6a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8b8b6d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 8b8b6e: jne 0x8b8b63 */
  if (!zf) goto L_8b8b63;
L_8b8b70: /* 8b8b70: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 8b8b76: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 8b8b79: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8b8b7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8b8b7c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b8b7d: idiv dword ptr [ecx + 4] */
  { int32_t d = (int32_t)R32((uint32_t)(ecx + 0x4u)); if (!d) d = (int32_t)guest_divzero(0x8b8b7d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8b8b80: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8b8b84: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8b8b86: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8b8b87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8b88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8b89: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b8b8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b8b8b: call 0x99cca0 */
  esp -= 4; W32(esp, 0x8b8b90u); SPILL(); f_99cca0(); if (g_unwind) return; RELOAD();
/* 8b8b90: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8b8b94: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_8b8b96: /* 8b8b96: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8b8b97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8b8b98: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8b8b99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8b8b9a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8b8b9b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8b8bf0(void) {
  LOAD_REGS();
L_8b8bf0: /* 8b8bf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8b8bf1: mov ebp, esp */
  ebp = esp;
/* 8b8bf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8b8bf5: push 0x9d72f9 */
  { uint32_t v = 0x9d72f9u; esp -= 4; W32(esp, v); }
/* 8b8bfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8b8c00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8c01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8b8c08: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b8c0e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b8c11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b8c12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8c13: mov esi, dword ptr [eax + 0x68] */
  esi = R32((uint32_t)(eax + 0x68u));
/* 8b8c16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8b8c17: mov edi, ecx */
  edi = ecx;
/* 8b8c19: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b8c1c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8b8c1f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8b8c26: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8b8c2cu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8b8c2c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8b8c2f: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 8b8c32: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8c34: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b8c38: je 0x8b8e09 */
  if (zf) goto L_8b8e09;
L_8b8c3e: /* 8b8c3e: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8b8c41: mov eax, dword ptr [0xce8314] */
  eax = R32((uint32_t)(0xce8314u));
/* 8b8c46: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8b8c49: fild dword ptr [edx + eax*4] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 8b8c4c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b8c4e: jge 0x8b8c56 */
  if ((sf == of)) goto L_8b8c56;
L_8b8c50: /* 8b8c50: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b8c56: /* 8b8c56: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b8c5c: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b8c5e: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8b8c60: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8b8c66: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b8c68: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b8c6b: jnp 0x8b8c81 */
  if (!pf) goto L_8b8c81;
L_8b8c6d: /* 8b8c6d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8b8c6f: fmul dword ptr [0xa09e18] */
  ST0 = ST0 * (F32((uint32_t)(0xa09e18u)));
/* 8b8c75: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8b8c77: fmul dword ptr [0xa1bcec] */
  ST0 = ST0 * (F32((uint32_t)(0xa1bcecu)));
/* 8b8c7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8b8c7f: jmp 0x8b8c83 */
  goto L_8b8c83;
L_8b8c81: /* 8b8c81: fld st(0) */
  { double v = STI(0); FPUSH(v); }
L_8b8c83: /* 8b8c83: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8b8c89: fst dword ptr [edi] */
  WF32((uint32_t)(edi), ST0);
/* 8b8c8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b8c8d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b8c90: jnp 0x8b8c9a */
  if (!pf) goto L_8b8c9a;
L_8b8c92: /* 8b8c92: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8b8c98: jmp 0x8b8ca2 */
  goto L_8b8ca2;
L_8b8c9a: /* 8b8c9a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b8c9c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8b8ca2: /* 8b8ca2: call 0x99c958 */
  esp -= 4; W32(esp, 0x8b8ca7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8b8ca7: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8b8cad: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8b8caf: mov ebx, eax */
  ebx = eax;
/* 8b8cb1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8b8cb6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8b8cb6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8b8cb8: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8b8cbb: xor eax, eax */
  eax = 0;
/* 8b8cbd: cmp ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8cc0: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8b8cc3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8b8cc6: jge 0x8b8cd1 */
  if ((sf == of)) goto L_8b8cd1;
L_8b8cc8: /* 8b8cc8: mov byte ptr [ebp - 0x13], al */
  W8((uint32_t)(ebp + 0xffffffedu), (eax & 0xffu));
/* 8b8ccb: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8b8ccf: jmp 0x8b8d0f */
  goto L_8b8d0f;
L_8b8cd1: /* 8b8cd1: cmp ebx, 0x1e */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8cd4: jge 0x8b8cee */
  if ((sf == of)) goto L_8b8cee;
L_8b8cd6: /* 8b8cd6: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8b8cda: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8b8cde: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8b8ce2: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b8ce6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8ce9: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8b8cec: jmp 0x8b8d1d */
  goto L_8b8d1d;
L_8b8cee: /* 8b8cee: cmp ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8b8cf1: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b8cf5: jge 0x8b8d0b */
  if ((sf == of)) goto L_8b8d0b;
L_8b8cf7: /* 8b8cf7: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b8cfb: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8b8cff: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b8d03: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8d06: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 8b8d09: jmp 0x8b8d1d */
  goto L_8b8d1d;
L_8b8d0b: /* 8b8d0b: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
L_8b8d0f: /* 8b8d0f: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b8d13: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b8d17: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8d1a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
L_8b8d1d: /* 8b8d1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8b8d1e: xor eax, eax */
  eax = 0;
/* 8b8d20: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8d23: push 0xaea40c */
  { uint32_t v = 0xaea40cu; esp -= 4; W32(esp, v); }
/* 8b8d28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8d29: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 8b8d2c: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 8b8d2f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b8d35u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b8d35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8d38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8d39: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b8d3c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8b8d40: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x8b8d46u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8b8d46: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8d49: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b8d4d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b8d53u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b8d53: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b8d56: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8d5cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8d5c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b8d5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8d5f: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8b8d62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8d63: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 8b8d66: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8b8d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8d6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8d6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8d6c: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8b8d72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b8d72: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b8d75: mov ecx, dword ptr [ebx + 0x88] */
  ecx = R32((uint32_t)(ebx + 0x88u));
/* 8b8d7b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8b8d7e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8b8d81: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8b8d83: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8d86: sub ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8b8d89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8d8a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8b8d8d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8b8d90: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8d93: push 0xaea424 */
  { uint32_t v = 0xaea424u; esp -= 4; W32(esp, v); }
/* 8b8d98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8d99: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b8d9c: mov dword ptr [esi + 0x48], 0x42c00000 */
  W32((uint32_t)(esi + 0x48u), 0x42c00000u);
/* 8b8da3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b8da9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b8da9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8dac: mov ecx, eax */
  ecx = eax;
/* 8b8dae: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8b8db2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8db8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8db8: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 8b8dbb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b8dbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8dbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8dc0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8dc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8dc2: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b8dc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b8dc8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8dcb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8dce: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b8dd2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b8dd8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b8dd8: mov eax, dword ptr [ebx + 0x88] */
  eax = R32((uint32_t)(ebx + 0x88u));
/* 8b8dde: sub eax, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8b8de1: sub eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8b8de4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8b8de7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8b8dea: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b8ded: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b8df0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8df6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8df6: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 8b8df9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b8dfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8dfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8dfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8dff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8e00: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b8e06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b8e06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8b8e09: /* 8b8e09: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8b8e0c: mov ebx, 0x41000000 */
  ebx = 0x41000000u;
/* 8b8e11: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* 8b8e14: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8b8e17: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8b8e19: mov dword ptr [ebp - 0x18], 8 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x8u);
/* 8b8e20: je 0x8bc118 */
  if (zf) goto L_8bc118;
L_8b8e26: /* 8b8e26: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8b8e2a: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b8e2e: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b8e32: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b8e36: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8e39: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8b8e3c: push 0xaea43c */
  { uint32_t v = 0xaea43cu; esp -= 4; W32(esp, v); }
/* 8b8e41: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b8e44: mov dword ptr [esi + 0x48], 0x41400000 */
  W32((uint32_t)(esi + 0x48u), 0x41400000u);
/* 8b8e4b: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b8e51u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b8e51: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b8e54: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b8e5a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8b8e5d: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8b8e63: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b8e65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b8e67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b8e6a: jp 0x8b8e76 */
  if (pf) goto L_8b8e76;
L_8b8e6c: /* 8b8e6c: mov dword ptr [ebp - 0x18], 0xd0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xd0u);
/* 8b8e73: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
L_8b8e76: /* 8b8e76: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b8e79: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b8e7c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b8e7f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8e85u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8e85: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b8e88: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b8e8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8e8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8e8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b8e8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8e8f: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b8e95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b8e95: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b8e98: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b8e9e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b8ea1: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b8ea5: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b8ea9: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b8ead: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b8eb1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b8eb4: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b8eb7: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8b8ebd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8ec0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b8ec2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b8ec4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b8ec7: jp 0x8b8ed3 */
  if (pf) goto L_8b8ed3;
L_8b8ec9: /* 8b8ec9: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b8ed0: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
L_8b8ed3: /* 8b8ed3: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b8ed6: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b8ed9: mov eax, dword ptr [0xce8314] */
  eax = R32((uint32_t)(0xce8314u));
/* 8b8ede: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8b8ee1: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8b8ee4: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8b8ee7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b8eea: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b8eed: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8ef3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8ef3: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b8ef5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b8ef7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b8ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8efa: jge 0x8b8f02 */
  if ((sf == of)) goto L_8b8f02;
L_8b8efc: /* 8b8efc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b8f02: /* 8b8f02: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8b8f07: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8b8f09: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b8f0c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8f0f: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b8f15: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b8f18: push 0xaea460 */
  { uint32_t v = 0xaea460u; esp -= 4; W32(esp, v); }
/* 8b8f1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8f1e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b8f24u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b8f24: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8f27: mov ecx, eax */
  ecx = eax;
/* 8b8f29: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8b8f2d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8f33u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8f33: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b8f35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8f36: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8b8f39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8f3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8f3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8f3d: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8b8f43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b8f43: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8f46: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8f49: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b8f4d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b8f53u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b8f53: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b8f56: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b8f5c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b8f5f: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8b8f65: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b8f67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b8f69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b8f6c: jp 0x8b8f7c */
  if (pf) goto L_8b8f7c;
L_8b8f6e: /* 8b8f6e: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b8f75: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b8f7c: /* 8b8f7c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b8f7f: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b8f82: mov eax, dword ptr [0xce8318] */
  eax = R32((uint32_t)(0xce8318u));
/* 8b8f87: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8b8f8a: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8b8f8d: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8b8f90: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b8f93: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b8f96: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8f9cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8f9c: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b8f9e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b8fa0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b8fa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8fa3: jge 0x8b8fab */
  if ((sf == of)) goto L_8b8fab;
L_8b8fa5: /* 8b8fa5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b8fab: /* 8b8fab: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8b8fb0: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8b8fb2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b8fb5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8fb8: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b8fbe: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b8fc1: push 0xaea478 */
  { uint32_t v = 0xaea478u; esp -= 4; W32(esp, v); }
/* 8b8fc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b8fc7: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b8fcdu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b8fcd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8fd0: mov ecx, eax */
  ecx = eax;
/* 8b8fd2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8b8fd6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b8fdcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b8fdc: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8b8fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8fdf: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8b8fe2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b8fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b8fe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b8fe6: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8b8fecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b8fec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b8fef: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b8ff2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b8ff6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b8ffcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b8ffc: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8b8fff: mov ecx, dword ptr [0xce8318] */
  ecx = R32((uint32_t)(0xce8318u));
/* 8b9005: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8b9008: fild dword ptr [eax + ecx*4] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + ecx*4)); FPUSH(v); }
/* 8b900b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b900d: jge 0x8b9015 */
  if ((sf == of)) goto L_8b9015;
L_8b900f: /* 8b900f: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9015: /* 8b9015: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8b901b: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8b901d: mov edx, dword ptr [0xce8448] */
  edx = R32((uint32_t)(0xce8448u));
/* 8b9023: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8b9026: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b9028: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b902e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8b9031: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8b9033: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8b9036: jge 0x8b903e */
  if ((sf == of)) goto L_8b903e;
L_8b9038: /* 8b9038: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b903e: /* 8b903e: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8b9040: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b9046: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8b9048: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* 8b904a: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8b904c: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8b9052: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9054: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9057: jp 0x8b9066 */
  if (pf) goto L_8b9066;
L_8b9059: /* 8b9059: fcom qword ptr [0xa176f0] */
  fpu_com(ST0, F64((uint32_t)(0xa176f0u)));
/* 8b905f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9061: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b9064: je 0x8b9082 */
  if (zf) goto L_8b9082;
L_8b9066: /* 8b9066: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8b9068: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8b906e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9070: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b9073: jne 0x8b909a */
  if (!zf) goto L_8b909a;
L_8b9075: /* 8b9075: fcom qword ptr [0xa1bcd0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bcd0u)));
/* 8b907b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b907d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b9080: jne 0x8b909a */
  if (!zf) goto L_8b909a;
L_8b9082: /* 8b9082: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9086: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8b908a: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8b908e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9092: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9095: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8b9098: jmp 0x8b90b0 */
  goto L_8b90b0;
L_8b909a: /* 8b909a: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b909e: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b90a2: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b90a6: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b90aa: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b90ad: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8b90b0: /* 8b90b0: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b90b3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b90b6: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b90bc: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b90c2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b90c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b90c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b90c9: jp 0x8b90d9 */
  if (pf) goto L_8b90d9;
L_8b90cb: /* 8b90cb: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b90d2: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b90d9: /* 8b90d9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b90dc: push 0xaea490 */
  { uint32_t v = 0xaea490u; esp -= 4; W32(esp, v); }
/* 8b90e1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b90e4: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b90e7: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b90ea: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b90ed: push 0xaea4ac */
  { uint32_t v = 0xaea4acu; esp -= 4; W32(esp, v); }
/* 8b90f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b90f3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b90f9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b90f9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b90fc: mov ecx, eax */
  ecx = eax;
/* 8b90fe: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8b9102: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9108u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9108: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b910b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b910d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b910e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9110: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9112: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9118u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9118: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b911b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b911e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9122: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9128u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9128: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b912b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9131: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9135: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9139: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b913d: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9141: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9144: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b9147: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b914d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b914f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9151: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9154: jp 0x8b9164 */
  if (pf) goto L_8b9164;
L_8b9156: /* 8b9156: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b915d: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9164: /* 8b9164: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9167: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b916a: mov eax, dword ptr [0xce8448] */
  eax = R32((uint32_t)(0xce8448u));
/* 8b916f: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9172: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9175: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9178: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b917b: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b917e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9184u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9184: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b9186: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9188: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b918a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b918b: jge 0x8b9193 */
  if ((sf == of)) goto L_8b9193;
L_8b918d: /* 8b918d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9193: /* 8b9193: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b9199: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b919b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b919e: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b91a1: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b91a7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b91aa: push 0xaea4c4 */
  { uint32_t v = 0xaea4c4u; esp -= 4; W32(esp, v); }
/* 8b91af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b91b0: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b91b6u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b91b6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b91b9: mov ecx, eax */
  ecx = eax;
/* 8b91bb: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8b91bf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b91c5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b91c5: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b91c8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b91ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b91cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b91cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b91ce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b91cf: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b91d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b91d5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b91d8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b91db: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b91df: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b91e5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b91e5: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b91e8: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8b91ee: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8b91f2: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b91f6: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b91fa: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b91fe: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8b9201: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9204: push 0xaea4dc */
  { uint32_t v = 0xaea4dcu; esp -= 4; W32(esp, v); }
/* 8b9209: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b920c: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b920f: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b9215u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b9215: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9218: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b921e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b9221: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9227: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9229: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b922b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b922e: jp 0x8b923e */
  if (pf) goto L_8b923e;
L_8b9230: /* 8b9230: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9237: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b923e: /* 8b923e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9241: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b9244: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9247: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b924du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b924d: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9250: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9253: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9255: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9256: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9257: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b925du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b925d: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9260: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9266: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b926a: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b926e: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9272: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9276: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9279: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b927c: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9282: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9285: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9287: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9289: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b928c: jp 0x8b929c */
  if (pf) goto L_8b929c;
L_8b928e: /* 8b928e: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9295: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b929c: /* 8b929c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b929f: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b92a2: mov eax, dword ptr [0xce8340] */
  eax = R32((uint32_t)(0xce8340u));
/* 8b92a7: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b92aa: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b92ad: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b92b0: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b92b3: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b92b6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b92bcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b92bc: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b92be: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b92c0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b92c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b92c3: jge 0x8b92cb */
  if ((sf == of)) goto L_8b92cb;
L_8b92c5: /* 8b92c5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b92cb: /* 8b92cb: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b92d1: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b92d3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b92d6: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b92d9: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b92df: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b92e2: push 0xaea500 */
  { uint32_t v = 0xaea500u; esp -= 4; W32(esp, v); }
/* 8b92e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b92e8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b92eeu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b92ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b92f1: mov ecx, eax */
  ecx = eax;
/* 8b92f3: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8b92f7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b92fdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b92fd: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9300: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9303: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9305: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9307: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b930du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b930d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9310: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9313: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9317: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b931du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b931d: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9320: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9326: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b9329: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b932f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9331: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9333: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9336: jp 0x8b9346 */
  if (pf) goto L_8b9346;
L_8b9338: /* 8b9338: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b933f: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9346: /* 8b9346: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9349: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b934c: mov eax, dword ptr [0xce8344] */
  eax = R32((uint32_t)(0xce8344u));
/* 8b9351: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9354: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9357: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b935a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b935d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9360: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9366u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9366: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9369: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b936a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b936d: push 0xaea518 */
  { uint32_t v = 0xaea518u; esp -= 4; W32(esp, v); }
/* 8b9372: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9373: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9379u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9379: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b937c: mov ecx, eax */
  ecx = eax;
/* 8b937e: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8b9382: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9388u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9388: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b938b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b938d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b938e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9390: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9391: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9392: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9398u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9398: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b939b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b939e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b93a2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b93a8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b93a8: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b93ab: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b93b1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b93b4: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b93ba: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b93bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b93be: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b93c1: jp 0x8b93d1 */
  if (pf) goto L_8b93d1;
L_8b93c3: /* 8b93c3: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b93ca: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b93d1: /* 8b93d1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b93d4: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b93d7: mov eax, dword ptr [0xce8348] */
  eax = R32((uint32_t)(0xce8348u));
/* 8b93dc: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b93df: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b93e2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b93e5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b93e8: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b93eb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b93f1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b93f1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b93f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b93f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b93f5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b93f8: push 0xaea524 */
  { uint32_t v = 0xaea524u; esp -= 4; W32(esp, v); }
/* 8b93fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b93fe: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9404u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9404: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9407: mov ecx, eax */
  ecx = eax;
/* 8b9409: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8b940d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9413u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9413: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9416: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9419: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b941b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b941c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b941d: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9423u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9423: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9426: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9429: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b942d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9433u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9433: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9436: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b943c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b943f: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b9445: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9447: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9449: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b944c: jp 0x8b945c */
  if (pf) goto L_8b945c;
L_8b944e: /* 8b944e: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9455: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b945c: /* 8b945c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b945f: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9462: mov eax, dword ptr [0xce834c] */
  eax = R32((uint32_t)(0xce834cu));
/* 8b9467: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b946a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b946d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9470: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9473: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9476: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b947cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b947c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b947e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b947f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b9480: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9483: push 0xaea530 */
  { uint32_t v = 0xaea530u; esp -= 4; W32(esp, v); }
/* 8b9488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9489: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b948fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b948f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9492: mov ecx, eax */
  ecx = eax;
/* 8b9494: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8b9498: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b949eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b949e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b94a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b94a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b94a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b94a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b94a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b94a8: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b94aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b94ae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b94b1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b94b4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b94b8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b94beu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b94be: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b94c1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b94c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b94ca: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b94d0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b94d2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b94d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b94d7: jp 0x8b94e7 */
  if (pf) goto L_8b94e7;
L_8b94d9: /* 8b94d9: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b94e0: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b94e7: /* 8b94e7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b94ea: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b94ed: mov eax, dword ptr [0xce8350] */
  eax = R32((uint32_t)(0xce8350u));
/* 8b94f2: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b94f5: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b94f8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b94fb: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b94fe: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9501: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9507u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9507: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b9509: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b950b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b950d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b950e: jge 0x8b9516 */
  if ((sf == of)) goto L_8b9516;
L_8b9510: /* 8b9510: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9516: /* 8b9516: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b951c: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b951e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b9521: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9524: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b952a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b952d: push 0xaea53c */
  { uint32_t v = 0xaea53cu; esp -= 4; W32(esp, v); }
/* 8b9532: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9533: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9539u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9539: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b953c: mov ecx, eax */
  ecx = eax;
/* 8b953e: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8b9542: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9548u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9548: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b954b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b954d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b954e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9550: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9552: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9558u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9558: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b955b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b955e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9562: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9568u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9568: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b956b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9571: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b9574: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b957a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b957c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b957e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9581: jp 0x8b9591 */
  if (pf) goto L_8b9591;
L_8b9583: /* 8b9583: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b958a: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9591: /* 8b9591: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9594: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9597: mov eax, dword ptr [0xce8354] */
  eax = R32((uint32_t)(0xce8354u));
/* 8b959c: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b959f: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b95a2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b95a5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b95a8: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b95ab: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b95b1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b95b1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b95b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b95b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b95b5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b95b8: push 0xaea554 */
  { uint32_t v = 0xaea554u; esp -= 4; W32(esp, v); }
/* 8b95bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b95be: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b95c4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b95c4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b95c7: mov ecx, eax */
  ecx = eax;
/* 8b95c9: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8b95cd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b95d3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b95d3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b95d6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b95d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b95d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b95db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b95dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b95dd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b95e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b95e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b95e6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b95e9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b95ed: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b95f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b95f3: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b95f6: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8b95fc: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8b9600: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9604: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9608: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b960c: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8b960f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9612: push 0xaea560 */
  { uint32_t v = 0xaea560u; esp -= 4; W32(esp, v); }
/* 8b9617: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b961a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b961d: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b9623u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b9623: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9626: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b962c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b962f: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9635: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9637: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9639: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b963c: jp 0x8b964c */
  if (pf) goto L_8b964c;
L_8b963e: /* 8b963e: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9645: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b964c: /* 8b964c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b964f: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b9652: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9655: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b965bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b965b: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b965e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9661: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9663: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9664: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9665: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b966bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b966b: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b966e: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9674: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9678: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b967c: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9680: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9684: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9687: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b968a: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9690: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9693: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9695: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9697: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b969a: jp 0x8b96aa */
  if (pf) goto L_8b96aa;
L_8b969c: /* 8b969c: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b96a3: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b96aa: /* 8b96aa: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b96ad: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b96b0: mov eax, dword ptr [0xce8360] */
  eax = R32((uint32_t)(0xce8360u));
/* 8b96b5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b96b8: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b96bb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b96be: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b96c1: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b96c4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b96cau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b96ca: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b96cc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b96ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b96d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b96d1: jge 0x8b96d9 */
  if ((sf == of)) goto L_8b96d9;
L_8b96d3: /* 8b96d3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b96d9: /* 8b96d9: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b96df: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b96e1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b96e4: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b96e7: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b96ed: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b96f0: push 0xaea584 */
  { uint32_t v = 0xaea584u; esp -= 4; W32(esp, v); }
/* 8b96f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b96f6: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b96fcu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b96fc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b96ff: mov ecx, eax */
  ecx = eax;
/* 8b9701: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8b9705: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b970bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b970b: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b970e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9711: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9713: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9714: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9715: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b971bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b971b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b971e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9721: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9725: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b972bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b972b: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b972e: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9734: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b9737: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b973d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b973f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9741: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9744: jp 0x8b9754 */
  if (pf) goto L_8b9754;
L_8b9746: /* 8b9746: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b974d: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9754: /* 8b9754: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9757: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b975a: mov eax, dword ptr [0xce835c] */
  eax = R32((uint32_t)(0xce835cu));
/* 8b975f: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9762: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9765: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9768: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b976b: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b976e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9774u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9774: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9777: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b9778: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b977b: push 0xaea59c */
  { uint32_t v = 0xaea59cu; esp -= 4; W32(esp, v); }
/* 8b9780: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9781: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9787u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9787: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b978a: mov ecx, eax */
  ecx = eax;
/* 8b978c: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8b9790: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9796u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9796: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9799: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b979b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b979c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b979e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b979f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b97a0: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b97a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b97a6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b97a9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b97ac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b97b0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b97b6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b97b6: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b97b9: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8b97bf: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8b97c3: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b97c7: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b97cb: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b97cf: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8b97d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b97d5: push 0xaea5a8 */
  { uint32_t v = 0xaea5a8u; esp -= 4; W32(esp, v); }
/* 8b97da: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b97dd: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b97e0: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b97e6u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b97e6: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b97e9: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b97ef: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b97f2: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b97f8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b97fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b97fc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b97ff: jp 0x8b980f */
  if (pf) goto L_8b980f;
L_8b9801: /* 8b9801: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9808: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b980f: /* 8b980f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9812: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b9815: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9818: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b981eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b981e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9821: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9826: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9827: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9828: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b982eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b982e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9831: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9837: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b983b: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b983f: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9843: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9847: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b984a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b984d: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9853: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9856: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9858: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b985a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b985d: jp 0x8b986d */
  if (pf) goto L_8b986d;
L_8b985f: /* 8b985f: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9866: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b986d: /* 8b986d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9870: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9873: mov eax, dword ptr [0xce8364] */
  eax = R32((uint32_t)(0xce8364u));
/* 8b9878: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b987b: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b987e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9881: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9884: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9887: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b988du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b988d: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b988f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9891: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b9893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9894: jge 0x8b989c */
  if ((sf == of)) goto L_8b989c;
L_8b9896: /* 8b9896: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b989c: /* 8b989c: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b98a2: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b98a4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b98a7: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b98aa: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b98b0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b98b3: push 0xaea5cc */
  { uint32_t v = 0xaea5ccu; esp -= 4; W32(esp, v); }
/* 8b98b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b98b9: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b98bfu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b98bf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b98c2: mov ecx, eax */
  ecx = eax;
/* 8b98c4: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 8b98c8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b98ceu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b98ce: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b98d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b98d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b98d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b98d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b98d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b98d8: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b98deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b98de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b98e1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b98e4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b98e8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b98eeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b98ee: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b98f1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b98f7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b98fa: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b9900: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9902: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9904: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9907: jp 0x8b9917 */
  if (pf) goto L_8b9917;
L_8b9909: /* 8b9909: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9910: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9917: /* 8b9917: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b991a: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b991d: mov eax, dword ptr [0xce8368] */
  eax = R32((uint32_t)(0xce8368u));
/* 8b9922: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9925: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9928: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b992b: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b992e: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9931: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9937u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9937: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b9939: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b993b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b993d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b993e: jge 0x8b9946 */
  if ((sf == of)) goto L_8b9946;
L_8b9940: /* 8b9940: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9946: /* 8b9946: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b994c: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b994e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b9951: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9954: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b995a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b995d: push 0xaea5e4 */
  { uint32_t v = 0xaea5e4u; esp -= 4; W32(esp, v); }
/* 8b9962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9963: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9969u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9969: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b996c: mov ecx, eax */
  ecx = eax;
/* 8b996e: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 8b9972: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9978u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9978: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b997b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b997d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b997e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9980: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9981: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9982: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9988u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9988: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b998b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b998e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9992: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9998u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9998: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b999b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b99a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b99a4: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b99aa: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b99ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b99ae: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b99b1: jp 0x8b99c1 */
  if (pf) goto L_8b99c1;
L_8b99b3: /* 8b99b3: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b99ba: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b99c1: /* 8b99c1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b99c4: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b99c7: mov eax, dword ptr [0xce836c] */
  eax = R32((uint32_t)(0xce836cu));
/* 8b99cc: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b99cf: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b99d2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b99d5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b99d8: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b99db: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b99e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b99e1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b99e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b99e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b99e5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b99e8: push 0xaea5fc */
  { uint32_t v = 0xaea5fcu; esp -= 4; W32(esp, v); }
/* 8b99ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b99ee: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b99f4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b99f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b99f7: mov ecx, eax */
  ecx = eax;
/* 8b99f9: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 8b99fd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9a03u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9a03: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9a06: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9a08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9a09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9a0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9a0d: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9a13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9a13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9a16: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9a19: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9a1d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9a23u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9a23: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9a26: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9a2c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b9a2f: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b9a35: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9a37: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9a39: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9a3c: jp 0x8b9a4c */
  if (pf) goto L_8b9a4c;
L_8b9a3e: /* 8b9a3e: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9a45: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9a4c: /* 8b9a4c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9a4f: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9a52: mov eax, dword ptr [0xce8370] */
  eax = R32((uint32_t)(0xce8370u));
/* 8b9a57: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9a5a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9a5d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9a60: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9a63: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9a66: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9a6cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9a6c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9a6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9a6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b9a70: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9a73: push 0xaea608 */
  { uint32_t v = 0xaea608u; esp -= 4; W32(esp, v); }
/* 8b9a78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9a79: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9a7fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9a7f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9a82: mov ecx, eax */
  ecx = eax;
/* 8b9a84: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 8b9a88: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9a8eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9a8e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9a91: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9a93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9a94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9a96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9a97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9a98: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9a9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9a9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9aa1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9aa4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9aa8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9aaeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9aae: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9ab1: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8b9ab7: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8b9abb: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9abf: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9ac3: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9ac7: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8b9aca: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9acd: push 0xaea614 */
  { uint32_t v = 0xaea614u; esp -= 4; W32(esp, v); }
/* 8b9ad2: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b9ad5: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b9ad8: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b9adeu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b9ade: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9ae1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9ae7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b9aea: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9af0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9af2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9af4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9af7: jp 0x8b9b07 */
  if (pf) goto L_8b9b07;
L_8b9af9: /* 8b9af9: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9b00: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9b07: /* 8b9b07: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9b0a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b9b0d: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9b10: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9b16u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9b16: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9b19: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9b1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9b1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9b1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9b20: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9b26: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9b29: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9b2f: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9b33: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9b37: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9b3b: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9b3f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9b42: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b9b45: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9b4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9b4e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9b50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9b52: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9b55: jp 0x8b9b65 */
  if (pf) goto L_8b9b65;
L_8b9b57: /* 8b9b57: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9b5e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9b65: /* 8b9b65: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9b68: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9b6b: mov eax, dword ptr [0xce8374] */
  eax = R32((uint32_t)(0xce8374u));
/* 8b9b70: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9b73: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9b76: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9b79: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9b7c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9b7f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9b85u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9b85: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b9b87: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9b89: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b9b8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9b8c: jge 0x8b9b94 */
  if ((sf == of)) goto L_8b9b94;
L_8b9b8e: /* 8b9b8e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9b94: /* 8b9b94: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b9b9a: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b9b9c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b9b9f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9ba2: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b9ba8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b9bab: push 0xaea638 */
  { uint32_t v = 0xaea638u; esp -= 4; W32(esp, v); }
/* 8b9bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9bb1: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9bb7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9bb7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9bba: mov ecx, eax */
  ecx = eax;
/* 8b9bbc: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 8b9bc0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9bc6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9bc6: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9bc9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9bcc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9bcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9bd0: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9bd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9bd6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9bd9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9bdc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9be0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9be6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9be6: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9be9: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9bef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b9bf2: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b9bf8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9bfa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9bfc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9bff: jp 0x8b9c0f */
  if (pf) goto L_8b9c0f;
L_8b9c01: /* 8b9c01: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9c08: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9c0f: /* 8b9c0f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9c12: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9c15: mov eax, dword ptr [0xce8378] */
  eax = R32((uint32_t)(0xce8378u));
/* 8b9c1a: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9c1d: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9c20: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9c23: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9c26: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9c29: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9c2fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9c2f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9c31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9c32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b9c33: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9c36: push 0xaea650 */
  { uint32_t v = 0xaea650u; esp -= 4; W32(esp, v); }
/* 8b9c3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9c3c: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9c42u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9c42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9c45: mov ecx, eax */
  ecx = eax;
/* 8b9c47: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 8b9c4b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9c51u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9c51: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9c54: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9c56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9c57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9c59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9c5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9c5b: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9c61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9c61: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9c64: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9c67: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9c6b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9c71u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9c71: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9c74: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9c7a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b9c7d: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b9c83: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9c85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9c87: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9c8a: jp 0x8b9c9a */
  if (pf) goto L_8b9c9a;
L_8b9c8c: /* 8b9c8c: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9c93: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9c9a: /* 8b9c9a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9c9d: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9ca0: mov eax, dword ptr [0xce837c] */
  eax = R32((uint32_t)(0xce837cu));
/* 8b9ca5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9ca8: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9cab: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9cae: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9cb1: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9cb4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9cbau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9cba: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9cbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b9cbe: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9cc1: push 0xaea65c */
  { uint32_t v = 0xaea65cu; esp -= 4; W32(esp, v); }
/* 8b9cc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9cc7: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9ccdu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9ccd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9cd0: mov ecx, eax */
  ecx = eax;
/* 8b9cd2: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 8b9cd6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9cdcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9cdc: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9cdf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9ce1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9ce2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9ce4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9ce5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9ce6: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9cecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9cec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9cef: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9cf2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9cf6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9cfcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9cfc: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9cff: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8b9d05: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8b9d09: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9d0d: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9d11: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9d15: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8b9d18: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9d1b: push 0xaea668 */
  { uint32_t v = 0xaea668u; esp -= 4; W32(esp, v); }
/* 8b9d20: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b9d23: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b9d26: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8b9d2cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8b9d2c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9d2f: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9d35: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8b9d38: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9d3e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9d40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9d42: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9d45: jp 0x8b9d55 */
  if (pf) goto L_8b9d55;
L_8b9d47: /* 8b9d47: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9d4e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9d55: /* 8b9d55: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9d58: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8b9d5b: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9d5e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9d64u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9d64: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9d67: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9d69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9d6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9d6c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9d6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9d6e: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9d74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9d74: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9d78: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9d7c: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9d80: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9d84: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9d87: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b9d8a: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8b9d90: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8b9d92: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9d95: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8b9d9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9d9d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9da0: jp 0x8b9dd2 */
  if (pf) goto L_8b9dd2;
L_8b9da2: /* 8b9da2: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8b9da5: mov eax, dword ptr [0xce8380] */
  eax = R32((uint32_t)(0xce8380u));
/* 8b9daa: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8b9dad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b9daf: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8b9db2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8b9db5: jge 0x8b9dbd */
  if ((sf == of)) goto L_8b9dbd;
L_8b9db7: /* 8b9db7: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9dbd: /* 8b9dbd: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8b9dbf: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b9dc5: fcomp qword ptr [0xa1bcc0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bcc0u)));
  FPOP();
/* 8b9dcb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9dcd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b9dd0: je 0x8b9e12 */
  if (zf) goto L_8b9e12;
L_8b9dd2: /* 8b9dd2: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8b9dd4: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8b9dda: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9ddc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b9ddf: jne 0x8b9e2a */
  if (!zf) goto L_8b9e2a;
L_8b9de1: /* 8b9de1: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8b9de4: mov edx, dword ptr [0xce8380] */
  edx = R32((uint32_t)(0xce8380u));
/* 8b9dea: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8b9ded: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b9def: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8b9df2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8b9df5: jge 0x8b9dfd */
  if ((sf == of)) goto L_8b9dfd;
L_8b9df7: /* 8b9df7: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9dfd: /* 8b9dfd: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8b9dff: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b9e05: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8b9e0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9e0d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8b9e10: jne 0x8b9e2a */
  if (!zf) goto L_8b9e2a;
L_8b9e12: /* 8b9e12: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9e16: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8b9e1a: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8b9e1e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9e22: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9e25: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8b9e28: jmp 0x8b9e40 */
  goto L_8b9e40;
L_8b9e2a: /* 8b9e2a: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9e2e: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9e32: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9e36: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9e3a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9e3d: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8b9e40: /* 8b9e40: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9e43: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9e49: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8b9e4f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9e51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9e53: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9e56: jp 0x8b9e66 */
  if (pf) goto L_8b9e66;
L_8b9e58: /* 8b9e58: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9e5f: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9e66: /* 8b9e66: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9e69: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9e6c: mov eax, dword ptr [0xce8380] */
  eax = R32((uint32_t)(0xce8380u));
/* 8b9e71: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9e74: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9e77: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9e7a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9e7d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9e80: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9e86u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9e86: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8b9e88: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9e8a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8b9e8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9e8d: jge 0x8b9e95 */
  if ((sf == of)) goto L_8b9e95;
L_8b9e8f: /* 8b9e8f: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8b9e95: /* 8b9e95: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8b9e9b: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8b9e9d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8b9ea0: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9ea3: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8b9ea9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8b9eac: push 0xaea68c */
  { uint32_t v = 0xaea68cu; esp -= 4; W32(esp, v); }
/* 8b9eb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9eb2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9eb8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9eb8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9ebb: mov ecx, eax */
  ecx = eax;
/* 8b9ebd: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 8b9ec1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9ec7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9ec7: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9eca: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9ecc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9ecd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9ecf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9ed1: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9ed7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9ed7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9eda: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9edd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9ee1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9ee7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9ee7: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9eea: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9ef0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8b9ef3: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8b9ef7: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8b9efb: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8b9eff: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8b9f03: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8b9f06: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8b9f09: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8b9f0f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9f11: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9f13: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9f16: jp 0x8b9f26 */
  if (pf) goto L_8b9f26;
L_8b9f18: /* 8b9f18: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9f1f: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9f26: /* 8b9f26: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9f29: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9f2c: mov eax, dword ptr [0xce8384] */
  eax = R32((uint32_t)(0xce8384u));
/* 8b9f31: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8b9f34: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8b9f37: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8b9f3a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8b9f3d: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8b9f40: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9f46u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9f46: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8b9f48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9f49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9f4a: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9f4d: push 0xaea6a4 */
  { uint32_t v = 0xaea6a4u; esp -= 4; W32(esp, v); }
/* 8b9f52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9f53: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9f59u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9f59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9f5c: mov ecx, eax */
  ecx = eax;
/* 8b9f5e: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 8b9f62: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9f68u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9f68: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9f6b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9f6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9f70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9f71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9f72: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8b9f78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8b9f78: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9f7b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9f7e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8b9f82: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8b9f88u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8b9f88: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8b9f8b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8b9f91: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8b9f94: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8b9f9a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8b9f9c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8b9f9e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8b9fa1: jp 0x8b9fb1 */
  if (pf) goto L_8b9fb1;
L_8b9fa3: /* 8b9fa3: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8b9faa: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8b9fb1: /* 8b9fb1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8b9fb4: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8b9fb7: mov eax, dword ptr [0xce8388] */
  eax = R32((uint32_t)(0xce8388u));
/* 8b9fbc: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8b9fbf: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8b9fc2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8b9fc5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8b9fc8: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8b9fcb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9fd1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9fd1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8b9fd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9fd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8b9fd5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8b9fd8: push 0xaea6b0 */
  { uint32_t v = 0xaea6b0u; esp -= 4; W32(esp, v); }
/* 8b9fdd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9fde: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8b9fe4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8b9fe4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8b9fe7: mov ecx, eax */
  ecx = eax;
/* 8b9fe9: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 8b9fed: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8b9ff3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8b9ff3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8b9ff6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8b9ff8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8b9ff9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8b9ffb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8b9ffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8b9ffd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba003u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba003: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba006: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba009: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba00d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba013u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba013: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba016: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba01c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ba01f: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8ba025: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba027: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba029: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba02c: jp 0x8ba03c */
  if (pf) goto L_8ba03c;
L_8ba02e: /* 8ba02e: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba035: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba03c: /* 8ba03c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba03f: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba042: mov eax, dword ptr [0xce838c] */
  eax = R32((uint32_t)(0xce838cu));
/* 8ba047: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba04a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba04d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba050: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba053: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba056: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba05cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba05c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba05e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba05f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ba060: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba063: push 0xaea6bc */
  { uint32_t v = 0xaea6bcu; esp -= 4; W32(esp, v); }
/* 8ba068: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba069: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba06fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba06f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba072: mov ecx, eax */
  ecx = eax;
/* 8ba074: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 8ba078: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba07eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba07e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba081: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba084: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba086: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba088: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba08eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba08e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba091: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba094: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba098: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba09eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba09e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba0a1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba0a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ba0aa: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8ba0b0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba0b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba0b4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba0b7: jp 0x8ba0c7 */
  if (pf) goto L_8ba0c7;
L_8ba0b9: /* 8ba0b9: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba0c0: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba0c7: /* 8ba0c7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba0ca: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba0cd: mov eax, dword ptr [0xce8390] */
  eax = R32((uint32_t)(0xce8390u));
/* 8ba0d2: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba0d5: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba0d8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba0db: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba0de: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba0e1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba0e7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba0e7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba0e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba0ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ba0eb: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba0ee: push 0xaea6c8 */
  { uint32_t v = 0xaea6c8u; esp -= 4; W32(esp, v); }
/* 8ba0f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba0f4: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba0fau); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba0fa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba0fd: mov ecx, eax */
  ecx = eax;
/* 8ba0ff: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 8ba103: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba109u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba109: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba10c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba10e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba10f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba111: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba113: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba119u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba119: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba11c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba11f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba123: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba129u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba129: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8ba12f: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8ba131: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8ba137: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba139: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba13c: jp 0x8ba16f */
  if (pf) goto L_8ba16f;
L_8ba13e: /* 8ba13e: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8ba141: mov edx, dword ptr [0xce8394] */
  edx = R32((uint32_t)(0xce8394u));
/* 8ba147: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8ba14a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba14c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8ba14f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ba152: jge 0x8ba15a */
  if ((sf == of)) goto L_8ba15a;
L_8ba154: /* 8ba154: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba15a: /* 8ba15a: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8ba15c: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba162: fcomp qword ptr [0xa1bcc0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bcc0u)));
  FPOP();
/* 8ba168: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba16a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba16d: je 0x8ba1ae */
  if (zf) goto L_8ba1ae;
L_8ba16f: /* 8ba16f: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8ba171: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8ba177: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba179: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba17c: jne 0x8ba1c6 */
  if (!zf) goto L_8ba1c6;
L_8ba17e: /* 8ba17e: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8ba181: mov eax, dword ptr [0xce8394] */
  eax = R32((uint32_t)(0xce8394u));
/* 8ba186: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8ba189: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba18b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8ba18e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ba191: jge 0x8ba199 */
  if ((sf == of)) goto L_8ba199;
L_8ba193: /* 8ba193: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba199: /* 8ba199: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8ba19b: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba1a1: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8ba1a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba1a9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba1ac: jne 0x8ba1c6 */
  if (!zf) goto L_8ba1c6;
L_8ba1ae: /* 8ba1ae: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba1b2: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8ba1b6: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8ba1ba: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba1be: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba1c1: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba1c4: jmp 0x8ba1dc */
  goto L_8ba1dc;
L_8ba1c6: /* 8ba1c6: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba1ca: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba1ce: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba1d2: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba1d6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba1d9: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
L_8ba1dc: /* 8ba1dc: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba1df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ba1e2: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba1e8: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8ba1ee: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba1f0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba1f2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba1f5: jp 0x8ba205 */
  if (pf) goto L_8ba205;
L_8ba1f7: /* 8ba1f7: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba1fe: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba205: /* 8ba205: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba208: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba20b: mov eax, dword ptr [0xce8394] */
  eax = R32((uint32_t)(0xce8394u));
/* 8ba210: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba213: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba216: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba219: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba21c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba21f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba225u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba225: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8ba227: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba229: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba22b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba22c: jge 0x8ba234 */
  if ((sf == of)) goto L_8ba234;
L_8ba22e: /* 8ba22e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba234: /* 8ba234: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8ba23a: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8ba23c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ba23f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba242: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba248: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ba24b: push 0xaea6d4 */
  { uint32_t v = 0xaea6d4u; esp -= 4; W32(esp, v); }
/* 8ba250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba251: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba257u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba257: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba25a: mov ecx, eax */
  ecx = eax;
/* 8ba25c: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 8ba260: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba266u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba266: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba269: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba26b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba26c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba26e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba26f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba270: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba276u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba276: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba279: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba27c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba280: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba286u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba286: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba289: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba28f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ba292: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba296: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba29a: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba29e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba2a2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba2a5: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba2a8: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8ba2ae: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba2b0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba2b2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba2b5: jp 0x8ba2c5 */
  if (pf) goto L_8ba2c5;
L_8ba2b7: /* 8ba2b7: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba2be: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba2c5: /* 8ba2c5: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba2c8: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba2cb: mov eax, dword ptr [0xce8398] */
  eax = R32((uint32_t)(0xce8398u));
/* 8ba2d0: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8ba2d3: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8ba2d6: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8ba2d9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ba2dc: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8ba2df: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba2e5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba2e5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8ba2e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba2e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba2e9: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba2ec: push 0xaea6ec */
  { uint32_t v = 0xaea6ecu; esp -= 4; W32(esp, v); }
/* 8ba2f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba2f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba2f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba2f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba2fb: mov ecx, eax */
  ecx = eax;
/* 8ba2fd: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 8ba301: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba307u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba307: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba30a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba30c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba30d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba30f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba311: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba317: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba31a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba31d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba321: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba327u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba327: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba32a: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba330: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ba333: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8ba339: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba33b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba33d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba340: jp 0x8ba350 */
  if (pf) goto L_8ba350;
L_8ba342: /* 8ba342: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba349: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba350: /* 8ba350: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba353: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba356: mov eax, dword ptr [0xce839c] */
  eax = R32((uint32_t)(0xce839cu));
/* 8ba35b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba35e: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba361: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba364: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba367: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba36a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba370u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba370: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8ba372: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba374: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba377: jge 0x8ba37f */
  if ((sf == of)) goto L_8ba37f;
L_8ba379: /* 8ba379: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba37f: /* 8ba37f: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8ba385: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8ba387: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ba38a: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba38d: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba393: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ba396: push 0xaea6f8 */
  { uint32_t v = 0xaea6f8u; esp -= 4; W32(esp, v); }
/* 8ba39b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba39c: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba3a2u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba3a2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba3a5: mov ecx, eax */
  ecx = eax;
/* 8ba3a7: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 8ba3ab: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba3b1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba3b1: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba3b4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba3b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba3b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba3b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba3ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba3bb: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba3c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba3c1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba3c4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba3c7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba3cb: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba3d1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba3d1: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba3d4: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8ba3da: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8ba3de: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba3e2: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba3e6: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba3ea: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8ba3ed: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba3f0: push 0xaea710 */
  { uint32_t v = 0xaea710u; esp -= 4; W32(esp, v); }
/* 8ba3f5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8ba3f8: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba3fb: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8ba401u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8ba401: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba404: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba40a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8ba40d: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8ba413: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba415: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba417: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba41a: jp 0x8ba42a */
  if (pf) goto L_8ba42a;
L_8ba41c: /* 8ba41c: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba423: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba42a: /* 8ba42a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba42d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8ba430: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba433: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba439u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba439: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba43c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba43e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba43f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba441: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba442: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba443: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba449u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba449: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba44d: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba451: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba455: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba459: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba45c: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba45f: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8ba465: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8ba467: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba46a: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8ba470: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba472: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba475: jp 0x8ba4a7 */
  if (pf) goto L_8ba4a7;
L_8ba477: /* 8ba477: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8ba47a: mov eax, dword ptr [0xce83a0] */
  eax = R32((uint32_t)(0xce83a0u));
/* 8ba47f: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8ba482: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba484: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8ba487: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ba48a: jge 0x8ba492 */
  if ((sf == of)) goto L_8ba492;
L_8ba48c: /* 8ba48c: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba492: /* 8ba492: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8ba494: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba49a: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8ba4a0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba4a2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba4a5: je 0x8ba4e7 */
  if (zf) goto L_8ba4e7;
L_8ba4a7: /* 8ba4a7: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8ba4a9: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8ba4af: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba4b1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba4b4: jne 0x8ba4ff */
  if (!zf) goto L_8ba4ff;
L_8ba4b6: /* 8ba4b6: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8ba4b9: mov edx, dword ptr [0xce83a0] */
  edx = R32((uint32_t)(0xce83a0u));
/* 8ba4bf: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8ba4c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba4c4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8ba4c7: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ba4ca: jge 0x8ba4d2 */
  if ((sf == of)) goto L_8ba4d2;
L_8ba4cc: /* 8ba4cc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba4d2: /* 8ba4d2: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8ba4d4: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba4da: fcomp qword ptr [0xa14fa0] */
  fpu_com(ST0, F64((uint32_t)(0xa14fa0u)));
  FPOP();
/* 8ba4e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba4e2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba4e5: jne 0x8ba4ff */
  if (!zf) goto L_8ba4ff;
L_8ba4e7: /* 8ba4e7: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba4eb: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8ba4ef: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8ba4f3: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba4f7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba4fa: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8ba4fd: jmp 0x8ba515 */
  goto L_8ba515;
L_8ba4ff: /* 8ba4ff: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba503: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba507: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba50b: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba50f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba512: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8ba515: /* 8ba515: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba518: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba51e: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8ba524: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba526: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba528: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba52b: jp 0x8ba53b */
  if (pf) goto L_8ba53b;
L_8ba52d: /* 8ba52d: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba534: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba53b: /* 8ba53b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba53e: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba541: mov eax, dword ptr [0xce83a0] */
  eax = R32((uint32_t)(0xce83a0u));
/* 8ba546: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba549: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba54c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba54f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba552: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba555: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba55bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba55b: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8ba55d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba55f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba562: jge 0x8ba56a */
  if ((sf == of)) goto L_8ba56a;
L_8ba564: /* 8ba564: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba56a: /* 8ba56a: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8ba570: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8ba572: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ba575: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba578: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba57e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ba581: push 0xaea734 */
  { uint32_t v = 0xaea734u; esp -= 4; W32(esp, v); }
/* 8ba586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba587: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba58du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba58d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba590: mov ecx, eax */
  ecx = eax;
/* 8ba592: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 8ba596: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba59cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba59c: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba59f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba5a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba5a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba5a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba5a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba5a6: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba5acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba5ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba5af: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba5b2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba5b6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba5bcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba5bc: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba5bf: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba5c5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ba5c8: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba5cc: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba5d0: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba5d4: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba5d8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba5db: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba5de: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8ba5e4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba5e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba5e8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba5eb: jp 0x8ba5fb */
  if (pf) goto L_8ba5fb;
L_8ba5ed: /* 8ba5ed: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba5f4: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba5fb: /* 8ba5fb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba5fe: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba601: mov eax, dword ptr [0xce83a8] */
  eax = R32((uint32_t)(0xce83a8u));
/* 8ba606: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8ba609: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8ba60c: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8ba60f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ba612: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8ba615: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba61bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba61b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8ba61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba61e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba61f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba622: push 0xaea74c */
  { uint32_t v = 0xaea74cu; esp -= 4; W32(esp, v); }
/* 8ba627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba628: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba62eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba62e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba631: mov ecx, eax */
  ecx = eax;
/* 8ba633: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 8ba637: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba63du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba63d: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba640: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba643: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba645: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba647: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba64du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba64d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba650: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba653: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba657: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba65du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba65d: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba660: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba666: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ba669: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8ba66f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba671: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba673: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba676: jp 0x8ba686 */
  if (pf) goto L_8ba686;
L_8ba678: /* 8ba678: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba67f: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba686: /* 8ba686: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba689: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba68c: mov eax, dword ptr [0xce83ac] */
  eax = R32((uint32_t)(0xce83acu));
/* 8ba691: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba694: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba697: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba69a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba69d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba6a0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba6a6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba6a6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba6a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba6a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ba6aa: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba6ad: push 0xaea758 */
  { uint32_t v = 0xaea758u; esp -= 4; W32(esp, v); }
/* 8ba6b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba6b3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba6b9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba6b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba6bc: mov ecx, eax */
  ecx = eax;
/* 8ba6be: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 8ba6c2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba6c8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba6c8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba6cb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba6ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba6d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba6d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba6d2: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba6d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba6d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba6db: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba6de: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba6e2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba6e8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba6e8: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba6eb: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba6f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ba6f4: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8ba6fa: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba6fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba6fe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba701: jp 0x8ba711 */
  if (pf) goto L_8ba711;
L_8ba703: /* 8ba703: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba70a: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba711: /* 8ba711: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba714: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba717: mov eax, dword ptr [0xce83b0] */
  eax = R32((uint32_t)(0xce83b0u));
/* 8ba71c: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba71f: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba722: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba725: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba728: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba72b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba731u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba731: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba734: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ba735: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba738: push 0xaea764 */
  { uint32_t v = 0xaea764u; esp -= 4; W32(esp, v); }
/* 8ba73d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba73e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba744u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba744: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba747: mov ecx, eax */
  ecx = eax;
/* 8ba749: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 8ba74d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba753u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba753: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba756: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba758: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba759: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba75b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba75d: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba763u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba763: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba766: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba769: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba76d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba773u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba773: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba776: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8ba77c: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8ba780: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba784: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba788: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba78c: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8ba78f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba792: push 0xaea770 */
  { uint32_t v = 0xaea770u; esp -= 4; W32(esp, v); }
/* 8ba797: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8ba79a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba79d: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8ba7a3u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8ba7a3: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba7a6: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba7ac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8ba7af: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8ba7b5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba7b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba7b9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba7bc: jp 0x8ba7cc */
  if (pf) goto L_8ba7cc;
L_8ba7be: /* 8ba7be: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba7c5: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba7cc: /* 8ba7cc: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba7cf: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8ba7d2: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba7d5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba7dbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba7db: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba7de: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba7e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba7e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba7e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba7e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba7e5: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba7ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba7eb: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba7ef: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba7f3: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba7f7: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba7fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba7fe: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba801: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8ba807: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8ba809: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba80c: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8ba812: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba814: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba817: jp 0x8ba849 */
  if (pf) goto L_8ba849;
L_8ba819: /* 8ba819: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8ba81c: mov eax, dword ptr [0xce83b4] */
  eax = R32((uint32_t)(0xce83b4u));
/* 8ba821: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8ba824: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba826: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8ba829: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ba82c: jge 0x8ba834 */
  if ((sf == of)) goto L_8ba834;
L_8ba82e: /* 8ba82e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba834: /* 8ba834: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8ba836: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba83c: fcomp qword ptr [0xa14fa0] */
  fpu_com(ST0, F64((uint32_t)(0xa14fa0u)));
  FPOP();
/* 8ba842: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba844: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba847: je 0x8ba889 */
  if (zf) goto L_8ba889;
L_8ba849: /* 8ba849: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8ba84b: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8ba851: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba853: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba856: jne 0x8ba8a1 */
  if (!zf) goto L_8ba8a1;
L_8ba858: /* 8ba858: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8ba85b: mov edx, dword ptr [0xce83b4] */
  edx = R32((uint32_t)(0xce83b4u));
/* 8ba861: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8ba864: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba866: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8ba869: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ba86c: jge 0x8ba874 */
  if ((sf == of)) goto L_8ba874;
L_8ba86e: /* 8ba86e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba874: /* 8ba874: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8ba876: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba87c: fcomp qword ptr [0xa177c0] */
  fpu_com(ST0, F64((uint32_t)(0xa177c0u)));
  FPOP();
/* 8ba882: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba884: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ba887: jne 0x8ba8a1 */
  if (!zf) goto L_8ba8a1;
L_8ba889: /* 8ba889: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba88d: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8ba891: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8ba895: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba899: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba89c: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8ba89f: jmp 0x8ba8b7 */
  goto L_8ba8b7;
L_8ba8a1: /* 8ba8a1: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba8a5: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba8a9: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba8ad: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba8b1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba8b4: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8ba8b7: /* 8ba8b7: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba8ba: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba8c0: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8ba8c6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba8c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba8ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba8cd: jp 0x8ba8dd */
  if (pf) goto L_8ba8dd;
L_8ba8cf: /* 8ba8cf: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba8d6: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba8dd: /* 8ba8dd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba8e0: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba8e3: mov eax, dword ptr [0xce83b4] */
  eax = R32((uint32_t)(0xce83b4u));
/* 8ba8e8: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8ba8eb: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8ba8ee: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ba8f1: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8ba8f4: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ba8f7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba8fdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba8fd: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8ba8ff: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ba901: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ba903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba904: jge 0x8ba90c */
  if ((sf == of)) goto L_8ba90c;
L_8ba906: /* 8ba906: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8ba90c: /* 8ba90c: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8ba912: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8ba914: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ba917: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba91a: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8ba920: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ba923: push 0xaea794 */
  { uint32_t v = 0xaea794u; esp -= 4; W32(esp, v); }
/* 8ba928: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba929: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba92fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba92f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba932: mov ecx, eax */
  ecx = eax;
/* 8ba934: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 8ba938: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba93eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba93e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba941: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba944: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba946: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba947: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba948: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba94eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba94e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba951: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba954: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba958: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba95eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba95e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8ba961: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8ba967: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ba96a: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8ba96e: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8ba972: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8ba976: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8ba97a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ba97d: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8ba980: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8ba986: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8ba988: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ba98a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ba98d: jp 0x8ba99d */
  if (pf) goto L_8ba99d;
L_8ba98f: /* 8ba98f: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8ba996: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8ba99d: /* 8ba99d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ba9a0: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8ba9a3: mov eax, dword ptr [0xce83b8] */
  eax = R32((uint32_t)(0xce83b8u));
/* 8ba9a8: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8ba9ab: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8ba9ae: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8ba9b1: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8ba9b4: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8ba9b7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba9bdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba9bd: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8ba9bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba9c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba9c1: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba9c4: push 0xaea7ac */
  { uint32_t v = 0xaea7acu; esp -= 4; W32(esp, v); }
/* 8ba9c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba9ca: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8ba9d0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8ba9d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba9d3: mov ecx, eax */
  ecx = eax;
/* 8ba9d5: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 8ba9d9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8ba9dfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8ba9df: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8ba9e2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8ba9e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ba9e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ba9e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ba9e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ba9e9: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8ba9efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ba9ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ba9f2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8ba9f5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ba9f9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8ba9ffu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8ba9ff: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8baa02: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8baa08: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8baa0b: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8baa11: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8baa13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8baa15: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8baa18: jp 0x8baa28 */
  if (pf) goto L_8baa28;
L_8baa1a: /* 8baa1a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8baa21: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8baa28: /* 8baa28: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8baa2b: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8baa2e: mov eax, dword ptr [0xce83bc] */
  eax = R32((uint32_t)(0xce83bcu));
/* 8baa33: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8baa36: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8baa39: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8baa3c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8baa3f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8baa42: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8baa48u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8baa48: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8baa4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8baa4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8baa4c: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8baa4f: push 0xaea7b8 */
  { uint32_t v = 0xaea7b8u; esp -= 4; W32(esp, v); }
/* 8baa54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8baa55: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8baa5bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8baa5b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8baa5e: mov ecx, eax */
  ecx = eax;
/* 8baa60: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 8baa64: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8baa6au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8baa6a: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8baa6d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8baa6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8baa70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8baa72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8baa73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8baa74: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8baa7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8baa7a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8baa7d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8baa80: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8baa84: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8baa8au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8baa8a: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8baa8d: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8baa93: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8baa97: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8baa9b: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8baa9f: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8baaa3: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8baaa6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8baaa9: push 0xaea7c4 */
  { uint32_t v = 0xaea7c4u; esp -= 4; W32(esp, v); }
/* 8baaae: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8baab1: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8baab4: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8baabau); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8baaba: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8baabd: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8baac3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8baac6: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8baacc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8baace: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8baad0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8baad3: jp 0x8baae3 */
  if (pf) goto L_8baae3;
L_8baad5: /* 8baad5: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8baadc: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8baae3: /* 8baae3: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8baae6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8baae9: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8baaec: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8baaf2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8baaf2: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8baaf5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8baaf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8baaf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8baafa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8baafb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8baafc: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bab02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bab02: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bab05: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bab09: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bab0d: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bab11: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bab15: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bab18: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bab1b: mov ecx, dword ptr [0xce83c4] */
  ecx = R32((uint32_t)(0xce83c4u));
/* 8bab21: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8bab23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bab24: mov ecx, edi */
  ecx = edi;
/* 8bab26: call 0x6cbc4e */
  esp -= 4; W32(esp, 0x8bab2bu); SPILL(); f_6cbc4e(); if (g_unwind) return; RELOAD();
/* 8bab2b: mov edx, dword ptr [0xce83c8] */
  edx = R32((uint32_t)(0xce83c8u));
/* 8bab31: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8bab33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bab34: mov ecx, edi */
  ecx = edi;
/* 8bab36: call 0x6cbc4e */
  esp -= 4; W32(esp, 0x8bab3bu); SPILL(); f_6cbc4e(); if (g_unwind) return; RELOAD();
/* 8bab3b: mov eax, dword ptr [0xce83cc] */
  eax = R32((uint32_t)(0xce83ccu));
/* 8bab40: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8bab42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bab43: mov ecx, edi */
  ecx = edi;
/* 8bab45: call 0x6cbc4e */
  esp -= 4; W32(esp, 0x8bab4au); SPILL(); f_6cbc4e(); if (g_unwind) return; RELOAD();
/* 8bab4a: mov ecx, dword ptr [0xce83d4] */
  ecx = R32((uint32_t)(0xce83d4u));
/* 8bab50: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8bab52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bab53: mov ecx, edi */
  ecx = edi;
/* 8bab55: call 0x6cbc4e */
  esp -= 4; W32(esp, 0x8bab5au); SPILL(); f_6cbc4e(); if (g_unwind) return; RELOAD();
/* 8bab5a: mov edx, dword ptr [0xce83d0] */
  edx = R32((uint32_t)(0xce83d0u));
/* 8bab60: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8bab62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bab63: mov ecx, edi */
  ecx = edi;
/* 8bab65: call 0x6cbc4e */
  esp -= 4; W32(esp, 0x8bab6au); SPILL(); f_6cbc4e(); if (g_unwind) return; RELOAD();
/* 8bab6a: mov eax, dword ptr [0xce83d8] */
  eax = R32((uint32_t)(0xce83d8u));
/* 8bab6f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8bab71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bab72: mov ecx, edi */
  ecx = edi;
/* 8bab74: call 0x6cbc4e */
  esp -= 4; W32(esp, 0x8bab79u); SPILL(); f_6cbc4e(); if (g_unwind) return; RELOAD();
/* 8bab79: mov ecx, dword ptr [0xce83dc] */
  ecx = R32((uint32_t)(0xce83dcu));
/* 8bab7f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8bab81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bab82: mov ecx, edi */
  ecx = edi;
/* 8bab84: call 0x6cbc4e */
  esp -= 4; W32(esp, 0x8bab89u); SPILL(); f_6cbc4e(); if (g_unwind) return; RELOAD();
/* 8bab89: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bab8c: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bab92: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bab98: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bab9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bab9c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bab9f: jp 0x8babaf */
  if (pf) goto L_8babaf;
L_8baba1: /* 8baba1: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8baba8: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8babaf: /* 8babaf: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8babb2: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8babb5: mov eax, dword ptr [0xce83c4] */
  eax = R32((uint32_t)(0xce83c4u));
/* 8babba: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8babbd: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8babc0: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8babc3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8babc6: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8babc9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8babcfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8babcf: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8babd1: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8babd3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8babd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8babd6: jge 0x8babde */
  if ((sf == of)) goto L_8babde;
L_8babd8: /* 8babd8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8babde: /* 8babde: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8babe3: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8babe5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8babe8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8babeb: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8babf1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8babf4: push 0xaea7e8 */
  { uint32_t v = 0xaea7e8u; esp -= 4; W32(esp, v); }
/* 8babf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8babfa: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bac00u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bac00: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bac03: mov ecx, eax */
  ecx = eax;
/* 8bac05: mov byte ptr [ebp - 4], 0x26 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 8bac09: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bac0fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bac0f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bac11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bac12: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bac15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bac17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bac18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bac19: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bac1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bac1f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bac22: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bac25: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bac29: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bac2fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bac2f: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bac32: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bac38: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bac3b: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bac41: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bac43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bac45: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bac48: jp 0x8bac58 */
  if (pf) goto L_8bac58;
L_8bac4a: /* 8bac4a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bac51: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bac58: /* 8bac58: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bac5b: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bac5e: mov eax, dword ptr [0xce83c8] */
  eax = R32((uint32_t)(0xce83c8u));
/* 8bac63: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bac66: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bac69: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bac6c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bac6f: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bac72: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bac78u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bac78: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bac7a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bac7c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bac7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bac7f: jge 0x8bac87 */
  if ((sf == of)) goto L_8bac87;
L_8bac81: /* 8bac81: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bac87: /* 8bac87: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bac8c: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bac8e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bac91: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bac94: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bac9a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bac9d: push 0xaea800 */
  { uint32_t v = 0xaea800u; esp -= 4; W32(esp, v); }
/* 8baca2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8baca3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8baca9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8baca9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bacac: mov ecx, eax */
  ecx = eax;
/* 8bacae: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 8bacb2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bacb8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bacb8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bacba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bacbb: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bacbe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bacc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bacc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bacc2: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bacc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bacc8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8baccb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bacce: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bacd2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bacd8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bacd8: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bacdb: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bace1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bace4: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bacea: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bacec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bacee: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bacf1: jp 0x8bad01 */
  if (pf) goto L_8bad01;
L_8bacf3: /* 8bacf3: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bacfa: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bad01: /* 8bad01: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bad04: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bad07: mov eax, dword ptr [0xce83cc] */
  eax = R32((uint32_t)(0xce83ccu));
/* 8bad0c: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bad0f: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bad12: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bad15: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bad18: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bad1b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bad21u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bad21: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bad23: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bad25: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bad27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bad28: jge 0x8bad30 */
  if ((sf == of)) goto L_8bad30;
L_8bad2a: /* 8bad2a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bad30: /* 8bad30: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bad35: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bad37: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bad3a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bad3d: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bad43: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bad46: push 0xaea818 */
  { uint32_t v = 0xaea818u; esp -= 4; W32(esp, v); }
/* 8bad4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bad4c: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bad52u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bad52: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bad55: mov ecx, eax */
  ecx = eax;
/* 8bad57: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 8bad5b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bad61u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bad61: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bad63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bad64: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bad67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bad69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bad6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bad6b: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bad71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bad71: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bad74: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bad77: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bad7b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bad81u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bad81: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bad84: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bad8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bad8d: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bad93: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bad95: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bad97: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bad9a: jp 0x8badaa */
  if (pf) goto L_8badaa;
L_8bad9c: /* 8bad9c: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bada3: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8badaa: /* 8badaa: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8badad: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8badb0: mov eax, dword ptr [0xce83d4] */
  eax = R32((uint32_t)(0xce83d4u));
/* 8badb5: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8badb8: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8badbb: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8badbe: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8badc1: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8badc4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8badcau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8badca: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8badcc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8badce: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8badd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8badd1: jge 0x8badd9 */
  if ((sf == of)) goto L_8badd9;
L_8badd3: /* 8badd3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8badd9: /* 8badd9: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8badde: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bade0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bade3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bade6: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8badec: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8badef: push 0xaea830 */
  { uint32_t v = 0xaea830u; esp -= 4; W32(esp, v); }
/* 8badf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8badf5: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8badfbu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8badfb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8badfe: mov ecx, eax */
  ecx = eax;
/* 8bae00: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 8bae04: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bae0au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bae0a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bae0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bae0d: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bae10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bae12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bae13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bae14: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bae1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bae1a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bae1d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bae20: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bae24: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bae2au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bae2a: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bae30: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bae32: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bae38: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bae3a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bae3d: jp 0x8bae6f */
  if (pf) goto L_8bae6f;
L_8bae3f: /* 8bae3f: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bae42: mov eax, dword ptr [0xce83d0] */
  eax = R32((uint32_t)(0xce83d0u));
/* 8bae47: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bae4a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bae4c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bae4f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bae52: jge 0x8bae5a */
  if ((sf == of)) goto L_8bae5a;
L_8bae54: /* 8bae54: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bae5a: /* 8bae5a: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bae5c: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bae62: fcomp qword ptr [0xa1bcb0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bcb0u)));
  FPOP();
/* 8bae68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bae6a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bae6d: je 0x8baeaf */
  if (zf) goto L_8baeaf;
L_8bae6f: /* 8bae6f: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bae71: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bae77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bae79: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bae7c: jne 0x8baec7 */
  if (!zf) goto L_8baec7;
L_8bae7e: /* 8bae7e: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bae81: mov edx, dword ptr [0xce83d0] */
  edx = R32((uint32_t)(0xce83d0u));
/* 8bae87: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bae8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bae8c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bae8f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bae92: jge 0x8bae9a */
  if ((sf == of)) goto L_8bae9a;
L_8bae94: /* 8bae94: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bae9a: /* 8bae9a: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bae9c: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8baea2: fcomp qword ptr [0xa17858] */
  fpu_com(ST0, F64((uint32_t)(0xa17858u)));
  FPOP();
/* 8baea8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8baeaa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8baead: jne 0x8baec7 */
  if (!zf) goto L_8baec7;
L_8baeaf: /* 8baeaf: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8baeb3: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8baeb7: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8baebb: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8baebf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8baec2: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8baec5: jmp 0x8baedd */
  goto L_8baedd;
L_8baec7: /* 8baec7: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8baecb: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8baecf: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8baed3: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8baed7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8baeda: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8baedd: /* 8baedd: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8baee0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8baee3: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8baee9: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8baeef: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8baef1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8baef3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8baef6: jp 0x8baf06 */
  if (pf) goto L_8baf06;
L_8baef8: /* 8baef8: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8baeff: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8baf06: /* 8baf06: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8baf09: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8baf0c: mov eax, dword ptr [0xce83d0] */
  eax = R32((uint32_t)(0xce83d0u));
/* 8baf11: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8baf14: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8baf17: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8baf1a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8baf1d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8baf20: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8baf26u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8baf26: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8baf28: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8baf2a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8baf2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8baf2d: jge 0x8baf35 */
  if ((sf == of)) goto L_8baf35;
L_8baf2f: /* 8baf2f: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8baf35: /* 8baf35: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8baf3b: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8baf3d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8baf40: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8baf43: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8baf49: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8baf4c: push 0xaea848 */
  { uint32_t v = 0xaea848u; esp -= 4; W32(esp, v); }
/* 8baf51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8baf52: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8baf58u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8baf58: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8baf5b: mov ecx, eax */
  ecx = eax;
/* 8baf5d: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 8baf61: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8baf67u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8baf67: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8baf6a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8baf6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8baf6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8baf6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8baf70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8baf71: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8baf77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8baf77: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8baf7a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8baf7d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8baf81: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8baf87u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8baf87: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8baf8a: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8baf90: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8baf93: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8baf97: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8baf9b: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8baf9f: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bafa3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bafa6: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bafa9: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bafaf: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bafb1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bafb3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bafb6: jp 0x8bafc6 */
  if (pf) goto L_8bafc6;
L_8bafb8: /* 8bafb8: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bafbf: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bafc6: /* 8bafc6: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bafc9: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bafcc: mov eax, dword ptr [0xce83d8] */
  eax = R32((uint32_t)(0xce83d8u));
/* 8bafd1: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bafd4: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bafd7: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bafda: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bafdd: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bafe0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bafe6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bafe6: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bafe8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bafea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bafec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bafed: jge 0x8baff5 */
  if ((sf == of)) goto L_8baff5;
L_8bafef: /* 8bafef: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8baff5: /* 8baff5: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8baffa: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8baffc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bafff: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb002: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb008: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bb00b: push 0xaea860 */
  { uint32_t v = 0xaea860u; esp -= 4; W32(esp, v); }
/* 8bb010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb011: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb017u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb017: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb01a: mov ecx, eax */
  ecx = eax;
/* 8bb01c: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 8bb020: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb026u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb026: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bb028: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb029: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bb02c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb02e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb02f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb030: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bb036u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb036: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb039: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb03c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb040: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb046u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb046: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb049: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb04f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bb052: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bb058: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb05a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb05c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb05f: jp 0x8bb06f */
  if (pf) goto L_8bb06f;
L_8bb061: /* 8bb061: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb068: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb06f: /* 8bb06f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb072: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb075: mov eax, dword ptr [0xce83dc] */
  eax = R32((uint32_t)(0xce83dcu));
/* 8bb07a: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bb07d: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bb080: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bb083: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bb086: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bb089: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb08fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb08f: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bb091: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bb093: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb096: jge 0x8bb09e */
  if ((sf == of)) goto L_8bb09e;
L_8bb098: /* 8bb098: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb09e: /* 8bb09e: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bb0a3: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bb0a5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bb0a8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb0ab: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb0b1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bb0b4: push 0xaea878 */
  { uint32_t v = 0xaea878u; esp -= 4; W32(esp, v); }
/* 8bb0b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb0ba: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb0c0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb0c0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb0c3: mov ecx, eax */
  ecx = eax;
/* 8bb0c5: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 8bb0c9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb0cfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb0cf: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bb0d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb0d2: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bb0d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb0d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb0d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb0d9: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bb0dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb0df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb0e2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb0e5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb0e9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb0efu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb0ef: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb0f2: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bb0f8: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8bb0fc: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bb100: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bb104: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb108: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bb10b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb10e: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bb111: push 0xaea890 */
  { uint32_t v = 0xaea890u; esp -= 4; W32(esp, v); }
/* 8bb116: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bb119: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bb11fu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bb11f: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb122: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb128: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8bb12b: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bb131: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb133: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb135: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb138: jp 0x8bb148 */
  if (pf) goto L_8bb148;
L_8bb13a: /* 8bb13a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb141: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb148: /* 8bb148: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb14b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bb14e: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb151: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb157u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb157: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bb159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb15a: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bb15d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb15f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb161: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bb167u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb167: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb16a: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb170: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bb174: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bb178: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bb17c: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb180: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb183: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bb186: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bb18c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb18f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb191: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb193: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb196: jp 0x8bb1a6 */
  if (pf) goto L_8bb1a6;
L_8bb198: /* 8bb198: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb19f: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb1a6: /* 8bb1a6: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb1a9: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb1ac: mov eax, dword ptr [0xce83e0] */
  eax = R32((uint32_t)(0xce83e0u));
/* 8bb1b1: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bb1b4: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bb1b7: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bb1ba: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bb1bd: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bb1c0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb1c6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb1c6: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bb1c8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bb1ca: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb1cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb1cd: jge 0x8bb1d5 */
  if ((sf == of)) goto L_8bb1d5;
L_8bb1cf: /* 8bb1cf: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb1d5: /* 8bb1d5: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bb1da: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bb1dc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bb1df: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb1e2: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb1e8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bb1eb: push 0xaea8b4 */
  { uint32_t v = 0xaea8b4u; esp -= 4; W32(esp, v); }
/* 8bb1f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb1f1: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb1f7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb1f7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb1fa: mov ecx, eax */
  ecx = eax;
/* 8bb1fc: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 8bb200: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb206u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb206: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bb208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb209: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bb20c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb20e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb20f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb210: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bb216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb216: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb219: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb21c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb220: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb226u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb226: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb229: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb22f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bb232: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bb238: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb23a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb23c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb23f: jp 0x8bb24f */
  if (pf) goto L_8bb24f;
L_8bb241: /* 8bb241: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb248: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb24f: /* 8bb24f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb252: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb255: mov eax, dword ptr [0xce83e4] */
  eax = R32((uint32_t)(0xce83e4u));
/* 8bb25a: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bb25d: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bb260: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bb263: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bb266: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bb269: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb26fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb26f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bb271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb272: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb273: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb276: push 0xaea8cc */
  { uint32_t v = 0xaea8ccu; esp -= 4; W32(esp, v); }
/* 8bb27b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb27c: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb282u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb282: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb285: mov ecx, eax */
  ecx = eax;
/* 8bb287: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 8bb28b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb291u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb291: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb294: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb297: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb299: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb29a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb29b: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb2a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb2a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb2a4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb2a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb2ab: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb2b1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb2b1: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb2b4: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb2ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bb2bd: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bb2c3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb2c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb2c7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb2ca: jp 0x8bb2da */
  if (pf) goto L_8bb2da;
L_8bb2cc: /* 8bb2cc: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb2d3: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb2da: /* 8bb2da: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb2dd: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb2e0: mov eax, dword ptr [0xce83e8] */
  eax = R32((uint32_t)(0xce83e8u));
/* 8bb2e5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb2e8: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb2eb: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb2ee: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb2f1: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb2f4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb2fau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb2fa: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb2fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb2fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb2fe: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb301: push 0xaea8d8 */
  { uint32_t v = 0xaea8d8u; esp -= 4; W32(esp, v); }
/* 8bb306: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb307: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb30du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb30d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb310: mov ecx, eax */
  ecx = eax;
/* 8bb312: mov byte ptr [ebp - 4], 0x2f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2fu);
/* 8bb316: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb31cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb31c: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb31f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb322: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb324: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb325: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb326: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb32cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb32c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb32f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb332: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb336: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb33cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb33c: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bb342: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bb344: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bb34a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb34c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb34f: jp 0x8bb382 */
  if (pf) goto L_8bb382;
L_8bb351: /* 8bb351: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bb354: mov edx, dword ptr [0xce83ec] */
  edx = R32((uint32_t)(0xce83ecu));
/* 8bb35a: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bb35d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb35f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bb362: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bb365: jge 0x8bb36d */
  if ((sf == of)) goto L_8bb36d;
L_8bb367: /* 8bb367: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb36d: /* 8bb36d: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bb36f: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb375: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8bb37b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb37d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bb380: je 0x8bb3c1 */
  if (zf) goto L_8bb3c1;
L_8bb382: /* 8bb382: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bb384: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bb38a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb38c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bb38f: jne 0x8bb3d9 */
  if (!zf) goto L_8bb3d9;
L_8bb391: /* 8bb391: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bb394: mov eax, dword ptr [0xce83ec] */
  eax = R32((uint32_t)(0xce83ecu));
/* 8bb399: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bb39c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb39e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bb3a1: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bb3a4: jge 0x8bb3ac */
  if ((sf == of)) goto L_8bb3ac;
L_8bb3a6: /* 8bb3a6: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb3ac: /* 8bb3ac: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bb3ae: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb3b4: fcomp qword ptr [0xa16940] */
  fpu_com(ST0, F64((uint32_t)(0xa16940u)));
  FPOP();
/* 8bb3ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb3bc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bb3bf: jne 0x8bb3d9 */
  if (!zf) goto L_8bb3d9;
L_8bb3c1: /* 8bb3c1: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bb3c5: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bb3c9: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bb3cd: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb3d1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb3d4: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bb3d7: jmp 0x8bb3ef */
  goto L_8bb3ef;
L_8bb3d9: /* 8bb3d9: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bb3dd: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bb3e1: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bb3e5: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb3e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb3ec: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
L_8bb3ef: /* 8bb3ef: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb3f2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bb3f5: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb3fb: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8bb401: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb403: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb405: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb408: jp 0x8bb418 */
  if (pf) goto L_8bb418;
L_8bb40a: /* 8bb40a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb411: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb418: /* 8bb418: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb41b: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb41e: mov eax, dword ptr [0xce83ec] */
  eax = R32((uint32_t)(0xce83ecu));
/* 8bb423: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb426: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb429: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb42c: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb42f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb432: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb438u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb438: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bb43a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb43c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb43e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb43f: jge 0x8bb447 */
  if ((sf == of)) goto L_8bb447;
L_8bb441: /* 8bb441: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb447: /* 8bb447: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bb44d: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bb44f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bb452: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb455: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb45b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bb45e: push 0xaea8e4 */
  { uint32_t v = 0xaea8e4u; esp -= 4; W32(esp, v); }
/* 8bb463: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb464: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb46au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb46a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb46d: mov ecx, eax */
  ecx = eax;
/* 8bb46f: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 8bb473: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb479u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb479: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb47c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb47e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb47f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb481: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb482: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb483: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb489u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb489: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb48c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb48f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb493: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb499u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb499: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb49c: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bb4a2: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8bb4a6: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bb4aa: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bb4ae: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb4b2: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bb4b5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb4b8: push 0xaea8fc */
  { uint32_t v = 0xaea8fcu; esp -= 4; W32(esp, v); }
/* 8bb4bd: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bb4c0: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bb4c3: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bb4c9u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bb4c9: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb4cc: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb4d2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8bb4d5: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bb4db: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb4dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb4df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb4e2: jp 0x8bb4f2 */
  if (pf) goto L_8bb4f2;
L_8bb4e4: /* 8bb4e4: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb4eb: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb4f2: /* 8bb4f2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb4f5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bb4f8: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb4fb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb501u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb501: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb504: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb509: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb50a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb50b: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb511u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb511: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb514: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb51a: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bb51e: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bb522: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bb526: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb52a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb52d: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bb530: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bb536: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb539: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb53b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb53d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb540: jp 0x8bb550 */
  if (pf) goto L_8bb550;
L_8bb542: /* 8bb542: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb549: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb550: /* 8bb550: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb553: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb556: mov eax, dword ptr [0xce8424] */
  eax = R32((uint32_t)(0xce8424u));
/* 8bb55b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb55e: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb561: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb564: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb567: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb56a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb570u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb570: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb573: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb574: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb577: push 0xaea920 */
  { uint32_t v = 0xaea920u; esp -= 4; W32(esp, v); }
/* 8bb57c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb57d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb583u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb583: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb586: mov ecx, eax */
  ecx = eax;
/* 8bb588: mov byte ptr [ebp - 4], 0x31 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x31u);
/* 8bb58c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb592u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb592: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb595: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb598: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb59a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb59b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb59c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb5a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb5a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb5a5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb5a8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb5ac: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb5b2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb5b2: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bb5b8: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bb5ba: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bb5c0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb5c2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb5c5: jp 0x8bb5f8 */
  if (pf) goto L_8bb5f8;
L_8bb5c7: /* 8bb5c7: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bb5ca: mov edx, dword ptr [0xce8428] */
  edx = R32((uint32_t)(0xce8428u));
/* 8bb5d0: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bb5d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb5d5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bb5d8: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bb5db: jge 0x8bb5e3 */
  if ((sf == of)) goto L_8bb5e3;
L_8bb5dd: /* 8bb5dd: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb5e3: /* 8bb5e3: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bb5e5: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb5eb: fcomp qword ptr [0xa1bcb0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bcb0u)));
  FPOP();
/* 8bb5f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb5f3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bb5f6: je 0x8bb637 */
  if (zf) goto L_8bb637;
L_8bb5f8: /* 8bb5f8: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bb5fa: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bb600: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb602: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bb605: jne 0x8bb64f */
  if (!zf) goto L_8bb64f;
L_8bb607: /* 8bb607: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bb60a: mov eax, dword ptr [0xce8428] */
  eax = R32((uint32_t)(0xce8428u));
/* 8bb60f: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bb612: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb614: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bb617: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bb61a: jge 0x8bb622 */
  if ((sf == of)) goto L_8bb622;
L_8bb61c: /* 8bb61c: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb622: /* 8bb622: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bb624: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb62a: fcomp qword ptr [0xa17858] */
  fpu_com(ST0, F64((uint32_t)(0xa17858u)));
  FPOP();
/* 8bb630: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb632: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bb635: jne 0x8bb64f */
  if (!zf) goto L_8bb64f;
L_8bb637: /* 8bb637: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bb63b: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bb63f: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bb643: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb647: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb64a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bb64d: jmp 0x8bb665 */
  goto L_8bb665;
L_8bb64f: /* 8bb64f: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bb653: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bb657: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bb65b: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb65f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb662: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
L_8bb665: /* 8bb665: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb668: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bb66b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb671: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8bb677: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb679: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb67b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb67e: jp 0x8bb68e */
  if (pf) goto L_8bb68e;
L_8bb680: /* 8bb680: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb687: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb68e: /* 8bb68e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb691: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb694: mov eax, dword ptr [0xce8428] */
  eax = R32((uint32_t)(0xce8428u));
/* 8bb699: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb69c: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb69f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb6a2: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb6a5: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb6a8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb6aeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb6ae: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bb6b0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb6b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb6b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb6b5: jge 0x8bb6bd */
  if ((sf == of)) goto L_8bb6bd;
L_8bb6b7: /* 8bb6b7: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb6bd: /* 8bb6bd: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bb6c3: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bb6c5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bb6c8: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb6cb: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb6d1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bb6d4: push 0xaea92c */
  { uint32_t v = 0xaea92cu; esp -= 4; W32(esp, v); }
/* 8bb6d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb6da: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb6e0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb6e0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb6e3: mov ecx, eax */
  ecx = eax;
/* 8bb6e5: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 8bb6e9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb6efu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb6ef: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb6f2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb6f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb6f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb6f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb6f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb6f9: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb6ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb6ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb702: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb705: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb709: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb70fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb70f: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb712: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bb718: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bb71b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bb71f: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bb723: fst dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0);
/* 8bb726: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bb72a: fld dword ptr [0xa1737c] */
  { double v = F32((uint32_t)(0xa1737cu)); FPUSH(v); }
/* 8bb730: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bb734: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bb737: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8bb739: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bb73c: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bb742: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb744: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb746: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8bb748: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb74b: jp 0x8bb75b */
  if (pf) goto L_8bb75b;
L_8bb74d: /* 8bb74d: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb754: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb75b: /* 8bb75b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb75e: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb761: mov eax, dword ptr [0xce83f0] */
  eax = R32((uint32_t)(0xce83f0u));
/* 8bb766: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bb769: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bb76c: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bb76f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bb772: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bb775: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb77bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb77b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bb77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb77e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb77f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb782: push 0xaea944 */
  { uint32_t v = 0xaea944u; esp -= 4; W32(esp, v); }
/* 8bb787: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb788: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb78eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb78e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb791: mov ecx, eax */
  ecx = eax;
/* 8bb793: mov byte ptr [ebp - 4], 0x33 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x33u);
/* 8bb797: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb79du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb79d: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb7a0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb7a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb7a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb7a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb7a7: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb7adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb7ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb7b0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb7b3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb7b7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb7bdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb7bd: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb7c0: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb7c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bb7c9: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bb7cf: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb7d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb7d3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb7d6: jp 0x8bb7e6 */
  if (pf) goto L_8bb7e6;
L_8bb7d8: /* 8bb7d8: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb7df: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb7e6: /* 8bb7e6: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb7e9: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb7ec: mov eax, dword ptr [0xce83f8] */
  eax = R32((uint32_t)(0xce83f8u));
/* 8bb7f1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb7f4: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb7f7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb7fa: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb7fd: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb800: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb806u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb806: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb808: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb809: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb80a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb80d: push 0xaea950 */
  { uint32_t v = 0xaea950u; esp -= 4; W32(esp, v); }
/* 8bb812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb813: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb819u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb819: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb81c: mov ecx, eax */
  ecx = eax;
/* 8bb81e: mov byte ptr [ebp - 4], 0x34 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x34u);
/* 8bb822: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb828u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb828: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb82b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb82d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb82e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb830: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb832: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb838u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb838: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb83b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb83e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb842: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb848u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb848: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb84b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb851: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bb854: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bb85a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb85c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb85e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb861: jp 0x8bb871 */
  if (pf) goto L_8bb871;
L_8bb863: /* 8bb863: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb86a: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb871: /* 8bb871: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb874: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb877: mov eax, dword ptr [0xce83f4] */
  eax = R32((uint32_t)(0xce83f4u));
/* 8bb87c: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb87f: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb882: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb885: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb888: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb88b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb891u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb891: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb894: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb895: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb898: push 0xaea95c */
  { uint32_t v = 0xaea95cu; esp -= 4; W32(esp, v); }
/* 8bb89d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb89e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb8a4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb8a4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb8a7: mov ecx, eax */
  ecx = eax;
/* 8bb8a9: mov byte ptr [ebp - 4], 0x35 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x35u);
/* 8bb8ad: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb8b3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb8b3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb8b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb8b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb8b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb8bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb8bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb8bd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb8c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb8c3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb8c6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb8c9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb8cd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb8d3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb8d3: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb8d6: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb8dc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bb8df: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bb8e5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb8e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb8e9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb8ec: jp 0x8bb8fc */
  if (pf) goto L_8bb8fc;
L_8bb8ee: /* 8bb8ee: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb8f5: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb8fc: /* 8bb8fc: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb8ff: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb902: mov eax, dword ptr [0xce83fc] */
  eax = R32((uint32_t)(0xce83fcu));
/* 8bb907: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb90a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb90d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb910: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb913: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb916: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb91cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb91c: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bb91e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb920: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bb922: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb923: jge 0x8bb92b */
  if ((sf == of)) goto L_8bb92b;
L_8bb925: /* 8bb925: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bb92b: /* 8bb92b: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bb931: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bb933: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bb936: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb939: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bb93f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bb942: push 0xaea968 */
  { uint32_t v = 0xaea968u; esp -= 4; W32(esp, v); }
/* 8bb947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb948: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb94eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb94e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb951: mov ecx, eax */
  ecx = eax;
/* 8bb953: mov byte ptr [ebp - 4], 0x36 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x36u);
/* 8bb957: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb95du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb95d: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb960: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb963: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb965: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb966: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb967: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb96du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb96d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb970: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb973: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bb977: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bb97du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bb97d: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bb980: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bb986: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bb989: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bb98f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bb991: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bb993: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bb996: jp 0x8bb9a6 */
  if (pf) goto L_8bb9a6;
L_8bb998: /* 8bb998: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bb99f: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bb9a6: /* 8bb9a6: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bb9a9: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bb9ac: mov eax, dword ptr [0xce8400] */
  eax = R32((uint32_t)(0xce8400u));
/* 8bb9b1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bb9b4: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bb9b7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bb9ba: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bb9bd: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bb9c0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb9c6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb9c6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bb9c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb9c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bb9ca: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb9cd: push 0xaea980 */
  { uint32_t v = 0xaea980u; esp -= 4; W32(esp, v); }
/* 8bb9d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb9d3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bb9d9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bb9d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb9dc: mov ecx, eax */
  ecx = eax;
/* 8bb9de: mov byte ptr [ebp - 4], 0x37 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x37u);
/* 8bb9e2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bb9e8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bb9e8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bb9eb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bb9ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bb9ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bb9f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bb9f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bb9f2: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bb9f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bb9f8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bb9fb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bb9fe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bba02: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bba08u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bba08: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bba0b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bba11: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bba14: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bba1a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bba1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bba1e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bba21: jp 0x8bba31 */
  if (pf) goto L_8bba31;
L_8bba23: /* 8bba23: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bba2a: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bba31: /* 8bba31: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bba34: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bba37: mov eax, dword ptr [0xce8404] */
  eax = R32((uint32_t)(0xce8404u));
/* 8bba3c: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bba3f: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bba42: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bba45: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bba48: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bba4b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bba51u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bba51: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bba53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bba54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bba55: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bba58: push 0xaea98c */
  { uint32_t v = 0xaea98cu; esp -= 4; W32(esp, v); }
/* 8bba5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bba5e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bba64u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bba64: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bba67: mov ecx, eax */
  ecx = eax;
/* 8bba69: mov byte ptr [ebp - 4], 0x38 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x38u);
/* 8bba6d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bba73u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bba73: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bba76: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bba78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bba79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bba7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bba7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bba7d: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bba83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bba83: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bba86: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bba89: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bba8d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bba93u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bba93: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bba96: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bba9c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bba9f: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbaa5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbaa7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbaa9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbaac: jp 0x8bbabc */
  if (pf) goto L_8bbabc;
L_8bbaae: /* 8bbaae: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbab5: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbabc: /* 8bbabc: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbabf: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbac2: mov eax, dword ptr [0xce8408] */
  eax = R32((uint32_t)(0xce8408u));
/* 8bbac7: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbaca: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbacd: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbad0: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbad3: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbad6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbadcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbadc: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bbade: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbae0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bbae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbae3: jge 0x8bbaeb */
  if ((sf == of)) goto L_8bbaeb;
L_8bbae5: /* 8bbae5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bbaeb: /* 8bbaeb: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bbaf1: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bbaf3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bbaf6: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbaf9: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bbaff: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bbb02: push 0xaea998 */
  { uint32_t v = 0xaea998u; esp -= 4; W32(esp, v); }
/* 8bbb07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbb08: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbb0eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbb0e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbb11: mov ecx, eax */
  ecx = eax;
/* 8bbb13: mov byte ptr [ebp - 4], 0x39 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x39u);
/* 8bbb17: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbb1du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbb1d: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbb20: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbb23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbb25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbb26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbb27: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbb2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbb2d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbb30: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbb33: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbb37: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbb3du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbb3d: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbb40: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bbb46: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bbb49: fst dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0);
/* 8bbb4c: fld dword ptr [0xa1737c] */
  { double v = F32((uint32_t)(0xa1737cu)); FPUSH(v); }
/* 8bbb52: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8bbb54: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbb5a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbb5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbb5e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8bbb60: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbb63: jp 0x8bbb73 */
  if (pf) goto L_8bbb73;
L_8bbb65: /* 8bbb65: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbb6c: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbb73: /* 8bbb73: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbb76: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbb79: mov eax, dword ptr [0xce8410] */
  eax = R32((uint32_t)(0xce8410u));
/* 8bbb7e: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbb81: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbb84: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbb87: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbb8a: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbb8d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbb93u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbb93: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbb95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbb96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bbb97: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbb9a: push 0xaea9b0 */
  { uint32_t v = 0xaea9b0u; esp -= 4; W32(esp, v); }
/* 8bbb9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbba0: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbba6u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbba6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbba9: mov ecx, eax */
  ecx = eax;
/* 8bbbab: mov byte ptr [ebp - 4], 0x3a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3au);
/* 8bbbaf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbbb5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbbb5: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbbb8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbbba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbbbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbbbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbbbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbbbf: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbbc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbbc5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbbc8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbbcb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbbcf: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbbd5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbbd5: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbbd8: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbbde: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bbbe1: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbbe7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbbe9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbbeb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbbee: jp 0x8bbbfe */
  if (pf) goto L_8bbbfe;
L_8bbbf0: /* 8bbbf0: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbbf7: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbbfe: /* 8bbbfe: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbc01: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbc04: mov eax, dword ptr [0xce840c] */
  eax = R32((uint32_t)(0xce840cu));
/* 8bbc09: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbc0c: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbc0f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbc12: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbc15: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbc18: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbc1eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbc1e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbc20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbc21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bbc22: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbc25: push 0xaea9bc */
  { uint32_t v = 0xaea9bcu; esp -= 4; W32(esp, v); }
/* 8bbc2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbc2b: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbc31u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbc31: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbc34: mov ecx, eax */
  ecx = eax;
/* 8bbc36: mov byte ptr [ebp - 4], 0x3b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3bu);
/* 8bbc3a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbc40u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbc40: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbc43: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbc45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbc46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbc48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbc49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbc4a: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbc50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbc50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbc53: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbc56: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbc5a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbc60u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbc60: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbc63: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbc69: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bbc6c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbc72: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbc74: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbc76: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbc79: jp 0x8bbc89 */
  if (pf) goto L_8bbc89;
L_8bbc7b: /* 8bbc7b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbc82: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbc89: /* 8bbc89: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbc8c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbc8f: mov eax, dword ptr [0xce8414] */
  eax = R32((uint32_t)(0xce8414u));
/* 8bbc94: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbc97: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbc9a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbc9d: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbca0: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbca3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbca9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbca9: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bbcab: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbcad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bbcaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbcb0: jge 0x8bbcb8 */
  if ((sf == of)) goto L_8bbcb8;
L_8bbcb2: /* 8bbcb2: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bbcb8: /* 8bbcb8: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bbcbe: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bbcc0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bbcc3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbcc6: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bbccc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bbccf: push 0xaea9c8 */
  { uint32_t v = 0xaea9c8u; esp -= 4; W32(esp, v); }
/* 8bbcd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbcd5: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbcdbu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbcdb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbcde: mov ecx, eax */
  ecx = eax;
/* 8bbce0: mov byte ptr [ebp - 4], 0x3c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3cu);
/* 8bbce4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbceau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbcea: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbced: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbcf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbcf2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbcf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbcf4: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbcfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbcfa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbcfd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbd00: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbd04: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbd0au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbd0a: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbd0d: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbd13: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bbd16: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbd1c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbd1e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbd20: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbd23: jp 0x8bbd33 */
  if (pf) goto L_8bbd33;
L_8bbd25: /* 8bbd25: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbd2c: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbd33: /* 8bbd33: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbd36: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbd39: mov eax, dword ptr [0xce8418] */
  eax = R32((uint32_t)(0xce8418u));
/* 8bbd3e: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbd41: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbd44: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbd47: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbd4a: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbd4d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbd53u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbd53: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbd55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbd56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bbd57: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbd5a: push 0xaea9e0 */
  { uint32_t v = 0xaea9e0u; esp -= 4; W32(esp, v); }
/* 8bbd5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbd60: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbd66u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbd66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbd69: mov ecx, eax */
  ecx = eax;
/* 8bbd6b: mov byte ptr [ebp - 4], 0x3d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3du);
/* 8bbd6f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbd75u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbd75: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbd78: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbd7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbd7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbd7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbd7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbd7f: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbd85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbd85: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbd88: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbd8b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbd8f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbd95u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbd95: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbd98: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbd9e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bbda1: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbda7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbda9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbdab: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbdae: jp 0x8bbdbe */
  if (pf) goto L_8bbdbe;
L_8bbdb0: /* 8bbdb0: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbdb7: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbdbe: /* 8bbdbe: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbdc1: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbdc4: mov eax, dword ptr [0xce841c] */
  eax = R32((uint32_t)(0xce841cu));
/* 8bbdc9: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbdcc: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbdcf: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbdd2: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbdd5: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbdd8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbddeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbdde: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbde0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbde1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bbde2: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbde5: push 0xaea9ec */
  { uint32_t v = 0xaea9ecu; esp -= 4; W32(esp, v); }
/* 8bbdea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbdeb: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbdf1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbdf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbdf4: mov ecx, eax */
  ecx = eax;
/* 8bbdf6: mov byte ptr [ebp - 4], 0x3e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3eu);
/* 8bbdfa: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbe00u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbe00: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbe03: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbe05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbe06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbe08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbe09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbe0a: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbe10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbe10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbe13: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbe16: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbe1a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbe20u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbe20: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbe23: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbe29: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bbe2c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbe32: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbe34: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbe36: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbe39: jp 0x8bbe49 */
  if (pf) goto L_8bbe49;
L_8bbe3b: /* 8bbe3b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbe42: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbe49: /* 8bbe49: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbe4c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbe4f: mov eax, dword ptr [0xce8420] */
  eax = R32((uint32_t)(0xce8420u));
/* 8bbe54: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbe57: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbe5a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbe5d: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbe60: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbe63: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbe69u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbe69: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bbe6b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbe6d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bbe6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbe70: jge 0x8bbe78 */
  if ((sf == of)) goto L_8bbe78;
L_8bbe72: /* 8bbe72: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bbe78: /* 8bbe78: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bbe7e: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bbe80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bbe83: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbe86: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bbe8c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bbe8f: push 0xaea9f8 */
  { uint32_t v = 0xaea9f8u; esp -= 4; W32(esp, v); }
/* 8bbe94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbe95: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbe9bu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbe9b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbe9e: mov ecx, eax */
  ecx = eax;
/* 8bbea0: mov byte ptr [ebp - 4], 0x3f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3fu);
/* 8bbea4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbeaau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbeaa: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbead: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbeaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbeb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbeb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbeb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbeb4: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbebau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbeba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbebd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbec0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbec4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbecau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbeca: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbecd: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bbed3: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8bbed7: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bbedb: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bbedf: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bbee3: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bbee6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bbee9: push 0xaeaa10 */
  { uint32_t v = 0xaeaa10u; esp -= 4; W32(esp, v); }
/* 8bbeee: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bbef1: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bbef4: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bbefau); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bbefa: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbefd: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbf03: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8bbf06: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bbf0c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbf0e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbf10: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbf13: jp 0x8bbf23 */
  if (pf) goto L_8bbf23;
L_8bbf15: /* 8bbf15: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbf1c: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbf23: /* 8bbf23: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbf26: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bbf29: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbf2c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbf32u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbf32: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbf35: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbf37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbf38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbf3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbf3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbf3c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbf42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbf42: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbf45: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbf4b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bbf4f: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bbf53: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bbf57: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bbf5b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bbf5e: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bbf61: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bbf67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbf6a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbf6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbf6e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbf71: jp 0x8bbf81 */
  if (pf) goto L_8bbf81;
L_8bbf73: /* 8bbf73: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bbf7a: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bbf81: /* 8bbf81: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bbf84: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bbf87: mov eax, dword ptr [0xce843c] */
  eax = R32((uint32_t)(0xce843cu));
/* 8bbf8c: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bbf8f: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bbf92: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bbf95: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bbf98: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bbf9b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbfa1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbfa1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bbfa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbfa4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bbfa5: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbfa8: push 0xaeaa34 */
  { uint32_t v = 0xaeaa34u; esp -= 4; W32(esp, v); }
/* 8bbfad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbfae: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bbfb4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bbfb4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbfb7: mov ecx, eax */
  ecx = eax;
/* 8bbfb9: mov byte ptr [ebp - 4], 0x40 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x40u);
/* 8bbfbd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bbfc3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bbfc3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bbfc6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bbfc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bbfc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bbfcb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bbfcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bbfcd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bbfd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bbfd3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bbfd6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bbfd9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bbfdd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bbfe3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bbfe3: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bbfe6: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bbfec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bbfef: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bbff5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bbff7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bbff9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bbffc: jp 0x8bc00c */
  if (pf) goto L_8bc00c;
L_8bbffe: /* 8bbffe: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc005: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc00c: /* 8bc00c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc00f: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc012: mov eax, dword ptr [0xce8440] */
  eax = R32((uint32_t)(0xce8440u));
/* 8bc017: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc01a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc01d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc020: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc023: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc026: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc02cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc02c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc02e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc02f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bc030: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc033: push 0xaeaa40 */
  { uint32_t v = 0xaeaa40u; esp -= 4; W32(esp, v); }
/* 8bc038: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc039: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc03fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc03f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc042: mov ecx, eax */
  ecx = eax;
/* 8bc044: mov byte ptr [ebp - 4], 0x41 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x41u);
/* 8bc048: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc04eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc04e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc051: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc056: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc057: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc058: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc05eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc05e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc061: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc064: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc068: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc06eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc06e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc071: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc077: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc07a: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc080: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc082: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc084: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc087: jp 0x8bc097 */
  if (pf) goto L_8bc097;
L_8bc089: /* 8bc089: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc090: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc097: /* 8bc097: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc09a: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc09d: mov eax, dword ptr [0xce8444] */
  eax = R32((uint32_t)(0xce8444u));
/* 8bc0a2: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc0a5: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc0a8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc0ab: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc0ae: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc0b1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc0b7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc0b7: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc0b9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc0bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc0be: jge 0x8bc0c6 */
  if ((sf == of)) goto L_8bc0c6;
L_8bc0c0: /* 8bc0c0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc0c6: /* 8bc0c6: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc0cc: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc0ce: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc0d1: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc0d4: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc0da: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc0dd: push 0xaeaa4c */
  { uint32_t v = 0xaeaa4cu; esp -= 4; W32(esp, v); }
/* 8bc0e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc0e3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc0e9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc0e9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc0ec: mov ecx, eax */
  ecx = eax;
/* 8bc0ee: mov byte ptr [ebp - 4], 0x42 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x42u);
/* 8bc0f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc0f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc0f8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc0fb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc0fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc0fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc100: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc101: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc102: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc108: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc10b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc10e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc112: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc118u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8bc118: /* 8bc118: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8bc11b: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 8bc11e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bc120: je 0x8be4db */
  if (zf) goto L_8be4db;
L_8bc126: /* 8bc126: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc129: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8bc12d: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bc133: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bc137: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bc13b: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bc13f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bc142: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bc145: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bc148: push 0xaeaa64 */
  { uint32_t v = 0xaeaa64u; esp -= 4; W32(esp, v); }
/* 8bc14d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bc150: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bc156u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bc156: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc159: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc15f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8bc162: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bc168: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc16a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc16c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc16f: jp 0x8bc17f */
  if (pf) goto L_8bc17f;
L_8bc171: /* 8bc171: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc178: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc17f: /* 8bc17f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc182: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bc185: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc188: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc18eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc18e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bc190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc191: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bc194: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc196: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc197: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc198: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bc19eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc19e: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bc1a2: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bc1a6: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bc1aa: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bc1ae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bc1b1: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bc1b4: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bc1ba: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bc1bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc1bf: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bc1c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc1c7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc1ca: jp 0x8bc1fc */
  if (pf) goto L_8bc1fc;
L_8bc1cc: /* 8bc1cc: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bc1cf: mov eax, dword ptr [0xce842c] */
  eax = R32((uint32_t)(0xce842cu));
/* 8bc1d4: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bc1d7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc1d9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bc1dc: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bc1df: jge 0x8bc1e7 */
  if ((sf == of)) goto L_8bc1e7;
L_8bc1e1: /* 8bc1e1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc1e7: /* 8bc1e7: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bc1e9: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc1ef: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8bc1f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc1f7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bc1fa: je 0x8bc23c */
  if (zf) goto L_8bc23c;
L_8bc1fc: /* 8bc1fc: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bc1fe: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bc204: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc206: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bc209: jne 0x8bc254 */
  if (!zf) goto L_8bc254;
L_8bc20b: /* 8bc20b: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bc20e: mov edx, dword ptr [0xce842c] */
  edx = R32((uint32_t)(0xce842cu));
/* 8bc214: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bc217: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc219: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bc21c: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bc21f: jge 0x8bc227 */
  if ((sf == of)) goto L_8bc227;
L_8bc221: /* 8bc221: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc227: /* 8bc227: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bc229: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc22f: fcomp qword ptr [0xa16940] */
  fpu_com(ST0, F64((uint32_t)(0xa16940u)));
  FPOP();
/* 8bc235: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc237: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bc23a: jne 0x8bc254 */
  if (!zf) goto L_8bc254;
L_8bc23c: /* 8bc23c: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bc240: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bc244: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bc248: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bc24c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bc24f: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bc252: jmp 0x8bc26a */
  goto L_8bc26a;
L_8bc254: /* 8bc254: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bc258: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bc25c: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bc260: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bc264: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bc267: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bc26a: /* 8bc26a: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc26d: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc273: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bc279: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc27b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc27d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc280: jp 0x8bc290 */
  if (pf) goto L_8bc290;
L_8bc282: /* 8bc282: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc289: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc290: /* 8bc290: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc293: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc296: mov eax, dword ptr [0xce842c] */
  eax = R32((uint32_t)(0xce842cu));
/* 8bc29b: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc29e: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc2a1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc2a4: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc2a7: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc2aa: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc2b0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc2b0: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc2b2: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc2b4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc2b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc2b7: jge 0x8bc2bf */
  if ((sf == of)) goto L_8bc2bf;
L_8bc2b9: /* 8bc2b9: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc2bf: /* 8bc2bf: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc2c5: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc2c7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc2ca: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc2cd: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc2d3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc2d6: push 0xaeaa88 */
  { uint32_t v = 0xaeaa88u; esp -= 4; W32(esp, v); }
/* 8bc2db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc2dc: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc2e2u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc2e2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc2e5: mov ecx, eax */
  ecx = eax;
/* 8bc2e7: mov byte ptr [ebp - 4], 0x43 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x43u);
/* 8bc2eb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc2f1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc2f1: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc2f4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc2f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc2f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc2f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc2fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc2fb: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc301u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc301: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc304: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc307: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc30b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc311u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc311: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc314: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc31a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bc31d: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bc321: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bc325: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bc329: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bc32d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bc330: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bc333: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bc339: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc33b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc33d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc340: jp 0x8bc350 */
  if (pf) goto L_8bc350;
L_8bc342: /* 8bc342: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc349: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc350: /* 8bc350: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc353: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc356: mov eax, dword ptr [0xce8430] */
  eax = R32((uint32_t)(0xce8430u));
/* 8bc35b: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bc35e: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bc361: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bc364: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bc367: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bc36a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc370u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc370: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bc372: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc373: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc374: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc377: push 0xaeaaa0 */
  { uint32_t v = 0xaeaaa0u; esp -= 4; W32(esp, v); }
/* 8bc37c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc37d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc383u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc383: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc386: mov ecx, eax */
  ecx = eax;
/* 8bc388: mov byte ptr [ebp - 4], 0x44 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x44u);
/* 8bc38c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc392u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc392: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc395: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc398: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc39a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc39b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc39c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc3a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc3a2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc3a5: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc3a8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc3ac: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc3b2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc3b2: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc3b5: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc3bb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc3be: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc3c4: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc3c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc3c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc3cb: jp 0x8bc3db */
  if (pf) goto L_8bc3db;
L_8bc3cd: /* 8bc3cd: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc3d4: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc3db: /* 8bc3db: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc3de: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc3e1: mov eax, dword ptr [0xce8434] */
  eax = R32((uint32_t)(0xce8434u));
/* 8bc3e6: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc3e9: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc3ec: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc3ef: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc3f2: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc3f5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc3fbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc3fb: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc3fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc3fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bc3ff: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc402: push 0xaeaaac */
  { uint32_t v = 0xaeaaacu; esp -= 4; W32(esp, v); }
/* 8bc407: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc408: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc40eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc40e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc411: mov ecx, eax */
  ecx = eax;
/* 8bc413: mov byte ptr [ebp - 4], 0x45 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x45u);
/* 8bc417: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc41du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc41d: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc420: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc422: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc423: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc425: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc427: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc42du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc42d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc430: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc433: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc437: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc43du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc43d: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc440: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc446: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc449: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc44f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc451: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc453: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc456: jp 0x8bc466 */
  if (pf) goto L_8bc466;
L_8bc458: /* 8bc458: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc45f: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc466: /* 8bc466: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc469: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc46c: mov eax, dword ptr [0xce8438] */
  eax = R32((uint32_t)(0xce8438u));
/* 8bc471: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc474: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc477: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc47a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc47d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc480: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc486u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc486: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bc48a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc48d: push 0xaeaab8 */
  { uint32_t v = 0xaeaab8u; esp -= 4; W32(esp, v); }
/* 8bc492: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc493: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc499u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc499: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc49c: mov ecx, eax */
  ecx = eax;
/* 8bc49e: mov byte ptr [ebp - 4], 0x46 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x46u);
/* 8bc4a2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc4a8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc4a8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc4ab: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc4ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc4b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc4b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc4b2: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc4b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc4b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc4bb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc4be: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc4c2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc4c8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc4c8: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc4cb: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc4d1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc4d4: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc4da: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc4dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc4de: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc4e1: jp 0x8bc4f1 */
  if (pf) goto L_8bc4f1;
L_8bc4e3: /* 8bc4e3: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc4ea: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc4f1: /* 8bc4f1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc4f4: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc4f7: mov eax, dword ptr [0xce8358] */
  eax = R32((uint32_t)(0xce8358u));
/* 8bc4fc: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc4ff: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc502: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc505: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc508: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc50b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc511u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc511: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc513: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc515: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc517: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc518: jge 0x8bc520 */
  if ((sf == of)) goto L_8bc520;
L_8bc51a: /* 8bc51a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc520: /* 8bc520: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc526: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc528: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc52b: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc52e: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc534: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc537: push 0xaeaac4 */
  { uint32_t v = 0xaeaac4u; esp -= 4; W32(esp, v); }
/* 8bc53c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc53d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc543u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc543: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc546: mov ecx, eax */
  ecx = eax;
/* 8bc548: mov byte ptr [ebp - 4], 0x47 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x47u);
/* 8bc54c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc552u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc552: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc555: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc557: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc558: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc55a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc55b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc55c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc562u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc562: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc565: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc568: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc56c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc572u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc572: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc575: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc57b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc57e: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc584: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc586: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc588: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc58b: jp 0x8bc59b */
  if (pf) goto L_8bc59b;
L_8bc58d: /* 8bc58d: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc594: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc59b: /* 8bc59b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc59e: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc5a1: mov eax, dword ptr [0xce83a4] */
  eax = R32((uint32_t)(0xce83a4u));
/* 8bc5a6: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc5a9: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc5ac: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc5af: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc5b2: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc5b5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc5bbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc5bb: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc5bd: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc5bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc5c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc5c2: jge 0x8bc5ca */
  if ((sf == of)) goto L_8bc5ca;
L_8bc5c4: /* 8bc5c4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc5ca: /* 8bc5ca: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc5d0: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc5d2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc5d5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc5d8: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc5de: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc5e1: push 0xaeaadc */
  { uint32_t v = 0xaeaadcu; esp -= 4; W32(esp, v); }
/* 8bc5e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc5e7: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc5edu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc5ed: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc5f0: mov ecx, eax */
  ecx = eax;
/* 8bc5f2: mov byte ptr [ebp - 4], 0x48 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x48u);
/* 8bc5f6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc5fcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc5fc: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc5ff: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc601: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc602: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc604: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc605: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc606: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc60cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc60c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc60f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc612: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc616: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc61cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc61c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc61f: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc625: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc628: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc62e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc630: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc632: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc635: jp 0x8bc645 */
  if (pf) goto L_8bc645;
L_8bc637: /* 8bc637: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc63e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc645: /* 8bc645: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc648: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc64b: mov eax, dword ptr [0xce84b0] */
  eax = R32((uint32_t)(0xce84b0u));
/* 8bc650: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc653: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc656: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc659: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc65c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc65f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc665u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc665: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc667: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc669: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc66b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc66c: jge 0x8bc674 */
  if ((sf == of)) goto L_8bc674;
L_8bc66e: /* 8bc66e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc674: /* 8bc674: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc67a: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc67c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc67f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc682: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc688: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc68b: push 0xaeaaf4 */
  { uint32_t v = 0xaeaaf4u; esp -= 4; W32(esp, v); }
/* 8bc690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc691: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc697u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc697: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc69a: mov ecx, eax */
  ecx = eax;
/* 8bc69c: mov byte ptr [ebp - 4], 0x49 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x49u);
/* 8bc6a0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc6a6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc6a6: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc6a9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc6ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc6ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc6ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc6af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc6b0: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc6b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc6b6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc6b9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc6bc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc6c0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc6c6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc6c6: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc6c9: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bc6cf: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8bc6d3: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bc6d7: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bc6db: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bc6df: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bc6e2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bc6e5: push 0xaeab0c */
  { uint32_t v = 0xaeab0cu; esp -= 4; W32(esp, v); }
/* 8bc6ea: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bc6ed: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bc6f0: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bc6f6u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bc6f6: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc6f9: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc6ff: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8bc702: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bc708: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc70a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc70c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc70f: jp 0x8bc71f */
  if (pf) goto L_8bc71f;
L_8bc711: /* 8bc711: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc718: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc71f: /* 8bc71f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc722: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bc725: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc728: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc72eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc72e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc731: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc733: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc736: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc737: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc738: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc73eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc73e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc741: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc747: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bc74b: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bc74f: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bc753: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bc757: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bc75a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bc75d: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bc763: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc766: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc768: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc76a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc76d: jp 0x8bc77d */
  if (pf) goto L_8bc77d;
L_8bc76f: /* 8bc76f: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc776: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc77d: /* 8bc77d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc780: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc783: mov eax, dword ptr [0xce831c] */
  eax = R32((uint32_t)(0xce831cu));
/* 8bc788: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc78b: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc78e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc791: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc794: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc797: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc79du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc79d: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc79f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc7a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc7a4: jge 0x8bc7ac */
  if ((sf == of)) goto L_8bc7ac;
L_8bc7a6: /* 8bc7a6: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc7ac: /* 8bc7ac: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc7b2: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc7b4: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc7b7: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc7ba: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc7c0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc7c3: push 0xaeab30 */
  { uint32_t v = 0xaeab30u; esp -= 4; W32(esp, v); }
/* 8bc7c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc7c9: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc7cfu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc7cf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc7d2: mov ecx, eax */
  ecx = eax;
/* 8bc7d4: mov byte ptr [ebp - 4], 0x4a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4au);
/* 8bc7d8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc7deu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc7de: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc7e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc7e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc7e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc7e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc7e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc7e8: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc7eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc7ee: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc7f1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc7f4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc7f8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc7feu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc7fe: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc801: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc807: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc80a: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc810: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc812: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc814: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc817: jp 0x8bc827 */
  if (pf) goto L_8bc827;
L_8bc819: /* 8bc819: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc820: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc827: /* 8bc827: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc82a: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc82d: mov eax, dword ptr [0xce8320] */
  eax = R32((uint32_t)(0xce8320u));
/* 8bc832: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc835: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc838: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc83b: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc83e: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc841: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc847u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc847: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc849: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc84b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc84e: jge 0x8bc856 */
  if ((sf == of)) goto L_8bc856;
L_8bc850: /* 8bc850: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc856: /* 8bc856: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc85c: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc85e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc861: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc864: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc86a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc86d: push 0xaeab48 */
  { uint32_t v = 0xaeab48u; esp -= 4; W32(esp, v); }
/* 8bc872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc873: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc879u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc879: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc87c: mov ecx, eax */
  ecx = eax;
/* 8bc87e: mov byte ptr [ebp - 4], 0x4b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4bu);
/* 8bc882: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc888u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc888: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc88b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc88d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc88e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc890: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc891: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc892: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc898u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc898: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc89b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc89e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc8a2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc8a8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc8a8: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc8ab: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc8b1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc8b4: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc8ba: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc8bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc8be: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc8c1: jp 0x8bc8d1 */
  if (pf) goto L_8bc8d1;
L_8bc8c3: /* 8bc8c3: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc8ca: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc8d1: /* 8bc8d1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc8d4: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc8d7: mov eax, dword ptr [0xce8324] */
  eax = R32((uint32_t)(0xce8324u));
/* 8bc8dc: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc8df: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc8e2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc8e5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc8e8: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc8eb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc8f1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc8f1: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc8f3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc8f5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc8f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc8f8: jge 0x8bc900 */
  if ((sf == of)) goto L_8bc900;
L_8bc8fa: /* 8bc8fa: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc900: /* 8bc900: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc906: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc908: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc90b: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc90e: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc914: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc917: push 0xaeab60 */
  { uint32_t v = 0xaeab60u; esp -= 4; W32(esp, v); }
/* 8bc91c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc91d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc923u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc923: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc926: mov ecx, eax */
  ecx = eax;
/* 8bc928: mov byte ptr [ebp - 4], 0x4c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4cu);
/* 8bc92c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc932u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc932: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc935: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc937: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc938: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc93a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc93b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc93c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc942u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc942: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc945: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc948: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc94c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc952u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc952: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc955: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bc95b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bc95e: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bc964: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bc966: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bc968: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bc96b: jp 0x8bc97b */
  if (pf) goto L_8bc97b;
L_8bc96d: /* 8bc96d: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bc974: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bc97b: /* 8bc97b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bc97e: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bc981: mov eax, dword ptr [0xce8328] */
  eax = R32((uint32_t)(0xce8328u));
/* 8bc986: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bc989: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bc98c: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bc98f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bc992: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bc995: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc99bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc99b: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bc99d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bc99f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bc9a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc9a2: jge 0x8bc9aa */
  if ((sf == of)) goto L_8bc9aa;
L_8bc9a4: /* 8bc9a4: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bc9aa: /* 8bc9aa: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bc9b0: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bc9b2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bc9b5: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc9b8: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bc9be: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bc9c1: push 0xaeab78 */
  { uint32_t v = 0xaeab78u; esp -= 4; W32(esp, v); }
/* 8bc9c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc9c7: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bc9cdu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bc9cd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc9d0: mov ecx, eax */
  ecx = eax;
/* 8bc9d2: mov byte ptr [ebp - 4], 0x4d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4du);
/* 8bc9d6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bc9dcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bc9dc: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bc9df: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bc9e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bc9e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bc9e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bc9e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bc9e6: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bc9ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bc9ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bc9ef: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bc9f2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bc9f6: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bc9fcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bc9fc: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bc9ff: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bca05: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bca08: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bca0e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bca10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bca12: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bca15: jp 0x8bca25 */
  if (pf) goto L_8bca25;
L_8bca17: /* 8bca17: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bca1e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bca25: /* 8bca25: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bca28: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bca2b: mov eax, dword ptr [0xce832c] */
  eax = R32((uint32_t)(0xce832cu));
/* 8bca30: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bca33: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bca36: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bca39: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bca3c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bca3f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bca45u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bca45: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bca47: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bca49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bca4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bca4c: jge 0x8bca54 */
  if ((sf == of)) goto L_8bca54;
L_8bca4e: /* 8bca4e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bca54: /* 8bca54: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bca5a: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bca5c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bca5f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bca62: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bca68: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bca6b: push 0xaeab90 */
  { uint32_t v = 0xaeab90u; esp -= 4; W32(esp, v); }
/* 8bca70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bca71: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bca77u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bca77: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bca7a: mov ecx, eax */
  ecx = eax;
/* 8bca7c: mov byte ptr [ebp - 4], 0x4e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4eu);
/* 8bca80: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bca86u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bca86: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bca89: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bca8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bca8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bca8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bca8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bca90: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bca96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bca96: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bca99: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bca9c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bcaa0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bcaa6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bcaa6: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bcaa9: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bcaaf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bcab2: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bcab8: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bcaba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcabc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bcabf: jp 0x8bcacf */
  if (pf) goto L_8bcacf;
L_8bcac1: /* 8bcac1: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bcac8: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bcacf: /* 8bcacf: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bcad2: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bcad5: mov eax, dword ptr [0xce8330] */
  eax = R32((uint32_t)(0xce8330u));
/* 8bcada: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bcadd: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bcae0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bcae3: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bcae6: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bcae9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcaefu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcaef: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bcaf1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bcaf3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bcaf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcaf6: jge 0x8bcafe */
  if ((sf == of)) goto L_8bcafe;
L_8bcaf8: /* 8bcaf8: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bcafe: /* 8bcafe: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bcb04: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bcb06: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bcb09: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcb0c: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bcb12: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bcb15: push 0xaeaba8 */
  { uint32_t v = 0xaeaba8u; esp -= 4; W32(esp, v); }
/* 8bcb1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcb1b: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bcb21u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bcb21: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcb24: mov ecx, eax */
  ecx = eax;
/* 8bcb26: mov byte ptr [ebp - 4], 0x4f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4fu);
/* 8bcb2a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcb30u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcb30: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bcb33: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bcb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcb36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bcb38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bcb39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bcb3a: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bcb40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bcb40: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcb43: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcb46: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bcb4a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bcb50u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bcb50: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bcb53: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bcb59: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bcb5c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bcb62: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bcb64: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcb66: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bcb69: jp 0x8bcb79 */
  if (pf) goto L_8bcb79;
L_8bcb6b: /* 8bcb6b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bcb72: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bcb79: /* 8bcb79: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bcb7c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bcb7f: mov eax, dword ptr [0xce8334] */
  eax = R32((uint32_t)(0xce8334u));
/* 8bcb84: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bcb87: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bcb8a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bcb8d: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bcb90: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bcb93: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcb99u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcb99: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bcb9b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bcb9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bcb9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcba0: jge 0x8bcba8 */
  if ((sf == of)) goto L_8bcba8;
L_8bcba2: /* 8bcba2: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bcba8: /* 8bcba8: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bcbae: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bcbb0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bcbb3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcbb6: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bcbbc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bcbbf: push 0xaeabc0 */
  { uint32_t v = 0xaeabc0u; esp -= 4; W32(esp, v); }
/* 8bcbc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcbc5: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bcbcbu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bcbcb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcbce: mov ecx, eax */
  ecx = eax;
/* 8bcbd0: mov byte ptr [ebp - 4], 0x50 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x50u);
/* 8bcbd4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcbdau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcbda: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bcbdd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bcbdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcbe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bcbe2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bcbe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bcbe4: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bcbeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bcbea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcbed: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcbf0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bcbf4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bcbfau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bcbfa: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bcbfd: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bcc03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bcc06: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bcc0c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bcc0e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcc10: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bcc13: jp 0x8bcc23 */
  if (pf) goto L_8bcc23;
L_8bcc15: /* 8bcc15: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bcc1c: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bcc23: /* 8bcc23: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bcc26: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bcc29: mov eax, dword ptr [0xce8338] */
  eax = R32((uint32_t)(0xce8338u));
/* 8bcc2e: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bcc31: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bcc34: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bcc37: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bcc3a: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bcc3d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcc43u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcc43: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bcc45: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bcc47: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bcc49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcc4a: jge 0x8bcc52 */
  if ((sf == of)) goto L_8bcc52;
L_8bcc4c: /* 8bcc4c: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bcc52: /* 8bcc52: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bcc58: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bcc5a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bcc5d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcc60: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bcc66: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bcc69: push 0xaeabd8 */
  { uint32_t v = 0xaeabd8u; esp -= 4; W32(esp, v); }
/* 8bcc6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcc6f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bcc75u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bcc75: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcc78: mov ecx, eax */
  ecx = eax;
/* 8bcc7a: mov byte ptr [ebp - 4], 0x51 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x51u);
/* 8bcc7e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcc84u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcc84: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bcc87: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bcc89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcc8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bcc8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bcc8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bcc8e: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bcc94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bcc94: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcc97: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcc9a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bcc9e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bcca4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bcca4: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bcca7: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bccad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bccb0: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bccb6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bccb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bccba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bccbd: jp 0x8bcccd */
  if (pf) goto L_8bcccd;
L_8bccbf: /* 8bccbf: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bccc6: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bcccd: /* 8bcccd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bccd0: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bccd3: mov eax, dword ptr [0xce833c] */
  eax = R32((uint32_t)(0xce833cu));
/* 8bccd8: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bccdb: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bccde: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bcce1: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bcce4: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bcce7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bccedu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcced: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bccef: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bccf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bccf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bccf4: jge 0x8bccfc */
  if ((sf == of)) goto L_8bccfc;
L_8bccf6: /* 8bccf6: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bccfc: /* 8bccfc: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bcd02: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bcd04: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bcd07: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcd0a: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bcd10: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bcd13: push 0xaeabf0 */
  { uint32_t v = 0xaeabf0u; esp -= 4; W32(esp, v); }
/* 8bcd18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcd19: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bcd1fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bcd1f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcd22: mov ecx, eax */
  ecx = eax;
/* 8bcd24: mov byte ptr [ebp - 4], 0x52 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x52u);
/* 8bcd28: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcd2eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcd2e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bcd31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bcd33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcd34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bcd36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bcd37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bcd38: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bcd3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bcd3e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcd41: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcd44: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bcd48: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bcd4eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bcd4e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bcd51: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bcd57: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8bcd5b: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bcd5f: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bcd63: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bcd67: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bcd6a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bcd6d: push 0xaeac08 */
  { uint32_t v = 0xaeac08u; esp -= 4; W32(esp, v); }
/* 8bcd72: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bcd75: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bcd78: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bcd7eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bcd7e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bcd81: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bcd87: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8bcd8a: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bcd90: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bcd92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcd94: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bcd97: jp 0x8bcda7 */
  if (pf) goto L_8bcda7;
L_8bcd99: /* 8bcd99: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bcda0: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bcda7: /* 8bcda7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bcdaa: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bcdad: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bcdb0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcdb6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcdb6: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bcdb9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bcdbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcdbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bcdbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bcdbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bcdc0: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bcdc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bcdc6: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bcdca: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bcdce: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bcdd2: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bcdd6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bcdd9: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bcddc: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bcde2: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bcde4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcde7: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bcded: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcdef: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bcdf2: jp 0x8bce24 */
  if (pf) goto L_8bce24;
L_8bcdf4: /* 8bcdf4: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bcdf7: mov eax, dword ptr [0xce84a4] */
  eax = R32((uint32_t)(0xce84a4u));
/* 8bcdfc: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bcdff: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bce01: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bce04: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bce07: jge 0x8bce0f */
  if ((sf == of)) goto L_8bce0f;
L_8bce09: /* 8bce09: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bce0f: /* 8bce0f: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bce11: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bce17: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8bce1d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bce1f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bce22: je 0x8bce64 */
  if (zf) goto L_8bce64;
L_8bce24: /* 8bce24: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bce26: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bce2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bce2e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bce31: jne 0x8bce7c */
  if (!zf) goto L_8bce7c;
L_8bce33: /* 8bce33: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bce36: mov edx, dword ptr [0xce84a4] */
  edx = R32((uint32_t)(0xce84a4u));
/* 8bce3c: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bce3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bce41: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bce44: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bce47: jge 0x8bce4f */
  if ((sf == of)) goto L_8bce4f;
L_8bce49: /* 8bce49: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bce4f: /* 8bce4f: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bce51: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bce57: fcomp qword ptr [0xa16940] */
  fpu_com(ST0, F64((uint32_t)(0xa16940u)));
  FPOP();
/* 8bce5d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bce5f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bce62: jne 0x8bce7c */
  if (!zf) goto L_8bce7c;
L_8bce64: /* 8bce64: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bce68: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bce6c: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bce70: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bce74: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bce77: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bce7a: jmp 0x8bce92 */
  goto L_8bce92;
L_8bce7c: /* 8bce7c: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bce80: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bce84: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bce88: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bce8c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bce8f: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bce92: /* 8bce92: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bce95: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bce9b: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bcea1: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bcea3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcea5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bcea8: jp 0x8bceb8 */
  if (pf) goto L_8bceb8;
L_8bceaa: /* 8bceaa: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bceb1: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bceb8: /* 8bceb8: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bcebb: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bcebe: mov eax, dword ptr [0xce84a4] */
  eax = R32((uint32_t)(0xce84a4u));
/* 8bcec3: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bcec6: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bcec9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bcecc: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bcecf: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bced2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bced8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bced8: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bceda: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bcedc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bcede: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcedf: jge 0x8bcee7 */
  if ((sf == of)) goto L_8bcee7;
L_8bcee1: /* 8bcee1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bcee7: /* 8bcee7: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bceed: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bceef: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bcef2: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcef5: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bcefb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bcefe: push 0xaeac2c */
  { uint32_t v = 0xaeac2cu; esp -= 4; W32(esp, v); }
/* 8bcf03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcf04: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bcf0au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bcf0a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcf0d: mov ecx, eax */
  ecx = eax;
/* 8bcf0f: mov byte ptr [ebp - 4], 0x53 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x53u);
/* 8bcf13: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bcf19u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bcf19: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bcf1c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bcf1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bcf1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bcf21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bcf22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bcf23: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bcf29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bcf29: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bcf2c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bcf2f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bcf33: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bcf39u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bcf39: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bcf3f: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bcf41: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bcf47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcf49: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bcf4c: jp 0x8bcf7f */
  if (pf) goto L_8bcf7f;
L_8bcf4e: /* 8bcf4e: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bcf51: mov edx, dword ptr [0xce84a8] */
  edx = R32((uint32_t)(0xce84a8u));
/* 8bcf57: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bcf5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bcf5c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bcf5f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bcf62: jge 0x8bcf6a */
  if ((sf == of)) goto L_8bcf6a;
L_8bcf64: /* 8bcf64: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bcf6a: /* 8bcf6a: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bcf6c: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bcf72: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8bcf78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcf7a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bcf7d: je 0x8bcfbe */
  if (zf) goto L_8bcfbe;
L_8bcf7f: /* 8bcf7f: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bcf81: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bcf87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcf89: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bcf8c: jne 0x8bcfd6 */
  if (!zf) goto L_8bcfd6;
L_8bcf8e: /* 8bcf8e: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bcf91: mov eax, dword ptr [0xce84a8] */
  eax = R32((uint32_t)(0xce84a8u));
/* 8bcf96: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bcf99: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bcf9b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bcf9e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bcfa1: jge 0x8bcfa9 */
  if ((sf == of)) goto L_8bcfa9;
L_8bcfa3: /* 8bcfa3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bcfa9: /* 8bcfa9: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bcfab: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bcfb1: fcomp qword ptr [0xa16940] */
  fpu_com(ST0, F64((uint32_t)(0xa16940u)));
  FPOP();
/* 8bcfb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bcfb9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bcfbc: jne 0x8bcfd6 */
  if (!zf) goto L_8bcfd6;
L_8bcfbe: /* 8bcfbe: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bcfc2: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bcfc6: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bcfca: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bcfce: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bcfd1: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bcfd4: jmp 0x8bcfec */
  goto L_8bcfec;
L_8bcfd6: /* 8bcfd6: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bcfda: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bcfde: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bcfe2: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bcfe6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bcfe9: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
L_8bcfec: /* 8bcfec: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bcfef: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bcff2: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bcff8: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8bcffe: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd000: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd002: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd005: jp 0x8bd015 */
  if (pf) goto L_8bd015;
L_8bd007: /* 8bd007: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd00e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd015: /* 8bd015: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd018: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd01b: mov eax, dword ptr [0xce84a8] */
  eax = R32((uint32_t)(0xce84a8u));
/* 8bd020: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bd023: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bd026: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bd029: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bd02c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bd02f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd035u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd035: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd037: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bd039: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd03b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd03c: jge 0x8bd044 */
  if ((sf == of)) goto L_8bd044;
L_8bd03e: /* 8bd03e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd044: /* 8bd044: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bd04a: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bd04c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd04f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd052: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd058: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd05b: push 0xaeac44 */
  { uint32_t v = 0xaeac44u; esp -= 4; W32(esp, v); }
/* 8bd060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd061: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd067u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd067: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd06a: mov ecx, eax */
  ecx = eax;
/* 8bd06c: mov byte ptr [ebp - 4], 0x54 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x54u);
/* 8bd070: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd076u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd076: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bd079: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bd07b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd07c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd07e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bd07f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd080: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bd086u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd086: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd089: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd08c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd090: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd096u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd096: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bd09c: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd09e: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd0a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd0a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd0a9: jp 0x8bd0dc */
  if (pf) goto L_8bd0dc;
L_8bd0ab: /* 8bd0ab: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bd0ae: mov edx, dword ptr [0xce84ac] */
  edx = R32((uint32_t)(0xce84acu));
/* 8bd0b4: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bd0b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd0b9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bd0bc: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd0bf: jge 0x8bd0c7 */
  if ((sf == of)) goto L_8bd0c7;
L_8bd0c1: /* 8bd0c1: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd0c7: /* 8bd0c7: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd0c9: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd0cf: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8bd0d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd0d7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd0da: je 0x8bd11b */
  if (zf) goto L_8bd11b;
L_8bd0dc: /* 8bd0dc: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd0de: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd0e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd0e6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd0e9: jne 0x8bd133 */
  if (!zf) goto L_8bd133;
L_8bd0eb: /* 8bd0eb: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd0ee: mov eax, dword ptr [0xce84ac] */
  eax = R32((uint32_t)(0xce84acu));
/* 8bd0f3: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bd0f6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd0f8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bd0fb: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd0fe: jge 0x8bd106 */
  if ((sf == of)) goto L_8bd106;
L_8bd100: /* 8bd100: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd106: /* 8bd106: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd108: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd10e: fcomp qword ptr [0xa16940] */
  fpu_com(ST0, F64((uint32_t)(0xa16940u)));
  FPOP();
/* 8bd114: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd116: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd119: jne 0x8bd133 */
  if (!zf) goto L_8bd133;
L_8bd11b: /* 8bd11b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd11f: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bd123: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bd127: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd12b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd12e: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bd131: jmp 0x8bd149 */
  goto L_8bd149;
L_8bd133: /* 8bd133: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd137: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd13b: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd13f: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd143: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd146: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
L_8bd149: /* 8bd149: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd14c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bd14f: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd155: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8bd15b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd15d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd15f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd162: jp 0x8bd172 */
  if (pf) goto L_8bd172;
L_8bd164: /* 8bd164: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd16b: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd172: /* 8bd172: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd175: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd178: mov eax, dword ptr [0xce84ac] */
  eax = R32((uint32_t)(0xce84acu));
/* 8bd17d: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bd180: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bd183: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bd186: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bd189: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bd18c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd192u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd192: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd194: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bd196: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd199: jge 0x8bd1a1 */
  if ((sf == of)) goto L_8bd1a1;
L_8bd19b: /* 8bd19b: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd1a1: /* 8bd1a1: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bd1a7: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bd1a9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd1ac: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd1af: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd1b5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd1b8: push 0xaeac5c */
  { uint32_t v = 0xaeac5cu; esp -= 4; W32(esp, v); }
/* 8bd1bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd1be: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd1c4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd1c4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd1c7: mov ecx, eax */
  ecx = eax;
/* 8bd1c9: mov byte ptr [ebp - 4], 0x55 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x55u);
/* 8bd1cd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd1d3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd1d3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bd1d6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bd1d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd1d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd1db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bd1dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd1dd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bd1e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd1e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd1e6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd1e9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd1ed: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd1f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd1f3: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd1f6: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bd1fc: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8bd200: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd204: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd208: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd20c: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bd20f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd212: push 0xaeac74 */
  { uint32_t v = 0xaeac74u; esp -= 4; W32(esp, v); }
/* 8bd217: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bd21a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bd21d: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bd223u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bd223: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd226: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd22c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8bd22f: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bd235: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd237: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd239: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd23c: jp 0x8bd24c */
  if (pf) goto L_8bd24c;
L_8bd23e: /* 8bd23e: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd245: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd24c: /* 8bd24c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd24f: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bd252: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd255: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd25bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd25b: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bd25e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bd260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd261: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd263: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bd264: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd265: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bd26bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd26b: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd26f: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd273: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd277: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd27b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd27e: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bd281: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bd287: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd289: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd28c: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd292: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd294: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd297: jp 0x8bd2c9 */
  if (pf) goto L_8bd2c9;
L_8bd299: /* 8bd299: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd29c: mov eax, dword ptr [0xce844c] */
  eax = R32((uint32_t)(0xce844cu));
/* 8bd2a1: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bd2a4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd2a6: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bd2a9: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd2ac: jge 0x8bd2b4 */
  if ((sf == of)) goto L_8bd2b4;
L_8bd2ae: /* 8bd2ae: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd2b4: /* 8bd2b4: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd2b6: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd2bc: fcomp qword ptr [0xa17858] */
  fpu_com(ST0, F64((uint32_t)(0xa17858u)));
  FPOP();
/* 8bd2c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd2c4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd2c7: je 0x8bd309 */
  if (zf) goto L_8bd309;
L_8bd2c9: /* 8bd2c9: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd2cb: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd2d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd2d3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd2d6: jne 0x8bd321 */
  if (!zf) goto L_8bd321;
L_8bd2d8: /* 8bd2d8: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bd2db: mov edx, dword ptr [0xce844c] */
  edx = R32((uint32_t)(0xce844cu));
/* 8bd2e1: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bd2e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd2e6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bd2e9: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd2ec: jge 0x8bd2f4 */
  if ((sf == of)) goto L_8bd2f4;
L_8bd2ee: /* 8bd2ee: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd2f4: /* 8bd2f4: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd2f6: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd2fc: fcomp qword ptr [0xa1bca0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bca0u)));
  FPOP();
/* 8bd302: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd304: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd307: jne 0x8bd321 */
  if (!zf) goto L_8bd321;
L_8bd309: /* 8bd309: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd30d: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bd311: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bd315: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd319: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd31c: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bd31f: jmp 0x8bd337 */
  goto L_8bd337;
L_8bd321: /* 8bd321: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd325: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd329: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd32d: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd331: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd334: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bd337: /* 8bd337: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd33a: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd340: fild dword ptr [ebx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8bd346: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd348: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd34a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd34d: jp 0x8bd35d */
  if (pf) goto L_8bd35d;
L_8bd34f: /* 8bd34f: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd356: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd35d: /* 8bd35d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd360: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd363: mov eax, dword ptr [0xce844c] */
  eax = R32((uint32_t)(0xce844cu));
/* 8bd368: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bd36b: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bd36e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bd371: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bd374: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bd377: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd37du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd37d: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd37f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bd381: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd383: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd384: jge 0x8bd38c */
  if ((sf == of)) goto L_8bd38c;
L_8bd386: /* 8bd386: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd38c: /* 8bd38c: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bd392: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bd394: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd397: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd39a: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd3a0: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd3a3: push 0xaeac98 */
  { uint32_t v = 0xaeac98u; esp -= 4; W32(esp, v); }
/* 8bd3a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd3a9: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd3afu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd3af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd3b2: mov ecx, eax */
  ecx = eax;
/* 8bd3b4: mov byte ptr [ebp - 4], 0x56 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x56u);
/* 8bd3b8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd3beu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd3be: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bd3c1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bd3c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd3c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd3c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bd3c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd3c8: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bd3ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd3ce: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd3d1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd3d4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd3d8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd3deu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd3de: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd3e1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd3e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bd3ea: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd3ee: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd3f2: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd3f6: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd3fa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd3fd: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bd400: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bd406: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd408: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd40a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd40d: jp 0x8bd41d */
  if (pf) goto L_8bd41d;
L_8bd40f: /* 8bd40f: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd416: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd41d: /* 8bd41d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd420: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd423: mov eax, dword ptr [0xce8450] */
  eax = R32((uint32_t)(0xce8450u));
/* 8bd428: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd42b: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bd42e: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bd431: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bd434: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bd437: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd43du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd43d: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd43f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bd441: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd443: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd444: jge 0x8bd44c */
  if ((sf == of)) goto L_8bd44c;
L_8bd446: /* 8bd446: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd44c: /* 8bd44c: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bd451: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bd453: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd456: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd459: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd45f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd462: push 0xaeacb0 */
  { uint32_t v = 0xaeacb0u; esp -= 4; W32(esp, v); }
/* 8bd467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bd468: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd46eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd46e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd471: mov ecx, eax */
  ecx = eax;
/* 8bd473: mov byte ptr [ebp - 4], 0x57 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x57u);
/* 8bd477: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd47du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd47d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bd47f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd480: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bd483: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd485: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd487: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bd48du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd48d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd490: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd493: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd497: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd49du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd49d: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bd4a3: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd4a5: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd4ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd4ad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd4b0: jp 0x8bd4e2 */
  if (pf) goto L_8bd4e2;
L_8bd4b2: /* 8bd4b2: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd4b5: mov eax, dword ptr [0xce844c] */
  eax = R32((uint32_t)(0xce844cu));
/* 8bd4ba: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bd4bd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd4bf: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bd4c2: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd4c5: jge 0x8bd4cd */
  if ((sf == of)) goto L_8bd4cd;
L_8bd4c7: /* 8bd4c7: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd4cd: /* 8bd4cd: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd4cf: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd4d5: fcomp qword ptr [0xa17858] */
  fpu_com(ST0, F64((uint32_t)(0xa17858u)));
  FPOP();
/* 8bd4db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd4dd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd4e0: je 0x8bd522 */
  if (zf) goto L_8bd522;
L_8bd4e2: /* 8bd4e2: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd4e4: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd4ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd4ec: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd4ef: jne 0x8bd53a */
  if (!zf) goto L_8bd53a;
L_8bd4f1: /* 8bd4f1: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bd4f4: mov edx, dword ptr [0xce844c] */
  edx = R32((uint32_t)(0xce844cu));
/* 8bd4fa: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bd4fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd4ff: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bd502: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd505: jge 0x8bd50d */
  if ((sf == of)) goto L_8bd50d;
L_8bd507: /* 8bd507: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd50d: /* 8bd50d: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd50f: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd515: fcomp qword ptr [0xa1bca0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bca0u)));
  FPOP();
/* 8bd51b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd51d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd520: jne 0x8bd53a */
  if (!zf) goto L_8bd53a;
L_8bd522: /* 8bd522: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd526: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bd52a: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bd52e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd532: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd535: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bd538: jmp 0x8bd550 */
  goto L_8bd550;
L_8bd53a: /* 8bd53a: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd53e: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd542: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd546: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd54a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd54d: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bd550: /* 8bd550: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd553: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bd556: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd55c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bd562: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd564: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd566: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd569: jp 0x8bd579 */
  if (pf) goto L_8bd579;
L_8bd56b: /* 8bd56b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd572: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd579: /* 8bd579: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd57c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd57f: mov eax, dword ptr [0xce8454] */
  eax = R32((uint32_t)(0xce8454u));
/* 8bd584: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bd587: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bd58a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bd58d: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bd590: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bd593: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd599u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd599: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd59b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bd59d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd59f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd5a0: jge 0x8bd5a8 */
  if ((sf == of)) goto L_8bd5a8;
L_8bd5a2: /* 8bd5a2: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd5a8: /* 8bd5a8: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bd5ae: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bd5b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd5b3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd5b6: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd5bc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd5bf: push 0xaeacc8 */
  { uint32_t v = 0xaeacc8u; esp -= 4; W32(esp, v); }
/* 8bd5c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd5c5: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd5cbu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd5cb: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd5ce: mov ecx, eax */
  ecx = eax;
/* 8bd5d0: mov byte ptr [ebp - 4], 0x58 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x58u);
/* 8bd5d4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd5dau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd5da: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bd5dd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bd5df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd5e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd5e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bd5e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd5e4: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bd5eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd5ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd5ed: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd5f0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd5f4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd5fau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd5fa: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd5fd: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd603: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bd606: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd60a: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd60e: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd612: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd616: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd619: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bd61c: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bd622: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd626: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd629: jp 0x8bd639 */
  if (pf) goto L_8bd639;
L_8bd62b: /* 8bd62b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd632: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd639: /* 8bd639: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd63c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd63f: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 8bd644: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd647: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bd64a: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bd64d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bd650: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bd653: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd659u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd659: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd65b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bd65d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd65f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd660: jge 0x8bd668 */
  if ((sf == of)) goto L_8bd668;
L_8bd662: /* 8bd662: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd668: /* 8bd668: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bd66d: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bd66f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd672: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd675: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd67b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd67e: push 0xaeace0 */
  { uint32_t v = 0xaeace0u; esp -= 4; W32(esp, v); }
/* 8bd683: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bd684: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd68au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd68a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd68d: mov ecx, eax */
  ecx = eax;
/* 8bd68f: mov byte ptr [ebp - 4], 0x59 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x59u);
/* 8bd693: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd699u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd699: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bd69b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd69c: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bd69f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd6a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd6a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd6a3: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bd6a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd6a9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd6ac: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd6af: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd6b3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd6b9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd6b9: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bd6bf: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd6c1: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd6c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd6c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd6cc: jp 0x8bd6fe */
  if (pf) goto L_8bd6fe;
L_8bd6ce: /* 8bd6ce: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd6d1: mov eax, dword ptr [0xce845c] */
  eax = R32((uint32_t)(0xce845cu));
/* 8bd6d6: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bd6d9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd6db: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bd6de: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd6e1: jge 0x8bd6e9 */
  if ((sf == of)) goto L_8bd6e9;
L_8bd6e3: /* 8bd6e3: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd6e9: /* 8bd6e9: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd6eb: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd6f1: fcomp qword ptr [0xa0da58] */
  fpu_com(ST0, F64((uint32_t)(0xa0da58u)));
  FPOP();
/* 8bd6f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd6f9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd6fc: je 0x8bd73e */
  if (zf) goto L_8bd73e;
L_8bd6fe: /* 8bd6fe: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bd700: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bd706: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd708: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd70b: jne 0x8bd756 */
  if (!zf) goto L_8bd756;
L_8bd70d: /* 8bd70d: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bd710: mov edx, dword ptr [0xce845c] */
  edx = R32((uint32_t)(0xce845cu));
/* 8bd716: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bd719: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd71b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bd71e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bd721: jge 0x8bd729 */
  if ((sf == of)) goto L_8bd729;
L_8bd723: /* 8bd723: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd729: /* 8bd729: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bd72b: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd731: fcomp qword ptr [0xa16940] */
  fpu_com(ST0, F64((uint32_t)(0xa16940u)));
  FPOP();
/* 8bd737: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd739: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bd73c: jne 0x8bd756 */
  if (!zf) goto L_8bd756;
L_8bd73e: /* 8bd73e: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd742: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bd746: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bd74a: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd74e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd751: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bd754: jmp 0x8bd76c */
  goto L_8bd76c;
L_8bd756: /* 8bd756: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd75a: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd75e: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd762: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd766: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd769: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bd76c: /* 8bd76c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd76f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bd772: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd778: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bd77e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd780: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd782: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd785: jp 0x8bd795 */
  if (pf) goto L_8bd795;
L_8bd787: /* 8bd787: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd78e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd795: /* 8bd795: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd798: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd79b: mov eax, dword ptr [0xce845c] */
  eax = R32((uint32_t)(0xce845cu));
/* 8bd7a0: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bd7a3: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bd7a6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bd7a9: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bd7ac: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bd7af: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd7b5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd7b5: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd7b7: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bd7b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd7bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd7bc: jge 0x8bd7c4 */
  if ((sf == of)) goto L_8bd7c4;
L_8bd7be: /* 8bd7be: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd7c4: /* 8bd7c4: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bd7ca: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bd7cc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd7cf: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd7d2: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd7d8: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd7db: push 0xaeacf8 */
  { uint32_t v = 0xaeacf8u; esp -= 4; W32(esp, v); }
/* 8bd7e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd7e1: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd7e7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd7e7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd7ea: mov ecx, eax */
  ecx = eax;
/* 8bd7ec: mov byte ptr [ebp - 4], 0x5a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5au);
/* 8bd7f0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd7f6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd7f6: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bd7f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bd7fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd7fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd7fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bd7ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd800: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bd806u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd806: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd809: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd80c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd810: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd816u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd816: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd819: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd81f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bd822: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bd826: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bd82a: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bd82e: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bd832: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bd835: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bd838: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bd83e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd840: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd842: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd845: jp 0x8bd855 */
  if (pf) goto L_8bd855;
L_8bd847: /* 8bd847: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd84e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd855: /* 8bd855: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd858: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd85b: mov eax, dword ptr [0xce8460] */
  eax = R32((uint32_t)(0xce8460u));
/* 8bd860: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd863: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bd866: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bd869: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bd86c: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bd86f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd875u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd875: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd877: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bd879: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd87c: jge 0x8bd884 */
  if ((sf == of)) goto L_8bd884;
L_8bd87e: /* 8bd87e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd884: /* 8bd884: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bd889: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bd88b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd88e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd891: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd897: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd89a: push 0xaead10 */
  { uint32_t v = 0xaead10u; esp -= 4; W32(esp, v); }
/* 8bd89f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bd8a0: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd8a6u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd8a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd8a9: mov ecx, eax */
  ecx = eax;
/* 8bd8ab: mov byte ptr [ebp - 4], 0x5b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5bu);
/* 8bd8af: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd8b5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd8b5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bd8b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd8b8: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bd8bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd8bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd8be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd8bf: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bd8c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd8c5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd8c8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd8cb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd8cf: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd8d5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd8d5: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd8d8: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd8de: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bd8e1: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bd8e7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd8e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd8eb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd8ee: jp 0x8bd8fe */
  if (pf) goto L_8bd8fe;
L_8bd8f0: /* 8bd8f0: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd8f7: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd8fe: /* 8bd8fe: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd901: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd904: mov eax, dword ptr [0xce8464] */
  eax = R32((uint32_t)(0xce8464u));
/* 8bd909: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd90c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bd90f: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bd912: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bd915: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bd918: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd91eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd91e: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd920: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bd922: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd925: jge 0x8bd92d */
  if ((sf == of)) goto L_8bd92d;
L_8bd927: /* 8bd927: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd92d: /* 8bd92d: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bd932: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bd934: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd937: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd93a: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd940: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd943: push 0xaead28 */
  { uint32_t v = 0xaead28u; esp -= 4; W32(esp, v); }
/* 8bd948: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bd949: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd94fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd94f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd952: mov ecx, eax */
  ecx = eax;
/* 8bd954: mov byte ptr [ebp - 4], 0x5c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5cu);
/* 8bd958: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd95eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd95e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bd960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd961: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bd964: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bd966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bd968: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bd96eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bd96e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd971: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd974: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bd978: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bd97eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bd97e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bd981: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bd987: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bd98a: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bd990: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bd992: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bd994: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bd997: jp 0x8bd9a7 */
  if (pf) goto L_8bd9a7;
L_8bd999: /* 8bd999: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bd9a0: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bd9a7: /* 8bd9a7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bd9aa: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bd9ad: mov eax, dword ptr [0xce8468] */
  eax = R32((uint32_t)(0xce8468u));
/* 8bd9b2: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bd9b5: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bd9b8: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bd9bb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bd9be: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bd9c1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bd9c7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bd9c7: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bd9c9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bd9cb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bd9cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bd9ce: jge 0x8bd9d6 */
  if ((sf == of)) goto L_8bd9d6;
L_8bd9d0: /* 8bd9d0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bd9d6: /* 8bd9d6: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bd9db: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bd9dd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bd9e0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bd9e3: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bd9e9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bd9ec: push 0xaead40 */
  { uint32_t v = 0xaead40u; esp -= 4; W32(esp, v); }
/* 8bd9f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bd9f2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bd9f8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bd9f8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bd9fb: mov ecx, eax */
  ecx = eax;
/* 8bd9fd: mov byte ptr [ebp - 4], 0x5d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5du);
/* 8bda01: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bda07u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bda07: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bda09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bda0a: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bda0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bda0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bda10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bda11: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bda17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bda17: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bda1a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bda1d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bda21: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bda27u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bda27: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bda2a: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bda30: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bda33: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bda39: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bda3b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bda3d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bda40: jp 0x8bda50 */
  if (pf) goto L_8bda50;
L_8bda42: /* 8bda42: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bda49: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bda50: /* 8bda50: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bda53: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bda56: mov eax, dword ptr [0xce846c] */
  eax = R32((uint32_t)(0xce846cu));
/* 8bda5b: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bda5e: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bda61: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bda64: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bda67: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bda6a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bda70u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bda70: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bda72: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bda74: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bda76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bda77: jge 0x8bda7f */
  if ((sf == of)) goto L_8bda7f;
L_8bda79: /* 8bda79: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bda7f: /* 8bda7f: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bda84: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bda86: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bda89: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bda8c: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bda92: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bda95: push 0xaead58 */
  { uint32_t v = 0xaead58u; esp -= 4; W32(esp, v); }
/* 8bda9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bda9b: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bdaa1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bdaa1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdaa4: mov ecx, eax */
  ecx = eax;
/* 8bdaa6: mov byte ptr [ebp - 4], 0x5e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5eu);
/* 8bdaaa: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdab0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdab0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bdab2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdab3: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bdab6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bdab8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdab9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bdaba: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bdac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bdac0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdac3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdac6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bdaca: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bdad0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bdad0: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bdad3: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bdad9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bdadc: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bdae2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bdae4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdae6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bdae9: jp 0x8bdaf9 */
  if (pf) goto L_8bdaf9;
L_8bdaeb: /* 8bdaeb: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bdaf2: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bdaf9: /* 8bdaf9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bdafc: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bdaff: mov eax, dword ptr [0xce8470] */
  eax = R32((uint32_t)(0xce8470u));
/* 8bdb04: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bdb07: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bdb0a: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bdb0d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bdb10: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bdb13: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdb19u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdb19: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bdb1b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bdb1d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bdb1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdb20: jge 0x8bdb28 */
  if ((sf == of)) goto L_8bdb28;
L_8bdb22: /* 8bdb22: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bdb28: /* 8bdb28: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bdb2d: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bdb2f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bdb32: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdb35: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdb3b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bdb3e: push 0xaead70 */
  { uint32_t v = 0xaead70u; esp -= 4; W32(esp, v); }
/* 8bdb43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bdb44: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bdb4au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bdb4a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdb4d: mov ecx, eax */
  ecx = eax;
/* 8bdb4f: mov byte ptr [ebp - 4], 0x5f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5fu);
/* 8bdb53: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdb59u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdb59: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bdb5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdb5c: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bdb5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bdb61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdb62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bdb63: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bdb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bdb69: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdb6c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdb6f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bdb73: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bdb79u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bdb79: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bdb7c: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bdb82: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bdb85: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bdb8b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bdb8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdb8f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bdb92: jp 0x8bdba2 */
  if (pf) goto L_8bdba2;
L_8bdb94: /* 8bdb94: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bdb9b: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bdba2: /* 8bdba2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bdba5: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bdba8: mov eax, dword ptr [0xce8474] */
  eax = R32((uint32_t)(0xce8474u));
/* 8bdbad: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bdbb0: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bdbb3: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bdbb6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bdbb9: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bdbbc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdbc2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdbc2: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bdbc4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bdbc6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bdbc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdbc9: jge 0x8bdbd1 */
  if ((sf == of)) goto L_8bdbd1;
L_8bdbcb: /* 8bdbcb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bdbd1: /* 8bdbd1: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bdbd6: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bdbd8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bdbdb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdbde: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdbe4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bdbe7: push 0xaead88 */
  { uint32_t v = 0xaead88u; esp -= 4; W32(esp, v); }
/* 8bdbec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bdbed: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bdbf3u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bdbf3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdbf6: mov ecx, eax */
  ecx = eax;
/* 8bdbf8: mov byte ptr [ebp - 4], 0x60 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x60u);
/* 8bdbfc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdc02u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdc02: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bdc04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdc05: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bdc08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bdc0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdc0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bdc0c: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bdc12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bdc12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdc15: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdc18: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bdc1c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bdc22u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bdc22: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bdc25: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bdc2b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bdc2e: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bdc34: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bdc36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdc38: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bdc3b: jp 0x8bdc4b */
  if (pf) goto L_8bdc4b;
L_8bdc3d: /* 8bdc3d: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bdc44: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bdc4b: /* 8bdc4b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bdc4e: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bdc51: mov eax, dword ptr [0xce8478] */
  eax = R32((uint32_t)(0xce8478u));
/* 8bdc56: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bdc59: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bdc5c: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bdc5f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bdc62: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bdc65: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdc6bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdc6b: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bdc6d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bdc6f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bdc71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdc72: jge 0x8bdc7a */
  if ((sf == of)) goto L_8bdc7a;
L_8bdc74: /* 8bdc74: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bdc7a: /* 8bdc7a: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bdc7f: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bdc81: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bdc84: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdc87: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdc8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bdc90: push 0xaeada0 */
  { uint32_t v = 0xaeada0u; esp -= 4; W32(esp, v); }
/* 8bdc95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bdc96: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bdc9cu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bdc9c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdc9f: mov ecx, eax */
  ecx = eax;
/* 8bdca1: mov byte ptr [ebp - 4], 0x61 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x61u);
/* 8bdca5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdcabu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdcab: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bdcad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdcae: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bdcb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bdcb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdcb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bdcb5: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bdcbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bdcbb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdcbe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdcc1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bdcc5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bdccbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bdccb: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bdcd1: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bdcd3: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bdcd9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdcdb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bdcde: jp 0x8bdd10 */
  if (pf) goto L_8bdd10;
L_8bdce0: /* 8bdce0: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bdce3: mov eax, dword ptr [0xce847c] */
  eax = R32((uint32_t)(0xce847cu));
/* 8bdce8: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bdceb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bdced: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bdcf0: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bdcf3: jge 0x8bdcfb */
  if ((sf == of)) goto L_8bdcfb;
L_8bdcf5: /* 8bdcf5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bdcfb: /* 8bdcfb: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bdcfd: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdd03: fcomp qword ptr [0xa11218] */
  fpu_com(ST0, F64((uint32_t)(0xa11218u)));
  FPOP();
/* 8bdd09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdd0b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bdd0e: je 0x8bdd50 */
  if (zf) goto L_8bdd50;
L_8bdd10: /* 8bdd10: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bdd12: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bdd18: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdd1a: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bdd1d: jne 0x8bdd68 */
  if (!zf) goto L_8bdd68;
L_8bdd1f: /* 8bdd1f: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bdd22: mov edx, dword ptr [0xce847c] */
  edx = R32((uint32_t)(0xce847cu));
/* 8bdd28: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bdd2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bdd2d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bdd30: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bdd33: jge 0x8bdd3b */
  if ((sf == of)) goto L_8bdd3b;
L_8bdd35: /* 8bdd35: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bdd3b: /* 8bdd3b: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bdd3d: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdd43: fcomp qword ptr [0xa178b8] */
  fpu_com(ST0, F64((uint32_t)(0xa178b8u)));
  FPOP();
/* 8bdd49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdd4b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bdd4e: jne 0x8bdd68 */
  if (!zf) goto L_8bdd68;
L_8bdd50: /* 8bdd50: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bdd54: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bdd58: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8bdd5c: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bdd60: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bdd63: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bdd66: jmp 0x8bdd7e */
  goto L_8bdd7e;
L_8bdd68: /* 8bdd68: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bdd6c: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bdd70: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bdd74: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bdd78: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bdd7b: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bdd7e: /* 8bdd7e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bdd81: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bdd84: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bdd8a: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bdd90: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bdd92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdd94: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bdd97: jp 0x8bdda7 */
  if (pf) goto L_8bdda7;
L_8bdd99: /* 8bdd99: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bdda0: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bdda7: /* 8bdda7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bddaa: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bddad: mov eax, dword ptr [0xce847c] */
  eax = R32((uint32_t)(0xce847cu));
/* 8bddb2: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bddb5: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bddb8: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bddbb: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bddbe: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bddc1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bddc7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bddc7: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bddc9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bddcb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bddcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bddce: jge 0x8bddd6 */
  if ((sf == of)) goto L_8bddd6;
L_8bddd0: /* 8bddd0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bddd6: /* 8bddd6: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bdddc: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bddde: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bdde1: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdde4: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bddea: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bdded: push 0xaeadb8 */
  { uint32_t v = 0xaeadb8u; esp -= 4; W32(esp, v); }
/* 8bddf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bddf3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bddf9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bddf9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bddfc: mov ecx, eax */
  ecx = eax;
/* 8bddfe: mov byte ptr [ebp - 4], 0x62 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x62u);
/* 8bde02: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bde08u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bde08: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bde0b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bde0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bde0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bde10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bde11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bde12: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bde18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bde18: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bde1b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bde1e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bde22: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bde28u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bde28: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bde2b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bde31: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bde34: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bde38: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8bde3c: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8bde40: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8bde44: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bde47: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bde4a: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bde50: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bde52: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bde54: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bde57: jp 0x8bde67 */
  if (pf) goto L_8bde67;
L_8bde59: /* 8bde59: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bde60: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bde67: /* 8bde67: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bde6a: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bde6d: mov eax, dword ptr [0xce8480] */
  eax = R32((uint32_t)(0xce8480u));
/* 8bde72: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bde75: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bde78: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bde7b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bde7e: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bde81: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bde87u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bde87: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bde89: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bde8b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bde8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bde8e: jge 0x8bde96 */
  if ((sf == of)) goto L_8bde96;
L_8bde90: /* 8bde90: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bde96: /* 8bde96: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8bde9b: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8bde9d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bdea0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdea3: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdea9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bdeac: push 0xaeadd0 */
  { uint32_t v = 0xaeadd0u; esp -= 4; W32(esp, v); }
/* 8bdeb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bdeb2: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bdeb8u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bdeb8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdebb: mov ecx, eax */
  ecx = eax;
/* 8bdebd: mov byte ptr [ebp - 4], 0x63 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x63u);
/* 8bdec1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdec7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdec7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bdec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdeca: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bdecd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bdecf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bded0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bded1: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bded7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bded7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdeda: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdedd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bdee1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bdee7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bdee7: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bdeea: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bdef0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bdef3: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bdef9: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bdefb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdefd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bdf00: jp 0x8bdf10 */
  if (pf) goto L_8bdf10;
L_8bdf02: /* 8bdf02: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bdf09: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bdf10: /* 8bdf10: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bdf13: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bdf16: mov eax, dword ptr [0xce8484] */
  eax = R32((uint32_t)(0xce8484u));
/* 8bdf1b: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bdf1e: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bdf21: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8bdf24: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bdf27: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8bdf2a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdf30u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdf30: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8bdf32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdf33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bdf34: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdf37: push 0xaeade8 */
  { uint32_t v = 0xaeade8u; esp -= 4; W32(esp, v); }
/* 8bdf3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdf3d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bdf43u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bdf43: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdf46: mov ecx, eax */
  ecx = eax;
/* 8bdf48: mov byte ptr [ebp - 4], 0x64 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x64u);
/* 8bdf4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bdf52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bdf52: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bdf55: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bdf57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bdf58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bdf5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bdf5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bdf5c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bdf62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bdf62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bdf65: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bdf68: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bdf6c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bdf72u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bdf72: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bdf78: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bdf7a: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bdf80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdf82: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bdf85: jp 0x8bdfb8 */
  if (pf) goto L_8bdfb8;
L_8bdf87: /* 8bdf87: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bdf8a: mov edx, dword ptr [0xce8488] */
  edx = R32((uint32_t)(0xce8488u));
/* 8bdf90: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8bdf93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bdf95: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bdf98: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bdf9b: jge 0x8bdfa3 */
  if ((sf == of)) goto L_8bdfa3;
L_8bdf9d: /* 8bdf9d: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bdfa3: /* 8bdfa3: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bdfa5: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdfab: fcomp qword ptr [0xa16940] */
  fpu_com(ST0, F64((uint32_t)(0xa16940u)));
  FPOP();
/* 8bdfb1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdfb3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bdfb6: je 0x8bdff7 */
  if (zf) goto L_8bdff7;
L_8bdfb8: /* 8bdfb8: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 8bdfba: fcomp qword ptr [0xa1bce0] */
  fpu_com(ST0, F64((uint32_t)(0xa1bce0u)));
  FPOP();
/* 8bdfc0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdfc2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bdfc5: jne 0x8be00f */
  if (!zf) goto L_8be00f;
L_8bdfc7: /* 8bdfc7: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bdfca: mov eax, dword ptr [0xce8488] */
  eax = R32((uint32_t)(0xce8488u));
/* 8bdfcf: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8bdfd2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bdfd4: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8bdfd7: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8bdfda: jge 0x8bdfe2 */
  if ((sf == of)) goto L_8bdfe2;
L_8bdfdc: /* 8bdfdc: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bdfe2: /* 8bdfe2: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bdfe4: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bdfea: fcomp qword ptr [0xa1bc90] */
  fpu_com(ST0, F64((uint32_t)(0xa1bc90u)));
  FPOP();
/* 8bdff0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bdff2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8bdff5: jne 0x8be00f */
  if (!zf) goto L_8be00f;
L_8bdff7: /* 8bdff7: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8bdffb: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8bdfff: mov byte ptr [ebp - 0x12], 0xff */
  W8((uint32_t)(ebp + 0xffffffeeu), 0xffu);
/* 8be003: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8be007: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8be00a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8be00d: jmp 0x8be025 */
  goto L_8be025;
L_8be00f: /* 8be00f: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8be013: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8be017: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8be01b: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8be01f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8be022: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
L_8be025: /* 8be025: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be028: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8be02b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be031: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8be037: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be039: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be03b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be03e: jp 0x8be04e */
  if (pf) goto L_8be04e;
L_8be040: /* 8be040: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be047: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be04e: /* 8be04e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be051: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be054: mov eax, dword ptr [0xce8488] */
  eax = R32((uint32_t)(0xce8488u));
/* 8be059: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8be05c: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8be05f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8be062: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8be065: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8be068: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be06eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be06e: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be070: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8be072: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be074: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be075: jge 0x8be07d */
  if ((sf == of)) goto L_8be07d;
L_8be077: /* 8be077: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be07d: /* 8be07d: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8be083: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8be085: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be088: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8be08b: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be091: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be094: push 0xaeadf4 */
  { uint32_t v = 0xaeadf4u; esp -= 4; W32(esp, v); }
/* 8be099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be09a: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be0a0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be0a0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be0a3: mov ecx, eax */
  ecx = eax;
/* 8be0a5: mov byte ptr [ebp - 4], 0x65 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x65u);
/* 8be0a9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be0afu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be0af: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8be0b2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8be0b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be0b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be0b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be0b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be0b9: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8be0bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be0bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be0c2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be0c5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be0c9: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be0cfu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be0cf: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be0d2: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be0d8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be0db: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8be0df: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8be0e3: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8be0e7: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8be0eb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8be0ee: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8be0f1: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be0f7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be0f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be0fb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be0fe: jp 0x8be10e */
  if (pf) goto L_8be10e;
L_8be100: /* 8be100: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be107: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be10e: /* 8be10e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be111: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be114: mov eax, dword ptr [0xce848c] */
  eax = R32((uint32_t)(0xce848cu));
/* 8be119: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be11c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be11f: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8be122: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be125: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8be128: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be12eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be12e: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be130: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8be132: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be134: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be135: jge 0x8be13d */
  if ((sf == of)) goto L_8be13d;
L_8be137: /* 8be137: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be13d: /* 8be13d: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8be142: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8be144: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be147: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be14a: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be150: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be153: push 0xaeae0c */
  { uint32_t v = 0xaeae0cu; esp -= 4; W32(esp, v); }
/* 8be158: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be159: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be15fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be15f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be162: mov ecx, eax */
  ecx = eax;
/* 8be164: mov byte ptr [ebp - 4], 0x66 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x66u);
/* 8be168: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be16eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be16e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8be170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be171: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8be174: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be176: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be177: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be178: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8be17eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be17e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be181: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be184: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be188: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be18eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be18e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be191: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be197: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be19a: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be1a0: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be1a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be1a4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be1a7: jp 0x8be1b7 */
  if (pf) goto L_8be1b7;
L_8be1a9: /* 8be1a9: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be1b0: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be1b7: /* 8be1b7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be1ba: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be1bd: mov eax, dword ptr [0xce8490] */
  eax = R32((uint32_t)(0xce8490u));
/* 8be1c2: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be1c5: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be1c8: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8be1cb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be1ce: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8be1d1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be1d7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be1d7: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be1d9: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8be1db: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be1dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be1de: jge 0x8be1e6 */
  if ((sf == of)) goto L_8be1e6;
L_8be1e0: /* 8be1e0: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be1e6: /* 8be1e6: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8be1eb: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8be1ed: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be1f0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be1f3: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be1f9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be1fc: push 0xaeae24 */
  { uint32_t v = 0xaeae24u; esp -= 4; W32(esp, v); }
/* 8be201: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be202: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be208u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be208: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be20b: mov ecx, eax */
  ecx = eax;
/* 8be20d: mov byte ptr [ebp - 4], 0x67 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x67u);
/* 8be211: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be217u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be217: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8be219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be21a: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8be21d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be21f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be221: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8be227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be227: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be22a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be22d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be231: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be237u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be237: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be23a: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be240: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be243: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be249: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be24b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be24d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be250: jp 0x8be260 */
  if (pf) goto L_8be260;
L_8be252: /* 8be252: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be259: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be260: /* 8be260: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be263: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be266: mov eax, dword ptr [0xce8494] */
  eax = R32((uint32_t)(0xce8494u));
/* 8be26b: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be26e: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be271: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8be274: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be277: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8be27a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be280u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be280: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be282: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8be284: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be287: jge 0x8be28f */
  if ((sf == of)) goto L_8be28f;
L_8be289: /* 8be289: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be28f: /* 8be28f: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8be294: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8be296: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be299: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be29c: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be2a2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be2a5: push 0xaeae3c */
  { uint32_t v = 0xaeae3cu; esp -= 4; W32(esp, v); }
/* 8be2aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be2ab: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be2b1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be2b1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be2b4: mov ecx, eax */
  ecx = eax;
/* 8be2b6: mov byte ptr [ebp - 4], 0x68 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x68u);
/* 8be2ba: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be2c0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be2c0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8be2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be2c3: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8be2c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be2c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be2c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be2ca: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8be2d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be2d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be2d3: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be2d6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be2da: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be2e0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be2e0: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be2e3: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be2e9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be2ec: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be2f2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be2f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be2f6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be2f9: jp 0x8be309 */
  if (pf) goto L_8be309;
L_8be2fb: /* 8be2fb: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be302: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be309: /* 8be309: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be30c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be30f: mov eax, dword ptr [0xce8498] */
  eax = R32((uint32_t)(0xce8498u));
/* 8be314: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be317: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be31a: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8be31d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be320: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8be323: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be329u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be329: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be32b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8be32d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be32f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be330: jge 0x8be338 */
  if ((sf == of)) goto L_8be338;
L_8be332: /* 8be332: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be338: /* 8be338: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8be33d: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8be33f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be342: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be345: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be34b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be34e: push 0xaeae54 */
  { uint32_t v = 0xaeae54u; esp -= 4; W32(esp, v); }
/* 8be353: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be354: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be35au); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be35a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be35d: mov ecx, eax */
  ecx = eax;
/* 8be35f: mov byte ptr [ebp - 4], 0x69 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x69u);
/* 8be363: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be369u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be369: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8be36b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be36c: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8be36f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be371: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be372: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be373: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8be379u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be379: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be37c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be37f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be383: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be389u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be389: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be38c: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be392: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be395: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be39b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be39d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be39f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be3a2: jp 0x8be3b2 */
  if (pf) goto L_8be3b2;
L_8be3a4: /* 8be3a4: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be3ab: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be3b2: /* 8be3b2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be3b5: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be3b8: mov eax, dword ptr [0xce849c] */
  eax = R32((uint32_t)(0xce849cu));
/* 8be3bd: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be3c0: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be3c3: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8be3c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be3c9: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8be3cc: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be3d2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be3d2: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be3d4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8be3d6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be3d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be3d9: jge 0x8be3e1 */
  if ((sf == of)) goto L_8be3e1;
L_8be3db: /* 8be3db: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be3e1: /* 8be3e1: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8be3e6: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8be3e8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be3eb: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be3ee: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be3f4: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be3f7: push 0xaeae6c */
  { uint32_t v = 0xaeae6cu; esp -= 4; W32(esp, v); }
/* 8be3fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be3fd: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be403u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be403: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be406: mov ecx, eax */
  ecx = eax;
/* 8be408: mov byte ptr [ebp - 4], 0x6a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6au);
/* 8be40c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be412u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be412: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8be414: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be415: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8be418: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be41a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be41b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be41c: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8be422u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be422: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be425: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be428: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be42c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be432u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be432: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be435: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be43b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be43e: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be444: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be446: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be448: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be44b: jp 0x8be45b */
  if (pf) goto L_8be45b;
L_8be44d: /* 8be44d: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be454: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be45b: /* 8be45b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be45e: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be461: mov eax, dword ptr [0xce84a0] */
  eax = R32((uint32_t)(0xce84a0u));
/* 8be466: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be469: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be46c: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8be46f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be472: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8be475: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be47bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be47b: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be47d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8be47f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be482: jge 0x8be48a */
  if ((sf == of)) goto L_8be48a;
L_8be484: /* 8be484: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be48a: /* 8be48a: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 8be48f: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 8be491: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be494: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be497: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be49d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be4a0: push 0xaeae84 */
  { uint32_t v = 0xaeae84u; esp -= 4; W32(esp, v); }
/* 8be4a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be4a6: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be4acu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be4ac: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be4af: mov ecx, eax */
  ecx = eax;
/* 8be4b1: mov byte ptr [ebp - 4], 0x6b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6bu);
/* 8be4b5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be4bbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be4bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8be4bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be4be: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8be4c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be4c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be4c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be4c5: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8be4cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be4cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be4ce: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be4d1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be4d5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be4dbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8be4db: /* 8be4db: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8be4de: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 8be4e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8be4e3: je 0x8bea10 */
  if (zf) goto L_8bea10;
L_8be4e9: /* 8be4e9: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be4ec: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8be4f0: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8be4f6: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8be4fa: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8be4fe: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8be502: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8be505: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8be508: push 0xaeae9c */
  { uint32_t v = 0xaeae9cu; esp -= 4; W32(esp, v); }
/* 8be50d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8be510: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 8be513: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8be519u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8be519: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be51c: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be522: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8be525: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8be52b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be52d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be52f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be532: jp 0x8be542 */
  if (pf) goto L_8be542;
L_8be534: /* 8be534: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be53b: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be542: /* 8be542: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be545: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8be548: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be54b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be551u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be551: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8be554: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8be556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be557: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be559: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be55a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be55b: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8be561u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be561: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8be565: mov byte ptr [ebp - 0x13], 0xff */
  W8((uint32_t)(ebp + 0xffffffedu), 0xffu);
/* 8be569: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8be56d: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8be571: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8be574: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be577: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8be57a: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
L_8be581: /* 8be581: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8be584: cmp ecx, dword ptr [0xce82cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82ccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8be58a: jge 0x8bea10 */
  if ((sf == of)) goto L_8bea10;
L_8be590: /* 8be590: mov eax, ecx */
  eax = ecx;
/* 8be592: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8be595: mov eax, dword ptr [0xce82c8] */
  eax = R32((uint32_t)(0xce82c8u));
/* 8be59a: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 8be59d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8be5a0: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8be5a3: ja 0x8bea08 */
  if ((!cf && !zf)) goto L_8bea08;
L_8be5a9: /* 8be5a9: jmp dword ptr [eax*4 + 0x8bf644] */
  switch (R32((uint32_t)(eax*4 + 0x8bf644u))) {
    case 0x8be5b0u: goto L_8be5b0;
    case 0x8be640u: goto L_8be640;
    case 0x8be6d3u: goto L_8be6d3;
    case 0x8be766u: goto L_8be766;
    case 0x8be815u: goto L_8be815;
    case 0x8be96au: goto L_8be96a;
    case 0x8beaefu: goto L_8beaef;
    case 0x8beb7fu: goto L_8beb7f;
    case 0x8bec18u: goto L_8bec18;
    case 0x8becabu: goto L_8becab;
    case 0x8bed5au: goto L_8bed5a;
    case 0x8beea4u: goto L_8beea4;
    case 0x8bf190u: goto L_8bf190;
    case 0x8bf220u: goto L_8bf220;
    case 0x8bf2b9u: goto L_8bf2b9;
    case 0x8bf34cu: goto L_8bf34c;
    case 0x8bf3fbu: goto L_8bf3fb;
    case 0x8bf545u: goto L_8bf545;
    default: guest_badjump(0x8be5a9, R32((uint32_t)(eax*4 + 0x8bf644u))); return;
  }
L_8be5b0: /* 8be5b0: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be5b3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be5b6: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be5bc: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be5c2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be5c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be5c6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be5c9: jp 0x8be5d9 */
  if (pf) goto L_8be5d9;
L_8be5cb: /* 8be5cb: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be5d2: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be5d9: /* 8be5d9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be5dc: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be5df: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8be5e1: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be5e4: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be5e7: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8be5ea: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be5ed: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8be5f0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be5f6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be5f6: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8be5f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be5f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be5fa: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 8be5fd: push 0xaeaec0 */
  { uint32_t v = 0xaeaec0u; esp -= 4; W32(esp, v); }
/* 8be602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be603: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be609u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be609: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be60c: mov ecx, eax */
  ecx = eax;
/* 8be60e: mov byte ptr [ebp - 4], 0x6c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6cu);
/* 8be612: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be618u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be618: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8be61b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8be61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be61e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be620: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be622: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8be628u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be628: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be62b: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8be62e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be632: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be638u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be638: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8be63b: jmp 0x8be581 */
  goto L_8be581;
L_8be640: /* 8be640: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be643: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8be646: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be64c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8be652: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be654: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be656: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be659: jp 0x8be669 */
  if (pf) goto L_8be669;
L_8be65b: /* 8be65b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be662: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be669: /* 8be669: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be66c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be66f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8be671: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8be674: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8be677: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8be67a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8be67d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8be680: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be686u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be686: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8be688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be689: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8be68c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be68d: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8be690: push 0xaeaecc */
  { uint32_t v = 0xaeaeccu; esp -= 4; W32(esp, v); }
/* 8be695: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be696: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be69cu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be69c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be69f: mov ecx, eax */
  ecx = eax;
/* 8be6a1: mov byte ptr [ebp - 4], 0x6d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6du);
/* 8be6a5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be6abu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be6ab: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8be6ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8be6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be6b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be6b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be6b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be6b5: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8be6bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be6bb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be6be: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8be6c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be6c5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be6cbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be6cb: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8be6ce: jmp 0x8be581 */
  goto L_8be581;
L_8be6d3: /* 8be6d3: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be6d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8be6d9: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be6df: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8be6e5: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be6e7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be6e9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be6ec: jp 0x8be6fc */
  if (pf) goto L_8be6fc;
L_8be6ee: /* 8be6ee: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be6f5: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be6fc: /* 8be6fc: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be6ff: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be702: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8be704: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8be707: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8be70a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8be70d: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8be710: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8be713: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be719u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be719: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8be71b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be71c: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8be71f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be720: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8be723: push 0xaeaee4 */
  { uint32_t v = 0xaeaee4u; esp -= 4; W32(esp, v); }
/* 8be728: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be729: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be72fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be72f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be732: mov ecx, eax */
  ecx = eax;
/* 8be734: mov byte ptr [ebp - 4], 0x6e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6eu);
/* 8be738: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be73eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be73e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8be741: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8be743: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be744: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be746: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be747: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be748: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8be74eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be74e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be751: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8be754: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be758: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be75eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be75e: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8be761: jmp 0x8be581 */
  goto L_8be581;
L_8be766: /* 8be766: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be769: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8be76c: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be772: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8be778: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be77a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be77c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be77f: jp 0x8be78f */
  if (pf) goto L_8be78f;
L_8be781: /* 8be781: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be788: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be78f: /* 8be78f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be792: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be795: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8be797: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8be79a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8be79d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8be7a0: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8be7a3: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8be7a6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be7acu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be7ac: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8be7ae: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8be7b0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be7b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be7b3: jge 0x8be7bb */
  if ((sf == of)) goto L_8be7bb;
L_8be7b5: /* 8be7b5: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be7bb: /* 8be7bb: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8be7c1: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8be7c3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be7c6: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 8be7c9: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be7cf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be7d2: push 0xaeaefc */
  { uint32_t v = 0xaeaefcu; esp -= 4; W32(esp, v); }
/* 8be7d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be7d8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be7deu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be7de: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be7e1: mov ecx, eax */
  ecx = eax;
/* 8be7e3: mov byte ptr [ebp - 4], 0x6f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6fu);
/* 8be7e7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be7edu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be7ed: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8be7f0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8be7f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be7f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be7f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be7f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be7f7: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8be7fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be7fd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be800: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8be803: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be807: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be80du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be80d: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8be810: jmp 0x8be581 */
  goto L_8be581;
L_8be815: /* 8be815: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8be817: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8be81a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8be81d: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8be820: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be821: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be824: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8be82au); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8be82a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be82c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be82f: mov byte ptr [ebp - 4], 0x70 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x70u);
/* 8be833: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8be839u); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8be839: cmp word ptr [eax], 0x44 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x44u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8be83d: jne 0x8be879 */
  if (!zf) goto L_8be879;
L_8be83f: /* 8be83f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8be841: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be844: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8be84au); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8be84a: cmp word ptr [eax], 0x72 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x72u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8be84e: jne 0x8be879 */
  if (!zf) goto L_8be879;
L_8be850: /* 8be850: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8be852: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8be855: cmp dword ptr [ecx + eax*4], 0x12c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8be85c: jb 0x8be879 */
  if (cf) goto L_8be879;
L_8be85e: /* 8be85e: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8be863: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be865: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be867: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8be86c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8be86f: call 0x6c5e9d */
  esp -= 4; W32(esp, 0x8be874u); SPILL(); f_6c5e9d(); if (g_unwind) return; RELOAD();
/* 8be874: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8be876: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8be879: /* 8be879: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be87c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8be87f: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be885: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8be88b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be88d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be88f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be892: jp 0x8be8a2 */
  if (pf) goto L_8be8a2;
L_8be894: /* 8be894: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be89b: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be8a2: /* 8be8a2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be8a5: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be8a8: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8be8ab: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be8ae: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8be8b1: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8be8b4: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8be8b7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8be8b9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8be8bc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8be8bf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be8c5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be8c5: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8be8c8: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8be8ca: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8be8cd: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8be8d0: fild dword ptr [edx] */
  { double v = (double)(int32_t)R32((uint32_t)(edx)); FPUSH(v); }
/* 8be8d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be8d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be8d4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8be8d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8be8d8: jge 0x8be8e0 */
  if ((sf == of)) goto L_8be8e0;
L_8be8da: /* 8be8da: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8be8e0: /* 8be8e0: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8be8e6: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8be8e8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8be8eb: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 8be8f1: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8be8f7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8be8fa: push 0xaeaf14 */
  { uint32_t v = 0xaeaf14u; esp -= 4; W32(esp, v); }
/* 8be8ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be900: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be906u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be906: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be909: mov ecx, eax */
  ecx = eax;
/* 8be90b: mov byte ptr [ebp - 4], 0x71 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x71u);
/* 8be90f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be915u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be915: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8be918: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8be91a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be91b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be91d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8be91e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be91f: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8be925u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be925: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be928: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8be92e: mov byte ptr [ebp - 4], 0x70 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x70u);
/* 8be932: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be938u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be938: mov byte ptr [ebp - 0x2c], 0 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8be93c: mov byte ptr [ebp - 0x2b], 0xff */
  W8((uint32_t)(ebp + 0xffffffd5u), 0xffu);
/* 8be940: mov byte ptr [ebp - 0x2a], 0 */
  W8((uint32_t)(ebp + 0xffffffd6u), 0x0u);
/* 8be944: mov byte ptr [ebp - 0x29], 0xff */
  W8((uint32_t)(ebp + 0xffffffd7u), 0xffu);
/* 8be948: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8be94b: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8be94e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8be951: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8be952: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8be955: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8be958: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be95c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8be962u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8be962: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8be965: jmp 0x8be581 */
  goto L_8be581;
L_8be96a: /* 8be96a: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8be96d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8be970: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8be976: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8be97c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8be97e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8be980: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8be983: jp 0x8be993 */
  if (pf) goto L_8be993;
L_8be985: /* 8be985: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8be98c: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8be993: /* 8be993: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8be996: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8be999: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8be99c: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8be99f: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8be9a1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8be9a4: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8be9a7: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8be9aa: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8be9ad: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8be9b0: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8be9b3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be9b9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be9b9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8be9bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be9bd: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8be9c0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8be9c2: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 8be9c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be9c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be9c7: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8be9ca: push 0xaeaf38 */
  { uint32_t v = 0xaeaf38u; esp -= 4; W32(esp, v); }
/* 8be9cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8be9d0: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8be9d6u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8be9d6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be9d9: mov ecx, eax */
  ecx = eax;
/* 8be9db: mov byte ptr [ebp - 4], 0x72 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x72u);
/* 8be9df: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8be9e5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8be9e5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8be9e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be9e8: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8be9eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8be9ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8be9ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8be9ef: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8be9f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8be9f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8be9f8: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8be9fb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8be9ff: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bea05u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bea05: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_8bea08: /* 8bea08: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bea0b: jmp 0x8be581 */
  goto L_8be581;
L_8bea10: /* 8bea10: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8bea13: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 8bea16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bea18: je 0x8bef4a */
  if (zf) goto L_8bef4a;
L_8bea1e: /* 8bea1e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bea21: mov byte ptr [ebp - 0x2c], 0xff */
  W8((uint32_t)(ebp + 0xffffffd4u), 0xffu);
/* 8bea25: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bea2b: mov byte ptr [ebp - 0x2b], 0xff */
  W8((uint32_t)(ebp + 0xffffffd5u), 0xffu);
/* 8bea2f: mov byte ptr [ebp - 0x2a], 0 */
  W8((uint32_t)(ebp + 0xffffffd6u), 0x0u);
/* 8bea33: mov byte ptr [ebp - 0x29], 0xff */
  W8((uint32_t)(ebp + 0xffffffd7u), 0xffu);
/* 8bea37: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8bea3a: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bea3d: push 0xaeaf60 */
  { uint32_t v = 0xaeaf60u; esp -= 4; W32(esp, v); }
/* 8bea42: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bea45: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 8bea48: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bea4eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bea4e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bea51: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bea57: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bea5a: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bea60: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bea62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bea64: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bea67: jp 0x8bea77 */
  if (pf) goto L_8bea77;
L_8bea69: /* 8bea69: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bea70: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bea77: /* 8bea77: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bea7a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bea7d: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bea80: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bea86u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bea86: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bea89: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bea8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bea8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bea8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bea8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bea90: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bea96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bea96: mov byte ptr [ebp - 0x2c], 0 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8bea9a: mov byte ptr [ebp - 0x2b], 0xff */
  W8((uint32_t)(ebp + 0xffffffd5u), 0xffu);
/* 8bea9e: mov byte ptr [ebp - 0x2a], 0 */
  W8((uint32_t)(ebp + 0xffffffd6u), 0x0u);
/* 8beaa2: mov byte ptr [ebp - 0x29], 0xff */
  W8((uint32_t)(ebp + 0xffffffd7u), 0xffu);
/* 8beaa6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8beaa9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8beaac: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8beaaf: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8beab6: jmp 0x8beac0 */
  goto L_8beac0;
L_8beac0: /* 8beac0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8beac3: cmp ecx, dword ptr [0xce82f0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8beac9: jge 0x8bef4a */
  if ((sf == of)) goto L_8bef4a;
L_8beacf: /* 8beacf: mov eax, ecx */
  eax = ecx;
/* 8bead1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bead4: mov eax, dword ptr [0xce82ec] */
  eax = R32((uint32_t)(0xce82ecu));
/* 8bead9: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 8beadc: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8beadf: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8beae2: ja 0x8bef42 */
  if ((!cf && !zf)) goto L_8bef42;
L_8beae8: /* 8beae8: jmp dword ptr [eax*4 + 0x8bf660] */
  switch (R32((uint32_t)(eax*4 + 0x8bf660u))) {
    case 0x8beaefu: goto L_8beaef;
    case 0x8beb7fu: goto L_8beb7f;
    case 0x8bec18u: goto L_8bec18;
    case 0x8becabu: goto L_8becab;
    case 0x8bed5au: goto L_8bed5a;
    case 0x8beea4u: goto L_8beea4;
    case 0x8bf190u: goto L_8bf190;
    case 0x8bf220u: goto L_8bf220;
    case 0x8bf2b9u: goto L_8bf2b9;
    case 0x8bf34cu: goto L_8bf34c;
    case 0x8bf3fbu: goto L_8bf3fb;
    case 0x8bf545u: goto L_8bf545;
    default: guest_badjump(0x8beae8, R32((uint32_t)(eax*4 + 0x8bf660u))); return;
  }
L_8beaef: /* 8beaef: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8beaf2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8beaf5: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8beafb: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8beb01: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8beb03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8beb05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8beb08: jp 0x8beb18 */
  if (pf) goto L_8beb18;
L_8beb0a: /* 8beb0a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beb11: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8beb18: /* 8beb18: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8beb1b: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8beb1e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8beb20: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8beb23: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8beb26: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8beb29: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8beb2c: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8beb2f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8beb35u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8beb35: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8beb37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beb38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8beb39: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 8beb3c: push 0xaeaf84 */
  { uint32_t v = 0xaeaf84u; esp -= 4; W32(esp, v); }
/* 8beb41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beb42: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8beb48u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8beb48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8beb4b: mov ecx, eax */
  ecx = eax;
/* 8beb4d: mov byte ptr [ebp - 4], 0x73 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x73u);
/* 8beb51: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8beb57u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8beb57: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8beb5a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8beb5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beb5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8beb5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8beb60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8beb61: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8beb67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8beb67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8beb6a: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8beb6d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8beb71: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8beb77u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8beb77: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8beb7a: jmp 0x8beac0 */
  goto L_8beac0;
L_8beb7f: /* 8beb7f: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8beb82: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8beb85: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8beb8b: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8beb91: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8beb93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8beb95: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8beb98: jp 0x8beba8 */
  if (pf) goto L_8beba8;
L_8beb9a: /* 8beb9a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beba1: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8beba8: /* 8beba8: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bebab: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bebae: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bebb0: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bebb3: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bebb6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bebb9: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bebbc: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bebbf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bebc5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bebc5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bebc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bebc8: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bebcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bebcc: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 8bebd2: push 0xaeaf90 */
  { uint32_t v = 0xaeaf90u; esp -= 4; W32(esp, v); }
/* 8bebd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bebd8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bebdeu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bebde: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bebe1: mov ecx, eax */
  ecx = eax;
/* 8bebe3: mov byte ptr [ebp - 4], 0x74 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x74u);
/* 8bebe7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bebedu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bebed: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bebf0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bebf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bebf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bebf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bebf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bebf7: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bebfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bebfd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bec00: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8bec06: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bec0a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bec10u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bec10: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bec13: jmp 0x8beac0 */
  goto L_8beac0;
L_8bec18: /* 8bec18: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bec1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bec1e: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bec24: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bec2a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bec2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bec2e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bec31: jp 0x8bec41 */
  if (pf) goto L_8bec41;
L_8bec33: /* 8bec33: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bec3a: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bec41: /* 8bec41: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bec44: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bec47: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bec49: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bec4c: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bec4f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bec52: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bec55: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bec58: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bec5eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bec5e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bec60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bec61: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bec64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bec65: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 8bec68: push 0xaeafa8 */
  { uint32_t v = 0xaeafa8u; esp -= 4; W32(esp, v); }
/* 8bec6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bec6e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bec74u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bec74: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bec77: mov ecx, eax */
  ecx = eax;
/* 8bec79: mov byte ptr [ebp - 4], 0x75 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x75u);
/* 8bec7d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bec83u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bec83: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bec86: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bec88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bec89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bec8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bec8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bec8d: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bec93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bec93: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bec96: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8bec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bec9d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8beca3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8beca3: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8beca6: jmp 0x8beac0 */
  goto L_8beac0;
L_8becab: /* 8becab: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8becae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8becb1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8becb7: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8becbd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8becbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8becc1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8becc4: jp 0x8becd4 */
  if (pf) goto L_8becd4;
L_8becc6: /* 8becc6: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beccd: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8becd4: /* 8becd4: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8becd7: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8becda: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8becdc: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8becdf: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bece2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bece5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bece8: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8beceb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8becf1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8becf1: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8becf3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8becf5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8becf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8becf8: jge 0x8bed00 */
  if ((sf == of)) goto L_8bed00;
L_8becfa: /* 8becfa: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bed00: /* 8bed00: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bed06: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bed08: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bed0b: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 8bed0e: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bed14: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bed17: push 0xaeafc0 */
  { uint32_t v = 0xaeafc0u; esp -= 4; W32(esp, v); }
/* 8bed1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bed1d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bed23u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bed23: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bed26: mov ecx, eax */
  ecx = eax;
/* 8bed28: mov byte ptr [ebp - 4], 0x76 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x76u);
/* 8bed2c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bed32u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bed32: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bed35: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bed37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bed38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bed3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bed3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bed3c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bed42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bed42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bed45: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8bed48: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bed4c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bed52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bed52: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bed55: jmp 0x8beac0 */
  goto L_8beac0;
L_8bed5a: /* 8bed5a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bed5c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bed5f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bed62: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8bed65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bed66: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bed69: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8bed6fu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8bed6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bed71: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bed74: mov byte ptr [ebp - 4], 0x77 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x77u);
/* 8bed78: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bed7eu); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bed7e: cmp word ptr [eax], 0x44 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x44u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bed82: jne 0x8bedb9 */
  if (!zf) goto L_8bedb9;
L_8bed84: /* 8bed84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8bed86: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bed89: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bed8fu); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bed8f: cmp word ptr [eax], 0x72 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x72u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bed93: jne 0x8bedb9 */
  if (!zf) goto L_8bedb9;
L_8bed95: /* 8bed95: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bed97: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bed9a: cmp dword ptr [ecx + eax*4], 0x12c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8beda1: jb 0x8bedb9 */
  if (cf) goto L_8bedb9;
L_8beda3: /* 8beda3: mov byte ptr [ebp - 0x2c], 0 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8beda7: mov byte ptr [ebp - 0x2b], 0 */
  W8((uint32_t)(ebp + 0xffffffd5u), 0x0u);
/* 8bedab: mov byte ptr [ebp - 0x2a], 0xff */
  W8((uint32_t)(ebp + 0xffffffd6u), 0xffu);
/* 8bedaf: mov byte ptr [ebp - 0x29], 0xff */
  W8((uint32_t)(ebp + 0xffffffd7u), 0xffu);
/* 8bedb3: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8bedb6: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bedb9: /* 8bedb9: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bedbc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bedbf: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bedc5: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bedcb: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bedcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bedcf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bedd2: jp 0x8bede2 */
  if (pf) goto L_8bede2;
L_8bedd4: /* 8bedd4: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beddb: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bede2: /* 8bede2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bede5: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bede8: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8bedeb: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bedee: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8bedf1: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8bedf4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8bedf7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bedf9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8bedfc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8bedff: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bee05u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bee05: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bee08: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bee0a: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8bee0d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bee10: fild dword ptr [edx] */
  { double v = (double)(int32_t)R32((uint32_t)(edx)); FPUSH(v); }
/* 8bee12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bee13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bee14: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8bee16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bee18: jge 0x8bee20 */
  if ((sf == of)) goto L_8bee20;
L_8bee1a: /* 8bee1a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bee20: /* 8bee20: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bee26: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bee28: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bee2b: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bee2e: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bee34: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bee37: push 0xaeafd8 */
  { uint32_t v = 0xaeafd8u; esp -= 4; W32(esp, v); }
/* 8bee3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bee3d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bee43u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bee43: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bee46: mov ecx, eax */
  ecx = eax;
/* 8bee48: mov byte ptr [ebp - 4], 0x78 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x78u);
/* 8bee4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bee52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bee52: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bee55: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bee57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bee58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bee5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bee5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bee5c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bee62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bee62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bee65: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bee68: mov byte ptr [ebp - 4], 0x77 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x77u);
/* 8bee6c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bee72u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bee72: mov byte ptr [ebp - 0x34], 0 */
  W8((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8bee76: mov byte ptr [ebp - 0x33], 0xff */
  W8((uint32_t)(ebp + 0xffffffcdu), 0xffu);
/* 8bee7a: mov byte ptr [ebp - 0x32], 0 */
  W8((uint32_t)(ebp + 0xffffffceu), 0x0u);
/* 8bee7e: mov byte ptr [ebp - 0x31], 0xff */
  W8((uint32_t)(ebp + 0xffffffcfu), 0xffu);
/* 8bee82: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8bee85: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bee88: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8bee8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8bee8c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bee8f: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8bee92: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bee96: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bee9cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bee9c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bee9f: jmp 0x8beac0 */
  goto L_8beac0;
L_8beea4: /* 8beea4: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8beea7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8beeaa: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8beeb0: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8beeb6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8beeb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8beeba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8beebd: jp 0x8beecd */
  if (pf) goto L_8beecd;
L_8beebf: /* 8beebf: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beec6: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8beecd: /* 8beecd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8beed0: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8beed3: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8beed6: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8beed9: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8beedb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8beede: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8beee1: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8beee4: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8beee7: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8beeea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8beeed: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8beef3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8beef3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8beef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beef7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8beefa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8beefc: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 8beeff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bef00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bef01: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bef04: push 0xaeaffc */
  { uint32_t v = 0xaeaffcu; esp -= 4; W32(esp, v); }
/* 8bef09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bef0a: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bef10u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bef10: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bef13: mov ecx, eax */
  ecx = eax;
/* 8bef15: mov byte ptr [ebp - 4], 0x79 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x79u);
/* 8bef19: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bef1fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bef1f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bef21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bef22: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bef25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bef27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bef28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bef29: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bef2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bef2f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bef32: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bef35: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bef39: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bef3fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bef3f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_8bef42: /* 8bef42: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bef45: jmp 0x8beac0 */
  goto L_8beac0;
L_8bef4a: /* 8bef4a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8bef4d: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 8bef50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef52: je 0x8bf5eb */
  if (zf) goto L_8bf5eb;
L_8bef58: /* 8bef58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bef5b: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8bef5e: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8bef64: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 8bef67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef69: je 0x8bf0c1 */
  if (zf) goto L_8bf0c1;
L_8bef6f: /* 8bef6f: mov ebx, dword ptr [eax + 0x38] */
  ebx = R32((uint32_t)(eax + 0x38u));
/* 8bef72: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef74: je 0x8bf0c1 */
  if (zf) goto L_8bf0c1;
L_8bef7a: /* 8bef7a: xor eax, eax */
  eax = 0;
/* 8bef7c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8bef7f: nop  */
L_8bef80: /* 8bef80: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8bef85: jge 0x8befa0 */
  if ((sf == of)) goto L_8befa0;
L_8bef87: /* 8bef87: mov ecx, dword ptr [ebx + eax*4 + 0xeb4] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0xeb4u));
/* 8bef8e: xor edx, edx */
  edx = 0;
/* 8bef90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef92: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8bef95: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8bef98: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8bef9a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8bef9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8bef9e: jmp 0x8bef80 */
  goto L_8bef80;
L_8befa0: /* 8befa0: fld dword ptr [ebx + 0x1f0] */
  { double v = F32((uint32_t)(ebx + 0x1f0u)); FPUSH(v); }
/* 8befa6: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 8befac: call 0x99c958 */
  esp -= 4; W32(esp, 0x8befb1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8befb1: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8befb4: mov edx, dword ptr [0xce84b4] */
  edx = R32((uint32_t)(0xce84b4u));
/* 8befba: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8befbd: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8befc0: mov ecx, dword ptr [0xce84b8] */
  ecx = R32((uint32_t)(0xce84b8u));
/* 8befc6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8befc9: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8befcc: fld dword ptr [ebx + 0x1e8] */
  { double v = F32((uint32_t)(ebx + 0x1e8u)); FPUSH(v); }
/* 8befd2: call 0x99c958 */
  esp -= 4; W32(esp, 0x8befd7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8befd7: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8befda: mov edx, dword ptr [0xce84bc] */
  edx = R32((uint32_t)(0xce84bcu));
/* 8befe0: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8befe3: fld dword ptr [ebx + 0x1ec] */
  { double v = F32((uint32_t)(ebx + 0x1ecu)); FPUSH(v); }
/* 8befe9: call 0x99c958 */
  esp -= 4; W32(esp, 0x8befeeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8befee: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8beff1: mov edx, dword ptr [0xce84c0] */
  edx = R32((uint32_t)(0xce84c0u));
/* 8beff7: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8beffa: fld dword ptr [ebx + 0x1e0] */
  { double v = F32((uint32_t)(ebx + 0x1e0u)); FPUSH(v); }
/* 8bf000: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf005u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf005: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf008: mov edx, dword ptr [0xce84c4] */
  edx = R32((uint32_t)(0xce84c4u));
/* 8bf00e: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf011: fld dword ptr [ebx + 0x1e4] */
  { double v = F32((uint32_t)(ebx + 0x1e4u)); FPUSH(v); }
/* 8bf017: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf01cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf01c: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf01f: mov edx, dword ptr [0xce84c8] */
  edx = R32((uint32_t)(0xce84c8u));
/* 8bf025: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf028: fld dword ptr [ebx + 0x1d0] */
  { double v = F32((uint32_t)(ebx + 0x1d0u)); FPUSH(v); }
/* 8bf02e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf033u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf033: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf036: mov edx, dword ptr [0xce84cc] */
  edx = R32((uint32_t)(0xce84ccu));
/* 8bf03c: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf03f: fld dword ptr [ebx + 0x1d4] */
  { double v = F32((uint32_t)(ebx + 0x1d4u)); FPUSH(v); }
/* 8bf045: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf04au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf04a: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf04d: mov edx, dword ptr [0xce84d0] */
  edx = R32((uint32_t)(0xce84d0u));
/* 8bf053: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf056: fld dword ptr [ebx + 0x1d8] */
  { double v = F32((uint32_t)(ebx + 0x1d8u)); FPUSH(v); }
/* 8bf05c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf061u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf061: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf064: mov edx, dword ptr [0xce84d4] */
  edx = R32((uint32_t)(0xce84d4u));
/* 8bf06a: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf06d: fld dword ptr [ebx + 0x1dc] */
  { double v = F32((uint32_t)(ebx + 0x1dcu)); FPUSH(v); }
/* 8bf073: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf078u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf078: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf07b: mov edx, dword ptr [0xce84d8] */
  edx = R32((uint32_t)(0xce84d8u));
/* 8bf081: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf084: fld dword ptr [ebx + 0x1c8] */
  { double v = F32((uint32_t)(ebx + 0x1c8u)); FPUSH(v); }
/* 8bf08a: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf08fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf08f: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf092: mov edx, dword ptr [0xce84dc] */
  edx = R32((uint32_t)(0xce84dcu));
/* 8bf098: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf09b: fld dword ptr [ebx + 0x1cc] */
  { double v = F32((uint32_t)(ebx + 0x1ccu)); FPUSH(v); }
/* 8bf0a1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf0a6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf0a6: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf0a9: mov edx, dword ptr [0xce84e0] */
  edx = R32((uint32_t)(0xce84e0u));
/* 8bf0af: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf0b2: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8bf0b5: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* 8bf0b8: mov edx, dword ptr [0xce84e4] */
  edx = R32((uint32_t)(0xce84e4u));
/* 8bf0be: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
L_8bf0c1: /* 8bf0c1: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf0c4: mov byte ptr [ebp + 0xc], 0xff */
  W8((uint32_t)(ebp + 0xcu), 0xffu);
/* 8bf0c8: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bf0ce: mov byte ptr [ebp + 0xd], 0xff */
  W8((uint32_t)(ebp + 0xdu), 0xffu);
/* 8bf0d2: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 8bf0d6: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8bf0da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8bf0dd: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bf0e0: push 0xaeb024 */
  { uint32_t v = 0xaeb024u; esp -= 4; W32(esp, v); }
/* 8bf0e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bf0e8: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bf0eb: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bf0f1u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bf0f1: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf0f4: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf0fa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bf0fd: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bf103: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf105: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf107: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf10a: jp 0x8bf11a */
  if (pf) goto L_8bf11a;
L_8bf10c: /* 8bf10c: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf113: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf11a: /* 8bf11a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf11d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bf120: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf123: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf129u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf129: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bf12b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf12c: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bf12f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf133: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bf139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf139: mov byte ptr [ebp + 0xc], 0 */
  W8((uint32_t)(ebp + 0xcu), 0x0u);
/* 8bf13d: mov byte ptr [ebp + 0xd], 0xff */
  W8((uint32_t)(ebp + 0xdu), 0xffu);
/* 8bf141: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 8bf145: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8bf149: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8bf14c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf14f: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bf152: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8bf159: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8bf160: /* 8bf160: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8bf163: cmp edx, dword ptr [0xce82fc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8bf169: jge 0x8bf5eb */
  if ((sf == of)) goto L_8bf5eb;
L_8bf16f: /* 8bf16f: mov ecx, dword ptr [0xce82f8] */
  ecx = R32((uint32_t)(0xce82f8u));
/* 8bf175: mov eax, edx */
  eax = edx;
/* 8bf177: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bf17a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf17d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8bf180: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8bf183: ja 0x8bf5e3 */
  if ((!cf && !zf)) goto L_8bf5e3;
L_8bf189: /* 8bf189: jmp dword ptr [eax*4 + 0x8bf67c] */
  switch (R32((uint32_t)(eax*4 + 0x8bf67cu))) {
    case 0x8bf190u: goto L_8bf190;
    case 0x8bf220u: goto L_8bf220;
    case 0x8bf2b9u: goto L_8bf2b9;
    case 0x8bf34cu: goto L_8bf34c;
    case 0x8bf3fbu: goto L_8bf3fb;
    case 0x8bf545u: goto L_8bf545;
    default: guest_badjump(0x8bf189, R32((uint32_t)(eax*4 + 0x8bf67cu))); return;
  }
L_8bf190: /* 8bf190: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf193: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bf196: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf19c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8bf1a2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf1a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf1a6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf1a9: jp 0x8bf1b9 */
  if (pf) goto L_8bf1b9;
L_8bf1ab: /* 8bf1ab: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf1b2: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf1b9: /* 8bf1b9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf1bc: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf1bf: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf1c1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf1c4: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf1c7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf1ca: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf1cd: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf1d0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf1d6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf1d6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf1d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf1da: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8bf1dd: push 0xaeb048 */
  { uint32_t v = 0xaeb048u; esp -= 4; W32(esp, v); }
/* 8bf1e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf1e3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf1e9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf1e9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf1ec: mov ecx, eax */
  ecx = eax;
/* 8bf1ee: mov byte ptr [ebp - 4], 0x7a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7au);
/* 8bf1f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf1f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf1f8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf1fb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf1fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf200: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf202: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf208: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf20b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8bf20e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf212: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf218u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf218: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf21b: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf220: /* 8bf220: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf223: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf226: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf22c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf232: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf234: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf236: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf239: jp 0x8bf249 */
  if (pf) goto L_8bf249;
L_8bf23b: /* 8bf23b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf242: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf249: /* 8bf249: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf24c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf24f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf251: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf254: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf257: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf25a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf25d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf260: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf266u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf266: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf269: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bf26c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf26d: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 8bf273: push 0xaeb054 */
  { uint32_t v = 0xaeb054u; esp -= 4; W32(esp, v); }
/* 8bf278: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf279: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf27fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf27f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf282: mov ecx, eax */
  ecx = eax;
/* 8bf284: mov byte ptr [ebp - 4], 0x7b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7bu);
/* 8bf288: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf28eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf28e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf291: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf296: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf297: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf298: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf29eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf29e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf2a1: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8bf2a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf2ab: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf2b1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf2b1: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf2b4: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf2b9: /* 8bf2b9: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf2bc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf2bf: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf2c5: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf2cb: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf2cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf2cf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf2d2: jp 0x8bf2e2 */
  if (pf) goto L_8bf2e2;
L_8bf2d4: /* 8bf2d4: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf2db: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf2e2: /* 8bf2e2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf2e5: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf2e8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf2ea: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf2ed: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf2f0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf2f3: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf2f6: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf2f9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf2ffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf2ff: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf301: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf302: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bf305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf306: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 8bf309: push 0xaeb06c */
  { uint32_t v = 0xaeb06cu; esp -= 4; W32(esp, v); }
/* 8bf30e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf30f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf315u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf315: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf318: mov ecx, eax */
  ecx = eax;
/* 8bf31a: mov byte ptr [ebp - 4], 0x7c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7cu);
/* 8bf31e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf324u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf324: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf327: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf32a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf32c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf32d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf32e: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf334u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf334: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf337: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8bf33a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf33e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf344u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf344: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf347: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf34c: /* 8bf34c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf34f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf352: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf358: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf35e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf360: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf362: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf365: jp 0x8bf375 */
  if (pf) goto L_8bf375;
L_8bf367: /* 8bf367: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf36e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf375: /* 8bf375: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf378: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf37b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf37d: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf380: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf383: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf386: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf389: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf38c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf392u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf392: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bf394: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf396: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bf398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf399: jge 0x8bf3a1 */
  if ((sf == of)) goto L_8bf3a1;
L_8bf39b: /* 8bf39b: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bf3a1: /* 8bf3a1: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bf3a7: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bf3a9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bf3ac: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 8bf3af: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bf3b5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bf3b8: push 0xaeb084 */
  { uint32_t v = 0xaeb084u; esp -= 4; W32(esp, v); }
/* 8bf3bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf3be: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf3c4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf3c4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf3c7: mov ecx, eax */
  ecx = eax;
/* 8bf3c9: mov byte ptr [ebp - 4], 0x7d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7du);
/* 8bf3cd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf3d3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf3d3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf3d6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf3d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf3d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf3db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf3dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf3dd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf3e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf3e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf3e6: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8bf3e9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf3ed: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf3f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf3f3: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf3f6: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf3fb: /* 8bf3fb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf3fd: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bf400: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bf403: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8bf406: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf407: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf40a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8bf410u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8bf410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf412: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf415: mov byte ptr [ebp - 4], 0x7e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7eu);
/* 8bf419: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bf41fu); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bf41f: cmp word ptr [eax], 0x44 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x44u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bf423: jne 0x8bf45a */
  if (!zf) goto L_8bf45a;
L_8bf425: /* 8bf425: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8bf427: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf42a: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bf430u); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bf430: cmp word ptr [eax], 0x72 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x72u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bf434: jne 0x8bf45a */
  if (!zf) goto L_8bf45a;
L_8bf436: /* 8bf436: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf438: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf43b: cmp dword ptr [ecx + eax*4], 0x12c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8bf442: jb 0x8bf45a */
  if (cf) goto L_8bf45a;
L_8bf444: /* 8bf444: mov byte ptr [ebp - 0x34], 0 */
  W8((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8bf448: mov byte ptr [ebp - 0x33], 0 */
  W8((uint32_t)(ebp + 0xffffffcdu), 0x0u);
/* 8bf44c: mov byte ptr [ebp - 0x32], 0xff */
  W8((uint32_t)(ebp + 0xffffffceu), 0xffu);
/* 8bf450: mov byte ptr [ebp - 0x31], 0xff */
  W8((uint32_t)(ebp + 0xffffffcfu), 0xffu);
/* 8bf454: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8bf457: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bf45a: /* 8bf45a: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf45d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf460: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf466: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf46c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf46e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf470: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf473: jp 0x8bf483 */
  if (pf) goto L_8bf483;
L_8bf475: /* 8bf475: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf47c: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf483: /* 8bf483: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf486: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf489: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8bf48c: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bf48f: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8bf492: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8bf495: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bf498: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf49a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8bf49d: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8bf4a0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf4a6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf4a6: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bf4a9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf4ab: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8bf4ae: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8bf4b1: fild dword ptr [edx] */
  { double v = (double)(int32_t)R32((uint32_t)(edx)); FPUSH(v); }
/* 8bf4b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf4b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf4b5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8bf4b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bf4b9: jge 0x8bf4c1 */
  if ((sf == of)) goto L_8bf4c1;
L_8bf4bb: /* 8bf4bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bf4c1: /* 8bf4c1: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bf4c7: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bf4c9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bf4cc: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bf4cf: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bf4d5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bf4d8: push 0xaeb09c */
  { uint32_t v = 0xaeb09cu; esp -= 4; W32(esp, v); }
/* 8bf4dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf4de: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf4e4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf4e4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf4e7: mov ecx, eax */
  ecx = eax;
/* 8bf4e9: mov byte ptr [ebp - 4], 0x7f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7fu);
/* 8bf4ed: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf4f3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf4f3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf4f6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf4f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf4f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf4fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf4fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf4fd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf503u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf503: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf506: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bf509: mov byte ptr [ebp - 4], 0x7e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7eu);
/* 8bf50d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf513u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf513: mov byte ptr [ebp - 0x2c], 0 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8bf517: mov byte ptr [ebp - 0x2b], 0xff */
  W8((uint32_t)(ebp + 0xffffffd5u), 0xffu);
/* 8bf51b: mov byte ptr [ebp - 0x2a], 0 */
  W8((uint32_t)(ebp + 0xffffffd6u), 0x0u);
/* 8bf51f: mov byte ptr [ebp - 0x29], 0xff */
  W8((uint32_t)(ebp + 0xffffffd7u), 0xffu);
/* 8bf523: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8bf526: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bf529: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8bf52c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8bf52d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf530: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8bf533: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf537: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf53du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf53d: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf540: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf545: /* 8bf545: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf548: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bf54b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf551: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bf557: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf559: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf55b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf55e: jp 0x8bf56e */
  if (pf) goto L_8bf56e;
L_8bf560: /* 8bf560: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf567: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf56e: /* 8bf56e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf571: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf574: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bf577: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8bf57a: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8bf57c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8bf57f: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8bf582: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8bf585: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8bf588: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8bf58b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bf58e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf594u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf594: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bf597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf598: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8bf59b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8bf59d: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 8bf5a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf5a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf5a2: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bf5a5: push 0xaeb0c0 */
  { uint32_t v = 0xaeb0c0u; esp -= 4; W32(esp, v); }
/* 8bf5aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf5ab: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf5b1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf5b1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf5b4: mov ecx, eax */
  ecx = eax;
/* 8bf5b6: mov byte ptr [ebp - 4], 0x80 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x80u);
/* 8bf5ba: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf5c0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf5c0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bf5c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf5c3: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bf5c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf5c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf5c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf5ca: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bf5d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf5d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf5d3: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bf5d6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf5da: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf5e0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf5e0: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_8bf5e3: /* 8bf5e3: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf5e6: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf5eb: /* 8bf5eb: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bf5ee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8bf5f2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf5f8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf5f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8bf5fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8bf5fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8bf5fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8bf604: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8bf605: mov esp, ebp */
  esp = ebp;
/* 8bf607: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8bf608: ret 8 */
  esp += 12; SPILL(); return;
}
