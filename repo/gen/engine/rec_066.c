#include "recomp.h"
#include "rec_mod.h"

void f_82adf9(void) {
  LOAD_REGS();
L_82adf9: /* 82adf9: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 82adff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82ae04: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 82ae0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ae0b: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 82ae11: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ae16u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82ae16(); return;
}

void f_82ae16(void) {
  LOAD_REGS();
L_82ae16: /* 82ae16: push 0xa1537c */
  { uint32_t v = 0xa1537cu; esp -= 4; W32(esp, v); }
/* 82ae1b: push 0xae3988 */
  { uint32_t v = 0xae3988u; esp -= 4; W32(esp, v); }
/* 82ae20: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82ae26u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82ae26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82ae29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ae2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ae2d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ae32u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 82ae32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82ae35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82ae36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82ae37: xor eax, eax */
  eax = 0;
/* 82ae39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82ae40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82ae41: mov esp, ebp */
  esp = ebp;
/* 82ae43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82ae44: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_82b150(void) {
  LOAD_REGS();
L_82b150: /* 82b150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82b151: mov ebp, esp */
  ebp = esp;
/* 82b153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82b155: push 0x9d3120 */
  { uint32_t v = 0x9d3120u; esp -= 4; W32(esp, v); }
/* 82b15a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82b160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82b168: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82b16b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b16c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82b16d: mov esi, dword ptr [ecx + 0xec] */
  esi = R32((uint32_t)(ecx + 0xecu));
/* 82b173: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b175: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b176: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82b179: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82b180: je 0x82b193 */
  if (zf) goto L_82b193;
L_82b182: /* 82b182: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 82b187: mov ecx, esi */
  ecx = esi;
/* 82b189: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82b18fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82b18f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b191: jne 0x82b195 */
  if (!zf) goto L_82b195;
L_82b193: /* 82b193: xor esi, esi */
  esi = 0;
L_82b195: /* 82b195: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 82b198: mov ebx, 1 */
  ebx = 0x1u;
/* 82b19d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_82b1a0: /* 82b1a0: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82b1a3: jge 0x82b1cf */
  if ((sf == of)) goto L_82b1cf;
L_82b1a5: /* 82b1a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b1a6: mov ecx, esi */
  ecx = esi;
/* 82b1a8: call 0x6c5a1f */
  esp -= 4; W32(esp, 0x82b1adu); SPILL(); f_6c5a1f(); if (g_unwind) return; RELOAD();
/* 82b1ad: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 82b1b0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b1b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b1b8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b1bb: jne 0x82b1cc */
  if (!zf) goto L_82b1cc;
L_82b1bd: /* 82b1bd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82b1c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b1c1: xor ebx, ebx */
  ebx = 0;
/* 82b1c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b1c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b1c5: mov ecx, esi */
  ecx = esi;
/* 82b1c7: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82b1ccu); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
L_82b1cc: /* 82b1cc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 82b1cd: jmp 0x82b1a0 */
  goto L_82b1a0;
L_82b1cf: /* 82b1cf: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b1d1: je 0x82b227 */
  if (zf) goto L_82b227;
L_82b1d3: /* 82b1d3: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_82b1d6: /* 82b1d6: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82b1d9: jge 0x82b227 */
  if ((sf == of)) goto L_82b227;
L_82b1db: /* 82b1db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b1dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b1de: mov ecx, esi */
  ecx = esi;
/* 82b1e0: call 0x6ca05b */
  esp -= 4; W32(esp, 0x82b1e5u); SPILL(); f_6ca05b(); if (g_unwind) return; RELOAD();
/* 82b1e5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82b1e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b1e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b1eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b1ec: mov ecx, esi */
  ecx = esi;
/* 82b1ee: call dword ptr [edx + 0x104] */
  { uint32_t t = R32((uint32_t)(edx + 0x104u)); esp -= 4; W32(esp, 0x82b1f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b1f4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 82b1f5: jmp 0x82b1d6 */
  goto L_82b1d6;
L_82b227: /* 82b227: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82b22a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82b22b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82b22c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82b233: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82b234: mov esp, ebp */
  esp = ebp;
/* 82b236: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82b237: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_82b1f7(void) {
  LOAD_REGS();
L_82b1f7: /* 82b1f7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82b1fa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82b1ff: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 82b202: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b203: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 82b206: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82b20bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82b20b(); return;
}

void f_82b20b(void) {
  LOAD_REGS();
L_82b20b: /* 82b20b: push 0xa153b4 */
  { uint32_t v = 0xa153b4u; esp -= 4; W32(esp, v); }
/* 82b210: push 0xae39a0 */
  { uint32_t v = 0xae39a0u; esp -= 4; W32(esp, v); }
/* 82b215: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82b21bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82b21b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82b21e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b220: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b222: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82b227u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 82b227: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82b22a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82b22b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82b22c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82b233: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82b234: mov esp, ebp */
  esp = ebp;
/* 82b236: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82b237: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_82b280(void) {
  LOAD_REGS();
L_82b280: /* 82b280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82b281: mov ebp, esp */
  ebp = esp;
/* 82b283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82b285: push 0x9d3130 */
  { uint32_t v = 0x9d3130u; esp -= 4; W32(esp, v); }
/* 82b28a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82b290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82b298: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82b29b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b29c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82b29d: mov esi, ecx */
  esi = ecx;
/* 82b29f: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 82b2a5: cmp byte ptr [eax + 0x4c8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b2ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b2ad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82b2b0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82b2b7: je 0x82baf1 */
  if (zf) goto L_82baf1;
L_82b2bd: /* 82b2bd: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 82b2c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82b2c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82b2c6: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x82b2ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b2cc: mov ebx, dword ptr [esi + 0xec] */
  ebx = R32((uint32_t)(esi + 0xecu));
/* 82b2d2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b2d4: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 82b2d7: je 0x82baf1 */
  if (zf) goto L_82baf1;
L_82b2dd: /* 82b2dd: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 82b2e2: mov ecx, ebx */
  ecx = ebx;
/* 82b2e4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82b2eau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82b2ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b2ec: je 0x82baf1 */
  if (zf) goto L_82baf1;
L_82b2f2: /* 82b2f2: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 82b2f8: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b2fa: jne 0x82b3a5 */
  if (!zf) goto L_82b3a5;
L_82b300: /* 82b300: mov ecx, dword ptr [esi + 0x560] */
  ecx = R32((uint32_t)(esi + 0x560u));
/* 82b306: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82b308: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* 82b30d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82b312: or eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 82b315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b316: mov dword ptr [esi + 0x530], eax */
  W32((uint32_t)(esi + 0x530u), eax);
/* 82b31c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 82b31e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82b320: mov ecx, esi */
  ecx = esi;
/* 82b322: call dword ptr [eax + 0x160] */
  { uint32_t t = R32((uint32_t)(eax + 0x160u)); esp -= 4; W32(esp, 0x82b328u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b328: mov eax, dword ptr [esi + 0x55c] */
  eax = R32((uint32_t)(esi + 0x55cu));
/* 82b32e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82b330: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82b332: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* 82b337: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82b33c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b33d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 82b33f: mov ecx, esi */
  ecx = esi;
/* 82b341: call dword ptr [edx + 0x160] */
  { uint32_t t = R32((uint32_t)(edx + 0x160u)); esp -= 4; W32(esp, 0x82b347u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b347: mov edi, 4 */
  edi = 0x4u;
/* 82b34c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_82b350: /* 82b350: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82b353: jge 0x82b377 */
  if ((sf == of)) goto L_82b377;
L_82b355: /* 82b355: mov eax, dword ptr [esi + edi*4 + 0x53c] */
  eax = R32((uint32_t)(esi + edi*4 + 0x53cu));
/* 82b35c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82b35e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82b360: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* 82b365: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82b36a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b36b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b36c: mov ecx, esi */
  ecx = esi;
/* 82b36e: call dword ptr [edx + 0x160] */
  { uint32_t t = R32((uint32_t)(edx + 0x160u)); esp -= 4; W32(esp, 0x82b374u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b374: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 82b375: jmp 0x82b350 */
  goto L_82b350;
L_82b377: /* 82b377: mov edi, 2 */
  edi = 0x2u;
/* 82b37c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_82b380: /* 82b380: cmp edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82b383: mov ecx, ebx */
  ecx = ebx;
/* 82b385: jge 0x82b39c */
  if ((sf == of)) goto L_82b39c;
L_82b387: /* 82b387: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b389: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b38a: call 0x6c36e8 */
  esp -= 4; W32(esp, 0x82b38fu); SPILL(); f_6c36e8(); if (g_unwind) return; RELOAD();
/* 82b38f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b391: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b392: mov ecx, ebx */
  ecx = ebx;
/* 82b394: call 0x6c6bdb */
  esp -= 4; W32(esp, 0x82b399u); SPILL(); f_6c6bdb(); if (g_unwind) return; RELOAD();
/* 82b399: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 82b39a: jmp 0x82b380 */
  goto L_82b380;
L_82b39c: /* 82b39c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82b39e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 82b3a0: call 0x6c36e8 */
  esp -= 4; W32(esp, 0x82b3a5u); SPILL(); f_6c36e8(); if (g_unwind) return; RELOAD();
L_82b3a5: /* 82b3a5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82b3a8: mov cl, byte ptr [esi + 0x84] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x84u))) & 0xffu);
/* 82b3ae: fdiv dword ptr [esi + 0x564] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x564u)));
/* 82b3b4: mov al, 0x20 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x20u) & 0xffu);
/* 82b3b6: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b3b8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82b3bb: je 0x82b410 */
  if (zf) goto L_82b410;
L_82b3bd: /* 82b3bd: test byte ptr [esi + 0x530], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x530u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b3c3: jne 0x82b3ee */
  if (!zf) goto L_82b3ee;
L_82b3c5: /* 82b3c5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82b3c8: lea ecx, [esi + 0x514] */
  ecx = (uint32_t)(esi + 0x514u);
/* 82b3ce: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82b3d0: mov edx, esp */
  edx = esp;
/* 82b3d2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82b3d4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 82b3d7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82b3da: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 82b3dd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 82b3e0: mov edx, dword ptr [esi + 0x520] */
  edx = R32((uint32_t)(esi + 0x520u));
/* 82b3e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82b3e7: mov ecx, esi */
  ecx = esi;
/* 82b3e9: call 0x6c6749 */
  esp -= 4; W32(esp, 0x82b3eeu); SPILL(); f_6c6749(); if (g_unwind) return; RELOAD();
L_82b3ee: /* 82b3ee: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82b3f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b3f2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 82b3f4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82b3f6: mov ecx, esi */
  ecx = esi;
/* 82b3f8: call 0x6c12ee */
  esp -= 4; W32(esp, 0x82b3fdu); SPILL(); f_6c12ee(); if (g_unwind) return; RELOAD();
/* 82b3fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82b400: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82b407: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82b408: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82b409: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82b40a: mov esp, ebp */
  esp = ebp;
/* 82b40c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82b40d: ret 4 */
  esp += 8; SPILL(); return;
L_82b410: /* 82b410: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 82b416: mov eax, dword ptr [esi + 0x530] */
  eax = R32((uint32_t)(esi + 0x530u));
/* 82b41c: mov edx, ecx */
  edx = ecx;
/* 82b41e: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 82b421: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 82b423: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b426: jne 0x82b440 */
  if (!zf) goto L_82b440;
L_82b428: /* 82b428: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 82b42a: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b42d: jne 0x82b440 */
  if (!zf) goto L_82b440;
L_82b42f: /* 82b42f: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 82b435: mov ecx, eax */
  ecx = eax;
/* 82b437: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 82b439: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 82b43b: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b43e: je 0x82b49b */
  if (zf) goto L_82b49b;
L_82b440: /* 82b440: mov edx, dword ptr [0xb7e438] */
  edx = R32((uint32_t)(0xb7e438u));
/* 82b446: mov edi, dword ptr [0xcfa2c0] */
  edi = R32((uint32_t)(0xcfa2c0u));
/* 82b44c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b44e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82b44f: mov ecx, esi */
  ecx = esi;
/* 82b451: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82b453u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b453: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82b455: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b457: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b459: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b45a: mov ecx, esi */
  ecx = esi;
/* 82b45c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x82b45fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b45f: mov ecx, dword ptr [esi + 0x34c] */
  ecx = R32((uint32_t)(esi + 0x34cu));
/* 82b465: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82b46b: lea edx, [ecx + ecx] */
  edx = (uint32_t)(ecx + ecx);
/* 82b46e: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 82b470: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 82b473: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 82b475: mov ecx, eax */
  ecx = eax;
/* 82b477: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 82b47a: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 82b480: mov edx, dword ptr [esi + 0x530] */
  edx = R32((uint32_t)(esi + 0x530u));
/* 82b486: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 82b489: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82b48c: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 82b48e: and edx, 0xfffffff9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff9u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 82b491: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 82b493: mov dword ptr [esi + 0x530], ecx */
  W32((uint32_t)(esi + 0x530u), ecx);
/* 82b499: jmp 0x82b4a1 */
  goto L_82b4a1;
L_82b49b: /* 82b49b: mov edi, dword ptr [0xcfa2c0] */
  edi = R32((uint32_t)(0xcfa2c0u));
L_82b4a1: /* 82b4a1: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82b4a4: mov bl, byte ptr [esi + 0x534] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x534u))) & 0xffu);
/* 82b4aa: xor ecx, ecx */
  ecx = 0;
/* 82b4ac: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b4ae: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 82b4b1: xor edx, edx */
  edx = 0;
/* 82b4b3: cmp bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b4b6: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 82b4b9: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82b4bb: je 0x82b51e */
  if (zf) goto L_82b51e;
L_82b4bd: /* 82b4bd: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b4bf: jne 0x82b4df */
  if (!zf) goto L_82b4df;
L_82b4c1: /* 82b4c1: mov ecx, dword ptr [0xb7e444] */
  ecx = R32((uint32_t)(0xb7e444u));
/* 82b4c7: mov eax, dword ptr [esi + 0x190] */
  eax = R32((uint32_t)(esi + 0x190u));
/* 82b4cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b4cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b4d0: mov ecx, esi */
  ecx = esi;
/* 82b4d2: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 82b4d5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82b4d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b4d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b4d9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 82b4dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b4dd: jmp 0x82b516 */
  goto L_82b516;
L_82b4df: /* 82b4df: test byte ptr [esi + 0x530], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x530u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b4e6: je 0x82b506 */
  if (zf) goto L_82b506;
L_82b4e8: /* 82b4e8: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 82b4ee: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b4f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b4f6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b4f9: jne 0x82b506 */
  if (!zf) goto L_82b506;
L_82b4fb: /* 82b4fb: mov edx, dword ptr [0xb7e43c] */
  edx = R32((uint32_t)(0xb7e43cu));
/* 82b501: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b503: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82b504: jmp 0x82b50e */
  goto L_82b50e;
L_82b506: /* 82b506: mov eax, dword ptr [0xb7e440] */
  eax = R32((uint32_t)(0xb7e440u));
/* 82b50b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b50d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_82b50e: /* 82b50e: mov ecx, esi */
  ecx = esi;
/* 82b510: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82b512u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b512: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b514: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_82b516: /* 82b516: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82b518: mov ecx, esi */
  ecx = esi;
/* 82b51a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b51b: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x82b51eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82b51e: /* 82b51e: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82b521: cmp al, byte ptr [esi + 0x534] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x534u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b527: je 0x82b545 */
  if (zf) goto L_82b545;
L_82b529: /* 82b529: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b52b: je 0x82b545 */
  if (zf) goto L_82b545;
L_82b52d: /* 82b52d: mov eax, dword ptr [0xb7e438] */
  eax = R32((uint32_t)(0xb7e438u));
/* 82b532: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b534: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b535: mov ecx, esi */
  ecx = esi;
/* 82b537: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82b539u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b539: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82b53b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b53d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b53f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b540: mov ecx, esi */
  ecx = esi;
/* 82b542: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x82b545u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82b545: /* 82b545: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82b548: mov ebx, dword ptr [esi + 0x530] */
  ebx = R32((uint32_t)(esi + 0x530u));
/* 82b54e: xor ecx, ecx */
  ecx = 0;
/* 82b550: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b552: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 82b555: mov edx, ebx */
  edx = ebx;
/* 82b557: mov byte ptr [esi + 0x534], al */
  W8((uint32_t)(esi + 0x534u), (eax & 0xffu));
/* 82b55d: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 82b560: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 82b562: and ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 82b565: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 82b567: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b569: mov dword ptr [esi + 0x530], edx */
  W32((uint32_t)(esi + 0x530u), edx);
/* 82b56f: je 0x82ba9d */
  if (zf) goto L_82ba9d;
L_82b575: /* 82b575: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 82b57b: fld dword ptr [esi + 0x568] */
  { double v = F32((uint32_t)(esi + 0x568u)); FPUSH(v); }
/* 82b581: fcomp dword ptr [edx + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x3acu)));
  FPOP();
/* 82b587: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b589: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b58c: je 0x82ba9d */
  if (zf) goto L_82ba9d;
L_82b592: /* 82b592: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 82b598: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x82b59eu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 82b59e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b5a0: je 0x82b747 */
  if (zf) goto L_82b747;
L_82b5a6: /* 82b5a6: lea ecx, [esi + 0x53c] */
  ecx = (uint32_t)(esi + 0x53cu);
/* 82b5ac: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x82b5b2u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 82b5b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b5b4: jne 0x82b5c3 */
  if (!zf) goto L_82b5c3;
L_82b5b6: /* 82b5b6: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b5ba: je 0x82b5c3 */
  if (zf) goto L_82b5c3;
L_82b5bc: /* 82b5bc: mov ecx, esi */
  ecx = esi;
/* 82b5be: call 0x6c5e52 */
  esp -= 4; W32(esp, 0x82b5c3u); SPILL(); f_6c5e52(); if (g_unwind) return; RELOAD();
L_82b5c3: /* 82b5c3: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82b5c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b5c7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 82b5c9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 82b5cb: mov ecx, esi */
  ecx = esi;
/* 82b5cd: call 0x6c12ee */
  esp -= 4; W32(esp, 0x82b5d2u); SPILL(); f_6c12ee(); if (g_unwind) return; RELOAD();
/* 82b5d2: mov word ptr [esi + 0x182], 0 */
  W16((uint32_t)(esi + 0x182u), 0x0u);
/* 82b5db: fild dword ptr [esi + 0x180] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x180u)); FPUSH(v); }
/* 82b5e1: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 82b5e4: fsub dword ptr [esi + 0x538] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x538u)));
/* 82b5ea: fcomp dword ptr [0xa15444] */
  fpu_com(ST0, F32((uint32_t)(0xa15444u)));
  FPOP();
/* 82b5f0: fld dword ptr [esi + 0x538] */
  { double v = F32((uint32_t)(esi + 0x538u)); FPUSH(v); }
/* 82b5f6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b5f8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b5fb: jne 0x82b605 */
  if (!zf) goto L_82b605;
L_82b5fd: /* 82b5fd: fadd dword ptr [0xa110a4] */
  ST0 = ST0 + (F32((uint32_t)(0xa110a4u)));
/* 82b603: jmp 0x82b621 */
  goto L_82b621;
L_82b605: /* 82b605: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 82b608: fcomp dword ptr [0xa15444] */
  fpu_com(ST0, F32((uint32_t)(0xa15444u)));
  FPOP();
/* 82b60e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b610: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b613: jne 0x82b627 */
  if (!zf) goto L_82b627;
L_82b615: /* 82b615: fld dword ptr [esi + 0x538] */
  { double v = F32((uint32_t)(esi + 0x538u)); FPUSH(v); }
/* 82b61b: fsub dword ptr [0xa110a4] */
  ST0 = ST0 - (F32((uint32_t)(0xa110a4u)));
L_82b621: /* 82b621: fstp dword ptr [esi + 0x538] */
  WF32((uint32_t)(esi + 0x538u), ST0); FPOP();
L_82b627: /* 82b627: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b62b: jne 0x82b717 */
  if (!zf) goto L_82b717;
L_82b631: /* 82b631: cmp byte ptr [esi + 0x91], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 82b638: jbe 0x82b717 */
  if ((cf | zf)) goto L_82b717;
L_82b63e: /* 82b63e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 82b641: fsub dword ptr [esi + 0x538] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x538u)));
/* 82b647: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 82b64a: fcom dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
/* 82b650: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 82b653: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b655: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b658: jne 0x82b661 */
  if (!zf) goto L_82b661;
L_82b65a: /* 82b65a: mov ecx, 1 */
  ecx = 0x1u;
/* 82b65f: jmp 0x82b663 */
  goto L_82b663;
L_82b661: /* 82b661: xor ecx, ecx */
  ecx = 0;
L_82b663: /* 82b663: fcomp dword ptr [0xa15440] */
  fpu_com(ST0, F32((uint32_t)(0xa15440u)));
  FPOP();
/* 82b669: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b66b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82b66e: jp 0x82b677 */
  if (pf) goto L_82b677;
L_82b670: /* 82b670: mov ebx, 1 */
  ebx = 0x1u;
/* 82b675: jmp 0x82b679 */
  goto L_82b679;
L_82b677: /* 82b677: xor ebx, ebx */
  ebx = 0;
L_82b679: /* 82b679: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b67b: je 0x82b6bc */
  if (zf) goto L_82b6bc;
L_82b67d: /* 82b67d: mov eax, dword ptr [esi + 0x560] */
  eax = R32((uint32_t)(esi + 0x560u));
/* 82b683: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b687: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82b689: call 0x6c7a36 */
  esp -= 4; W32(esp, 0x82b68eu); SPILL(); f_6c7a36(); if (g_unwind) return; RELOAD();
/* 82b68e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b691: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b692: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82b697: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82b699: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82b69eu); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82b69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82b6a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b6a2: call 0x6cae61 */
  esp -= 4; W32(esp, 0x82b6a7u); SPILL(); f_6cae61(); if (g_unwind) return; RELOAD();
/* 82b6a7: fmul dword ptr [0xa1543c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1543cu)));
/* 82b6ad: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b6b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82b6b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82b6b5: call 0x6ca05b */
  esp -= 4; W32(esp, 0x82b6bau); SPILL(); f_6ca05b(); if (g_unwind) return; RELOAD();
/* 82b6ba: jmp 0x82b6c8 */
  goto L_82b6c8;
L_82b6bc: /* 82b6bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b6bd: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 82b6bf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82b6c1: mov ecx, esi */
  ecx = esi;
/* 82b6c3: call 0x6c12ee */
  esp -= 4; W32(esp, 0x82b6c8u); SPILL(); f_6c12ee(); if (g_unwind) return; RELOAD();
L_82b6c8: /* 82b6c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b6ca: je 0x82b70b */
  if (zf) goto L_82b70b;
L_82b6cc: /* 82b6cc: mov edx, dword ptr [esi + 0x55c] */
  edx = R32((uint32_t)(esi + 0x55cu));
/* 82b6d2: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b6d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82b6d6: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 82b6d8: mov ecx, ebx */
  ecx = ebx;
/* 82b6da: call 0x6c7a36 */
  esp -= 4; W32(esp, 0x82b6dfu); SPILL(); f_6c7a36(); if (g_unwind) return; RELOAD();
/* 82b6df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b6e0: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82b6e5: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 82b6e7: mov ecx, ebx */
  ecx = ebx;
/* 82b6e9: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82b6eeu); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82b6ee: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82b6f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b6f2: call 0x6cae61 */
  esp -= 4; W32(esp, 0x82b6f7u); SPILL(); f_6cae61(); if (g_unwind) return; RELOAD();
/* 82b6f7: fmul dword ptr [0xa1543c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1543cu)));
/* 82b6fd: mov ecx, ebx */
  ecx = ebx;
/* 82b6ff: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82b702: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 82b704: call 0x6ca05b */
  esp -= 4; W32(esp, 0x82b709u); SPILL(); f_6ca05b(); if (g_unwind) return; RELOAD();
/* 82b709: jmp 0x82b717 */
  goto L_82b717;
L_82b70b: /* 82b70b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b70c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 82b70e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 82b710: mov ecx, esi */
  ecx = esi;
/* 82b712: call 0x6c12ee */
  esp -= 4; W32(esp, 0x82b717u); SPILL(); f_6c12ee(); if (g_unwind) return; RELOAD();
L_82b717: /* 82b717: fild dword ptr [esi + 0x180] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x180u)); FPUSH(v); }
/* 82b71d: fcom dword ptr [esi + 0x538] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x538u)));
/* 82b723: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b725: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82b728: jnp 0x82baef */
  if (!pf) goto L_82baef;
L_82b72e: /* 82b72e: fstp dword ptr [esi + 0x538] */
  WF32((uint32_t)(esi + 0x538u), ST0); FPOP();
/* 82b734: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82b737: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82b73e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82b73f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82b740: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82b741: mov esp, ebp */
  esp = ebp;
/* 82b743: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82b744: ret 4 */
  esp += 8; SPILL(); return;
L_82b747: /* 82b747: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82b74a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b74b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 82b74d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82b74f: mov ecx, esi */
  ecx = esi;
/* 82b751: call 0x6c12ee */
  esp -= 4; W32(esp, 0x82b756u); SPILL(); f_6c12ee(); if (g_unwind) return; RELOAD();
/* 82b756: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82b759: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b75a: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 82b760: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x82b766u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 82b766: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82b769: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b76b: jne 0x82b776 */
  if (!zf) goto L_82b776;
L_82b76d: /* 82b76d: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 82b774: jmp 0x82b79a */
  goto L_82b79a;
L_82b776: /* 82b776: cmp al, 0xb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82b778: jne 0x82b79a */
  if (!zf) goto L_82b79a;
L_82b77a: /* 82b77a: mov eax, dword ptr [esi + 0x4fc] */
  eax = R32((uint32_t)(esi + 0x4fcu));
/* 82b780: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b782: je 0x82b79a */
  if (zf) goto L_82b79a;
L_82b784: /* 82b784: add eax, 0x458 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x458u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82b789: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82b78b: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 82b78e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 82b791: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 82b794: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 82b797: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
L_82b79a: /* 82b79a: mov edi, dword ptr [0xcfa578] */
  edi = R32((uint32_t)(0xcfa578u));
/* 82b7a0: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 82b7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b7a4: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82b7a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82b7a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b7a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82b7ab: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 82b7ae: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82b7b1: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 82b7b4: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 82b7b7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82b7ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b7bb: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 82b7c1: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 82b7c4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82b7c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b7c6: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82b7c9: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 82b7cf: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 82b7d2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82b7d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82b7d6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 82b7dc: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 82b7df: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82b7e1: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82b7e4: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 82b7ea: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82b7ed: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 82b7ef: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82b7f2: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 82b7f4: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 82b7f7: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82b7fa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82b7fc: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82b7ff: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82b801u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82b801: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82b804: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82b806: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 82b809: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 82b80c: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 82b80f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82b812: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 82b815: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 82b818: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82b81b: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 82b81e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82b820: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 82b823: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 82b826: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82b828: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82b82b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 82b82e: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 82b831: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82b834: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 82b837: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82b839: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 82b83c: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 82b83f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82b841: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82b844: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82b847: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 82b84a: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 82b84d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82b850: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 82b853: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82b856: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b85c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b85e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b861: jne 0x82b8a7 */
  if (!zf) goto L_82b8a7;
L_82b863: /* 82b863: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82b866: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 82b86d: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 82b873: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b875: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b878: jne 0x82b8a7 */
  if (!zf) goto L_82b8a7;
L_82b87a: /* 82b87a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82b87d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b883: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82b889: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 82b88c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b88e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b891: jne 0x82b89b */
  if (!zf) goto L_82b89b;
L_82b893: /* 82b893: fmul dword ptr [esi + 0x56c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x56cu)));
/* 82b899: jmp 0x82b8a1 */
  goto L_82b8a1;
L_82b89b: /* 82b89b: fmul dword ptr [esi + 0x570] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x570u)));
L_82b8a1: /* 82b8a1: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 82b8a4: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_82b8a7: /* 82b8a7: mov ecx, esi */
  ecx = esi;
/* 82b8a9: call 0x6cba1e */
  esp -= 4; W32(esp, 0x82b8aeu); SPILL(); f_6cba1e(); if (g_unwind) return; RELOAD();
/* 82b8ae: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 82b8b1: fdiv dword ptr [esi + 0x548] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x548u)));
/* 82b8b7: xor edi, edi */
  edi = 0;
/* 82b8b9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82b8bc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 82b8c2: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 82b8c5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82b8c8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b8ce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b8d0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82b8d3: jnp 0x82b908 */
  if (!pf) goto L_82b908;
L_82b8d5: /* 82b8d5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b8d8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82b8da: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82b8dd: mov edi, 1 */
  edi = 0x1u;
/* 82b8e2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b8e8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b8ea: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b8ed: jne 0x82b8fb */
  if (!zf) goto L_82b8fb;
L_82b8ef: /* 82b8ef: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 82b8f1: call 0x6c7f86 */
  esp -= 4; W32(esp, 0x82b8f6u); SPILL(); f_6c7f86(); if (g_unwind) return; RELOAD();
/* 82b8f6: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 82b8f9: jmp 0x82b905 */
  goto L_82b905;
L_82b8fb: /* 82b8fb: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 82b8fd: call 0x6c7f86 */
  esp -= 4; W32(esp, 0x82b902u); SPILL(); f_6c7f86(); if (g_unwind) return; RELOAD();
/* 82b902: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
L_82b905: /* 82b905: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
L_82b908: /* 82b908: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82b90b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b911: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b913: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82b916: jnp 0x82b947 */
  if (!pf) goto L_82b947;
L_82b918: /* 82b918: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b91b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82b91d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82b920: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 82b921: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b927: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b929: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b92c: jne 0x82b93a */
  if (!zf) goto L_82b93a;
L_82b92e: /* 82b92e: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 82b930: call 0x6c7f86 */
  esp -= 4; W32(esp, 0x82b935u); SPILL(); f_6c7f86(); if (g_unwind) return; RELOAD();
/* 82b935: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 82b938: jmp 0x82b944 */
  goto L_82b944;
L_82b93a: /* 82b93a: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 82b93c: call 0x6c7f86 */
  esp -= 4; W32(esp, 0x82b941u); SPILL(); f_6c7f86(); if (g_unwind) return; RELOAD();
/* 82b941: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
L_82b944: /* 82b944: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
L_82b947: /* 82b947: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82b94a: jne 0x82b952 */
  if (!zf) goto L_82b952;
L_82b94c: /* 82b94c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
L_82b952: /* 82b952: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82b955: mov edi, 4 */
  edi = 0x4u;
/* 82b95a: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82b95d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_82b960: /* 82b960: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82b963: jge 0x82b9cd */
  if ((sf == of)) goto L_82b9cd;
L_82b965: /* 82b965: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b966: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82b969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82b96a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b96d: call 0x6c1a69 */
  esp -= 4; W32(esp, 0x82b972u); SPILL(); f_6c1a69(); if (g_unwind) return; RELOAD();
/* 82b972: lea ecx, [esi + edi*4 + 0x53c] */
  ecx = (uint32_t)(esi + edi*4 + 0x53cu);
/* 82b979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b97a: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x82b980u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 82b980: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82b982: je 0x82b9ca */
  if (zf) goto L_82b9ca;
L_82b984: /* 82b984: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b987: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 82b98a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b98b: call 0x6c5a1f */
  esp -= 4; W32(esp, 0x82b990u); SPILL(); f_6c5a1f(); if (g_unwind) return; RELOAD();
/* 82b990: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82b993: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b996: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b997: call 0x6c5a1f */
  esp -= 4; W32(esp, 0x82b99cu); SPILL(); f_6c5a1f(); if (g_unwind) return; RELOAD();
/* 82b99c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82b99f: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82b9a2: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 82b9a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b9a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82b9aa: jp 0x82b9b6 */
  if (pf) goto L_82b9b6;
L_82b9ac: /* 82b9ac: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b9af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b9b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b9b1: call 0x6cb154 */
  esp -= 4; W32(esp, 0x82b9b6u); SPILL(); f_6cb154(); if (g_unwind) return; RELOAD();
L_82b9b6: /* 82b9b6: mov edx, dword ptr [esi + edi*4 + 0x53c] */
  edx = R32((uint32_t)(esi + edi*4 + 0x53cu));
/* 82b9bd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b9c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82b9c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82b9c2: call 0x6c7a36 */
  esp -= 4; W32(esp, 0x82b9c7u); SPILL(); f_6c7a36(); if (g_unwind) return; RELOAD();
/* 82b9c7: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
L_82b9ca: /* 82b9ca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 82b9cb: jmp 0x82b960 */
  goto L_82b960;
L_82b9cd: /* 82b9cd: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82b9d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b9d1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82b9d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82b9d9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82b9dc: jne 0x82b9fc */
  if (!zf) goto L_82b9fc;
L_82b9de: /* 82b9de: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82b9e1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b9e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82b9e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 82b9e7: mov ecx, edi */
  ecx = edi;
/* 82b9e9: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82b9eeu); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82b9ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82b9ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82b9f1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 82b9f3: mov ecx, edi */
  ecx = edi;
/* 82b9f5: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82b9fau); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82b9fa: jmp 0x82ba1a */
  goto L_82ba1a;
L_82b9fc: /* 82b9fc: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 82b9ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ba01: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 82ba03: mov ecx, esi */
  ecx = esi;
/* 82ba05: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82ba0au); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82ba0a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82ba0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ba0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ba0f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 82ba11: mov ecx, esi */
  ecx = esi;
/* 82ba13: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82ba18u); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82ba18: mov edi, esi */
  edi = esi;
L_82ba1a: /* 82ba1a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ba1d: mov ecx, edi */
  ecx = edi;
/* 82ba1f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82ba25: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ba26: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82ba28: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82ba2b: jne 0x82ba3d */
  if (!zf) goto L_82ba3d;
L_82ba2d: /* 82ba2d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82ba30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ba31: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 82ba33: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82ba38u); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82ba38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ba39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ba3b: jmp 0x82ba4b */
  goto L_82ba4b;
L_82ba3d: /* 82ba3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ba3f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 82ba41: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82ba46u); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82ba46: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82ba49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ba4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_82ba4b: /* 82ba4b: mov ecx, edi */
  ecx = edi;
/* 82ba4d: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 82ba4f: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82ba54u); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82ba54: mov esi, 8 */
  esi = 0x8u;
/* 82ba59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_82ba60: /* 82ba60: cmp esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82ba63: jge 0x82ba73 */
  if ((sf == of)) goto L_82ba73;
L_82ba65: /* 82ba65: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ba66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ba68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ba69: mov ecx, edi */
  ecx = edi;
/* 82ba6b: call 0x6c8fa8 */
  esp -= 4; W32(esp, 0x82ba70u); SPILL(); f_6c8fa8(); if (g_unwind) return; RELOAD();
/* 82ba70: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 82ba71: jmp 0x82ba60 */
  goto L_82ba60;
L_82ba73: /* 82ba73: mov esi, 4 */
  esi = 0x4u;
L_82ba78: /* 82ba78: cmp esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82ba7b: jge 0x82baf1 */
  if ((sf == of)) goto L_82baf1;
L_82ba7d: /* 82ba7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ba7e: mov ecx, edi */
  ecx = edi;
/* 82ba80: call 0x6c7f86 */
  esp -= 4; W32(esp, 0x82ba85u); SPILL(); f_6c7f86(); if (g_unwind) return; RELOAD();
/* 82ba85: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 82ba88: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82ba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ba8c: fdiv dword ptr [ebp + 8] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x8u)));
/* 82ba8f: mov ecx, edi */
  ecx = edi;
/* 82ba91: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82ba94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ba95: call 0x6ca05b */
  esp -= 4; W32(esp, 0x82ba9au); SPILL(); f_6ca05b(); if (g_unwind) return; RELOAD();
/* 82ba9a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 82ba9b: jmp 0x82ba78 */
  goto L_82ba78;
L_82ba9d: /* 82ba9d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82baa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82baa1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 82baa3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 82baa5: mov ecx, esi */
  ecx = esi;
/* 82baa7: call 0x6c12ee */
  esp -= 4; W32(esp, 0x82baacu); SPILL(); f_6c12ee(); if (g_unwind) return; RELOAD();
/* 82baac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82baaf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82bab6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82bab7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82bab8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82bab9: mov esp, ebp */
  esp = ebp;
/* 82babb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82babc: ret 4 */
  esp += 8; SPILL(); return;
L_82baef: /* 82baef: fstp st(0) */
  STI(0) = ST0; FPOP();
L_82baf1: /* 82baf1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82baf4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82baf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82baf6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82bafd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82bafe: mov esp, ebp */
  esp = ebp;
/* 82bb00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82bb01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_82babf(void) {
  LOAD_REGS();
L_82babf: /* 82babf: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82bac2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82bac7: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 82baca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82bacb: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82bace: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82bad3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82bad3(); return;
}

void f_82bad3(void) {
  LOAD_REGS();
L_82bad3: /* 82bad3: push 0xa153f0 */
  { uint32_t v = 0xa153f0u; esp -= 4; W32(esp, v); }
/* 82bad8: push 0xae39a8 */
  { uint32_t v = 0xae39a8u; esp -= 4; W32(esp, v); }
/* 82badd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82bae3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82bae3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82bae6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82bae8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82baea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82baefu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 82baef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82baf1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82baf4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82baf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82baf6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82bafd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82bafe: mov esp, ebp */
  esp = ebp;
/* 82bb00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82bb01: ret 4 */
  esp += 8; SPILL(); return;
}

void f_82bd40(void) {
  LOAD_REGS();
L_82bd40: /* 82bd40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82bd41: mov ebp, esp */
  ebp = esp;
/* 82bd43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82bd45: push 0x9d3140 */
  { uint32_t v = 0x9d3140u; esp -= 4; W32(esp, v); }
/* 82bd4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82bd50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82bd51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82bd58: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82bd5b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82bd5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82bd5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82bd60: mov esi, ecx */
  esi = ecx;
/* 82bd62: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 82bd68: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82bd6b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82bd6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82bd6f: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 82bd75: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 82bd7b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82bd7e: xor eax, eax */
  eax = 0;
/* 82bd80: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82bd82: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 82bd85: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 82bd88: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 82bd8b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82bd8e: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 82bd91: mov eax, edi */
  eax = edi;
/* 82bd93: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82bd95: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82bd98: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82bd9b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82bd9e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82bda1: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82bda7: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 82bdaa: fld dword ptr [0xa1524c] */
  { double v = F32((uint32_t)(0xa1524cu)); FPUSH(v); }
/* 82bdb0: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 82bdb6: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 82bdb9: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82bdbb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82bdbd: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 82bdc0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 82bdc3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82bdc6: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 82bdc9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82bdcb: mov ebx, 1 */
  ebx = 0x1u;
/* 82bdd0: test bl, ah */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82bdd2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82bdd5: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 82bdd8: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 82bddb: jne 0x82bde8 */
  if (!zf) goto L_82bde8;
L_82bddd: /* 82bddd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82bddf: mov dword ptr [ebp - 0x14], 0x43480000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x43480000u);
/* 82bde6: jmp 0x82bdeb */
  goto L_82bdeb;
L_82bde8: /* 82bde8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_82bdeb: /* 82bdeb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82bdee: mov dword ptr [ebp - 0x1c], 0x64 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x64u);
/* 82bdf5: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82bdf8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82bdfb: jmp 0x82be00 */
  goto L_82be00;
L_82be00: /* 82be00: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82be02: je 0x82bf66 */
  if (zf) goto L_82bf66;
L_82be08: /* 82be08: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82be0b: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 82be0e: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82be11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82be12: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82be15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82be18: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82be1b: mov ebx, esp */
  ebx = esp;
/* 82be1d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82be20: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82be22: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82be25: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82be28: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 82be2a: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82be2d: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82be30: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 82be33: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82be36: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82be39: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 82be3c: mov ecx, esi */
  ecx = esi;
/* 82be3e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 82be41: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 82be44: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 82be47: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x82be4cu); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 82be4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82be4e: jne 0x82bf4d */
  if (!zf) goto L_82bf4d;
L_82be54: /* 82be54: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82be57: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82be5du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82be5d: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 82be60: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 82be63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82be65: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82be68: jp 0x82be8b */
  if (pf) goto L_82be8b;
L_82be6a: /* 82be6a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 82be6d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82be70: push 0x41000000 */
  { uint32_t v = 0x41000000u; esp -= 4; W32(esp, v); }
/* 82be75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82be76: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82be79: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82be7c: mov eax, esp */
  eax = esp;
/* 82be7e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82be80: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82be83: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82be86: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82be89: jmp 0x82bee3 */
  goto L_82bee3;
L_82be8b: /* 82be8b: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 82be8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82be8f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82be92: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82be98u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82be98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82be9a: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 82be9d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82bea0: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 82bea3: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82bea6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82bea9: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82beac: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82beaf: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82beb2: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 82beb7: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82beba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82bebb: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82bebe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82bec1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82bec4: mov edx, esp */
  edx = esp;
/* 82bec6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82bec9: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82becc: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 82becf: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82bed1: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82bed4: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 82bed7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82beda: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82bedd: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82bee0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_82bee3: /* 82bee3: mov ecx, esi */
  ecx = esi;
/* 82bee5: call 0x6c4011 */
  esp -= 4; W32(esp, 0x82beeau); SPILL(); f_6c4011(); if (g_unwind) return; RELOAD();
/* 82beea: mov ebx, eax */
  ebx = eax;
/* 82beec: cmp ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82beef: je 0x82bf4d */
  if (zf) goto L_82bf4d;
L_82bef1: /* 82bef1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bef3: je 0x82bf56 */
  if (zf) goto L_82bf56;
L_82bef5: /* 82bef5: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 82befb: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf02: je 0x82bf56 */
  if (zf) goto L_82bf56;
L_82bf04: /* 82bf04: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82bf0a: xor ebx, ebx */
  ebx = 0;
/* 82bf0c: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf0f: je 0x82bf56 */
  if (zf) goto L_82bf56;
L_82bf11: /* 82bf11: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82bf13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82bf14: mov ecx, esi */
  ecx = esi;
/* 82bf16: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x82bf1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82bf1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf1e: jne 0x82bf56 */
  if (!zf) goto L_82bf56;
L_82bf20: /* 82bf20: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 82bf23: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82bf26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82bf27: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82bf2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82bf2b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82bf2e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82bf31: mov edx, esp */
  edx = esp;
/* 82bf33: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82bf35: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82bf38: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82bf3b: mov ecx, esi */
  ecx = esi;
/* 82bf3d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82bf40: call 0x6c7c20 */
  esp -= 4; W32(esp, 0x82bf45u); SPILL(); f_6c7c20(); if (g_unwind) return; RELOAD();
/* 82bf45: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 82bf48: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 82bf4b: jmp 0x82bf56 */
  goto L_82bf56;
L_82bf4d: /* 82bf4d: xor ebx, ebx */
  ebx = 0;
/* 82bf4f: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_82bf56: /* 82bf56: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 82bf59: jns 0x82be00 */
  if (!sf) goto L_82be00;
L_82bf5f: /* 82bf5f: xor ebx, ebx */
  ebx = 0;
/* 82bf61: jmp 0x82be00 */
  goto L_82be00;
L_82bf66: /* 82bf66: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82bf69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf6b: jne 0x82bf99 */
  if (!zf) goto L_82bf99;
L_82bf6d: /* 82bf6d: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 82bf70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf72: je 0x82bf99 */
  if (zf) goto L_82bf99;
L_82bf74: /* 82bf74: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 82bf79: mov ecx, edi */
  ecx = edi;
/* 82bf7b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82bf81u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82bf81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf83: je 0x82bf99 */
  if (zf) goto L_82bf99;
L_82bf85: /* 82bf85: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 82bf8b: sub eax, dword ptr [edi + 0x3a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 82bf91: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82bf93: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82bf95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82bf96: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_82bf99: /* 82bf99: mov edi, dword ptr [ebp - 0x5c] */
  edi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 82bf9c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82bfa2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82bfa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82bfa6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82bfa8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82bfaa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82bfad: mov eax, esp */
  eax = esp;
/* 82bfaf: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82bfb1: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 82bfb4: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82bfb7: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 82bfba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82bfbb: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82bfbe: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82bfc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82bfc4: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 82bfc7: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 82bfca: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82bfcd: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 82bfd3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 82bfd5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82bfd8: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 82bfdb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 82bfde: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82bfe1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82bfe3: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82bfe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82bfe6: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82bfe8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82bfeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82bfec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82bff3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82bff4: mov esp, ebp */
  esp = ebp;
/* 82bff6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82bff7: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82bdfd(void) {
  LOAD_REGS();
L_82bdfd: /* 82bdfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_82be00: /* 82be00: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82be02: je 0x82bf66 */
  if (zf) goto L_82bf66;
L_82be08: /* 82be08: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82be0b: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 82be0e: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82be11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82be12: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82be15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82be18: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82be1b: mov ebx, esp */
  ebx = esp;
/* 82be1d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82be20: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82be22: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82be25: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82be28: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 82be2a: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82be2d: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82be30: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 82be33: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82be36: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82be39: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 82be3c: mov ecx, esi */
  ecx = esi;
/* 82be3e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 82be41: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 82be44: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 82be47: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x82be4cu); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 82be4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82be4e: jne 0x82bf4d */
  if (!zf) goto L_82bf4d;
L_82be54: /* 82be54: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82be57: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82be5du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82be5d: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 82be60: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 82be63: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82be65: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82be68: jp 0x82be8b */
  if (pf) goto L_82be8b;
L_82be6a: /* 82be6a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 82be6d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82be70: push 0x41000000 */
  { uint32_t v = 0x41000000u; esp -= 4; W32(esp, v); }
/* 82be75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82be76: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82be79: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82be7c: mov eax, esp */
  eax = esp;
/* 82be7e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82be80: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82be83: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82be86: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82be89: jmp 0x82bee3 */
  goto L_82bee3;
L_82be8b: /* 82be8b: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 82be8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82be8f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82be92: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82be98u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82be98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82be9a: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 82be9d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82bea0: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 82bea3: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82bea6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82bea9: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82beac: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82beaf: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82beb2: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 82beb7: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82beba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82bebb: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82bebe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82bec1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82bec4: mov edx, esp */
  edx = esp;
/* 82bec6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82bec9: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82becc: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 82becf: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82bed1: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82bed4: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 82bed7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82beda: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82bedd: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82bee0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_82bee3: /* 82bee3: mov ecx, esi */
  ecx = esi;
/* 82bee5: call 0x6c4011 */
  esp -= 4; W32(esp, 0x82beeau); SPILL(); f_6c4011(); if (g_unwind) return; RELOAD();
/* 82beea: mov ebx, eax */
  ebx = eax;
/* 82beec: cmp ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82beef: je 0x82bf4d */
  if (zf) goto L_82bf4d;
L_82bef1: /* 82bef1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bef3: je 0x82bf56 */
  if (zf) goto L_82bf56;
L_82bef5: /* 82bef5: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 82befb: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf02: je 0x82bf56 */
  if (zf) goto L_82bf56;
L_82bf04: /* 82bf04: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82bf0a: xor ebx, ebx */
  ebx = 0;
/* 82bf0c: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf0f: je 0x82bf56 */
  if (zf) goto L_82bf56;
L_82bf11: /* 82bf11: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82bf13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82bf14: mov ecx, esi */
  ecx = esi;
/* 82bf16: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x82bf1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82bf1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf1e: jne 0x82bf56 */
  if (!zf) goto L_82bf56;
L_82bf20: /* 82bf20: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 82bf23: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82bf26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82bf27: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82bf2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82bf2b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82bf2e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82bf31: mov edx, esp */
  edx = esp;
/* 82bf33: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82bf35: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82bf38: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82bf3b: mov ecx, esi */
  ecx = esi;
/* 82bf3d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82bf40: call 0x6c7c20 */
  esp -= 4; W32(esp, 0x82bf45u); SPILL(); f_6c7c20(); if (g_unwind) return; RELOAD();
/* 82bf45: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 82bf48: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 82bf4b: jmp 0x82bf56 */
  goto L_82bf56;
L_82bf4d: /* 82bf4d: xor ebx, ebx */
  ebx = 0;
/* 82bf4f: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_82bf56: /* 82bf56: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 82bf59: jns 0x82be00 */
  if (!sf) goto L_82be00;
L_82bf5f: /* 82bf5f: xor ebx, ebx */
  ebx = 0;
/* 82bf61: jmp 0x82be00 */
  goto L_82be00;
L_82bf66: /* 82bf66: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82bf69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf6b: jne 0x82bf99 */
  if (!zf) goto L_82bf99;
L_82bf6d: /* 82bf6d: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 82bf70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf72: je 0x82bf99 */
  if (zf) goto L_82bf99;
L_82bf74: /* 82bf74: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 82bf79: mov ecx, edi */
  ecx = edi;
/* 82bf7b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82bf81u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82bf81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82bf83: je 0x82bf99 */
  if (zf) goto L_82bf99;
L_82bf85: /* 82bf85: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 82bf8b: sub eax, dword ptr [edi + 0x3a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 82bf91: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82bf93: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82bf95: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82bf96: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_82bf99: /* 82bf99: mov edi, dword ptr [ebp - 0x5c] */
  edi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 82bf9c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82bfa2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82bfa4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82bfa6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82bfa8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82bfaa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82bfad: mov eax, esp */
  eax = esp;
/* 82bfaf: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82bfb1: mov edi, dword ptr [ebp - 0x58] */
  edi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 82bfb4: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82bfb7: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 82bfba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82bfbb: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82bfbe: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82bfc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82bfc4: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 82bfc7: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 82bfca: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82bfcd: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 82bfd3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 82bfd5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82bfd8: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 82bfdb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 82bfde: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82bfe1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82bfe3: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82bfe5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82bfe6: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82bfe8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82bfeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82bfec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82bff3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82bff4: mov esp, ebp */
  esp = ebp;
/* 82bff6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82bff7: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82bffa(void) {
  LOAD_REGS();
L_82bffa: /* 82bffa: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82bffd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82c002: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 82c005: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82c006: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 82c009: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82c00eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82c00e(); return;
}

void f_82c00e(void) {
  LOAD_REGS();
L_82c00e: /* 82c00e: push 0xa15448 */
  { uint32_t v = 0xa15448u; esp -= 4; W32(esp, v); }
/* 82c013: push 0xae38f0 */
  { uint32_t v = 0xae38f0u; esp -= 4; W32(esp, v); }
/* 82c018: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82c01eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82c01e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82c021: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82c023: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82c025: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82c02au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82c02a: guest_badaddr(0x82c02a); return;
}

void f_82c0f0(void) {
  LOAD_REGS();
L_82c0f0: /* 82c0f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82c0f1: mov ebp, esp */
  ebp = esp;
/* 82c0f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82c0f5: push 0x9d3150 */
  { uint32_t v = 0x9d3150u; esp -= 4; W32(esp, v); }
/* 82c0fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82c100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82c108: sub esp, 0xf0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c10e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82c10f: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 82c112: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82c113: mov esi, ecx */
  esi = ecx;
/* 82c115: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 82c11b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82c11d: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 82c120: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82c123: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82c126: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 82c129: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 82c12c: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 82c132: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 82c134: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 82c137: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 82c13a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 82c13d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82c13e: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 82c141: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 82c146: xor ecx, ecx */
  ecx = 0;
/* 82c148: mov edi, 1 */
  edi = 0x1u;
/* 82c14d: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 82c150: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82c152: or ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 82c154: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c156: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82c159: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 82c15c: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
/* 82c15f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 82c162: mov dword ptr [ebp - 0x18], 0x41800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x41800000u);
/* 82c169: jne 0x82c1b3 */
  if (!zf) goto L_82c1b3;
L_82c16b: /* 82c16b: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82c171: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82c177: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c17a: je 0x82c196 */
  if (zf) goto L_82c196;
L_82c17c: /* 82c17c: fld dword ptr [0xa154b0] */
  { double v = F32((uint32_t)(0xa154b0u)); FPUSH(v); }
/* 82c182: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82c184: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82c186: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c189: jne 0x82c1b0 */
  if (!zf) goto L_82c1b0;
L_82c18b: /* 82c18b: mov dword ptr [ebp - 0x18], 0x43000000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x43000000u);
/* 82c192: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82c194: jmp 0x82c1b3 */
  goto L_82c1b3;
L_82c196: /* 82c196: fld dword ptr [0xa154ac] */
  { double v = F32((uint32_t)(0xa154acu)); FPUSH(v); }
/* 82c19c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82c19e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82c1a0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c1a3: jne 0x82c1b0 */
  if (!zf) goto L_82c1b0;
L_82c1a5: /* 82c1a5: mov dword ptr [ebp - 0x18], 0x41400000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x41400000u);
/* 82c1ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82c1ae: jmp 0x82c1b3 */
  goto L_82c1b3;
L_82c1b0: /* 82c1b0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_82c1b3: /* 82c1b3: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82c1b6: mov dword ptr [ebp - 0x2c], 0x64 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x64u);
/* 82c1bd: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 82c1c0: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 82c1c6: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 82c1cc: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 82c1d6: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 82c1d9: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 82c1e3: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 82c1ed: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 82c1f7: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 82c201: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 82c20b: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 82c211: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 82c218: mov dword ptr [ebp - 0x7c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff84u), 0xffffffffu);
/* 82c21f: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
L_82c222: /* 82c222: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c225: jne 0x82c6d5 */
  if (!zf) goto L_82c6d5;
L_82c22b: /* 82c22b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82c22e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 82c231: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 82c237: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82c238: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82c23b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c23e: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 82c244: mov edi, esp */
  edi = esp;
/* 82c246: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82c249: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 82c24f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82c252: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82c255: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 82c257: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82c25a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82c25d: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 82c260: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82c263: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82c266: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 82c269: mov ecx, esi */
  ecx = esi;
/* 82c26b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82c26e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 82c271: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 82c274: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x82c279u); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 82c279: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c27b: je 0x82c288 */
  if (zf) goto L_82c288;
L_82c27d: /* 82c27d: xor edi, edi */
  edi = 0;
/* 82c27f: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 82c286: jmp 0x82c222 */
  goto L_82c222;
L_82c288: /* 82c288: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 82c28b: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 82c292: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82c298u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82c298: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 82c29b: fcomp dword ptr [ebp - 0x5c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa4u)));
  FPOP();
/* 82c29e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82c2a0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82c2a3: jp 0x82c2ca */
  if (pf) goto L_82c2ca;
L_82c2a5: /* 82c2a5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82c2a8: push 0x41000000 */
  { uint32_t v = 0x41000000u; esp -= 4; W32(esp, v); }
/* 82c2ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82c2ae: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 82c2b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82c2b5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82c2b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c2bb: mov edx, esp */
  edx = esp;
/* 82c2bd: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82c2bf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82c2c2: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82c2c5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82c2c8: jmp 0x82c329 */
  goto L_82c329;
L_82c2ca: /* 82c2ca: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 82c2d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82c2d1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 82c2d4: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82c2dau); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82c2da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82c2dc: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82c2df: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82c2e2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 82c2e5: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 82c2e8: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 82c2eb: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 82c2ee: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82c2f1: push 0x40833333 */
  { uint32_t v = 0x40833333u; esp -= 4; W32(esp, v); }
/* 82c2f6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 82c2f9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 82c2fc: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 82c2ff: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82c302: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82c303: lea eax, [ebp - 0xa4] */
  eax = (uint32_t)(ebp + 0xffffff5cu);
/* 82c309: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82c30c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c30d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82c310: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82c313: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 82c316: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c319: mov ecx, esp */
  ecx = esp;
/* 82c31b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82c31d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82c320: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82c323: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82c326: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_82c329: /* 82c329: mov ecx, esi */
  ecx = esi;
/* 82c32b: call 0x6c750e */
  esp -= 4; W32(esp, 0x82c330u); SPILL(); f_6c750e(); if (g_unwind) return; RELOAD();
/* 82c330: mov edi, eax */
  edi = eax;
/* 82c332: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c335: je 0x82c475 */
  if (zf) goto L_82c475;
L_82c33b: /* 82c33b: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c33e: jne 0x82c34e */
  if (!zf) goto L_82c34e;
L_82c340: /* 82c340: xor edi, edi */
  edi = 0;
/* 82c342: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 82c349: jmp 0x82c59f */
  goto L_82c59f;
L_82c34e: /* 82c34e: mov al, byte ptr [esi + 0xc8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* 82c354: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c356: jne 0x82c378 */
  if (!zf) goto L_82c378;
L_82c358: /* 82c358: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 82c35d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82c35f: push 0xae3900 */
  { uint32_t v = 0xae3900u; esp -= 4; W32(esp, v); }
/* 82c364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82c365: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82c36bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82c36b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82c36e: xor edi, edi */
  edi = 0;
/* 82c370: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 82c373: jmp 0x82c59f */
  goto L_82c59f;
L_82c378: /* 82c378: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82c37e: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c381: je 0x82c3af */
  if (zf) goto L_82c3af;
L_82c383: /* 82c383: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 82c386: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82c389: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82c38a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82c38b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 82c38e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c391: mov eax, esp */
  eax = esp;
/* 82c393: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82c395: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 82c398: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82c39b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82c39e: mov ecx, esi */
  ecx = esi;
/* 82c3a0: xor edi, edi */
  edi = 0;
/* 82c3a2: call 0x6c17da */
  esp -= 4; W32(esp, 0x82c3a7u); SPILL(); f_6c17da(); if (g_unwind) return; RELOAD();
/* 82c3a7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 82c3aa: jmp 0x82c59c */
  goto L_82c59c;
L_82c3af: /* 82c3af: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c3b2: je 0x82c447 */
  if (zf) goto L_82c447;
L_82c3b8: /* 82c3b8: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82c3bb: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 82c3be: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c3c1: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 82c3c4: jne 0x82c409 */
  if (!zf) goto L_82c409;
L_82c3c6: /* 82c3c6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c3c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82c3cb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 82c3ce: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82c3d1: je 0x82c3ee */
  if (zf) goto L_82c3ee;
L_82c3d3: /* 82c3d3: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82c3d6: fsub dword ptr [ebx + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x2d8u)));
/* 82c3dc: fadd dword ptr [esi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d8u)));
/* 82c3e2: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 82c3e8: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
L_82c3ee: /* 82c3ee: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c3f1: mov edi, esp */
  edi = esp;
/* 82c3f3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 82c3f5: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 82c3f8: mov ecx, esi */
  ecx = esi;
/* 82c3fa: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 82c3fd: call 0x6c95fc */
  esp -= 4; W32(esp, 0x82c402u); SPILL(); f_6c95fc(); if (g_unwind) return; RELOAD();
/* 82c402: mov edi, eax */
  edi = eax;
/* 82c404: jmp 0x82c59f */
  goto L_82c59f;
L_82c409: /* 82c409: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c40b: jne 0x82c59f */
  if (!zf) goto L_82c59f;
L_82c411: /* 82c411: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82c414: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82c417: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c41a: mov edx, esp */
  edx = esp;
/* 82c41c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82c41e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82c421: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82c424: mov ecx, esi */
  ecx = esi;
/* 82c426: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82c429: call 0x6c22de */
  esp -= 4; W32(esp, 0x82c42eu); SPILL(); f_6c22de(); if (g_unwind) return; RELOAD();
/* 82c42e: mov edi, eax */
  edi = eax;
/* 82c430: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c433: jne 0x82c59f */
  if (!zf) goto L_82c59f;
L_82c439: /* 82c439: xor edi, edi */
  edi = 0;
/* 82c43b: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 82c442: jmp 0x82c59f */
  goto L_82c59f;
L_82c447: /* 82c447: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c44a: jne 0x82c59f */
  if (!zf) goto L_82c59f;
L_82c450: /* 82c450: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82c453: fcomp qword ptr [0xa138d8] */
  fpu_com(ST0, F64((uint32_t)(0xa138d8u)));
  FPOP();
/* 82c459: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82c45b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c45e: jne 0x82c59f */
  if (!zf) goto L_82c59f;
L_82c464: /* 82c464: mov edi, 1 */
  edi = 0x1u;
/* 82c469: mov dword ptr [ebp - 0x18], 0x420c0000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x420c0000u);
/* 82c470: jmp 0x82c59f */
  goto L_82c59f;
L_82c475: /* 82c475: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 82c47b: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c47e: je 0x82c59f */
  if (zf) goto L_82c59f;
L_82c484: /* 82c484: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 82c48a: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82c490: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 82c496: xor eax, eax */
  eax = 0;
/* 82c498: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 82c49e: mov dword ptr [ebp - 0xd0], eax */
  W32((uint32_t)(ebp + 0xffffff30u), eax);
/* 82c4a4: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 82c4aa: mov dword ptr [ebp - 0xc8], eax */
  W32((uint32_t)(ebp + 0xffffff38u), eax);
/* 82c4b0: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 82c4b6: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 82c4bc: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 82c4c2: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 82c4c8: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 82c4ce: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 82c4d4: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 82c4d7: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 82c4da: mov eax, edx */
  eax = edx;
/* 82c4dc: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 82c4e2: mov dword ptr [ebp - 0xe4], eax */
  W32((uint32_t)(ebp + 0xffffff1cu), eax);
/* 82c4e8: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 82c4ee: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 82c4f4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 82c4fa: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82c500: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c503: mov eax, esp */
  eax = esp;
/* 82c505: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 82c508: mov ebx, dword ptr [ebp - 0x58] */
  ebx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 82c50b: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82c50d: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 82c510: mov ebx, dword ptr [ebp - 0x54] */
  ebx = R32((uint32_t)(ebp + 0xffffffacu));
/* 82c513: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82c516: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82c519: mov ebx, dword ptr [ebp - 0x50] */
  ebx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 82c51c: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82c522: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82c525: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 82c52b: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82c530: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 82c536: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c537: fadd qword ptr [0xa14938] */
  ST0 = ST0 + (F64((uint32_t)(0xa14938u)));
/* 82c53d: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 82c540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82c542: fmul qword ptr [0xa14ed8] */
  ST0 = ST0 * (F64((uint32_t)(0xa14ed8u)));
/* 82c548: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 82c54e: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 82c558: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 82c55e: mov dword ptr [ebp - 0xac], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff54u), 0xffffffffu);
/* 82c568: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 82c56e: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 82c571: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 82c574: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c575: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 82c578: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82c57a: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82c580u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82c580: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 82c586: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82c58c: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 82c58f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82c591: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82c594: jp 0x82c59f */
  if (pf) goto L_82c59f;
L_82c596: /* 82c596: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82c599: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_82c59c: /* 82c59c: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_82c59f: /* 82c59f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82c5a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82c5a2: mov ecx, esi */
  ecx = esi;
/* 82c5a4: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x82c5aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82c5aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c5ac: je 0x82c5b8 */
  if (zf) goto L_82c5b8;
L_82c5ae: /* 82c5ae: xor edi, edi */
  edi = 0;
/* 82c5b0: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 82c5b3: jmp 0x82c6c5 */
  goto L_82c6c5;
L_82c5b8: /* 82c5b8: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 82c5be: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c5c5: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82c5cb: je 0x82c605 */
  if (zf) goto L_82c605;
L_82c5cd: /* 82c5cd: xor edi, edi */
  edi = 0;
/* 82c5cf: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c5d2: je 0x82c6c5 */
  if (zf) goto L_82c6c5;
L_82c5d8: /* 82c5d8: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82c5db: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82c5de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82c5df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c5e0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82c5e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c5e6: mov ecx, esp */
  ecx = esp;
/* 82c5e8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82c5ea: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 82c5ed: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82c5f0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82c5f3: mov ecx, esi */
  ecx = esi;
/* 82c5f5: call 0x6c7c20 */
  esp -= 4; W32(esp, 0x82c5fau); SPILL(); f_6c7c20(); if (g_unwind) return; RELOAD();
/* 82c5fa: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 82c5fd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 82c600: jmp 0x82c6c5 */
  goto L_82c6c5;
L_82c605: /* 82c605: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82c607: jns 0x82c6c5 */
  if (!sf) goto L_82c6c5;
L_82c60d: /* 82c60d: push 0xb6ec48 */
  { uint32_t v = 0xb6ec48u; esp -= 4; W32(esp, v); }
/* 82c612: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82c618u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82c618: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c61a: je 0x82c6c5 */
  if (zf) goto L_82c6c5;
L_82c620: /* 82c620: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c622: je 0x82c6c5 */
  if (zf) goto L_82c6c5;
L_82c628: /* 82c628: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 82c62e: cmp dword ptr [ebx + 0x16c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x16cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82c634: jne 0x82c6c5 */
  if (!zf) goto L_82c6c5;
L_82c63a: /* 82c63a: mov ebx, dword ptr [esi + 0x4fc] */
  ebx = R32((uint32_t)(esi + 0x4fcu));
/* 82c640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c641: xor edi, edi */
  edi = 0;
/* 82c643: call 0x6c14f1 */
  esp -= 4; W32(esp, 0x82c648u); SPILL(); f_6c14f1(); if (g_unwind) return; RELOAD();
/* 82c648: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82c64b: mov dword ptr [esi + 0x4fc], eax */
  W32((uint32_t)(esi + 0x4fcu), eax);
/* 82c651: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 82c657: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82c65a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82c65d: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 82c663: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82c664: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82c667: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 82c66d: fmul dword ptr [eax + 0x460] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x460u)));
/* 82c673: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 82c675: fmul dword ptr [eax + 0x45c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x45cu)));
/* 82c67b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82c67d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 82c67f: fmul dword ptr [eax + 0x458] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x458u)));
/* 82c685: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82c687: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82c68a: call 0x6cae61 */
  esp -= 4; W32(esp, 0x82c68fu); SPILL(); f_6cae61(); if (g_unwind) return; RELOAD();
/* 82c68f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 82c692: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82c695: mov ecx, dword ptr [eax + 0x2d8] */
  ecx = R32((uint32_t)(eax + 0x2d8u));
/* 82c69b: mov edx, dword ptr [esi + 0x2d8] */
  edx = R32((uint32_t)(esi + 0x2d8u));
/* 82c6a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82c6a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82c6a3: call 0x6c47be */
  esp -= 4; W32(esp, 0x82c6a8u); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 82c6a8: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 82c6ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82c6ae: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 82c6b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82c6b7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82c6ba: je 0x82c6bf */
  if (zf) goto L_82c6bf;
L_82c6bc: /* 82c6bc: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_82c6bf: /* 82c6bf: mov dword ptr [esi + 0x4fc], ebx */
  W32((uint32_t)(esi + 0x4fcu), ebx);
L_82c6c5: /* 82c6c5: dec dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 82c6c8: jns 0x82c222 */
  if (!sf) goto L_82c222;
L_82c6ce: /* 82c6ce: xor edi, edi */
  edi = 0;
/* 82c6d0: jmp 0x82c222 */
  goto L_82c222;
L_82c6d5: /* 82c6d5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82c6d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c6da: jne 0x82c708 */
  if (!zf) goto L_82c708;
L_82c6dc: /* 82c6dc: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 82c6df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c6e1: je 0x82c708 */
  if (zf) goto L_82c708;
L_82c6e3: /* 82c6e3: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 82c6e8: mov ecx, edi */
  ecx = edi;
/* 82c6ea: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82c6f0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82c6f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c6f2: je 0x82c708 */
  if (zf) goto L_82c708;
L_82c6f4: /* 82c6f4: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 82c6fa: sub eax, dword ptr [edi + 0x3a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 82c700: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82c702: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82c704: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82c705: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_82c708: /* 82c708: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* 82c70b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82c711: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82c713: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82c715: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82c717: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82c719: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c71c: mov edx, esp */
  edx = esp;
/* 82c71e: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 82c720: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 82c723: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 82c726: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 82c729: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82c72a: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 82c72d: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x82c733u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82c733: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82c736: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 82c739: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82c73c: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 82c742: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 82c744: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82c747: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 82c74a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82c74d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 82c74f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 82c751: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82c752: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 82c755: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82c757: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82c75a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82c75b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82c762: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82c763: mov esp, ebp */
  esp = ebp;
/* 82c765: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82c766: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82c769(void) {
  LOAD_REGS();
L_82c769: /* 82c769: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* 82c76f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82c774: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82c777: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82c778: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 82c77b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82c780u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82c780(); return;
}

void f_82c780(void) {
  LOAD_REGS();
L_82c780: /* 82c780: push 0xa15478 */
  { uint32_t v = 0xa15478u; esp -= 4; W32(esp, v); }
/* 82c785: push 0xae3930 */
  { uint32_t v = 0xae3930u; esp -= 4; W32(esp, v); }
/* 82c78a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82c790u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82c790: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82c793: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82c795: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82c797: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82c79cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82c79c: guest_badaddr(0x82c79c); return;
}

void f_82c950(void) {
  LOAD_REGS();
L_82c950: /* 82c950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82c951: mov ebp, esp */
  ebp = esp;
/* 82c953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82c955: push 0x9d3160 */
  { uint32_t v = 0x9d3160u; esp -= 4; W32(esp, v); }
/* 82c95a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82c960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82c968: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c96b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 82c96e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82c96f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82c970: mov esi, ecx */
  esi = ecx;
/* 82c972: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82c973: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 82c979: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 82c97b: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 82c97e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 82c981: or edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 82c984: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82c987: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 82c98a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82c98c: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82c98f: lea edx, [esi + 0x188] */
  edx = (uint32_t)(esi + 0x188u);
/* 82c995: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 82c997: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c99a: mov eax, esp */
  eax = esp;
/* 82c99c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82c99e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 82c9a1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 82c9a4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82c9a7: mov ecx, esi */
  ecx = esi;
/* 82c9a9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82c9b0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 82c9b3: call 0x6c24a5 */
  esp -= 4; W32(esp, 0x82c9b8u); SPILL(); f_6c24a5(); if (g_unwind) return; RELOAD();
/* 82c9b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82c9ba: jne 0x82c9cf */
  if (!zf) goto L_82c9cf;
L_82c9bc: /* 82c9bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82c9bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82c9c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82c9c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82c9c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82c9c9: mov esp, ebp */
  esp = ebp;
/* 82c9cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82c9cc: ret 0x14 */
  esp += 24; SPILL(); return;
L_82c9cf: /* 82c9cf: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 82c9d2: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82c9d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82c9d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82c9d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82c9da: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82c9dd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82c9e0: mov edx, esp */
  edx = esp;
/* 82c9e2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82c9e4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82c9e7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82c9ea: mov ecx, esi */
  ecx = esi;
/* 82c9ec: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82c9ef: call 0x6c3dff */
  esp -= 4; W32(esp, 0x82c9f4u); SPILL(); f_6c3dff(); if (g_unwind) return; RELOAD();
/* 82c9f4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82c9fa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82c9fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82c9fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82ca00: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82ca02: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 82ca05: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ca08: mov eax, esp */
  eax = esp;
/* 82ca0a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82ca0c: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82ca0f: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82ca12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ca13: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82ca16: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82ca1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82ca1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82ca1f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82ca22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82ca23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82ca24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82ca2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82ca2c: mov esp, ebp */
  esp = ebp;
/* 82ca2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82ca2f: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82ca32(void) {
  LOAD_REGS();
L_82ca32: /* 82ca32: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82ca35: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82ca3a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 82ca3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ca3e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 82ca41: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ca46u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82ca46(); return;
}

void f_82ca46(void) {
  LOAD_REGS();
L_82ca46: /* 82ca46: push 0xa154b4 */
  { uint32_t v = 0xa154b4u; esp -= 4; W32(esp, v); }
/* 82ca4b: push 0xae3938 */
  { uint32_t v = 0xae3938u; esp -= 4; W32(esp, v); }
/* 82ca50: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82ca56u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82ca56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82ca59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ca5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ca5d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ca62u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82ca62: guest_badaddr(0x82ca62); return;
}

void f_82cac0(void) {
  LOAD_REGS();
L_82cac0: /* 82cac0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 82cac4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 82cac8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cac9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82caca: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 82cace: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cad1: mov eax, esp */
  eax = esp;
/* 82cad3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 82cad5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 82cad9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82cadc: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 82cae0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 82cae3: call 0x6c3dff */
  esp -= 4; W32(esp, 0x82cae8u); SPILL(); f_6c3dff(); if (g_unwind) return; RELOAD();
/* 82cae8: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82cb00(void) {
  LOAD_REGS();
L_82cb00: /* 82cb00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82cb01: mov ebp, esp */
  ebp = esp;
/* 82cb03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82cb05: push 0x9d3170 */
  { uint32_t v = 0x9d3170u; esp -= 4; W32(esp, v); }
/* 82cb0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82cb10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cb11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82cb18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cb1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82cb1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82cb1d: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 82cb20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82cb21: mov edi, ecx */
  edi = ecx;
/* 82cb23: mov eax, dword ptr [edi + 0x4fc] */
  eax = R32((uint32_t)(edi + 0x4fcu));
/* 82cb29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cb2b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82cb2e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82cb35: je 0x82cbb1 */
  if (zf) goto L_82cbb1;
L_82cb37: /* 82cb37: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cb39: je 0x82cbb1 */
  if (zf) goto L_82cbb1;
L_82cb3b: /* 82cb3b: cmp byte ptr [esi + 0x50], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cb3f: je 0x82cb52 */
  if (zf) goto L_82cb52;
L_82cb41: /* 82cb41: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 82cb46: mov ecx, esi */
  ecx = esi;
/* 82cb48: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82cb4eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82cb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cb50: je 0x82cbb1 */
  if (zf) goto L_82cbb1;
L_82cb52: /* 82cb52: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 82cb57: mov ecx, esi */
  ecx = esi;
/* 82cb59: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82cb5fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82cb5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cb61: je 0x82cb6b */
  if (zf) goto L_82cb6b;
L_82cb63: /* 82cb63: mov eax, dword ptr [esi + 0x3a8] */
  eax = R32((uint32_t)(esi + 0x3a8u));
/* 82cb69: jmp 0x82cb90 */
  goto L_82cb90;
L_82cb6b: /* 82cb6b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 82cb6d: mov ecx, esi */
  ecx = esi;
/* 82cb6f: call dword ptr [eax + 0x184] */
  { uint32_t t = R32((uint32_t)(eax + 0x184u)); esp -= 4; W32(esp, 0x82cb75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82cb75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cb77: je 0x82cbb1 */
  if (zf) goto L_82cbb1;
L_82cb79: /* 82cb79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82cb7a: call 0x6cacdb */
  esp -= 4; W32(esp, 0x82cb7fu); SPILL(); f_6cacdb(); if (g_unwind) return; RELOAD();
/* 82cb7f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82cb82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cb84: je 0x82cbb1 */
  if (zf) goto L_82cbb1;
L_82cb86: /* 82cb86: mov eax, dword ptr [eax + 0x4fc] */
  eax = R32((uint32_t)(eax + 0x4fcu));
/* 82cb8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cb8e: je 0x82cbb1 */
  if (zf) goto L_82cbb1;
L_82cb90: /* 82cb90: cmp eax, dword ptr [edi + 0x4fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4fcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82cb96: jne 0x82cbb1 */
  if (!zf) goto L_82cbb1;
L_82cb98: /* 82cb98: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82cb9b: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 82cb9e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82cba1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82cba8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82cba9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82cbaa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82cbab: mov esp, ebp */
  esp = ebp;
/* 82cbad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82cbae: ret 0x14 */
  esp += 24; SPILL(); return;
L_82cbb1: /* 82cbb1: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82cbb4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82cbb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82cbb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82cbb9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82cbbc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cbbf: mov edx, esp */
  edx = esp;
/* 82cbc1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82cbc3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82cbc6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82cbc9: mov ecx, edi */
  ecx = edi;
/* 82cbcb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82cbce: call 0x6c3dff */
  esp -= 4; W32(esp, 0x82cbd3u); SPILL(); f_6c3dff(); if (g_unwind) return; RELOAD();
/* 82cbd3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82cbd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82cbd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82cbd8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82cbdf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82cbe0: mov esp, ebp */
  esp = ebp;
/* 82cbe2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82cbe3: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82cbe6(void) {
  LOAD_REGS();
L_82cbe6: /* 82cbe6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82cbe9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82cbee: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 82cbf1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82cbf2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 82cbf5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82cbfau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82cbfa(); return;
}

void f_82cbfa(void) {
  LOAD_REGS();
L_82cbfa: /* 82cbfa: push 0xa154e8 */
  { uint32_t v = 0xa154e8u; esp -= 4; W32(esp, v); }
/* 82cbff: push 0xae38e8 */
  { uint32_t v = 0xae38e8u; esp -= 4; W32(esp, v); }
/* 82cc04: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82cc0au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82cc0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82cc0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cc0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cc11: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82cc16u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82cc16: guest_badaddr(0x82cc16); return;
}

void f_82cc70(void) {
  LOAD_REGS();
L_82cc70: /* 82cc70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82cc71: mov ebp, esp */
  ebp = esp;
/* 82cc73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82cc75: push 0x9d3180 */
  { uint32_t v = 0x9d3180u; esp -= 4; W32(esp, v); }
/* 82cc7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82cc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cc81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82cc88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cc8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82cc8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82cc8d: mov esi, ecx */
  esi = ecx;
/* 82cc8f: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82cc95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82cc96: xor edi, edi */
  edi = 0;
/* 82cc98: xor ebx, ebx */
  ebx = 0;
/* 82cc9a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82cc9c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82cc9f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 82cca2: jns 0x82ccb3 */
  if (!sf) goto L_82ccb3;
L_82cca4: /* 82cca4: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82cca6: jne 0x82ccb3 */
  if (!zf) goto L_82ccb3;
L_82cca8: /* 82cca8: mov ebx, 1 */
  ebx = 0x1u;
/* 82ccad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ccae: call 0x6c77f7 */
  esp -= 4; W32(esp, 0x82ccb3u); SPILL(); f_6c77f7(); if (g_unwind) return; RELOAD();
L_82ccb3: /* 82ccb3: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 82ccb9: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82ccc0: je 0x82ccea */
  if (zf) goto L_82ccea;
L_82ccc2: /* 82ccc2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82ccc5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82ccc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ccc9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82cccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ccce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ccd1: mov ecx, esp */
  ecx = esp;
/* 82ccd3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82ccd5: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 82ccd8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82ccdb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82ccde: mov ecx, esi */
  ecx = esi;
/* 82cce0: call 0x6c7c20 */
  esp -= 4; W32(esp, 0x82cce5u); SPILL(); f_6c7c20(); if (g_unwind) return; RELOAD();
/* 82cce5: jmp 0x82cdac */
  goto L_82cdac;
L_82ccea: /* 82ccea: push 0xb6ec48 */
  { uint32_t v = 0xb6ec48u; esp -= 4; W32(esp, v); }
/* 82ccef: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82ccf5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82ccf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ccf7: je 0x82cd21 */
  if (zf) goto L_82cd21;
L_82ccf9: /* 82ccf9: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82ccfc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82ccff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cd00: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82cd03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cd05: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cd08: mov ecx, esp */
  ecx = esp;
/* 82cd0a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82cd0c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 82cd0f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82cd12: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82cd15: mov ecx, esi */
  ecx = esi;
/* 82cd17: call 0x6c1a7d */
  esp -= 4; W32(esp, 0x82cd1cu); SPILL(); f_6c1a7d(); if (g_unwind) return; RELOAD();
/* 82cd1c: jmp 0x82cdac */
  goto L_82cdac;
L_82cd21: /* 82cd21: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82cd24: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cd26: je 0x82cd89 */
  if (zf) goto L_82cd89;
L_82cd28: /* 82cd28: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cd2a: je 0x82cd89 */
  if (zf) goto L_82cd89;
L_82cd2c: /* 82cd2c: cmp al, 0xb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cd2e: je 0x82cd89 */
  if (zf) goto L_82cd89;
L_82cd30: /* 82cd30: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cd32: je 0x82cd89 */
  if (zf) goto L_82cd89;
L_82cd34: /* 82cd34: cmp al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cd36: jne 0x82cd5d */
  if (!zf) goto L_82cd5d;
L_82cd38: /* 82cd38: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82cd3b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82cd3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cd3f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82cd42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cd44: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cd47: mov ecx, esp */
  ecx = esp;
/* 82cd49: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82cd4b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 82cd4e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82cd51: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82cd54: mov ecx, esi */
  ecx = esi;
/* 82cd56: call 0x6c17da */
  esp -= 4; W32(esp, 0x82cd5bu); SPILL(); f_6c17da(); if (g_unwind) return; RELOAD();
/* 82cd5b: jmp 0x82cdac */
  goto L_82cdac;
L_82cd5d: /* 82cd5d: cmp al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cd5f: jne 0x82cdae */
  if (!zf) goto L_82cdae;
L_82cd61: /* 82cd61: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 82cd64: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 82cd66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82cd67: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82cd6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cd6c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cd6f: mov edx, esp */
  edx = esp;
/* 82cd71: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 82cd73: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82cd76: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82cd79: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 82cd7c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 82cd7f: mov ecx, esi */
  ecx = esi;
/* 82cd81: call dword ptr [eax + 0x1a0] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a0u)); esp -= 4; W32(esp, 0x82cd87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82cd87: jmp 0x82cdac */
  goto L_82cdac;
L_82cd89: /* 82cd89: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 82cd8c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82cd8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82cd90: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 82cd93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cd95: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cd98: mov eax, esp */
  eax = esp;
/* 82cd9a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82cd9c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 82cd9f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82cda2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82cda5: mov ecx, esi */
  ecx = esi;
/* 82cda7: call 0x6c3dff */
  esp -= 4; W32(esp, 0x82cdacu); SPILL(); f_6c3dff(); if (g_unwind) return; RELOAD();
L_82cdac: /* 82cdac: mov edi, eax */
  edi = eax;
L_82cdae: /* 82cdae: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cdb0: je 0x82cdbb */
  if (zf) goto L_82cdbb;
L_82cdb2: /* 82cdb2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82cdb4: mov ecx, esi */
  ecx = esi;
/* 82cdb6: call 0x6c7220 */
  esp -= 4; W32(esp, 0x82cdbbu); SPILL(); f_6c7220(); if (g_unwind) return; RELOAD();
L_82cdbb: /* 82cdbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82cdbe: mov eax, edi */
  eax = edi;
/* 82cdc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82cdc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82cdc2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82cdc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82cdca: mov esp, ebp */
  esp = ebp;
/* 82cdcc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82cdcd: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_82cdd0(void) {
  LOAD_REGS();
L_82cdd0: /* 82cdd0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82cdd3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82cdd8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 82cddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cddc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 82cddf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82cde4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82cde4(); return;
}

void f_82cde4(void) {
  LOAD_REGS();
L_82cde4: /* 82cde4: push 0xa15520 */
  { uint32_t v = 0xa15520u; esp -= 4; W32(esp, v); }
/* 82cde9: push 0xae38d8 */
  { uint32_t v = 0xae38d8u; esp -= 4; W32(esp, v); }
/* 82cdee: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82cdf4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82cdf4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82cdf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cdf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82cdfb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ce00u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82ce00: guest_badaddr(0x82ce00); return;
}

void f_82ce80(void) {
  LOAD_REGS();
L_82ce80: /* 82ce80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82ce81: mov ebp, esp */
  ebp = esp;
/* 82ce83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82ce85: push 0x9d3190 */
  { uint32_t v = 0x9d3190u; esp -= 4; W32(esp, v); }
/* 82ce8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82ce90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ce91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82ce98: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ce9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ce9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ce9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82ce9e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 82cea1: xor ebx, ebx */
  ebx = 0;
/* 82cea3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82cea5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82cea8: mov esi, ecx */
  esi = ecx;
/* 82ceaa: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 82cead: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82ceb3: /* 82ceb3: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 82ceb9: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82cebc: jne 0x82d0be */
  if (!zf) goto L_82d0be;
L_82cec2: /* 82cec2: cmp byte ptr [edi + 0x50], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82cec6: jne 0x82ced7 */
  if (!zf) goto L_82ced7;
L_82cec8: /* 82cec8: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82cece: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82ced1: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82ced7: /* 82ced7: push 0xb68ee8 */
  { uint32_t v = 0xb68ee8u; esp -= 4; W32(esp, v); }
/* 82cedc: mov ecx, edi */
  ecx = edi;
/* 82cede: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82cee4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82cee4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cee6: je 0x82cef9 */
  if (zf) goto L_82cef9;
L_82cee8: /* 82cee8: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 82ceee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cef0: je 0x82cef9 */
  if (zf) goto L_82cef9;
L_82cef2: /* 82cef2: mov ebx, edi */
  ebx = edi;
/* 82cef4: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 82cef7: mov edi, eax */
  edi = eax;
L_82cef9: /* 82cef9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cefb: je 0x82d02a */
  if (zf) goto L_82d02a;
L_82cf01: /* 82cf01: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 82cf06: mov ecx, edi */
  ecx = edi;
/* 82cf08: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82cf0eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82cf0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cf10: je 0x82d02a */
  if (zf) goto L_82d02a;
L_82cf16: /* 82cf16: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 82cf1c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82cf1f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cf21: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 82cf27: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 82cf2d: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 82cf33: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 82cf39: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 82cf3f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82cf42: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82cf45: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82cf48: jne 0x82d002 */
  if (!zf) goto L_82d002;
L_82cf4e: /* 82cf4e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82cf51: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82cf54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82cf55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82cf58: mov eax, esp */
  eax = esp;
/* 82cf5a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82cf5c: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82cf5f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 82cf62: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82cf65: mov ecx, esi */
  ecx = esi;
/* 82cf67: call 0x6c14a6 */
  esp -= 4; W32(esp, 0x82cf6cu); SPILL(); f_6c14a6(); if (g_unwind) return; RELOAD();
/* 82cf6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cf6e: je 0x82cf8e */
  if (zf) goto L_82cf8e;
L_82cf70: /* 82cf70: mov dword ptr [esi + 0x3c4], edi */
  W32((uint32_t)(esi + 0x3c4u), edi);
/* 82cf76: mov eax, 1 */
  eax = 0x1u;
/* 82cf7b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82cf7e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82cf85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82cf86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82cf87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82cf88: mov esp, ebp */
  esp = ebp;
/* 82cf8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82cf8b: ret 0xc */
  esp += 16; SPILL(); return;
L_82cf8e: /* 82cf8e: mov ecx, esi */
  ecx = esi;
/* 82cf90: call 0x6c9a7f */
  esp -= 4; W32(esp, 0x82cf95u); SPILL(); f_6c9a7f(); if (g_unwind) return; RELOAD();
/* 82cf95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cf97: je 0x82d002 */
  if (zf) goto L_82d002;
L_82cf99: /* 82cf99: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 82cf9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82cfa0: call 0x6c413d */
  esp -= 4; W32(esp, 0x82cfa5u); SPILL(); f_6c413d(); if (g_unwind) return; RELOAD();
/* 82cfa5: mov edi, eax */
  edi = eax;
/* 82cfa7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cfa9: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82cfaf: /* 82cfaf: fld dword ptr [esi + 0x41c] */
  { double v = F32((uint32_t)(esi + 0x41cu)); FPUSH(v); }
/* 82cfb5: call 0x99c958 */
  esp -= 4; W32(esp, 0x82cfbau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82cfba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cfbb: mov ecx, esi */
  ecx = esi;
/* 82cfbd: call 0x6cc653 */
  esp -= 4; W32(esp, 0x82cfc2u); SPILL(); f_6cc653(); if (g_unwind) return; RELOAD();
/* 82cfc2: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82cfc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cfc9: call 0x99c958 */
  esp -= 4; W32(esp, 0x82cfceu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82cfce: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82cfd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cfd5: call 0x99c958 */
  esp -= 4; W32(esp, 0x82cfdau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82cfda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82cfdb: mov ecx, edi */
  ecx = edi;
/* 82cfdd: call 0x6c66e0 */
  esp -= 4; W32(esp, 0x82cfe2u); SPILL(); f_6c66e0(); if (g_unwind) return; RELOAD();
/* 82cfe2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82cfe4: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82cfea: /* 82cfea: mov eax, 1 */
  eax = 0x1u;
/* 82cfef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82cff2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82cff9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82cffa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82cffb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82cffc: mov esp, ebp */
  esp = ebp;
/* 82cffe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82cfff: ret 0xc */
  esp += 16; SPILL(); return;
L_82d002: /* 82d002: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 82d005: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82d00bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82d00b: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 82d00e: fcomp dword ptr [0xa15580] */
  fpu_com(ST0, F32((uint32_t)(0xa15580u)));
  FPOP();
/* 82d014: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d016: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d019: jne 0x82d02a */
  if (!zf) goto L_82d02a;
L_82d01b: /* 82d01b: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 82d021: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82d024: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82d02a: /* 82d02a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d02c: je 0x82d033 */
  if (zf) goto L_82d033;
L_82d02e: /* 82d02e: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 82d031: mov edi, ebx */
  edi = ebx;
L_82d033: /* 82d033: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 82d039: add edi, 0x170 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 82d03f: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 82d045: lea ebx, [esi + 0x170] */
  ebx = (uint32_t)(esi + 0x170u);
/* 82d04b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82d04e: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82d051: fsub dword ptr [ebx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x4u)));
/* 82d054: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 82d056: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 82d058: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82d05b: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82d05e: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82d061: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82d067u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82d067: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 82d06d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82d070: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82d073: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 82d076: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82d079: jne 0x82d0de */
  if (!zf) goto L_82d0de;
L_82d07b: /* 82d07b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82d07e: fcomp dword ptr [0xa1327c] */
  fpu_com(ST0, F32((uint32_t)(0xa1327cu)));
  FPOP();
/* 82d084: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d086: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d089: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82d08b: /* 82d08b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82d08e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82d090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d091: mov ecx, esi */
  ecx = esi;
/* 82d093: call dword ptr [edx + 0x1a4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a4u)); esp -= 4; W32(esp, 0x82d099u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d099: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d09b: jne 0x82d0be */
  if (!zf) goto L_82d0be;
L_82d09d: /* 82d09d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82d0a0: mov eax, dword ptr [ecx + 0x16c] */
  eax = R32((uint32_t)(ecx + 0x16cu));
/* 82d0a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d0a8: je 0x82d0d3 */
  if (zf) goto L_82d0d3;
L_82d0aa: /* 82d0aa: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d0b1: je 0x82d0d3 */
  if (zf) goto L_82d0d3;
L_82d0b3: /* 82d0b3: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82d0b9: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d0bc: jne 0x82d0de */
  if (!zf) goto L_82d0de;
L_82d0be: /* 82d0be: xor eax, eax */
  eax = 0;
/* 82d0c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82d0c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82d0ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82d0cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82d0cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82d0cd: mov esp, ebp */
  esp = ebp;
/* 82d0cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82d0d0: ret 0xc */
  esp += 16; SPILL(); return;
L_82d0d3: /* 82d0d3: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82d0d9: test ah, 0x50 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x50u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d0dc: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82d0de: /* 82d0de: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82d0e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d0e3: jne 0x82d187 */
  if (!zf) goto L_82d187;
L_82d0e9: /* 82d0e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d0eb: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82d0f0: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 82d0f6: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x82d0fbu); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 82d0fb: mov edx, ebx */
  edx = ebx;
/* 82d0fd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 82d0ff: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 82d102: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 82d105: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82d108: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 82d10b: fadd dword ptr [esi + 0x444] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x444u)));
/* 82d111: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d114: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 82d117: mov ecx, esp */
  ecx = esp;
/* 82d119: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 82d120: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82d123: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82d126: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82d128: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 82d12f: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82d132: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82d135: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 82d13c: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82d13f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82d142: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 82d147: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 82d14a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d14b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82d152: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82d155: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82d15b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 82d15d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d15e: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 82d164: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82d165: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82d16bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d16b: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 82d16e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82d174: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d176: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82d179: jnp 0x82d187 */
  if (!pf) goto L_82d187;
L_82d17b: /* 82d17b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82d17e: cmp dword ptr [ebp - 0x80], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82d181: jne 0x82d0be */
  if (!zf) goto L_82d0be;
L_82d187: /* 82d187: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82d18a: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 82d18f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82d195u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82d195: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d197: je 0x82d1f1 */
  if (zf) goto L_82d1f1;
L_82d199: /* 82d199: mov ecx, dword ptr [esi + 0x3c0] */
  ecx = R32((uint32_t)(esi + 0x3c0u));
/* 82d19f: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82d1a5: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 82d1ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d1ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d1ad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82d1b0: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x82d1b5u); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 82d1b5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82d1b8: fadd dword ptr [ecx + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x2d4u)));
/* 82d1be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82d1c1: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 82d1c7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82d1c9: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 82d1cb: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82d1ce: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82d1d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d1d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82d1d4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82d1d7: jp 0x82d1f4 */
  if (pf) goto L_82d1f4;
L_82d1d9: /* 82d1d9: mov eax, 1 */
  eax = 0x1u;
/* 82d1de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82d1e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82d1e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82d1e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82d1ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82d1eb: mov esp, ebp */
  esp = ebp;
/* 82d1ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82d1ee: ret 0xc */
  esp += 16; SPILL(); return;
L_82d1f1: /* 82d1f1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_82d1f4: /* 82d1f4: mov edx, ebx */
  edx = ebx;
/* 82d1f6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 82d1f8: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82d1fb: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 82d1fe: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 82d201: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 82d204: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82d207: mov eax, edi */
  eax = edi;
/* 82d209: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82d20b: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82d20e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82d211: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 82d214: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82d217: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82d21a: cmp byte ptr [ecx + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82d21e: jne 0x82d3df */
  if (!zf) goto L_82d3df;
L_82d224: /* 82d224: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d226: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82d22b: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 82d231: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x82d236u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 82d236: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 82d239: fsub dword ptr [0xa1557c] */
  ST0 = ST0 - (F32((uint32_t)(0xa1557cu)));
/* 82d23f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 82d241: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82d244: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82d24a: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 82d24d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82d250: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d253: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82d256: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82d258: mov eax, esp */
  eax = esp;
/* 82d25a: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 82d261: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82d264: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82d266: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 82d26d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82d270: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82d273: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 82d278: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 82d27f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82d282: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82d285: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82d286: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 82d289: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d28a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d28b: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 82d291: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d292: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d298: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82d29eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d29e: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 82d2a1: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82d2a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d2a9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82d2ac: jnp 0x82d0be */
  if (!pf) goto L_82d0be;
L_82d2b2: /* 82d2b2: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82d2b8: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 82d2bb: fadd qword ptr [0xa138d8] */
  ST0 = ST0 + (F64((uint32_t)(0xa138d8u)));
/* 82d2c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d2c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d2c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d2c7: fadd dword ptr [ebp - 0x74] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 82d2ca: mov eax, edx */
  eax = edx;
/* 82d2cc: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 82d2cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d2d2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82d2d5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82d2d8: mov edi, esp */
  edi = esp;
/* 82d2da: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 82d2dc: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82d2df: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82d2e2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82d2e5: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 82d2e8: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 82d2eb: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 82d2ee: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d2f4: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 82d2f7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 82d2fa: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 82d2fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d2ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d300: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 82d303: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82d309u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d309: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d30b: je 0x82d0be */
  if (zf) goto L_82d0be;
L_82d311: /* 82d311: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82d314: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d316: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d318: mov ecx, ebx */
  ecx = ebx;
/* 82d31a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d31c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 82d31f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82d322: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d324: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82d327: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d32a: mov eax, esp */
  eax = esp;
/* 82d32c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82d32e: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82d331: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82d334: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d33a: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82d33d: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82d340: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82d343: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d345: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d346: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82d349: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82d34fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d34f: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 82d352: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 82d354: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 82d357: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 82d35a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 82d35d: fadd dword ptr [esi + 0x444] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x444u)));
/* 82d363: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d366: mov eax, esp */
  eax = esp;
/* 82d368: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 82d36f: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82d372: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82d375: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82d377: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 82d37e: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82d381: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82d384: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 82d38b: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 82d38e: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82d391: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 82d396: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 82d399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d39a: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 82d39d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d39e: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 82d3a1: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d3a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d3a8: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 82d3ae: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 82d3b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d3b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d3b4: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82d3bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d3ba: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 82d3bd: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82d3c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d3c5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82d3c8: jnp 0x82d475 */
  if (!pf) goto L_82d475;
L_82d3ce: /* 82d3ce: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 82d3d1: cmp dword ptr [ebp - 0x80], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82d3d4: je 0x82d475 */
  if (zf) goto L_82d475;
L_82d3da: /* 82d3da: jmp 0x82d0be */
  goto L_82d0be;
L_82d3df: /* 82d3df: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82d3e5: fcomp dword ptr [ecx + 0x2d4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x2d4u)));
  FPOP();
/* 82d3eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d3ed: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d3f0: je 0x82d405 */
  if (zf) goto L_82d405;
L_82d3f2: /* 82d3f2: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82d3f8: fcomp dword ptr [ecx + 0x2d8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x2d8u)));
  FPOP();
/* 82d3fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d400: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d403: jne 0x82d478 */
  if (!zf) goto L_82d478;
L_82d405: /* 82d405: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82d40b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82d40d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 82d40f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d413: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d415: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d418: mov eax, esp */
  eax = esp;
/* 82d41a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82d41c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 82d41f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82d422: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 82d425: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82d428: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d42e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d42f: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82d435u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d435: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d437: je 0x82d475 */
  if (zf) goto L_82d475;
L_82d439: /* 82d439: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 82d43c: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82d43f: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 82d442: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82d444: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d446: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d448: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d44a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82d44d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d450: mov eax, esp */
  eax = esp;
/* 82d452: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82d454: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82d457: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82d45a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d460: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82d463: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82d466: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82d469: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d46b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d46c: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82d46f: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82d475u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82d475: /* 82d475: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_82d478: /* 82d478: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82d47b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82d47e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d47f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d482: mov ecx, esp */
  ecx = esp;
/* 82d484: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82d486: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82d489: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82d48c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82d48f: mov ecx, esi */
  ecx = esi;
/* 82d491: call 0x6c732e */
  esp -= 4; W32(esp, 0x82d496u); SPILL(); f_6c732e(); if (g_unwind) return; RELOAD();
/* 82d496: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82d499: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82d49a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82d49b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82d4a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82d4a3: mov esp, ebp */
  esp = ebp;
/* 82d4a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82d4a6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_82d4a9(void) {
  LOAD_REGS();
L_82d4a9: /* 82d4a9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82d4ac: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82d4b1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 82d4b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d4b5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 82d4b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82d4bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82d4bd(); return;
}

void f_82d4bd(void) {
  LOAD_REGS();
L_82d4bd: /* 82d4bd: push 0xa15548 */
  { uint32_t v = 0xa15548u; esp -= 4; W32(esp, v); }
/* 82d4c2: push 0xae38b8 */
  { uint32_t v = 0xae38b8u; esp -= 4; W32(esp, v); }
/* 82d4c7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82d4cdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82d4cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82d4d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d4d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d4d4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82d4d9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82d4d9: guest_badaddr(0x82d4d9); return;
}

void f_82d680(void) {
  LOAD_REGS();
L_82d680: /* 82d680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82d681: mov ebp, esp */
  ebp = esp;
/* 82d683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82d685: push 0x9d31a0 */
  { uint32_t v = 0x9d31a0u; esp -= 4; W32(esp, v); }
/* 82d68a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82d690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82d698: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d69b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 82d6a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82d6a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d6a2: mov esi, ecx */
  esi = ecx;
/* 82d6a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82d6a6: xor ebx, ebx */
  ebx = 0;
/* 82d6a8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82d6aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82d6ab: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82d6ae: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 82d6b1: jne 0x82d6fc */
  if (!zf) goto L_82d6fc;
L_82d6b3: /* 82d6b3: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82d6b6: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 82d6b9: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 82d6bf: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 82d6c2: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82d6c5: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 82d6cb: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82d6ce: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82d6d1: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82d6d7u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82d6d7: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 82d6da: fcomp dword ptr [0xa1327c] */
  fpu_com(ST0, F32((uint32_t)(0xa1327cu)));
  FPOP();
/* 82d6e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82d6e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82d6e5: jne 0x82d6fc */
  if (!zf) goto L_82d6fc;
L_82d6e7: /* 82d6e7: xor eax, eax */
  eax = 0;
/* 82d6e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82d6ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82d6f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82d6f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82d6f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82d6f6: mov esp, ebp */
  esp = ebp;
/* 82d6f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82d6f9: ret 0x10 */
  esp += 20; SPILL(); return;
L_82d6fc: /* 82d6fc: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82d6ff: jne 0x82d7c0 */
  if (!zf) goto L_82d7c0;
L_82d705: /* 82d705: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 82d70b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d70d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 82d710: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82d713: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82d716: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d719: mov eax, esp */
  eax = esp;
/* 82d71b: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 82d722: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82d725: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82d727: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 82d72e: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82d731: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82d734: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 82d73b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82d73e: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82d741: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82d746: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 82d749: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82d74c: fadd dword ptr [esi + 0x444] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x444u)));
/* 82d752: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d758: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 82d75b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d75c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 82d75f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82d762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d763: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d764: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 82d767: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82d76a: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 82d76d: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 82d770: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 82d777: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 82d77e: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 82d785: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 82d78c: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 82d793: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 82d79a: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 82d79d: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 82d7a4: mov dword ptr [ebp - 0x3c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc4u), 0xffffffffu);
/* 82d7ab: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 82d7ae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d7b1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82d7b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d7b7: cmp dword ptr [ebp - 0x60], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82d7ba: jne 0x82d6e7 */
  if (!zf) goto L_82d6e7;
L_82d7c0: /* 82d7c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82d7c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82d7c2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 82d7c5: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 82d7cb: mov ecx, edi */
  ecx = edi;
/* 82d7cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d7cf: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 82d7d2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82d7d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d7d7: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82d7da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d7dd: mov eax, esp */
  eax = esp;
/* 82d7df: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82d7e1: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 82d7e4: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 82d7e7: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d7ed: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82d7f0: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 82d7f3: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82d7f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d7f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d7f9: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82d7fc: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82d802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d802: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82d804: je 0x82d842 */
  if (zf) goto L_82d842;
L_82d806: /* 82d806: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 82d809: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 82d80b: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 82d80e: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 82d811: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d813: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d815: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82d817: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 82d81a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d81d: mov eax, esp */
  eax = esp;
/* 82d81f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82d821: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82d824: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 82d827: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82d82d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82d830: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82d833: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 82d836: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82d838: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d839: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82d83c: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x82d842u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82d842: /* 82d842: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82d845: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82d848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d84a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d84d: mov ecx, esp */
  ecx = esp;
/* 82d84f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82d851: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 82d854: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82d857: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82d85a: mov ecx, esi */
  ecx = esi;
/* 82d85c: call 0x6c732e */
  esp -= 4; W32(esp, 0x82d861u); SPILL(); f_6c732e(); if (g_unwind) return; RELOAD();
/* 82d861: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82d864: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82d865: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82d866: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82d86d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82d86e: mov esp, ebp */
  esp = ebp;
/* 82d870: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82d871: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_82d874(void) {
  LOAD_REGS();
L_82d874: /* 82d874: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82d877: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82d87c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 82d87f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d880: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 82d883: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82d888u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82d888(); return;
}

void f_82d888(void) {
  LOAD_REGS();
L_82d888: /* 82d888: push 0xa15584 */
  { uint32_t v = 0xa15584u; esp -= 4; W32(esp, v); }
/* 82d88d: push 0xae38c0 */
  { uint32_t v = 0xae38c0u; esp -= 4; W32(esp, v); }
/* 82d892: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82d898u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82d898: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82d89b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d89d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d89f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82d8a4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82d8a4: guest_badaddr(0x82d8a4); return;
}

void f_82d940(void) {
  LOAD_REGS();
L_82d940: /* 82d940: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d944: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 82d948: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 82d94b: mov byte ptr [esp + 4], 0 */
  W8((uint32_t)(esp + 0x4u), 0x0u);
/* 82d950: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 82d953: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82d954: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82d955: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 82d958: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 82d95c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82d95d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 82d962: mov edi, ecx */
  edi = ecx;
/* 82d964: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 82d967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d968: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x82d96bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d96b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 82d96e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 82d96f: mov eax, edx */
  eax = edx;
/* 82d971: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 82d974: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82d977: jne 0x82d98f */
  if (!zf) goto L_82d98f;
L_82d979: /* 82d979: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 82d97c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82d97d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d97f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 82d982: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 82d988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82d989: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x82d98fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82d98f: /* 82d98f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 82d991: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82d994: mov ecx, esp */
  ecx = esp;
/* 82d996: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 82d99e: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 82d9a2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82d9a4: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 82d9ac: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 82d9b0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82d9b3: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 82d9bb: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 82d9bf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82d9c2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 82d9c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82d9c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82d9c9: mov ecx, edi */
  ecx = edi;
/* 82d9cb: call dword ptr [eax + 0x114] */
  { uint32_t t = R32((uint32_t)(eax + 0x114u)); esp -= 4; W32(esp, 0x82d9d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82d9d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82d9d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82d9d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82d9d6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_82da10(void) {
  LOAD_REGS();
L_82da10: /* 82da10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82da11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82da12: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 82da16: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 82da19: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 82da21: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 82da24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82da25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82da26: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 82da29: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 82da2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82da2e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 82da33: mov edi, ecx */
  edi = ecx;
/* 82da35: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 82da38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82da39: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x82da3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82da3c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 82da3f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 82da40: mov eax, edx */
  eax = edx;
/* 82da42: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 82da45: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82da48: jne 0x82da60 */
  if (!zf) goto L_82da60;
L_82da4a: /* 82da4a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 82da4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 82da4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82da50: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 82da53: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 82da59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82da5a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x82da60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82da60: /* 82da60: fld dword ptr [edi + 0x194] */
  { double v = F32((uint32_t)(edi + 0x194u)); FPUSH(v); }
/* 82da66: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 82da6c: call 0x99c958 */
  esp -= 4; W32(esp, 0x82da71u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82da71: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 82da75: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 82da79: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 82da7f: fstp dword ptr [edi + 0x194] */
  WF32((uint32_t)(edi + 0x194u), ST0); FPOP();
/* 82da85: fld dword ptr [edi + 0x198] */
  { double v = F32((uint32_t)(edi + 0x198u)); FPUSH(v); }
/* 82da8b: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 82da91: call 0x99c958 */
  esp -= 4; W32(esp, 0x82da96u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82da96: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 82da9a: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 82da9e: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 82daa4: fstp dword ptr [edi + 0x198] */
  WF32((uint32_t)(edi + 0x198u), ST0); FPOP();
/* 82daaa: fld dword ptr [edi + 0x19c] */
  { double v = F32((uint32_t)(edi + 0x19cu)); FPUSH(v); }
/* 82dab0: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 82dab6: call 0x99c958 */
  esp -= 4; W32(esp, 0x82dabbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82dabb: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 82dabf: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 82dac3: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 82dac6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82dac8: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 82dace: fstp dword ptr [edi + 0x19c] */
  WF32((uint32_t)(edi + 0x19cu), ST0); FPOP();
/* 82dad4: je 0x82dae5 */
  if (zf) goto L_82dae5;
L_82dad6: /* 82dad6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 82dada: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 82dadc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82dadd: mov ecx, edi */
  ecx = edi;
/* 82dadf: call dword ptr [eax + 0x118] */
  { uint32_t t = R32((uint32_t)(eax + 0x118u)); esp -= 4; W32(esp, 0x82dae5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82dae5: /* 82dae5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82dae6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82dae7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 82dae8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_82db30(void) {
  LOAD_REGS();
L_82db30: /* 82db30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82db31: mov ebp, esp */
  ebp = esp;
/* 82db33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82db35: push 0x9d31b0 */
  { uint32_t v = 0x9d31b0u; esp -= 4; W32(esp, v); }
/* 82db3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82db40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82db41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82db48: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82db4b: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82db4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82db4f: fcomp qword ptr [0xa15610] */
  fpu_com(ST0, F64((uint32_t)(0xa15610u)));
  FPOP();
/* 82db55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82db56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82db57: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82db5a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82db61: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82db63: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82db66: jp 0x82dc7d */
  if (pf) goto L_82dc7d;
L_82db6c: /* 82db6c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 82db6f: call dword ptr [0xcfa5d4] */
  esp -= 4; W32(esp, 0x82db75u); SPILL(); f_4e2b03(); if (g_unwind) return; /* Core!?IsNearlyZero@FVector@@QBEHXZ */ RELOAD();
/* 82db75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82db77: jne 0x82dc7d */
  if (!zf) goto L_82dc7d;
L_82db7d: /* 82db7d: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 82db80: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 82db83: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 82db86: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 82db89: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 82db8c: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 82db8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82db90: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 82db93: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 82db96: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 82db9d: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x82dba3u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 82dba3: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82dba6: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 82dba9: mov edi, dword ptr [0xcfaa94] */
  edi = R32((uint32_t)(0xcfaa94u));
/* 82dbaf: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82dbb2: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 82dbb5: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82dbb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82dbb9: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 82dbbc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82dbbe: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82dbc1: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 82dbc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82dbc6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82dbc9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82dbcb: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 82dbce: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82dbd1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82dbd3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82dbd6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82dbd9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82dbdb: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 82dbde: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82dbe0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82dbe3: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 82dbe6: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 82dbe9: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 82dbec: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82dbef: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 82dbf2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82dbf5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82dbf8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82dbfb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82dbfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82dbfd: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82dc00: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82dc02: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 82dc05: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 82dc08: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82dc0b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82dc0e: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82dc11: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82dc14: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82dc17: mov esi, ecx */
  esi = ecx;
/* 82dc19: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82dc1b: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 82dc1e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82dc21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82dc22: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82dc25: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 82dc28: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82dc2b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82dc2e: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82dc31: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82dc33: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82dc36: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82dc39: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 82dc3c: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 82dc3f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82dc41: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82dc44: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82dc47: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82dc4a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x82dc4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82dc4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82dc4e: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 82dc51: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82dc54: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82dc57: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82dc5a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82dc5d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82dc60: mov edx, eax */
  edx = eax;
/* 82dc62: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 82dc64: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82dc67: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 82dc6a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82dc6d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82dc74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82dc75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82dc76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82dc77: mov esp, ebp */
  esp = ebp;
/* 82dc79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82dc7a: ret 0x1c */
  esp += 32; SPILL(); return;
L_82dc7d: /* 82dc7d: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 82dc80: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 82dc83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82dc85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82dc86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82dc88: mov ecx, esi */
  ecx = esi;
/* 82dc8a: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x82dc90u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 82dc90: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82dc93: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82dc94: mov eax, esi */
  eax = esi;
/* 82dc96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82dc97: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82dc9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82dc9f: mov esp, ebp */
  esp = ebp;
/* 82dca1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82dca2: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_82dca5(void) {
  LOAD_REGS();
L_82dca5: /* 82dca5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82dca8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82dcad: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 82dcb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82dcb1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 82dcb4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82dcb9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82dcb9(); return;
}

void f_82dcb9(void) {
  LOAD_REGS();
L_82dcb9: /* 82dcb9: push 0xa155cc */
  { uint32_t v = 0xa155ccu; esp -= 4; W32(esp, v); }
/* 82dcbe: push 0xae3a64 */
  { uint32_t v = 0xae3a64u; esp -= 4; W32(esp, v); }
/* 82dcc3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82dcc9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82dcc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82dccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82dcce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82dcd0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82dcd5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82dcd5: guest_badaddr(0x82dcd5); return;
}

void f_82dd50(void) {
  LOAD_REGS();
L_82dd50: /* 82dd50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82dd51: mov ebp, esp */
  ebp = esp;
/* 82dd53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82dd55: push 0x9d31c0 */
  { uint32_t v = 0x9d31c0u; esp -= 4; W32(esp, v); }
/* 82dd5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82dd60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82dd61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82dd68: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82dd6b: cmp byte ptr [ecx + 0x50], 9 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82dd6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82dd70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82dd71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82dd72: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82dd75: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82dd7c: jne 0x82de1c */
  if (!zf) goto L_82de1c;
L_82dd82: /* 82dd82: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 82dd88: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82dd8a: je 0x82de1c */
  if (zf) goto L_82de1c;
L_82dd90: /* 82dd90: fld dword ptr [ecx + 0x450] */
  { double v = F32((uint32_t)(ecx + 0x450u)); FPUSH(v); }
/* 82dd96: lea eax, [ecx + 0x44c] */
  eax = (uint32_t)(ecx + 0x44cu);
/* 82dd9c: fmul dword ptr [edx + 0x464] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x464u)));
/* 82dda2: lea ecx, [edx + 0x464] */
  ecx = (uint32_t)(edx + 0x464u);
/* 82dda8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 82ddaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ddab: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 82ddae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ddaf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82ddb1: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 82ddb4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 82ddb6: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 82ddb9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 82ddbb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82ddbd: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 82ddc0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 82ddc3: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 82ddc6: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 82ddc9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 82ddcc: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 82ddcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ddd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ddd1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82ddd3: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82ddd6: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 82dddd: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 82dde4: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 82dde7: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 82ddee: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 82ddf1: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 82ddf4: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x82ddfau); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 82ddfa: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 82ddfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ddfe: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82de01: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x82de07u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
L_82de07: /* 82de07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82de0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82de0b: mov eax, esi */
  eax = esi;
/* 82de0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82de0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82de15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82de16: mov esp, ebp */
  esp = ebp;
/* 82de18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82de19: ret 0x1c */
  esp += 32; SPILL(); return;
L_82de1c: /* 82de1c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 82de1f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 82de22: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82de25: mov edx, esp */
  edx = esp;
/* 82de27: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82de29: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 82de2c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 82de2f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 82de32: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82de35: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 82de38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82de3b: mov edx, esp */
  edx = esp;
/* 82de3d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82de3f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 82de42: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 82de45: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82de48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82de49: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82de4c: call 0x6c693d */
  esp -= 4; W32(esp, 0x82de51u); SPILL(); f_6c693d(); if (g_unwind) return; RELOAD();
/* 82de51: jmp 0x82de07 */
  goto L_82de07;
}

void f_82de53(void) {
  LOAD_REGS();
L_82de53: /* 82de53: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82de56: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82de5b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 82de5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82de5f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 82de62: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82de67u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82de67(); return;
}

void f_82de67(void) {
  LOAD_REGS();
L_82de67: /* 82de67: push 0xa1561c */
  { uint32_t v = 0xa1561cu; esp -= 4; W32(esp, v); }
/* 82de6c: push 0xae3a6c */
  { uint32_t v = 0xae3a6cu; esp -= 4; W32(esp, v); }
/* 82de71: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82de77u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82de77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82de7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82de7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82de7e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82de83u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82de83: guest_badaddr(0x82de83); return;
}

void f_82dee0(void) {
  LOAD_REGS();
L_82dee0: /* 82dee0: xor eax, eax */
  eax = 0;
/* 82dee2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_82df00(void) {
  LOAD_REGS();
L_82df00: /* 82df00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82df01: mov ebp, esp */
  ebp = esp;
/* 82df03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82df05: push 0x9d31d0 */
  { uint32_t v = 0x9d31d0u; esp -= 4; W32(esp, v); }
/* 82df0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82df10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82df11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82df18: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82df1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82df1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82df1d: mov esi, ecx */
  esi = ecx;
/* 82df1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82df20: lea edi, [esi + 0x194] */
  edi = (uint32_t)(esi + 0x194u);
/* 82df26: mov ecx, edi */
  ecx = edi;
/* 82df28: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82df2b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82df32: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x82df38u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 82df38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82df3a: jne 0x82dfa2 */
  if (!zf) goto L_82dfa2;
L_82df3c: /* 82df3c: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 82df42: mov ecx, esi */
  ecx = esi;
/* 82df44: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82df4au); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82df4a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82df4d: mov ecx, edi */
  ecx = edi;
/* 82df4f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82df55u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82df55: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82df58: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82df5b: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 82df5e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82df60: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82df63: jne 0x82dfa2 */
  if (!zf) goto L_82dfa2;
L_82df65: /* 82df65: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 82df68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82df69: mov ecx, esi */
  ecx = esi;
/* 82df6b: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82df71u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82df71: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82df73: mov ecx, esi */
  ecx = esi;
/* 82df75: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82df77: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82df7a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82df7d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82df80: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82df83: mov ecx, edi */
  ecx = edi;
/* 82df85: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x82df8bu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 82df8b: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 82df8e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82df90: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 82df92: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 82df94: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82df96: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 82df99: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 82df9c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 82df9f: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_82dfa2: /* 82dfa2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82dfa5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82dfa6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82dfa7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82dfae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82dfaf: mov esp, ebp */
  esp = ebp;
/* 82dfb1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82dfb2: ret  */
  esp += 4; SPILL(); return;
}

void f_82dfb3(void) {
  LOAD_REGS();
L_82dfb3: /* 82dfb3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82dfb6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82dfbb: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 82dfbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82dfbf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82dfc2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82dfc7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82dfc7(); return;
}

void f_82dfc7(void) {
  LOAD_REGS();
L_82dfc7: /* 82dfc7: push 0xa15658 */
  { uint32_t v = 0xa15658u; esp -= 4; W32(esp, v); }
/* 82dfcc: push 0xae3c18 */
  { uint32_t v = 0xae3c18u; esp -= 4; W32(esp, v); }
/* 82dfd1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82dfd7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82dfd7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82dfda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82dfdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82dfde: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82dfe3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82dfe3: guest_badaddr(0x82dfe3); return;
}

void f_82e030(void) {
  LOAD_REGS();
L_82e030: /* 82e030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82e031: mov ebp, esp */
  ebp = esp;
/* 82e033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82e035: push 0x9d31e0 */
  { uint32_t v = 0x9d31e0u; esp -= 4; W32(esp, v); }
/* 82e03a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82e040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82e048: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e04b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82e04c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82e04d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e04e: mov edi, ecx */
  edi = ecx;
/* 82e050: lea esi, [edi + 0x188] */
  esi = (uint32_t)(edi + 0x188u);
/* 82e056: mov ecx, esi */
  ecx = esi;
/* 82e058: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82e05b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82e062: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82e068u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82e068: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82e06b: fld dword ptr [edi + 0x340] */
  { double v = F32((uint32_t)(edi + 0x340u)); FPUSH(v); }
/* 82e071: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82e073: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82e075: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82e078: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 82e07a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82e07c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82e07e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82e081: jne 0x82e0bb */
  if (!zf) goto L_82e0bb;
L_82e083: /* 82e083: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 82e086: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e087: mov ecx, esi */
  ecx = esi;
/* 82e089: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82e08fu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82e08f: fld dword ptr [edi + 0x340] */
  { double v = F32((uint32_t)(edi + 0x340u)); FPUSH(v); }
/* 82e095: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82e097: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82e099: mov ecx, esi */
  ecx = esi;
/* 82e09b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82e09d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82e0a0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82e0a3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82e0a6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82e0a9: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 82e0ab: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 82e0ad: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82e0af: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 82e0b2: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 82e0b5: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 82e0b8: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_82e0bb: /* 82e0bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82e0be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e0bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e0c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82e0c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82e0c8: mov esp, ebp */
  esp = ebp;
/* 82e0ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82e0cb: ret  */
  esp += 4; SPILL(); return;
}

void f_82e0cc(void) {
  LOAD_REGS();
L_82e0cc: /* 82e0cc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82e0cf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82e0d4: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 82e0d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82e0d8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 82e0db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82e0e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82e0e0(); return;
}

void f_82e0e0(void) {
  LOAD_REGS();
L_82e0e0: /* 82e0e0: push 0xa156a8 */
  { uint32_t v = 0xa156a8u; esp -= 4; W32(esp, v); }
/* 82e0e5: push 0xae3c20 */
  { uint32_t v = 0xae3c20u; esp -= 4; W32(esp, v); }
/* 82e0ea: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82e0f0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82e0f0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82e0f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82e0f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82e0f7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82e0fcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82e0fc: guest_badaddr(0x82e0fc); return;
}

void f_82e140(void) {
  LOAD_REGS();
L_82e140: /* 82e140: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 82e145: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82e147: push 0xae3c58 */
  { uint32_t v = 0xae3c58u; esp -= 4; W32(esp, v); }
/* 82e14c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e14d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x82e153u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 82e153: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82e156: ret 8 */
  esp += 12; SPILL(); return;
}

void f_82e170(void) {
  LOAD_REGS();
L_82e170: /* 82e170: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 82e174: fcomp qword ptr [esp + 0xc] */
  fpu_com(ST0, F64((uint32_t)(esp + 0xcu)));
  FPOP();
/* 82e178: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82e17a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82e17d: jp 0x82e184 */
  if (pf) goto L_82e184;
L_82e17f: /* 82e17f: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 82e183: ret  */
  esp += 4; SPILL(); return;
L_82e184: /* 82e184: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 82e188: ret  */
  esp += 4; SPILL(); return;
}

void f_82e1a0(void) {
  LOAD_REGS();
L_82e1a0: /* 82e1a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82e1a1: mov ebp, esp */
  ebp = esp;
/* 82e1a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82e1a5: push 0x9d31f0 */
  { uint32_t v = 0x9d31f0u; esp -= 4; W32(esp, v); }
/* 82e1aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82e1b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e1b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82e1b8: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e1bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82e1bc: xor eax, eax */
  eax = 0;
/* 82e1be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82e1bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e1c0: mov esi, ecx */
  esi = ecx;
/* 82e1c2: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82e1c8: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 82e1ce: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82e1d4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82e1da: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 82e1dd: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82e1e0: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 82e1e3: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 82e1e6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82e1e9: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 82e1ef: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 82e1f2: fsub dword ptr [0xa0b294] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b294u)));
/* 82e1f8: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 82e1fb: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 82e201: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 82e204: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 82e207: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82e20a: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 82e20d: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 82e210: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82e213: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 82e216: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 82e219: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 82e21f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82e222: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e225: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82e228: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82e22b: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 82e231: mov edi, esp */
  edi = esp;
/* 82e233: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 82e238: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e239: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 82e23b: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82e23e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 82e241: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e242: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 82e245: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82e248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82e249: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 82e24c: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 82e253: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 82e25a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 82e25d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82e25f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e260: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 82e263: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82e269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82e269: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 82e26c: cmp dword ptr [esi + 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e26f: je 0x82e294 */
  if (zf) goto L_82e294;
L_82e271: /* 82e271: mov edi, dword ptr [ebp - 0x4c] */
  edi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 82e274: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82e276: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 82e278: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e27b: mov ecx, esp */
  ecx = esp;
/* 82e27d: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 82e27f: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 82e282: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 82e285: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 82e288: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 82e28b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e28c: mov ecx, esi */
  ecx = esi;
/* 82e28e: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82e294u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82e294: /* 82e294: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82e297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e299: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82e2a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82e2a1: mov esp, ebp */
  esp = ebp;
/* 82e2a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82e2a4: ret  */
  esp += 4; SPILL(); return;
}

void f_82e2a5(void) {
  LOAD_REGS();
L_82e2a5: /* 82e2a5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82e2a8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82e2ad: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 82e2b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e2b1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 82e2b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82e2b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82e2b9(); return;
}

void f_82e2b9(void) {
  LOAD_REGS();
L_82e2b9: /* 82e2b9: push 0xa15700 */
  { uint32_t v = 0xa15700u; esp -= 4; W32(esp, v); }
/* 82e2be: push 0xae3a00 */
  { uint32_t v = 0xae3a00u; esp -= 4; W32(esp, v); }
/* 82e2c3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82e2c9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82e2c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82e2cc: xor eax, eax */
  eax = 0;
/* 82e2ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e2cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e2d0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82e2d5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82e2d5: guest_badaddr(0x82e2d5); return;
}

void f_82e330(void) {
  LOAD_REGS();
L_82e330: /* 82e330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 82e334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82e335: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 82e339: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e33e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e340: je 0x82e42c */
  if (zf) goto L_82e42c;
L_82e346: /* 82e346: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 82e34a: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 82e350: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 82e356: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82e359: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e35a: mov edi, eax */
  edi = eax;
/* 82e35c: je 0x82e3ae */
  if (zf) goto L_82e3ae;
L_82e35e: /* 82e35e: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82e360: jns 0x82e3a2 */
  if (!sf) goto L_82e3a2;
L_82e362: /* 82e362: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82e364: jle 0x82e384 */
  if ((zf || sf != of)) goto L_82e384;
L_82e366: /* 82e366: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e368: jle 0x82e370 */
  if ((zf || sf != of)) goto L_82e370;
L_82e36a: /* 82e36a: add edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_82e370: /* 82e370: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 82e372: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e374: jg 0x82e396 */
  if ((!zf && sf == of)) goto L_82e396;
L_82e376: /* 82e376: mov edx, esi */
  edx = esi;
/* 82e378: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82e37a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e37b: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e380: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e381: ret 0xc */
  esp += 16; SPILL(); return;
L_82e384: /* 82e384: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e386: jge 0x82e38e */
  if ((sf == of)) goto L_82e38e;
L_82e388: /* 82e388: lea edi, [eax + 0x10000] */
  edi = (uint32_t)(eax + 0x10000u);
L_82e38e: /* 82e38e: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 82e390: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e392: jl 0x82e396 */
  if ((sf != of)) goto L_82e396;
L_82e394: /* 82e394: mov edx, esi */
  edx = esi;
L_82e396: /* 82e396: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82e398: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e399: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e39e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e39f: ret 0xc */
  esp += 16; SPILL(); return;
L_82e3a2: /* 82e3a2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82e3a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e3a5: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e3aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e3ab: ret 0xc */
  esp += 16; SPILL(); return;
L_82e3ae: /* 82e3ae: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82e3b0: jns 0x82e426 */
  if (!sf) goto L_82e426;
L_82e3b2: /* 82e3b2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e3b4: jle 0x82e3ea */
  if ((zf || sf != of)) goto L_82e3ea;
L_82e3b6: /* 82e3b6: mov ecx, eax */
  ecx = eax;
/* 82e3b8: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 82e3ba: cmp ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e3c0: jge 0x82e3ca */
  if ((sf == of)) goto L_82e3ca;
L_82e3c2: /* 82e3c2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82e3c4: jge 0x82e41e */
  if ((sf == of)) goto L_82e41e;
L_82e3c6: /* 82e3c6: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 82e3c8: jmp 0x82e41e */
  goto L_82e41e;
L_82e3ca: /* 82e3ca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82e3cc: jge 0x82e3d0 */
  if ((sf == of)) goto L_82e3d0;
L_82e3ce: /* 82e3ce: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
L_82e3d0: /* 82e3d0: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 82e3d2: add edx, 0x10000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 82e3d8: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e3da: jle 0x82e396 */
  if ((zf || sf != of)) goto L_82e396;
L_82e3dc: /* 82e3dc: mov edx, esi */
  edx = esi;
/* 82e3de: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82e3e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e3e1: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e3e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e3e7: ret 0xc */
  esp += 16; SPILL(); return;
L_82e3ea: /* 82e3ea: mov ecx, edx */
  ecx = edx;
/* 82e3ec: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 82e3ee: cmp ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e3f4: jge 0x82e40e */
  if ((sf == of)) goto L_82e40e;
L_82e3f6: /* 82e3f6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82e3f8: jge 0x82e3fc */
  if ((sf == of)) goto L_82e3fc;
L_82e3fa: /* 82e3fa: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
L_82e3fc: /* 82e3fc: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e3fe: jle 0x82e402 */
  if ((zf || sf != of)) goto L_82e402;
L_82e400: /* 82e400: mov ecx, esi */
  ecx = esi;
L_82e402: /* 82e402: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82e404: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e405: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e40a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e40b: ret 0xc */
  esp += 16; SPILL(); return;
L_82e40e: /* 82e40e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 82e410: jge 0x82e414 */
  if ((sf == of)) goto L_82e414;
L_82e412: /* 82e412: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
L_82e414: /* 82e414: mov ecx, eax */
  ecx = eax;
/* 82e416: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 82e418: add ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_82e41e: /* 82e41e: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e420: jle 0x82e424 */
  if ((zf || sf != of)) goto L_82e424;
L_82e422: /* 82e422: mov ecx, esi */
  ecx = esi;
L_82e424: /* 82e424: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_82e426: /* 82e426: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e42b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_82e42c: /* 82e42c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e42d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_82e470(void) {
  LOAD_REGS();
L_82e470: /* 82e470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82e471: mov ebp, esp */
  ebp = esp;
/* 82e473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82e475: push 0x9d3200 */
  { uint32_t v = 0x9d3200u; esp -= 4; W32(esp, v); }
/* 82e47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82e480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82e488: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e48b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82e48c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82e48d: mov esi, ecx */
  esi = ecx;
/* 82e48f: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 82e495: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82e497: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82e49a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82e49d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82e4a0: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 82e4a3: xor ebx, ebx */
  ebx = 0;
/* 82e4a5: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82e4a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e4a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82e4ab: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 82e4ae: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 82e4b1: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82e4b4: je 0x82e4bd */
  if (zf) goto L_82e4bd;
L_82e4b6: /* 82e4b6: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82e4b8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 82e4bb: jne 0x82e4c4 */
  if (!zf) goto L_82e4c4;
L_82e4bd: /* 82e4bd: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_82e4c4: /* 82e4c4: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 82e4ca: and eax, 0xffffbfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffbfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e4cf: mov ecx, esi */
  ecx = esi;
/* 82e4d1: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 82e4d7: call 0x6c2e00 */
  esp -= 4; W32(esp, 0x82e4dcu); SPILL(); f_6c2e00(); if (g_unwind) return; RELOAD();
/* 82e4dc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e4de: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 82e4e4: je 0x82e563 */
  if (zf) goto L_82e563;
L_82e4e6: /* 82e4e6: mov edi, dword ptr [esi + 0x33c] */
  edi = R32((uint32_t)(esi + 0x33cu));
/* 82e4ec: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 82e4f2: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 82e4f4: and ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 82e4fa: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 82e4fc: mov eax, edx */
  eax = edx;
/* 82e4fe: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82e500: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 82e506: jns 0x82e67d */
  if (!sf) goto L_82e67d;
L_82e50c: /* 82e50c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e50e: je 0x82e521 */
  if (zf) goto L_82e521;
L_82e510: /* 82e510: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 82e515: mov ecx, edi */
  ecx = edi;
/* 82e517: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x82e51du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 82e51d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e51f: jne 0x82e523 */
  if (!zf) goto L_82e523;
L_82e521: /* 82e521: xor edi, edi */
  edi = 0;
L_82e523: /* 82e523: mov edx, dword ptr [edi + 0x764] */
  edx = R32((uint32_t)(edi + 0x764u));
/* 82e529: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 82e52b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 82e52e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82e531: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e532: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 82e535: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82e538: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x82e53eu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 82e53e: mov ebx, eax */
  ebx = eax;
/* 82e540: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82e546: mov ecx, dword ptr [eax + 0x2f0] */
  ecx = R32((uint32_t)(eax + 0x2f0u));
/* 82e54c: mov dword ptr [esi + 0x2f0], ecx */
  W32((uint32_t)(esi + 0x2f0u), ecx);
/* 82e552: mov edx, dword ptr [eax + 0x2f4] */
  edx = R32((uint32_t)(eax + 0x2f4u));
/* 82e558: mov dword ptr [esi + 0x2f4], edx */
  W32((uint32_t)(esi + 0x2f4u), edx);
/* 82e55e: jmp 0x82e67a */
  goto L_82e67a;
L_82e563: /* 82e563: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82e569: xor ecx, ecx */
  ecx = 0;
/* 82e56b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e56d: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 82e570: shl ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 82e573: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 82e575: mov edx, dword ptr [esi + 0x88] */
  edx = R32((uint32_t)(esi + 0x88u));
/* 82e57b: and ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 82e581: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 82e583: mov ecx, edx */
  ecx = edx;
/* 82e585: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82e587: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 82e58d: jns 0x82e627 */
  if (!sf) goto L_82e627;
L_82e593: /* 82e593: mov ecx, dword ptr [eax + 0x3b4] */
  ecx = R32((uint32_t)(eax + 0x3b4u));
/* 82e599: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e59b: je 0x82e627 */
  if (zf) goto L_82e627;
L_82e5a1: /* 82e5a1: cmp dword ptr [eax + 0x38c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x38cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e5a7: jne 0x82e627 */
  if (!zf) goto L_82e627;
L_82e5a9: /* 82e5a9: mov edx, dword ptr [eax + 0x350] */
  edx = R32((uint32_t)(eax + 0x350u));
/* 82e5af: mov edi, 0x2000 */
  edi = 0x2000u;
/* 82e5b4: test edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e5b6: je 0x82e5dc */
  if (zf) goto L_82e5dc;
L_82e5b8: /* 82e5b8: cmp byte ptr [ecx + 0x399], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x399u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 82e5bf: jbe 0x82e5dc */
  if ((cf | zf)) goto L_82e5dc;
L_82e5c1: /* 82e5c1: mov ecx, dword ptr [esi + 0x2e8] */
  ecx = R32((uint32_t)(esi + 0x2e8u));
/* 82e5c7: mov eax, dword ptr [eax + 0x2e8] */
  eax = R32((uint32_t)(eax + 0x2e8u));
/* 82e5cd: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e5cf: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 82e5d2: jge 0x82e5d7 */
  if ((sf == of)) goto L_82e5d7;
L_82e5d4: /* 82e5d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_82e5d7: /* 82e5d7: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82e5da: jmp 0x82e5e2 */
  goto L_82e5e2;
L_82e5dc: /* 82e5dc: fild dword ptr [eax + 0x3b0] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x3b0u)); FPUSH(v); }
L_82e5e2: /* 82e5e2: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 82e5e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e5e6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82e5e9: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x82e5efu); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 82e5ef: mov ecx, dword ptr [esi + 0x2f4] */
  ecx = R32((uint32_t)(esi + 0x2f4u));
/* 82e5f5: mov ebx, eax */
  ebx = eax;
/* 82e5f7: mov eax, dword ptr [esi + 0x180] */
  eax = R32((uint32_t)(esi + 0x180u));
/* 82e5fd: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e602: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82e605: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 82e607: jns 0x82e60b */
  if (!sf) goto L_82e60b;
L_82e609: /* 82e609: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_82e60b: /* 82e60b: cmp eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e610: jl 0x82e619 */
  if ((sf != of)) goto L_82e619;
L_82e612: /* 82e612: cmp eax, 0xf737 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf737u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e617: jle 0x82e67d */
  if ((zf || sf != of)) goto L_82e67d;
L_82e619: /* 82e619: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82e61f: or dword ptr [eax + 0x350], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x350u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x350u), r);
  }
/* 82e625: jmp 0x82e67d */
  goto L_82e67d;
L_82e627: /* 82e627: mov eax, dword ptr [esi + 0x180] */
  eax = R32((uint32_t)(esi + 0x180u));
/* 82e62d: mov ecx, dword ptr [esi + 0x2f4] */
  ecx = R32((uint32_t)(esi + 0x2f4u));
/* 82e633: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e638: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 82e63a: jns 0x82e63e */
  if (!sf) goto L_82e63e;
L_82e63c: /* 82e63c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_82e63e: /* 82e63e: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e643: jle 0x82e64a */
  if ((zf || sf != of)) goto L_82e64a;
L_82e645: /* 82e645: sub eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_82e64a: /* 82e64a: mov ecx, dword ptr [esi + 0x2e8] */
  ecx = R32((uint32_t)(esi + 0x2e8u));
/* 82e650: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82e652: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e654: lea edx, [ecx + ecx] */
  edx = (uint32_t)(ecx + ecx);
/* 82e657: jge 0x82e65e */
  if ((sf == of)) goto L_82e65e;
L_82e659: /* 82e659: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 82e65c: jmp 0x82e668 */
  goto L_82e668;
L_82e65e: /* 82e65e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e660: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 82e663: jl 0x82e668 */
  if ((sf != of)) goto L_82e668;
L_82e665: /* 82e665: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_82e668: /* 82e668: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82e66b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e66c: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 82e66f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82e672: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x82e678u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 82e678: mov ebx, eax */
  ebx = eax;
L_82e67a: /* 82e67a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_82e67d: /* 82e67d: cmp byte ptr [esi + 0x50], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82e681: jne 0x82e6a8 */
  if (!zf) goto L_82e6a8;
L_82e683: /* 82e683: mov eax, dword ptr [esi + 0x4fc] */
  eax = R32((uint32_t)(esi + 0x4fcu));
/* 82e689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e68b: je 0x82e6a8 */
  if (zf) goto L_82e6a8;
L_82e68d: /* 82e68d: add eax, 0x440 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x440u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82e692: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82e694: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 82e697: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 82e69a: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 82e69d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82e6a0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82e6a3: jmp 0x82e762 */
  goto L_82e762;
L_82e6a8: /* 82e6a8: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 82e6ae: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82e6b0: jns 0x82e75f */
  if (!sf) goto L_82e75f;
L_82e6b6: /* 82e6b6: mov eax, dword ptr [esi + 0x2f4] */
  eax = R32((uint32_t)(esi + 0x2f4u));
/* 82e6bc: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82e6bf: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e6c1: je 0x82e6d0 */
  if (zf) goto L_82e6d0;
L_82e6c3: /* 82e6c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82e6c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e6c6: mov ecx, esi */
  ecx = esi;
/* 82e6c8: call 0x6c958e */
  esp -= 4; W32(esp, 0x82e6cdu); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82e6cd: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_82e6d0: /* 82e6d0: mov eax, dword ptr [esi + 0x394] */
  eax = R32((uint32_t)(esi + 0x394u));
/* 82e6d6: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82e6d9: jne 0x82e6f2 */
  if (!zf) goto L_82e6f2;
L_82e6db: /* 82e6db: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82e6de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e6e0: jne 0x82e6e8 */
  if (!zf) goto L_82e6e8;
L_82e6e2: /* 82e6e2: cmp byte ptr [esi + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82e6e6: jne 0x82e6f2 */
  if (!zf) goto L_82e6f2;
L_82e6e8: /* 82e6e8: mov dword ptr [esi + 0x2f0], 0 */
  W32((uint32_t)(esi + 0x2f0u), 0x0u);
L_82e6f2: /* 82e6f2: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82e6f8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82e6fb: je 0x82e704 */
  if (zf) goto L_82e704;
L_82e6fd: /* 82e6fd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82e700: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e702: jne 0x82e71e */
  if (!zf) goto L_82e71e;
L_82e704: /* 82e704: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* 82e70a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82e70d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e70f: je 0x82e71e */
  if (zf) goto L_82e71e;
L_82e711: /* 82e711: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82e712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e714: mov ecx, esi */
  ecx = esi;
/* 82e716: call 0x6c958e */
  esp -= 4; W32(esp, 0x82e71bu); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82e71b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_82e71e: /* 82e71e: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82e724: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 82e72a: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82e72c: jns 0x82e75f */
  if (!sf) goto L_82e75f;
L_82e72e: /* 82e72e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82e731: mov dword ptr [eax + 0x180], edx */
  W32((uint32_t)(eax + 0x180u), edx);
/* 82e737: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82e73d: mov ecx, dword ptr [eax + 0x2f0] */
  ecx = R32((uint32_t)(eax + 0x2f0u));
/* 82e743: mov edx, dword ptr [eax + 0x17c] */
  edx = R32((uint32_t)(eax + 0x17cu));
/* 82e749: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82e74a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e74b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82e74c: mov ecx, esi */
  ecx = esi;
/* 82e74e: call 0x6c958e */
  esp -= 4; W32(esp, 0x82e753u); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82e753: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 82e759: mov dword ptr [ecx + 0x17c], eax */
  W32((uint32_t)(ecx + 0x17cu), eax);
L_82e75f: /* 82e75f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
L_82e762: /* 82e762: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 82e768: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82e76b: je 0x82e851 */
  if (zf) goto L_82e851;
L_82e771: /* 82e771: mov ecx, dword ptr [esi + 0x2f8] */
  ecx = R32((uint32_t)(esi + 0x2f8u));
/* 82e777: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e779: je 0x82e788 */
  if (zf) goto L_82e788;
L_82e77b: /* 82e77b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82e77c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_82e77d: /* 82e77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e77e: mov ecx, esi */
  ecx = esi;
/* 82e780: call 0x6c958e */
  esp -= 4; W32(esp, 0x82e785u); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82e785: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_82e788: /* 82e788: xor edi, edi */
  edi = 0;
L_82e78a: /* 82e78a: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 82e790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e791: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 82e794: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x82e79au); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 82e79a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82e79c: je 0x82e83e */
  if (zf) goto L_82e83e;
L_82e7a2: /* 82e7a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e7a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e7a4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82e7aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e7ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e7ac: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 82e7af: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 82e7b2: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 82e7b5: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* 82e7b8: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82e7bb: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 82e7be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e7bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e7c2: mov eax, esp */
  eax = esp;
/* 82e7c4: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82e7c6: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82e7c9: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82e7cc: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82e7cf: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82e7d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e7d5: mov eax, esp */
  eax = esp;
/* 82e7d7: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 82e7de: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 82e7e1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 82e7e3: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 82e7ea: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 82e7ed: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 82e7f0: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 82e7f7: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 82e7fe: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 82e805: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 82e80c: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 82e813: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 82e81a: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 82e821: mov dword ptr [ebp - 0x4c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb4u), 0xffffffffu);
/* 82e828: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82e82a: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 82e831: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 82e834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82e835: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 82e838: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x82e83eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82e83e: /* 82e83e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82e841: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82e842: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82e843: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82e84a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82e84b: mov esp, ebp */
  esp = ebp;
/* 82e84d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82e84e: ret 0x10 */
  esp += 20; SPILL(); return;
L_82e851: /* 82e851: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 82e857: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82e85a: je 0x82e8e5 */
  if (zf) goto L_82e8e5;
L_82e860: /* 82e860: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82e863: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82e865: jne 0x82e893 */
  if (!zf) goto L_82e893;
L_82e867: /* 82e867: fild dword ptr [esi + 0x2e8] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x2e8u)); FPUSH(v); }
/* 82e86d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 82e870: call 0x99c958 */
  esp -= 4; W32(esp, 0x82e875u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82e875: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82e878: mov edi, eax */
  edi = eax;
/* 82e87a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e87b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82e87d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82e87e: mov ecx, esi */
  ecx = esi;
/* 82e880: call 0x6c958e */
  esp -= 4; W32(esp, 0x82e885u); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82e885: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82e886: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 82e889: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82e88c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82e88e: jmp 0x82e77d */
  goto L_82e77d;
L_82e893: /* 82e893: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82e896: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 82e898: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e89b: mov ecx, esp */
  ecx = esp;
/* 82e89d: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 82e89f: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82e8a2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 82e8a5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82e8a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82e8ab: lea eax, [esi + 0x44c] */
  eax = (uint32_t)(esi + 0x44cu);
/* 82e8b1: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 82e8b3: mov ecx, esp */
  ecx = esp;
/* 82e8b5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 82e8b7: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 82e8ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82e8bd: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 82e8c0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 82e8c3: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 82e8c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e8c7: mov ecx, esi */
  ecx = esi;
/* 82e8c9: call dword ptr [edx + 0x12c] */
  { uint32_t t = R32((uint32_t)(edx + 0x12cu)); esp -= 4; W32(esp, 0x82e8cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82e8cf: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 82e8d1: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 82e8d4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 82e8d7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 82e8da: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 82e8dd: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82e8e0: jmp 0x82e788 */
  goto L_82e788;
L_82e8e5: /* 82e8e5: mov edx, dword ptr [esi + 0x2ec] */
  edx = R32((uint32_t)(esi + 0x2ecu));
/* 82e8eb: xor edi, edi */
  edi = 0;
/* 82e8ed: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e8ef: jle 0x82eb51 */
  if ((zf || sf != of)) goto L_82eb51;
L_82e8f5: /* 82e8f5: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 82e8fa: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e8ff: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82e902: jge 0x82e90d */
  if ((sf == of)) goto L_82e90d;
L_82e904: /* 82e904: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e906: jle 0x82e91b */
  if ((zf || sf != of)) goto L_82e91b;
L_82e908: /* 82e908: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82e90b: jmp 0x82e91b */
  goto L_82e91b;
L_82e90d: /* 82e90d: mov ecx, 0x10000 */
  ecx = 0x10000u;
/* 82e912: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 82e914: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e916: jge 0x82e91b */
  if ((sf == of)) goto L_82e91b;
L_82e918: /* 82e918: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_82e91b: /* 82e91b: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82e91f: jne 0x82e986 */
  if (!zf) goto L_82e986;
L_82e921: /* 82e921: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 82e927: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82e92du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82e92d: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 82e930: fcomp dword ptr [0xa14cdc] */
  fpu_com(ST0, F32((uint32_t)(0xa14cdcu)));
  FPOP();
/* 82e936: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82e938: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82e93b: jp 0x82e986 */
  if (pf) goto L_82e986;
L_82e93d: /* 82e93d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82e940: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e941: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 82e947: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 82e94a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 82e94f: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x82e954u); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 82e954: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82e957: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82e95a: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82e95f: jl 0x82eb16 */
  if ((sf != of)) goto L_82eb16;
L_82e965: /* 82e965: mov ecx, 0x10000 */
  ecx = 0x10000u;
/* 82e96a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 82e96c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 82e96f: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82e972: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82e974: fiadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)));
/* 82e977: call 0x99c958 */
  esp -= 4; W32(esp, 0x82e97cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82e97c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82e97e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82e981: jmp 0x82e78a */
  goto L_82e78a;
L_82e986: /* 82e986: fld dword ptr [esi + 0x190] */
  { double v = F32((uint32_t)(esi + 0x190u)); FPUSH(v); }
/* 82e98c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82e98f: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 82e992: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82e993: fld dword ptr [esi + 0x18c] */
  { double v = F32((uint32_t)(esi + 0x18cu)); FPUSH(v); }
/* 82e999: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82e99c: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 82e99f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82e9a0: fld dword ptr [esi + 0x188] */
  { double v = F32((uint32_t)(esi + 0x188u)); FPUSH(v); }
/* 82e9a6: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 82e9a9: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 82e9ac: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82e9af: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 82e9b2: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 82e9b5: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x82e9bbu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 82e9bb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82e9be: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x82e9c4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 82e9c4: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 82e9c7: fcomp dword ptr [0xa149c8] */
  fpu_com(ST0, F32((uint32_t)(0xa149c8u)));
  FPOP();
/* 82e9cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82e9cf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82e9d2: jne 0x82eaec */
  if (!zf) goto L_82eaec;
L_82e9d8: /* 82e9d8: cmp byte ptr [esi + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 82e9dc: mov dword ptr [ebp + 0x14], 0x46dac000 */
  W32((uint32_t)(ebp + 0x14u), 0x46dac000u);
/* 82e9e3: jne 0x82e9ec */
  if (!zf) goto L_82e9ec;
L_82e9e5: /* 82e9e5: mov dword ptr [ebp + 0x14], 0x45800000 */
  W32((uint32_t)(ebp + 0x14u), 0x45800000u);
L_82e9ec: /* 82e9ec: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 82e9ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82e9f0: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 82e9f6: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 82e9f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82e9fa: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 82e9fd: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 82ea00: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x82ea06u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 82ea06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ea07: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 82ea0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ea0b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 82ea0e: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x82ea14u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 82ea14: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82ea16: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 82ea19: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82ea1c: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82ea1f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82ea22: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82ea28: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82ea2b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82ea2e: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 82ea31: fdiv dword ptr [esi + 0x408] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x408u)));
/* 82ea37: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82ea3a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82ea3c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82ea3f: jne 0x82ea52 */
  if (!zf) goto L_82ea52;
L_82ea41: /* 82ea41: call 0x99c958 */
  esp -= 4; W32(esp, 0x82ea46u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82ea46: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* 82ea4c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82ea4e: jle 0x82ea70 */
  if ((zf || sf != of)) goto L_82ea70;
L_82ea50: /* 82ea50: jmp 0x82ea6e */
  goto L_82ea6e;
L_82ea52: /* 82ea52: fadd dword ptr [0xa110a4] */
  ST0 = ST0 + (F32((uint32_t)(0xa110a4u)));
/* 82ea58: call 0x99c958 */
  esp -= 4; W32(esp, 0x82ea5du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82ea5d: mov ebx, dword ptr [esi + 0x2ec] */
  ebx = R32((uint32_t)(esi + 0x2ecu));
/* 82ea63: mov ecx, 0x10000 */
  ecx = 0x10000u;
/* 82ea68: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 82ea6a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82ea6c: jge 0x82ea70 */
  if ((sf == of)) goto L_82ea70;
L_82ea6e: /* 82ea6e: mov ecx, eax */
  ecx = eax;
L_82ea70: /* 82ea70: cmp ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82ea76: mov word ptr [esi + 0x186], di */
  W16((uint32_t)(esi + 0x186u), (edi & 0xffffu));
/* 82ea7d: mov eax, dword ptr [esi + 0x184] */
  eax = R32((uint32_t)(esi + 0x184u));
/* 82ea83: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 82ea86: jle 0x82ea96 */
  if ((zf || sf != of)) goto L_82ea96;
L_82ea88: /* 82ea88: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82ea8d: jge 0x82eaa8 */
  if ((sf == of)) goto L_82eaa8;
L_82ea8f: /* 82ea8f: add eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 82ea94: jmp 0x82eaa2 */
  goto L_82eaa2;
L_82ea96: /* 82ea96: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82ea9b: jle 0x82eaa8 */
  if ((zf || sf != of)) goto L_82eaa8;
L_82ea9d: /* 82ea9d: add eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_82eaa2: /* 82eaa2: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
L_82eaa8: /* 82eaa8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82eaab: fmul dword ptr [0xa07fe4] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe4u)));
/* 82eab1: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82eab7: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82eab9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82eabb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82eabe: jp 0x82eac8 */
  if (pf) goto L_82eac8;
L_82eac0: /* 82eac0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82eac2: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_82eac8: /* 82eac8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82eace: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 82ead0: fimul dword ptr [esi + 0x184] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esi + 0x184u)));
/* 82ead6: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82ead9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 82eadb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82eadd: call 0x99c958 */
  esp -= 4; W32(esp, 0x82eae2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82eae2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82eae4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82eae7: jmp 0x82e78a */
  goto L_82e78a;
L_82eaec: /* 82eaec: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82eaef: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 82eaf5: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82eafb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82eafd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82eaff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82eb02: jp 0x82eb0c */
  if (pf) goto L_82eb0c;
L_82eb04: /* 82eb04: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82eb06: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_82eb0c: /* 82eb0c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82eb0f: cmp eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 82eb14: jge 0x82eb30 */
  if ((sf == of)) goto L_82eb30;
L_82eb16: /* 82eb16: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82eb1c: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 82eb1e: fimul dword ptr [ebp - 0x24] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)));
/* 82eb21: call 0x99c958 */
  esp -= 4; W32(esp, 0x82eb26u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82eb26: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82eb28: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82eb2b: jmp 0x82e78a */
  goto L_82e78a;
L_82eb30: /* 82eb30: mov ecx, 0x10000 */
  ecx = 0x10000u;
/* 82eb35: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 82eb37: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 82eb3a: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 82eb3d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82eb3f: fiadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)));
/* 82eb42: call 0x99c958 */
  esp -= 4; W32(esp, 0x82eb47u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 82eb47: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82eb49: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 82eb4c: jmp 0x82e78a */
  goto L_82e78a;
L_82eb51: /* 82eb51: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 82eb54: jmp 0x82e78a */
  goto L_82e78a;
}

void f_82eb59(void) {
  LOAD_REGS();
L_82eb59: /* 82eb59: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82eb5c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82eb61: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 82eb64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82eb65: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82eb68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82eb6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82eb6d(); return;
}

void f_82eb6d(void) {
  LOAD_REGS();
L_82eb6d: /* 82eb6d: push 0xa15728 */
  { uint32_t v = 0xa15728u; esp -= 4; W32(esp, v); }
/* 82eb72: push 0xae3a74 */
  { uint32_t v = 0xae3a74u; esp -= 4; W32(esp, v); }
/* 82eb77: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82eb7du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82eb7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82eb80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82eb82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82eb84: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82eb89u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82eb89: guest_badaddr(0x82eb89); return;
}

void f_82ed60(void) {
  LOAD_REGS();
L_82ed60: /* 82ed60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82ed61: mov ebp, esp */
  ebp = esp;
/* 82ed63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82ed65: push 0x9d3210 */
  { uint32_t v = 0x9d3210u; esp -= 4; W32(esp, v); }
/* 82ed6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82ed70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ed71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82ed78: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82ed7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82ed7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ed7d: mov esi, ecx */
  esi = ecx;
/* 82ed7f: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 82ed85: mov eax, ecx */
  eax = ecx;
/* 82ed87: shr eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 82ed8a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 82ed8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82ed8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82ed91: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82ed98: jne 0x82eda3 */
  if (!zf) goto L_82eda3;
L_82ed9a: /* 82ed9a: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82ed9d: je 0x82ef33 */
  if (zf) goto L_82ef33;
L_82eda3: /* 82eda3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82eda5: je 0x82edc2 */
  if (zf) goto L_82edc2;
L_82eda7: /* 82eda7: lea eax, [esi + 0x2f0] */
  eax = (uint32_t)(esi + 0x2f0u);
/* 82edad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82edae: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 82edb4: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x82edbau); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 82edba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82edbc: jne 0x82ef33 */
  if (!zf) goto L_82ef33;
L_82edc2: /* 82edc2: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 82edc8: mov ecx, edi */
  ecx = edi;
/* 82edca: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82edcc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 82edcf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 82edd2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 82edd5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 82edd8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 82eddb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82eddc: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 82eddf: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82ede2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ede3: lea ecx, [esi + 0x2e4] */
  ecx = (uint32_t)(esi + 0x2e4u);
/* 82ede9: call dword ptr [0xcfaab4] */
  esp -= 4; W32(esp, 0x82edefu); SPILL(); f_4e3553(); if (g_unwind) return; /* Core!??DFRotator@@QBE?AV0@M@Z */ RELOAD();
/* 82edef: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 82edf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82edf4: mov ebx, 0x8000 */
  ebx = 0x8000u;
/* 82edf9: je 0x82ee24 */
  if (zf) goto L_82ee24;
L_82edfb: /* 82edfb: test dword ptr [esi + 0x88], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ee01: je 0x82ee0e */
  if (zf) goto L_82ee0e;
L_82ee03: /* 82ee03: mov ecx, dword ptr [esi + 0x2f4] */
  ecx = R32((uint32_t)(esi + 0x2f4u));
/* 82ee09: cmp ecx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82ee0c: je 0x82ee24 */
  if (zf) goto L_82ee24;
L_82ee0e: /* 82ee0e: mov edx, dword ptr [esi + 0x2f4] */
  edx = R32((uint32_t)(esi + 0x2f4u));
/* 82ee14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ee15: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82ee18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ee19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ee1a: mov ecx, esi */
  ecx = esi;
/* 82ee1c: call 0x6c958e */
  esp -= 4; W32(esp, 0x82ee21u); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82ee21: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_82ee24: /* 82ee24: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 82ee27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ee29: je 0x82ee54 */
  if (zf) goto L_82ee54;
L_82ee2b: /* 82ee2b: test dword ptr [esi + 0x88], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ee31: je 0x82ee3e */
  if (zf) goto L_82ee3e;
L_82ee33: /* 82ee33: mov ecx, dword ptr [esi + 0x2f0] */
  ecx = R32((uint32_t)(esi + 0x2f0u));
/* 82ee39: cmp ecx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82ee3c: je 0x82ee54 */
  if (zf) goto L_82ee54;
L_82ee3e: /* 82ee3e: mov edx, dword ptr [esi + 0x2f0] */
  edx = R32((uint32_t)(esi + 0x2f0u));
/* 82ee44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ee45: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82ee48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ee49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ee4a: mov ecx, esi */
  ecx = esi;
/* 82ee4c: call 0x6c958e */
  esp -= 4; W32(esp, 0x82ee51u); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82ee51: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_82ee54: /* 82ee54: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 82ee57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ee59: je 0x82ee84 */
  if (zf) goto L_82ee84;
L_82ee5b: /* 82ee5b: test dword ptr [esi + 0x88], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ee61: je 0x82ee6e */
  if (zf) goto L_82ee6e;
L_82ee63: /* 82ee63: mov ecx, dword ptr [esi + 0x2f8] */
  ecx = R32((uint32_t)(esi + 0x2f8u));
/* 82ee69: cmp ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82ee6c: je 0x82ee84 */
  if (zf) goto L_82ee84;
L_82ee6e: /* 82ee6e: mov edx, dword ptr [esi + 0x2f8] */
  edx = R32((uint32_t)(esi + 0x2f8u));
/* 82ee74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ee75: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82ee78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ee79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ee7a: mov ecx, esi */
  ecx = esi;
/* 82ee7c: call 0x6c958e */
  esp -= 4; W32(esp, 0x82ee81u); SPILL(); f_6c958e(); if (g_unwind) return; RELOAD();
/* 82ee81: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_82ee84: /* 82ee84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82ee85: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 82ee88: call dword ptr [0xcfa618] */
  esp -= 4; W32(esp, 0x82ee8eu); SPILL(); f_4e1cda(); if (g_unwind) return; /* Core!??9FRotator@@QBEHABV0@@Z */ RELOAD();
/* 82ee8e: xor edx, edx */
  edx = 0;
/* 82ee90: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82ee92: je 0x82ef11 */
  if (zf) goto L_82ef11;
L_82ee94: /* 82ee94: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82ee97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ee98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ee99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ee9a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82eea0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82eea1: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 82eea4: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 82eea7: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 82eeaa: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 82eead: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 82eeb0: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 82eeb3: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 82eeb6: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 82eeb9: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 82eebc: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 82eebf: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 82eec2: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 82eec5: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82eec8: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 82eecb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82eecc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82eecf: mov edx, esp */
  edx = esp;
/* 82eed1: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82eed3: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82eed6: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82eed9: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82eedc: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82eedf: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82eee2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82eee5: mov edx, esp */
  edx = esp;
/* 82eee7: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82eee9: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82eeec: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82eeef: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82eef2: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 82eef9: mov dword ptr [ebp - 0x44], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xffffffffu);
/* 82ef00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82ef02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82ef03: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82ef06: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x82ef0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82ef0c: mov ebx, 0x8000 */
  ebx = 0x8000u;
L_82ef11: /* 82ef11: test dword ptr [esi + 0x88], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ef17: je 0x82ef33 */
  if (zf) goto L_82ef33;
L_82ef19: /* 82ef19: lea eax, [esi + 0x2f0] */
  eax = (uint32_t)(esi + 0x2f0u);
/* 82ef1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82ef20: mov ecx, edi */
  ecx = edi;
/* 82ef22: call dword ptr [0xcfa87c] */
  esp -= 4; W32(esp, 0x82ef28u); SPILL(); f_4e14f1(); if (g_unwind) return; /* Core!??8FRotator@@QBEHABV0@@Z */ RELOAD();
/* 82ef28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82ef2a: je 0x82ef33 */
  if (zf) goto L_82ef33;
L_82ef2c: /* 82ef2c: mov ecx, esi */
  ecx = esi;
/* 82ef2e: call 0x6ca466 */
  esp -= 4; W32(esp, 0x82ef33u); SPILL(); f_6ca466(); if (g_unwind) return; RELOAD();
L_82ef33: /* 82ef33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82ef36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82ef37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82ef38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82ef3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82ef40: mov esp, ebp */
  esp = ebp;
/* 82ef42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82ef43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_82ef46(void) {
  LOAD_REGS();
L_82ef46: /* 82ef46: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82ef49: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82ef4e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 82ef51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82ef52: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 82ef55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ef5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82ef5a(); return;
}

void f_82ef5a(void) {
  LOAD_REGS();
L_82ef5a: /* 82ef5a: push 0xa15760 */
  { uint32_t v = 0xa15760u; esp -= 4; W32(esp, v); }
/* 82ef5f: push 0xae3a7c */
  { uint32_t v = 0xae3a7cu; esp -= 4; W32(esp, v); }
/* 82ef64: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82ef6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82ef6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82ef6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ef6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ef71: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ef76u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82ef76: guest_badaddr(0x82ef76); return;
}

void f_82f010(void) {
  LOAD_REGS();
L_82f010: /* 82f010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82f011: mov ebp, esp */
  ebp = esp;
/* 82f013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82f015: push 0x9d3220 */
  { uint32_t v = 0x9d3220u; esp -= 4; W32(esp, v); }
/* 82f01a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82f020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82f028: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f02e: xor eax, eax */
  eax = 0;
/* 82f030: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82f031: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f032: mov esi, ecx */
  esi = ecx;
/* 82f034: cmp dword ptr [esi + 0x5c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82f037: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82f038: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82f03b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 82f03e: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 82f044: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 82f04a: mov dword ptr [ebp - 0x90], eax */
  W32((uint32_t)(ebp + 0xffffff70u), eax);
/* 82f050: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 82f056: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 82f05c: mov dword ptr [ebp - 0x84], eax */
  W32((uint32_t)(ebp + 0xffffff7cu), eax);
/* 82f062: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 82f065: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 82f068: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 82f06b: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 82f072: mov dword ptr [ebp - 0x70], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff90u), 0xffffffffu);
/* 82f079: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 82f07c: jne 0x82f139 */
  if (!zf) goto L_82f139;
L_82f082: /* 82f082: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f088: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 82f08e: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f094: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 82f09a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f0a0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82f0a3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f0a6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82f0a9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82f0ac: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 82f0b2: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82f0b5: fsub dword ptr [0xa0a848] */
  ST0 = ST0 - (F32((uint32_t)(0xa0a848u)));
/* 82f0bb: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 82f0c1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82f0c4: mov edi, esp */
  edi = esp;
/* 82f0c6: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f0cb: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82f0ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f0cf: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 82f0d1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82f0d4: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82f0d7: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 82f0da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f0db: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 82f0de: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82f0e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f0e2: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 82f0e8: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82f0eb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82f0ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f0ee: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 82f0f1: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82f0f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f0f7: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f0fa: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f100: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f102: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f105: jp 0x82f139 */
  if (pf) goto L_82f139;
L_82f107: /* 82f107: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 82f10a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82f10d: mov dword ptr [ecx], 1 */
  W32((uint32_t)(ecx), 0x1u);
/* 82f113: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 82f116: mov edx, eax */
  edx = eax;
/* 82f118: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 82f11a: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 82f11d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 82f120: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 82f123: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 82f126: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82f129: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82f130: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82f131: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82f132: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82f133: mov esp, ebp */
  esp = ebp;
/* 82f135: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82f136: ret 0x30 */
  esp += 52; SPILL(); return;
L_82f139: /* 82f139: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f13f: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 82f145: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82f148: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f14e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82f150: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f153: mov eax, esp */
  eax = esp;
/* 82f155: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f15a: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82f15d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82f15e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 82f161: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 82f168: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82f16a: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82f16d: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 82f170: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 82f177: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82f179: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 82f17c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82f17e: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 82f181: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82f184: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82f187: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82f189: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 82f18c: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82f18f: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 82f192: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82f195: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 82f198: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 82f19b: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82f19d: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82f1a0: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 82f1a3: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82f1a6: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 82f1ad: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82f1b0: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 82f1b3: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82f1b6: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82f1b9: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 82f1bc: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82f1bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f1c1: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82f1c4: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 82f1ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f1cb: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 82f1ce: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82f1d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82f1d3: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82f1d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f1d9: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f1dc: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f1e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f1e4: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f1e7: jp 0x82f871 */
  if (pf) goto L_82f871;
L_82f1ed: /* 82f1ed: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 82f1f0: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x82f1f6u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 82f1f6: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 82f1f9: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 82f1fc: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 82f1ff: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82f202: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 82f208: fld dword ptr [0xa14ac0] */
  { double v = F32((uint32_t)(0xa14ac0u)); FPUSH(v); }
/* 82f20e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82f210: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f212: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82f215: jne 0x82f21f */
  if (!zf) goto L_82f21f;
L_82f217: /* 82f217: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82f219: fld dword ptr [0xa14ac0] */
  { double v = F32((uint32_t)(0xa14ac0u)); FPUSH(v); }
L_82f21f: /* 82f21f: fadd dword ptr [esi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d8u)));
/* 82f225: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f22b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f22e: mov eax, esp */
  eax = esp;
/* 82f230: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 82f236: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 82f23d: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82f240: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82f242: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82f245: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 82f24c: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 82f24f: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82f252: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 82f255: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82f258: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 82f25b: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 82f262: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 82f265: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82f268: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82f26b: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 82f270: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82f273: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82f276: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 82f279: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f27a: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 82f27d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 82f280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f282: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82f285: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 82f28b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f28c: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 82f28f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82f292: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82f295: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82f298: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 82f29b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82f29e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82f2a1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82f2a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82f2a6: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82f2acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f2ac: test dword ptr [esi + 0x390], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82f2b6: jne 0x82f2e4 */
  if (!zf) goto L_82f2e4;
L_82f2b8: /* 82f2b8: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 82f2bb: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82f2be: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 82f2c1: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* 82f2c4: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 82f2c7: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* 82f2c9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82f2cc: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82f2cf: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 82f2d2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82f2d5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82f2d8: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82f2db: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82f2de: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 82f2e1: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_82f2e4: /* 82f2e4: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f2e7: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f2ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f2ef: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f2f2: jnp 0x82f36b */
  if (!pf) goto L_82f36b;
L_82f2f4: /* 82f2f4: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 82f2f7: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 82f2fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f2ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f302: jnp 0x82f36b */
  if (!pf) goto L_82f36b;
L_82f304: /* 82f304: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 82f307: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f30a: fmul dword ptr [ebp - 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff84u)));
/* 82f30d: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 82f313: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 82f316: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x82f31cu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 82f31c: fstp qword ptr [ebp - 0x50] */
  WF64((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 82f31f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82f322: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82f325: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 82f32b: fmul qword ptr [ebp - 0x50] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffb0u)));
/* 82f32e: fdiv dword ptr [ebp - 0x7c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffff84u)));
/* 82f331: fld qword ptr [0xa138d8] */
  { double v = F64((uint32_t)(0xa138d8u)); FPUSH(v); }
/* 82f337: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 82f339: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f33b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f33e: jp 0x82f348 */
  if (pf) goto L_82f348;
L_82f340: /* 82f340: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82f342: fld qword ptr [0xa138d8] */
  { double v = F64((uint32_t)(0xa138d8u)); FPUSH(v); }
L_82f348: /* 82f348: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 82f34b: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 82f34e: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f354: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 82f35a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 82f35c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 82f35e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f360: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82f362: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f365: jp 0x82f45d */
  if (pf) goto L_82f45d;
L_82f36b: /* 82f36b: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 82f371: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f377: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f37d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f383: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82f385: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82f388: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f38b: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 82f38e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82f391: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82f394: mov edx, esp */
  edx = esp;
/* 82f396: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82f398: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82f39b: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82f39e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82f3a1: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f3a6: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82f3a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82f3aa: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 82f3ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f3ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f3af: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 82f3b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f3b6: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82f3bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f3bc: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f3bf: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f3c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f3c7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f3ca: jp 0x82f871 */
  if (pf) goto L_82f871;
L_82f3d0: /* 82f3d0: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f3d6: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 82f3dc: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f3e2: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f3e8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82f3eb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82f3ee: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82f3f1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82f3f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f3f7: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 82f3fa: mov eax, esp */
  eax = esp;
/* 82f3fc: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f402: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82f404: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 82f407: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82f40a: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f410: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82f413: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 82f416: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82f419: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82f41c: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f421: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 82f424: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82f427: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f42e: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 82f431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f432: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82f435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f436: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 82f43c: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 82f43f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f440: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82f443: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82f446: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82f449: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 82f44c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82f44f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82f452: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82f455: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82f457: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82f45du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_82f45d: /* 82f45d: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f460: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f466: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f468: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f46b: jnp 0x82f481 */
  if (!pf) goto L_82f481;
L_82f46d: /* 82f46d: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 82f470: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 82f476: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f478: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f47b: jp 0x82f871 */
  if (pf) goto L_82f871;
L_82f481: /* 82f481: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 82f487: xor ebx, ebx */
  ebx = 0;
/* 82f489: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82f48b: je 0x82f4b7 */
  if (zf) goto L_82f4b7;
L_82f48d: /* 82f48d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82f48f: call dword ptr [edx + 0x1ac] */
  { uint32_t t = R32((uint32_t)(edx + 0x1acu)); esp -= 4; W32(esp, 0x82f495u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f495: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82f497: je 0x82f4b7 */
  if (zf) goto L_82f4b7;
L_82f499: /* 82f499: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82f49c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82f49e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82f4a1: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82f4a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82f4a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82f4ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82f4af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82f4b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82f4b1: mov esp, ebp */
  esp = ebp;
/* 82f4b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82f4b4: ret 0x30 */
  esp += 52; SPILL(); return;
L_82f4b7: /* 82f4b7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82f4ba: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 82f4c0: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82f4c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f4c4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82f4c7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 82f4ca: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82f4cd: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82f4d0: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82f4d2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82f4d5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 82f4d8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82f4db: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82f4e1u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82f4e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82f4e3: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 82f4e6: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82f4e9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82f4ef: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82f4f2: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 82f4f5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 82f4f8: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 82f4fe: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82f501: mov ecx, edx */
  ecx = edx;
/* 82f503: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 82f509: fst dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0);
/* 82f50f: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82f512: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82f515: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82f518: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f51b: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82f51e: mov edx, esp */
  edx = esp;
/* 82f520: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82f522: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f527: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 82f52a: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 82f530: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82f533: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f539: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 82f53c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 82f53f: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82f542: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82f545: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 82f548: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82f54b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82f54e: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 82f551: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82f554: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 82f557: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 82f55a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 82f55d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 82f560: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82f562: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f568: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f56e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82f571: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82f574: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82f577: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82f57a: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82f57d: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82f580: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 82f583: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f584: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 82f587: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f589: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 82f58f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f590: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82f596u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f596: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f599: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f59f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f5a1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f5a4: jp 0x82f6ae */
  if (pf) goto L_82f6ae;
L_82f5aa: /* 82f5aa: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f5b0: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 82f5b6: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f5bc: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f5c2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82f5c5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 82f5c8: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82f5cb: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82f5ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f5d1: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 82f5d4: mov eax, esp */
  eax = esp;
/* 82f5d6: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f5dc: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82f5de: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 82f5e1: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82f5e4: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f5ea: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82f5ed: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82f5f0: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82f5f3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82f5f6: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f5fb: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 82f5fe: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 82f601: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f608: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 82f60b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f60c: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82f60f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f610: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 82f616: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 82f619: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f61a: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 82f61d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82f620: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82f623: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 82f626: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 82f629: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 82f62c: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 82f62f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82f631: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82f637u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f637: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f63a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f640: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f642: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f645: jp 0x82f6ae */
  if (pf) goto L_82f6ae;
L_82f647: /* 82f647: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 82f64a: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 82f650: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f652: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82f655: jne 0x82f6ae */
  if (!zf) goto L_82f6ae;
L_82f657: /* 82f657: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 82f65a: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 82f65d: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82f660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82f661: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 82f664: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82f667: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 82f66a: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82f66c: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 82f66f: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 82f672: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
L_82f675: /* 82f675: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 82f678: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82f67eu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82f67e: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 82f681: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82f684: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82f687: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 82f689: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 82f68c: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82f68f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 82f692: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 82f695: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82f698: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 82f69b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82f69e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82f6a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82f6a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82f6a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82f6a8: mov esp, ebp */
  esp = ebp;
/* 82f6aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82f6ab: ret 0x30 */
  esp += 52; SPILL(); return;
L_82f6ae: /* 82f6ae: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 82f6b4: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 82f6b7: fld dword ptr [ebp - 0xac] */
  { double v = F32((uint32_t)(ebp + 0xffffff54u)); FPUSH(v); }
/* 82f6bd: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 82f6c3: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 82f6c6: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 82f6c9: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f6cf: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 82f6d2: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82f6d5: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 82f6db: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f6de: fsubr dword ptr [ebp - 0x30] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd0u))) - ST0;
/* 82f6e1: mov eax, esp */
  eax = esp;
/* 82f6e3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 82f6e6: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 82f6e8: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 82f6eb: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f6f0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 82f6f3: fsub dword ptr [ebp - 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff54u)));
/* 82f6f9: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 82f6fc: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 82f6ff: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 82f702: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 82f704: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f70a: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f710: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82f713: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82f716: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 82f719: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82f71c: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82f71f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 82f722: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 82f725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f726: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 82f729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f72a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f72b: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 82f731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f732: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x82f738u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f738: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f73b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f741: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f743: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f746: jp 0x82f81c */
  if (pf) goto L_82f81c;
L_82f74c: /* 82f74c: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 82f752: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 82f758: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 82f75e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82f764: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82f767: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82f76a: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82f76d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82f770: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82f773: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 82f776: mov edx, esp */
  edx = esp;
/* 82f778: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f77e: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 82f780: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 82f783: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82f786: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f78c: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 82f78f: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82f792: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 82f795: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 82f798: push 0x2df */
  { uint32_t v = 0x2dfu; esp -= 4; W32(esp, v); }
/* 82f79d: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 82f7a0: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 82f7a3: fmul dword ptr [0xa157d0] */
  ST0 = ST0 * (F32((uint32_t)(0xa157d0u)));
/* 82f7a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f7aa: lea edx, [ebp + 0x24] */
  edx = (uint32_t)(ebp + 0x24u);
/* 82f7ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f7ae: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 82f7b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82f7b2: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 82f7b8: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 82f7bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82f7bc: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 82f7bf: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 82f7c2: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 82f7c5: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 82f7c8: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 82f7cb: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 82f7ce: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 82f7d1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82f7d3: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82f7d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82f7d9: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 82f7dc: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82f7e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f7e4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82f7e7: jp 0x82f81c */
  if (pf) goto L_82f81c;
L_82f7e9: /* 82f7e9: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 82f7ec: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 82f7f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82f7f4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 82f7f7: jne 0x82f81c */
  if (!zf) goto L_82f81c;
L_82f7f9: /* 82f7f9: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 82f7fc: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 82f7ff: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 82f802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82f803: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 82f806: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 82f809: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 82f80c: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 82f80e: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 82f811: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 82f814: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 82f817: jmp 0x82f675 */
  goto L_82f675;
L_82f81c: /* 82f81c: mov edi, dword ptr [ebp + 0x30] */
  edi = R32((uint32_t)(ebp + 0x30u));
/* 82f81f: cmp dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 82f822: jne 0x82f871 */
  if (!zf) goto L_82f871;
L_82f824: /* 82f824: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 82f82a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82f82c: je 0x82f871 */
  if (zf) goto L_82f871;
L_82f82e: /* 82f82e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82f82f: mov ecx, esp */
  ecx = esp;
/* 82f831: mov dword ptr [ebp + 0x30], esp */
  W32((uint32_t)(ebp + 0x30u), esp);
/* 82f834: push 0x14d */
  { uint32_t v = 0x14du; esp -= 4; W32(esp, v); }
/* 82f839: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x82f83fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 82f83f: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 82f845: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x82f84bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 82f84b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82f84d: je 0x82f871 */
  if (zf) goto L_82f871;
L_82f84f: /* 82f84f: mov dword ptr [edi], 1 */
  W32((uint32_t)(edi), 0x1u);
/* 82f855: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 82f85b: call 0x6c93b3 */
  esp -= 4; W32(esp, 0x82f860u); SPILL(); f_6c93b3(); if (g_unwind) return; RELOAD();
/* 82f860: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 82f866: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 82f869: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 82f86c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 82f86f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
L_82f871: /* 82f871: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82f874: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 82f877: mov ecx, eax */
  ecx = eax;
/* 82f879: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82f87b: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 82f87e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82f881: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 82f884: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82f885: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82f888: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82f88b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82f88c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82f893: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82f894: mov esp, ebp */
  esp = ebp;
/* 82f896: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82f897: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_82f89a(void) {
  LOAD_REGS();
L_82f89a: /* 82f89a: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 82f8a0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82f8a5: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 82f8ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82f8ac: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 82f8b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82f8b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82f8b7(); return;
}

void f_82f8b7(void) {
  LOAD_REGS();
L_82f8b7: /* 82f8b7: push 0xa1579c */
  { uint32_t v = 0xa1579cu; esp -= 4; W32(esp, v); }
/* 82f8bc: push 0xae3a84 */
  { uint32_t v = 0xae3a84u; esp -= 4; W32(esp, v); }
/* 82f8c1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82f8c7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82f8c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82f8ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82f8cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82f8ce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82f8d3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82f8d3: guest_badaddr(0x82f8d3); return;
}

void f_82fb20(void) {
  LOAD_REGS();
L_82fb20: /* 82fb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82fb21: mov ebp, esp */
  ebp = esp;
/* 82fb23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82fb25: push 0x9d3230 */
  { uint32_t v = 0x9d3230u; esp -= 4; W32(esp, v); }
/* 82fb2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82fb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82fb31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82fb38: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82fb3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82fb3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82fb3d: mov esi, ecx */
  esi = ecx;
/* 82fb3f: fld dword ptr [esi + 0x45c] */
  { double v = F32((uint32_t)(esi + 0x45cu)); FPUSH(v); }
/* 82fb45: mov cl, byte ptr [esi + 0x390] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x390u))) & 0xffu);
/* 82fb4b: fsub dword ptr [esi + 0x2d8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2d8u)));
/* 82fb51: xor eax, eax */
  eax = 0;
/* 82fb53: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 82fb55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82fb56: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 82fb59: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82fb5c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 82fb5f: js 0x82fb76 */
  if (sf) goto L_82fb76;
L_82fb61: /* 82fb61: xor eax, eax */
  eax = 0;
/* 82fb63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82fb66: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82fb6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82fb6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82fb6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82fb70: mov esp, ebp */
  esp = ebp;
/* 82fb72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82fb73: ret 8 */
  esp += 12; SPILL(); return;
L_82fb76: /* 82fb76: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 82fb79: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82fb7c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 82fb7f: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82fb82: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 82fb84: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82fb87: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82fb89: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82fb8c: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 82fb8f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82fb92: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82fb95: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82fb98: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 82fb9b: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 82fb9e: mov ecx, esp */
  ecx = esp;
/* 82fba0: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 82fba3: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 82fbaa: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82fbad: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82fbb0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82fbb2: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 82fbb9: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82fbbc: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82fbbf: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 82fbc2: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 82fbc9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82fbcc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82fbcf: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 82fbd4: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 82fbd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82fbd8: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 82fbdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82fbdc: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 82fbdf: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 82fbe2: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 82fbe5: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 82fbe8: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 82fbee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82fbef: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 82fbf2: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 82fbf9: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 82fc00: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 82fc07: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 82fc0e: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 82fc15: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 82fc1c: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 82fc23: mov dword ptr [ebp - 0x48], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffb8u), 0xffffffffu);
/* 82fc2a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 82fc2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82fc2d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82fc33: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82fc39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82fc39: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 82fc3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 82fc3e: jne 0x82fb61 */
  if (!zf) goto L_82fb61;
L_82fc44: /* 82fc44: fld dword ptr [esi + 0x45c] */
  { double v = F32((uint32_t)(esi + 0x45cu)); FPUSH(v); }
/* 82fc4a: mov edx, dword ptr [esi + 0x460] */
  edx = R32((uint32_t)(esi + 0x460u));
/* 82fc50: fld dword ptr [esi + 0x460] */
  { double v = F32((uint32_t)(esi + 0x460u)); FPUSH(v); }
/* 82fc56: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 82fc58: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82fc5b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 82fc61: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 82fc64: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 82fc66: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82fc69: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82fc6c: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 82fc6f: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* 82fc72: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82fc75: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 82fc78: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82fc7b: mov edx, esp */
  edx = esp;
/* 82fc7d: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 82fc80: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 82fc82: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 82fc85: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 82fc88: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 82fc8b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 82fc8e: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 82fc91: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 82fc94: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 82fc97: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 82fc9a: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 82fc9f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82fca2: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 82fca5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82fca6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82fca9: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 82fcac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82fcad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82fcae: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 82fcb1: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 82fcb4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 82fcb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 82fcb7: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x82fcbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 82fcbd: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 82fcc0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 82fcc6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82fcc8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82fccb: jp 0x82fb61 */
  if (pf) goto L_82fb61;
L_82fcd1: /* 82fcd1: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 82fcd7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82fcda: or eax, 0x50 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 82fcdd: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 82fce3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82fce4: mov dword ptr [esi + 0x3f0], 0x3f000000 */
  W32((uint32_t)(esi + 0x3f0u), 0x3f000000u);
/* 82fcee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82fcef: mov eax, 1 */
  eax = 0x1u;
/* 82fcf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82fcfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82fcfc: mov esp, ebp */
  esp = ebp;
/* 82fcfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82fcff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_82fd02(void) {
  LOAD_REGS();
L_82fd02: /* 82fd02: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 82fd05: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82fd0a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 82fd0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82fd0e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 82fd11: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82fd16u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82fd16(); return;
}

void f_82fd16(void) {
  LOAD_REGS();
L_82fd16: /* 82fd16: push 0xa157d4 */
  { uint32_t v = 0xa157d4u; esp -= 4; W32(esp, v); }
/* 82fd1b: push 0xae3ad4 */
  { uint32_t v = 0xae3ad4u; esp -= 4; W32(esp, v); }
/* 82fd20: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82fd26u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82fd26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82fd29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82fd2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82fd2d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82fd32u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_82fd32: guest_badaddr(0x82fd32); return;
}

void f_82fdd0(void) {
  LOAD_REGS();
L_82fdd0: /* 82fdd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 82fdd1: mov ebp, esp */
  ebp = esp;
/* 82fdd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 82fdd5: push 0x9d3240 */
  { uint32_t v = 0x9d3240u; esp -= 4; W32(esp, v); }
/* 82fdda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 82fde0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82fde1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 82fde8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 82fdeb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 82fdee: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 82fdf1: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 82fdf4: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 82fdf7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 82fdf8: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 82fdfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 82fdfc: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82fdff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 82fe00: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 82fe03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 82fe0a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82fe0c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 82fe0e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 82fe10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82fe12: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82fe18: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82fe1a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82fe1d: jp 0x82ff5f */
  if (pf) goto L_82ff5f;
L_82fe23: /* 82fe23: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 82fe25: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 82fe28: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 82fe2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 82fe2c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 82fe2f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 82fe31: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82fe33: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 82fe35: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82fe38: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 82fe3a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 82fe3d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82fe3f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 82fe42: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 82fe45: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 82fe48: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 82fe4b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 82fe4e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 82fe50: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 82fe53: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 82fe56: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82fe59: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x82fe5fu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 82fe5f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 82fe61: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 82fe64: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82fe67: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 82fe6a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 82fe6d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 82fe6f: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 82fe72: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 82fe75: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 82fe78: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82fe7b: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82fe7e: mov edx, ecx */
  edx = ecx;
/* 82fe80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82fe82: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 82fe85: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 82fe88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82fe8a: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82fe90: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 82fe93: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 82fe95: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 82fe98: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82fe9a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82fe9d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82fea0: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 82fea3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 82fea5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82fea7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82feaa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82fead: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82feb0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 82feb2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 82feb5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82feb8: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82febb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 82febd: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 82fec0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82fec3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 82fec6: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82fec9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82fecc: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 82fecf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82fed1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 82fed3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 82fed5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82fed7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82fedd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82fedf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82fee2: jp 0x83001b */
  if (pf) goto L_83001b;
L_82fee8: /* 82fee8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 82feea: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82fef0: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82fef3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82fef6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 82fef9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82feff: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82ff02: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 82ff05: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82ff08: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 82ff0e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 82ff10: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 82ff13: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82ff16: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82ff19: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 82ff1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 82ff1f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 82ff26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 82ff27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 82ff28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 82ff29: mov esp, ebp */
  esp = ebp;
/* 82ff2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 82ff2c: ret 0x14 */
  esp += 24; SPILL(); return;
L_82ff5f: /* 82ff5f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 82ff62: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 82ff64: mov eax, edx */
  eax = edx;
/* 82ff66: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 82ff68: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 82ff6b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 82ff6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ff70: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 82ff73: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82ff76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ff78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82ff7a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 82ff7c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 82ff7e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 82ff81: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82ff84: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 82ff86: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82ff89: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82ff8c: fsubr dword ptr [edx] */
  ST0 = (F32((uint32_t)(edx))) - ST0;
/* 82ff8e: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 82ff91: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82ff94: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 82ff97: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 82ff9a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82ff9d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82ffa3: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 82ffa6: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82ffa9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 82ffab: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82ffae: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82ffb1: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82ffb4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82ffb6: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82ffb9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82ffbc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ffbf: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82ffc2: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82ffc5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82ffc8: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82ffcb: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82ffce: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82ffd1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82ffd4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 82ffd7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 82ffda: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82ffdd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 82ffe0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ffe2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 82ffe4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 82ffe6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ffe8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82ffee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82fff0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82fff3: jp 0x83001b */
  if (pf) goto L_83001b;
L_82fff5: /* 82fff5: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 82fffc: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82ffff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 830001: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 830008: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83000b: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 830012: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 830015: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 830018: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83001b: /* 83001b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83001e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83001f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 830020: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 830027: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 830028: mov esp, ebp */
  esp = ebp;
/* 83002a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83002b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_82ff2f(void) {
  LOAD_REGS();
L_82ff2f: /* 82ff2f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 82ff32: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 82ff37: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 82ff3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 82ff3b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 82ff3e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ff43u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_82ff43(); return;
}

void f_82ff43(void) {
  LOAD_REGS();
L_82ff43: /* 82ff43: push 0xa15808 */
  { uint32_t v = 0xa15808u; esp -= 4; W32(esp, v); }
/* 82ff48: push 0xae3b04 */
  { uint32_t v = 0xae3b04u; esp -= 4; W32(esp, v); }
/* 82ff4d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x82ff53u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 82ff53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 82ff56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ff58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 82ff5a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x82ff5fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 82ff5f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 82ff62: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 82ff64: mov eax, edx */
  eax = edx;
/* 82ff66: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 82ff68: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 82ff6b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 82ff6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ff70: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 82ff73: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82ff76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ff78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 82ff7a: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 82ff7c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 82ff7e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 82ff81: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82ff84: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 82ff86: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 82ff89: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82ff8c: fsubr dword ptr [edx] */
  ST0 = (F32((uint32_t)(edx))) - ST0;
/* 82ff8e: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 82ff91: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 82ff94: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 82ff97: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 82ff9a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 82ff9d: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 82ffa3: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 82ffa6: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 82ffa9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 82ffab: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82ffae: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 82ffb1: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82ffb4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 82ffb6: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82ffb9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 82ffbc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 82ffbf: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 82ffc2: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 82ffc5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 82ffc8: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 82ffcb: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 82ffce: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 82ffd1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 82ffd4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 82ffd7: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 82ffda: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 82ffdd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 82ffe0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ffe2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 82ffe4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 82ffe6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 82ffe8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 82ffee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 82fff0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 82fff3: jp 0x83001b */
  if (pf) goto L_83001b;
L_82fff5: /* 82fff5: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 82fffc: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 82ffff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 830001: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 830008: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83000b: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 830012: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 830015: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 830018: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_83001b: /* 83001b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83001e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83001f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 830020: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 830027: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 830028: mov esp, ebp */
  esp = ebp;
/* 83002a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83002b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8300d0(void) {
  LOAD_REGS();
L_8300d0: /* 8300d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8300d1: mov ebp, esp */
  ebp = esp;
/* 8300d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8300d5: push 0x9d3250 */
  { uint32_t v = 0x9d3250u; esp -= 4; W32(esp, v); }
/* 8300da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8300e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8300e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8300e8: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8300eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8300ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8300ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8300ee: mov esi, ecx */
  esi = ecx;
/* 8300f0: mov edi, dword ptr [esi + 0x16c] */
  edi = R32((uint32_t)(esi + 0x16cu));
/* 8300f6: mov al, byte ptr [edi + 0x410] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x410u))) & 0xffu);
/* 8300fc: xor edx, edx */
  edx = 0;
/* 8300fe: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 830100: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 830103: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 830106: je 0x83025b */
  if (zf) goto L_83025b;
L_83010c: /* 83010c: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 830112: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 830118: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83011a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83011d: jnp 0x830224 */
  if (!pf) goto L_830224;
L_830123: /* 830123: fld dword ptr [esi + 0x2e0] */
  { double v = F32((uint32_t)(esi + 0x2e0u)); FPUSH(v); }
/* 830129: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83012f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 830131: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 830134: jnp 0x830224 */
  if (!pf) goto L_830224;
L_83013a: /* 83013a: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 83013d: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 830140: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 830143: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 830146: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 830149: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 83014c: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 83014f: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 830152: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 830155: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 83015c: mov dword ptr [ebp - 0x44], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xffffffffu);
/* 830163: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 830166: mov ecx, dword ptr [edi + 0x280] */
  ecx = R32((uint32_t)(edi + 0x280u));
/* 83016c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83016e: je 0x830224 */
  if (zf) goto L_830224;
L_830174: /* 830174: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 83017a: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 830180: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 830186: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 830187: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83018d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83018e: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 830191: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 830194: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 830197: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 83019a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83019d: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 8301a3: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8301a6: fsubr dword ptr [esi + 0x178] */
  ST0 = (F32((uint32_t)(esi + 0x178u))) - ST0;
/* 8301ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8301af: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8301b5: mov edx, esp */
  edx = esp;
/* 8301b7: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8301b9: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8301bc: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8301bf: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8301c2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8301c5: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8301c8: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 8301cb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8301ce: mov edx, esp */
  edx = esp;
/* 8301d0: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8301d3: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8301d6: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8301d8: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8301db: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8301de: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8301e1: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 8301e4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8301e7: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8301ea: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8301ed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8301ef: mov edx, esp */
  edx = esp;
/* 8301f1: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8301f3: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8301f6: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8301f9: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8301fc: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 8301ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 830200: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 830203: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 830204: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x830207u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830207: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83020a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 830210: xor edx, edx */
  edx = 0;
/* 830212: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 830214: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 830217: jnp 0x830224 */
  if (!pf) goto L_830224;
L_830219: /* 830219: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 83021f: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 830222: jmp 0x83022a */
  goto L_83022a;
L_830224: /* 830224: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_83022a: /* 83022a: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83022c: je 0x830259 */
  if (zf) goto L_830259;
L_83022e: /* 83022e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 830231: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 830233: fmul dword ptr [esi + 0x2e0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2e0u)));
/* 830239: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 83023c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 83023e: fmul dword ptr [edi + 0x3f4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3f4u)));
/* 830244: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
L_830246: /* 830246: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 830249: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 830250: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 830251: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 830252: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 830253: mov esp, ebp */
  esp = ebp;
/* 830255: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 830256: ret 8 */
  esp += 12; SPILL(); return;
L_830259: /* 830259: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83025b: /* 83025b: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 830261: call 0x6c34d1 */
  esp -= 4; W32(esp, 0x830266u); SPILL(); f_6c34d1(); if (g_unwind) return; RELOAD();
/* 830266: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 83026c: fld dword ptr [edx + 0x3cc] */
  { double v = F32((uint32_t)(edx + 0x3ccu)); FPUSH(v); }
/* 830272: fcomp dword ptr [eax + 0x3cc] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3ccu)));
  FPOP();
/* 830278: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83027a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83027d: jnp 0x830246 */
  if (!pf) goto L_830246;
L_83027f: /* 83027f: fld dword ptr [esi + 0x2e0] */
  { double v = F32((uint32_t)(esi + 0x2e0u)); FPUSH(v); }
/* 830285: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 830288: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83028e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 830291: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 830292: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 830294: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 83029a: fld dword ptr [ecx + 0x3f4] */
  { double v = F32((uint32_t)(ecx + 0x3f4u)); FPUSH(v); }
/* 8302a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8302a3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8302a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8302aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8302ab: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 8302ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8302b4: mov esp, ebp */
  esp = ebp;
/* 8302b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8302b7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8302ba(void) {
  LOAD_REGS();
L_8302ba: /* 8302ba: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8302bd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8302c2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8302c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8302c6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8302c9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8302ceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8302ce(); return;
}

void f_8302ce(void) {
  LOAD_REGS();
L_8302ce: /* 8302ce: push 0xa1583c */
  { uint32_t v = 0xa1583cu; esp -= 4; W32(esp, v); }
/* 8302d3: push 0xae3bf8 */
  { uint32_t v = 0xae3bf8u; esp -= 4; W32(esp, v); }
/* 8302d8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8302deu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8302de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8302e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8302e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8302e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8302eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8302ea: guest_badaddr(0x8302ea); return;
}

void f_830380(void) {
  LOAD_REGS();
L_830380: /* 830380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 830381: mov ebp, esp */
  ebp = esp;
/* 830383: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 830385: push 0x9d3260 */
  { uint32_t v = 0x9d3260u; esp -= 4; W32(esp, v); }
/* 83038a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 830390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830391: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 830398: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83039b: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* 8303a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8303a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8303a3: xor esi, esi */
  esi = 0;
/* 8303a5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8303a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8303a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8303ab: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8303ae: jne 0x8303c5 */
  if (!zf) goto L_8303c5;
L_8303b0: /* 8303b0: xor eax, eax */
  eax = 0;
/* 8303b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8303b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8303bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8303bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8303be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8303bf: mov esp, ebp */
  esp = ebp;
/* 8303c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8303c2: ret 0xc */
  esp += 16; SPILL(); return;
L_8303c5: /* 8303c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8303c6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8303c9: mov edi, esp */
  edi = esp;
/* 8303cb: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8303d2: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8303d5: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8303d7: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8303de: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8303e1: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8303e4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8303e7: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8303ee: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8303f1: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 8303f4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8303f7: mov edi, esp */
  edi = esp;
/* 8303f9: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8303fb: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8303fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8303ff: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 830402: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 830405: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 830408: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
/* 83040b: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 83040e: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 830415: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 83041c: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 830423: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 83042a: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 830431: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 830438: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 83043b: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 830442: mov dword ptr [ebp - 0x2c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffd4u), 0xffffffffu);
/* 830449: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 83044c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83044e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83044f: mov ecx, eax */
  ecx = eax;
/* 830451: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 830454: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x830457u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830457: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83045a: xor edx, edx */
  edx = 0;
/* 83045c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83045e: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 830461: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 830462: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 830463: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83046a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83046b: mov eax, edx */
  eax = edx;
/* 83046d: mov esp, ebp */
  esp = ebp;
/* 83046f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 830470: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_830473(void) {
  LOAD_REGS();
L_830473: /* 830473: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 830476: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83047b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 83047e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83047f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 830482: call 0x99caf8 */
  esp -= 4; W32(esp, 0x830487u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_830487(); return;
}

void f_830487(void) {
  LOAD_REGS();
L_830487: /* 830487: push 0xa15874 */
  { uint32_t v = 0xa15874u; esp -= 4; W32(esp, v); }
/* 83048c: push 0xae3c00 */
  { uint32_t v = 0xae3c00u; esp -= 4; W32(esp, v); }
/* 830491: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x830497u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 830497: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83049a: xor esi, esi */
  esi = 0;
/* 83049c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83049d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83049e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8304a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8304a3: guest_badaddr(0x8304a3); return;
}

void f_830500(void) {
  LOAD_REGS();
L_830500: /* 830500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 830501: mov ebp, esp */
  ebp = esp;
/* 830503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 830505: push 0x9d3270 */
  { uint32_t v = 0x9d3270u; esp -= 4; W32(esp, v); }
/* 83050a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 830510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 830518: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83051e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 830521: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 830524: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 830525: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 830526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830527: mov esi, ecx */
  esi = ecx;
/* 830529: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83052a: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 83052d: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 830533: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 83053a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83053d: mov ecx, edi */
  ecx = edi;
/* 83053f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 830541: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 830548: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83054b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 83054e: mov eax, dword ptr [esi + 0x4fc] */
  eax = R32((uint32_t)(esi + 0x4fcu));
/* 830554: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830556: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 830559: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 830560: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 830563: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 830566: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83056d: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 830570: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 830573: je 0x831020 */
  if (zf) goto L_831020;
L_830579: /* 830579: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 83057f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830581: je 0x83102e */
  if (zf) goto L_83102e;
L_830587: /* 830587: lea ebx, [esi + 0x194] */
  ebx = (uint32_t)(esi + 0x194u);
/* 83058d: mov ecx, ebx */
  ecx = ebx;
/* 83058f: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x830595u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 830595: xor ecx, ecx */
  ecx = 0;
/* 830597: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 830599: jne 0x831020 */
  if (!zf) goto L_831020;
L_83059f: /* 83059f: mov edx, dword ptr [esi + 0x4fc] */
  edx = R32((uint32_t)(esi + 0x4fcu));
/* 8305a5: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 8305ab: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 8305b1: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 8305b7: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 8305ba: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8305bd: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 8305c0: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 8305c3: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 8305c6: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 8305c9: mov dword ptr [ebp - 0x68], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x3f800000u);
/* 8305d0: mov dword ptr [ebp - 0x64], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xffffffffu);
/* 8305d7: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 8305da: fld dword ptr [edx + 0x454] */
  { double v = F32((uint32_t)(edx + 0x454u)); FPUSH(v); }
/* 8305e0: fadd dword ptr [edx + 0x460] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x460u)));
/* 8305e6: fld dword ptr [edx + 0x450] */
  { double v = F32((uint32_t)(edx + 0x450u)); FPUSH(v); }
/* 8305ec: fadd dword ptr [edx + 0x45c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x45cu)));
/* 8305f2: fld dword ptr [edx + 0x458] */
  { double v = F32((uint32_t)(edx + 0x458u)); FPUSH(v); }
/* 8305f8: fadd dword ptr [edx + 0x44c] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x44cu)));
/* 8305fe: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 830600: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 830603: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 830605: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 830608: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83060a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83060c: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 83060e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 830610: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 830616: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 830618: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83061b: jne 0x830624 */
  if (!zf) goto L_830624;
L_83061d: /* 83061d: mov eax, 1 */
  eax = 0x1u;
/* 830622: jmp 0x830626 */
  goto L_830626;
L_830624: /* 830624: xor eax, eax */
  eax = 0;
L_830626: /* 830626: test byte ptr [edx + 0x468], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x468u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83062d: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 830630: jne 0x8307af */
  if (!zf) goto L_8307af;
L_830636: /* 830636: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 830638: je 0x8307af */
  if (zf) goto L_8307af;
L_83063e: /* 83063e: mov eax, dword ptr [esi + 0x3f8] */
  eax = R32((uint32_t)(esi + 0x3f8u));
/* 830644: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 830647: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83064a: mov eax, edi */
  eax = edi;
/* 83064c: fmul dword ptr [edx + 0x454] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x454u)));
/* 830652: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830653: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 830656: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830657: fmul dword ptr [edx + 0x450] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x450u)));
/* 83065d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83065e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 830661: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830662: fmul dword ptr [edx + 0x44c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x44cu)));
/* 830668: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 83066e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83066f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830672: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 830675: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 830678: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 83067a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83067d: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 830680: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 830683: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 830686: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 830689: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83068c: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 83068f: fmul dword ptr [edx + 0x454] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x454u)));
/* 830695: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83069b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83069e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8306a0: fmul dword ptr [edx + 0x450] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x450u)));
/* 8306a6: mov ecx, esp */
  ecx = esp;
/* 8306a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8306ab: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8306ae: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8306b1: fmul dword ptr [edx + 0x44c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x44cu)));
/* 8306b7: mov edx, dword ptr [esi + 0x3f8] */
  edx = R32((uint32_t)(esi + 0x3f8u));
/* 8306bd: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8306c0: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 8306c6: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8306c8: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8306cb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8306cd: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8306d0: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8306d3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8306d6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8306d9: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8306dc: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8306df: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8306e2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8306e5: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8306e8: mov ecx, esp */
  ecx = esp;
/* 8306ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8306eb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8306ee: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8306f1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8306f3: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8306f6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8306f9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8306fc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8306ff: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 830702: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 830705: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83070b: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x830711u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830711: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 830717: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 83071a: mov edx, dword ptr [esi + 0x4fc] */
  edx = R32((uint32_t)(esi + 0x4fcu));
/* 830720: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830722: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 830725: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 830728: jne 0x83079a */
  if (!zf) goto L_83079a;
L_83072a: /* 83072a: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 830730: mov cl, byte ptr [eax + 0x410] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x410u))) & 0xffu);
/* 830736: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 830738: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83073b: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83073e: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 830745: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 830748: mov eax, esp */
  eax = esp;
/* 83074a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83074c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 830753: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 830756: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 830759: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 830760: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 830763: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830766: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830768: mov ecx, esi */
  ecx = esi;
/* 83076a: je 0x830770 */
  if (zf) goto L_830770;
L_83076c: /* 83076c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 83076e: jmp 0x830772 */
  goto L_830772;
L_830770: /* 830770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_830772: /* 830772: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x830778u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830778: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 83077b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83077e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83077f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830780: mov ecx, esi */
  ecx = esi;
/* 830782: call 0x6cb717 */
  esp -= 4; W32(esp, 0x830787u); SPILL(); f_6cb717(); if (g_unwind) return; RELOAD();
L_830787: /* 830787: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83078a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 830791: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 830792: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 830793: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 830794: mov esp, ebp */
  esp = ebp;
/* 830796: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 830797: ret 8 */
  esp += 12; SPILL(); return;
L_83079a: /* 83079a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83079d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8307a3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8307a5: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8307a8: jnp 0x830787 */
  if (!pf) goto L_830787;
L_8307aa: /* 8307aa: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8307ad: xor ecx, ecx */
  ecx = 0;
L_8307af: /* 8307af: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8307b1: mov ebx, dword ptr [esi + 0x404] */
  ebx = R32((uint32_t)(esi + 0x404u));
/* 8307b7: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 8307ba: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8307bd: fmul dword ptr [edx + 0x460] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x460u)));
/* 8307c3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8307c6: fmul dword ptr [edx + 0x45c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x45cu)));
/* 8307cc: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8307cf: fmul dword ptr [edx + 0x458] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x458u)));
/* 8307d5: mov edx, edi */
  edx = edi;
/* 8307d7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8307da: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8307dd: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8307df: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8307e2: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8307e5: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8307e8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8307eb: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8307ee: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 8307f1: jne 0x830815 */
  if (!zf) goto L_830815;
L_8307f3: /* 8307f3: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8307f5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8307fb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8307fd: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 830800: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830806: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 830809: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 83080c: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830812: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
L_830815: /* 830815: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 830818: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830819: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 83081c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83081d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 830820: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830821: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 830824: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830825: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 830828: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 83082e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 830830: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 830836: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830837: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83083a: lea edi, [esi + 0x17c] */
  edi = (uint32_t)(esi + 0x17cu);
/* 830840: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 830843: mov ecx, esp */
  ecx = esp;
/* 830845: mov edx, edi */
  edx = edi;
/* 830847: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83084a: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 83084c: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 83084e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 830851: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 830854: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 830857: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 830859: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 83085c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83085f: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 830862: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830865: mov ecx, esp */
  ecx = esp;
/* 830867: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 830869: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 83086c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83086f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 830872: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 830875: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 83087b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83087c: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x830882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830882: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 830888: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 83088b: mov ecx, dword ptr [esi + 0x4fc] */
  ecx = R32((uint32_t)(esi + 0x4fcu));
/* 830891: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830893: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 830896: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 830899: jne 0x830b94 */
  if (!zf) goto L_830b94;
L_83089f: /* 83089f: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 8308a5: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8308a8: fmul dword ptr [eax + 0x3cc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3ccu)));
/* 8308ae: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8308b3: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8308b6: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8308b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8308bb: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8308be: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8308c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8308c2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8308c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8308ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8308cd: jne 0x830913 */
  if (!zf) goto L_830913;
L_8308cf: /* 8308cf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8308d1: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8308d4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8308d7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8308da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8308dd: mov ecx, esp */
  ecx = esp;
/* 8308df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8308e1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8308e4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8308e7: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 8308ee: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8308f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8308f3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8308f6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8308f8: mov ecx, esi */
  ecx = esi;
/* 8308fa: call dword ptr [eax + 0x114] */
  { uint32_t t = R32((uint32_t)(eax + 0x114u)); esp -= 4; W32(esp, 0x830900u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830900: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 830903: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83090a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83090b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83090c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83090d: mov esp, ebp */
  esp = ebp;
/* 83090f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 830910: ret 8 */
  esp += 12; SPILL(); return;
L_830913: /* 830913: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 830916: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830917: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 83091a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x830920u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 830920: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 830926: fmul dword ptr [0xa10ca8] */
  ST0 = ST0 * (F32((uint32_t)(0xa10ca8u)));
/* 83092c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 830932: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 830935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830937: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830939: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83093b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83093d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83093f: mov ecx, edi */
  ecx = edi;
/* 830941: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 830943: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 830946: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 830949: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83094b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83094e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 830951: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 830953: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 830956: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 830958: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 83095e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83095f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 830961: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830964: mov eax, esp */
  eax = esp;
/* 830966: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 830968: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 83096b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83096e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 830971: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830974: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 830977: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83097a: mov eax, esp */
  eax = esp;
/* 83097c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83097e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 830981: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 830984: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 830987: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83098a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830991: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x830997u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830997: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 83099a: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 8309a0: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 8309a6: add eax, 0x44c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8309ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8309ac: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 8309af: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8309b2: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8309b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8309b8: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8309bb: call 0x6cb802 */
  esp -= 4; W32(esp, 0x8309c0u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 8309c0: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8309c3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8309c6: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8309c8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8309cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8309ce: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8309d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8309d3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8309d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8309d8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8309da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8309dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8309de: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 8309e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8309e5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8309e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8309eb: mov ecx, edi */
  ecx = edi;
/* 8309ed: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8309f0: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 8309f2: mov eax, esp */
  eax = esp;
/* 8309f4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8309f7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8309f9: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 8309fc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8309ff: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 830a02: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830a05: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 830a08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830a0b: mov eax, esp */
  eax = esp;
/* 830a0d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 830a0f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 830a12: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 830a15: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 830a18: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830a1b: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830a21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830a22: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x830a28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830a28: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 830a2b: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 830a2e: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 830a34: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 830a37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 830a39: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 830a3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830a3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830a40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830a42: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 830a45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830a47: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 830a4a: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 830a50: fadd dword ptr [ebp - 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 830a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830a54: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830a57: mov eax, esp */
  eax = esp;
/* 830a59: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 830a5c: mov ecx, edi */
  ecx = edi;
/* 830a5e: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 830a60: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830a66: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 830a68: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 830a6b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 830a6e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830a74: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 830a77: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 830a7a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 830a7d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830a83: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830a86: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830a89: mov eax, esp */
  eax = esp;
/* 830a8b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 830a8e: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 830a91: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 830a93: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 830a96: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 830a99: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 830a9c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 830a9f: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 830aa2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830aa5: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830aab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830aac: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x830ab2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830ab2: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 830ab8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 830abe: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 830ac1: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 830ac7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 830ac8: fsubr dword ptr [0x9f40f4] */
  ST0 = (F32((uint32_t)(0x9f40f4u))) - ST0;
/* 830ace: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830acf: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 830ad2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 830ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830ad6: call 0x6cb802 */
  esp -= 4; W32(esp, 0x830adbu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 830adb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 830add: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 830adf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 830ae2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830ae4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830ae6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830ae8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830aea: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 830af0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830af1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830af4: mov ecx, esp */
  ecx = esp;
/* 830af6: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 830af8: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 830afb: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 830afe: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 830b01: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 830b04: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 830b06: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830b09: mov ecx, esp */
  ecx = esp;
/* 830b0b: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 830b0d: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 830b10: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 830b13: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 830b16: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 830b19: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830b1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830b20: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x830b26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830b26: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 830b2c: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 830b2f: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 830b32: mov dword ptr [esi + 0x188], ecx */
  W32((uint32_t)(esi + 0x188u), ecx);
/* 830b38: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 830b3b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 830b3e: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 830b41: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 830b44: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 830b47: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 830b4d: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 830b50: mov dword ptr [esi + 0x18c], edx */
  W32((uint32_t)(esi + 0x18cu), edx);
/* 830b56: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 830b58: mov dword ptr [esi + 0x190], eax */
  W32((uint32_t)(esi + 0x190u), eax);
/* 830b5e: mov al, byte ptr [ecx + 0x410] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x410u))) & 0xffu);
/* 830b64: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 830b67: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830b6a: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 830b6c: mov eax, esp */
  eax = esp;
/* 830b6e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 830b70: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 830b73: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 830b76: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 830b7d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 830b80: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830b83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830b85: mov ecx, esi */
  ecx = esi;
/* 830b87: je 0x830770 */
  if (zf) goto L_830770;
L_830b8d: /* 830b8d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 830b8f: jmp 0x830772 */
  goto L_830772;
L_830b94: /* 830b94: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 830b97: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 830b9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 830b9f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 830ba2: jp 0x830de1 */
  if (pf) goto L_830de1;
L_830ba8: /* 830ba8: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 830bae: test dword ptr [edx + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830bb8: je 0x830de1 */
  if (zf) goto L_830de1;
L_830bbe: /* 830bbe: fld dword ptr [esi + 0x3f8] */
  { double v = F32((uint32_t)(esi + 0x3f8u)); FPUSH(v); }
/* 830bc4: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 830bca: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 830bcc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 830bce: fmul dword ptr [ecx + 0x454] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x454u)));
/* 830bd4: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 830bd7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 830bda: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 830bdd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 830be0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 830be3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 830be6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 830be8: fmul dword ptr [ecx + 0x450] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x450u)));
/* 830bee: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 830bf1: fmul dword ptr [ecx + 0x44c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x44cu)));
/* 830bf7: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 830bfa: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 830bfd: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 830c00: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 830c03: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 830c06: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 830c09: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 830c0c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 830c0f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 830c12: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 830c15: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 830c18: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 830c1b: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 830c1e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 830c21: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 830c24: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 830c27: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 830c2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830c2c: jne 0x830c52 */
  if (!zf) goto L_830c52;
L_830c2e: /* 830c2e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 830c31: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830c37: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 830c3a: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 830c3d: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830c43: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 830c46: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 830c49: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830c4f: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
L_830c52: /* 830c52: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 830c54: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830c5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830c5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 830c5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830c60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830c62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830c64: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 830c6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830c6b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830c6e: mov eax, esp */
  eax = esp;
/* 830c70: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 830c72: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 830c75: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 830c78: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 830c7b: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 830c7e: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 830c81: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830c84: mov eax, esp */
  eax = esp;
/* 830c86: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 830c88: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 830c8b: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 830c8e: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 830c91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830c92: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 830c95: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x830c9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830c9b: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 830c9e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 830ca4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 830ca6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 830ca9: jp 0x830d8d */
  if (pf) goto L_830d8d;
L_830caf: /* 830caf: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 830cb5: fld dword ptr [ecx + 0x3cc] */
  { double v = F32((uint32_t)(ecx + 0x3ccu)); FPUSH(v); }
/* 830cbb: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 830cc2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 830cc8: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 830ccf: mov dword ptr [ebp - 0x14], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0xbf800000u);
/* 830cd6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 830cd8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 830cdb: jne 0x830ce4 */
  if (!zf) goto L_830ce4;
L_830cdd: /* 830cdd: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
L_830ce4: /* 830ce4: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 830ce7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 830ce8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 830ceb: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x830cf1u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 830cf1: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 830cf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830cf8: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 830cfb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 830cfd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830d00: mov edx, esp */
  edx = esp;
/* 830d02: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 830d04: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 830d07: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 830d0a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 830d0d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 830d10: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 830d13: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830d16: mov edx, esp */
  edx = esp;
/* 830d18: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 830d1a: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 830d1d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 830d20: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 830d23: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 830d26: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 830d29: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830d2c: mov edx, esp */
  edx = esp;
/* 830d2e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 830d30: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 830d33: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 830d36: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 830d39: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 830d3c: mov ecx, esi */
  ecx = esi;
/* 830d3e: call dword ptr [eax + 0x134] */
  { uint32_t t = R32((uint32_t)(eax + 0x134u)); esp -= 4; W32(esp, 0x830d44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830d44: mov eax, dword ptr [esi + 0x4fc] */
  eax = R32((uint32_t)(esi + 0x4fcu));
/* 830d4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830d4c: je 0x830d8d */
  if (zf) goto L_830d8d;
L_830d4e: /* 830d4e: cmp byte ptr [esi + 0x50], 0xb */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 830d52: je 0x830d8d */
  if (zf) goto L_830d8d;
L_830d54: /* 830d54: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 830d56: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830d59: mov eax, esp */
  eax = esp;
/* 830d5b: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 830d62: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 830d65: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 830d67: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 830d6e: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 830d71: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 830d74: mov dword ptr [ebp - 0x30], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3f800000u);
/* 830d7b: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 830d7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830d80: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830d83: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 830d85: mov ecx, esi */
  ecx = esi;
/* 830d87: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x830d8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_830d8d: /* 830d8d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 830d93: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 830d96: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 830d99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 830d9a: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 830da0: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 830da3: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 830da6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830da7: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 830dad: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 830db0: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 830db3: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 830db6: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 830db9: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 830dbc: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x830dc2u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 830dc2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 830dc4: mov dword ptr [esi + 0x188], ecx */
  W32((uint32_t)(esi + 0x188u), ecx);
/* 830dca: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 830dcd: mov dword ptr [esi + 0x18c], edx */
  W32((uint32_t)(esi + 0x18cu), edx);
/* 830dd3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 830dd6: mov dword ptr [esi + 0x190], eax */
  W32((uint32_t)(esi + 0x190u), eax);
/* 830ddc: jmp 0x831020 */
  goto L_831020;
L_830de1: /* 830de1: test byte ptr [ecx + 0x468], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x468u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 830de8: jne 0x831020 */
  if (!zf) goto L_831020;
L_830dee: /* 830dee: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 830df1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830df3: jne 0x831020 */
  if (!zf) goto L_831020;
L_830df9: /* 830df9: lea edx, [ecx + 0x458] */
  edx = (uint32_t)(ecx + 0x458u);
/* 830dff: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 830e01: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 830e04: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 830e07: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 830e0a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 830e0d: add ecx, 0x44c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 830e13: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 830e15: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 830e18: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 830e1b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830e21: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 830e24: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 830e27: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 830e2a: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830e30: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 830e33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830e35: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 830e38: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 830e3e: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 830e41: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 830e44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830e46: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 830e4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830e50: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 830e53: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 830e55: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 830e58: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 830e5e: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 830e64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 830e65: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 830e68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830e6b: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 830e71: mov eax, esp */
  eax = esp;
/* 830e73: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 830e76: mov ecx, edi */
  ecx = edi;
/* 830e78: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 830e7a: fmul dword ptr [0xa14ac0] */
  ST0 = ST0 * (F32((uint32_t)(0xa14ac0u)));
/* 830e80: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 830e82: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 830e85: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 830e88: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 830e8b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 830e8e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830e91: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 830e94: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 830e97: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830e9a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 830e9d: mov eax, esp */
  eax = esp;
/* 830e9f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 830ea1: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 830ea4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 830ea7: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 830eaa: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 830ead: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830eb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830eb4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x830ebau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830eba: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 830ebd: fmul qword ptr [0xa138d8] */
  ST0 = ST0 * (F64((uint32_t)(0xa138d8u)));
/* 830ec3: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 830ec6: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 830ec9: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 830ecf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 830ed1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 830ed4: jp 0x830f64 */
  if (pf) goto L_830f64;
L_830eda: /* 830eda: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 830edd: mov edx, dword ptr [esi + 0x3f8] */
  edx = R32((uint32_t)(esi + 0x3f8u));
/* 830ee3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 830ee6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830ee8: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 830eeb: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 830ef1: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 830ef4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830ef6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 830ef8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830efa: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 830efd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830eff: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 830f02: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 830f08: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 830f0b: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 830f0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 830f0f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830f12: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 830f15: mov ecx, esp */
  ecx = esp;
/* 830f17: mov edx, edi */
  edx = edi;
/* 830f19: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 830f1c: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 830f1e: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 830f21: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 830f23: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 830f26: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 830f29: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 830f2c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 830f2f: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 830f32: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 830f35: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 830f38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830f3b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 830f3e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 830f41: mov ecx, esp */
  ecx = esp;
/* 830f43: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 830f45: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 830f48: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 830f4b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 830f4e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 830f51: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 830f54: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 830f57: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830f5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830f5e: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x830f64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_830f64: /* 830f64: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 830f66: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 830f69: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 830f6c: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 830f72: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 830f75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830f77: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 830f7a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 830f7c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 830f7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830f81: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 830f84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830f86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 830f88: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 830f8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 830f8f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 830f92: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830f95: mov edx, esp */
  edx = esp;
/* 830f97: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 830f9a: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 830f9c: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 830f9f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 830fa2: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 830fa5: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 830fa8: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 830fab: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 830fae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830fb1: mov edx, esp */
  edx = esp;
/* 830fb3: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 830fb5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 830fb8: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 830fbb: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 830fbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 830fbf: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 830fc2: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x830fc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 830fc8: mov eax, dword ptr [esi + 0x4fc] */
  eax = R32((uint32_t)(esi + 0x4fcu));
/* 830fce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 830fd0: jne 0x831020 */
  if (!zf) goto L_831020;
L_830fd2: /* 830fd2: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 830fd8: mov cl, byte ptr [eax + 0x410] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x410u))) & 0xffu);
/* 830fde: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 830fe0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 830fe3: test cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 830fe6: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 830fed: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 830ff0: mov eax, esp */
  eax = esp;
/* 830ff2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 830ff4: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 830ffb: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 830ffe: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 831001: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 831008: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83100b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83100e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 831010: mov ecx, esi */
  ecx = esi;
/* 831012: je 0x831018 */
  if (zf) goto L_831018;
L_831014: /* 831014: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 831016: jmp 0x83101a */
  goto L_83101a;
L_831018: /* 831018: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_83101a: /* 83101a: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x831020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_831020: /* 831020: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 831026: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 831028: jne 0x830787 */
  if (!zf) goto L_830787;
L_83102e: /* 83102e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 831030: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 831033: mov eax, esp */
  eax = esp;
/* 831035: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 83103c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83103f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 831041: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 831048: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83104b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83104e: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 831055: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 831058: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83105a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83105d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 83105f: mov ecx, esi */
  ecx = esi;
/* 831061: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x831067u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 831067: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83106a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83106b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83106c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 831073: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 831074: mov esp, ebp */
  esp = ebp;
/* 831076: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 831077: ret 8 */
  esp += 12; SPILL(); return;
}
