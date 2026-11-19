#include "recomp.h"
#include "rec_mod.h"

void f_dac090(void) {
  LOAD_REGS();
L_dac090: /* dac090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dac091: mov ebp, esp */
  ebp = esp;
/* dac093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac095: push 0xdba8a0 */
  { uint32_t v = 0xdba8a0u; esp -= 4; W32(esp, v); }
/* dac09a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac0a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac0a8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dac0ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac0ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac0ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac0ae: mov esi, ecx */
  esi = ecx;
/* dac0b0: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* dac0b3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* dac0b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dac0b9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* dac0bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac0bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dac0be: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dac0c5: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xdac0cbu); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* dac0cb: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* dac0ce: fmul dword ptr [0xdc3ae4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae4u)));
/* dac0d4: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* dac0d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac0d9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac0db: je 0xdac0f9 */
  if (zf) goto L_dac0f9;
L_dac0dd: /* dac0dd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dac0e0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* dac0e3: add ecx, -6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dac0e6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dac0e9: fimul dword ptr [ebp - 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* dac0ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac0ed: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* dac0ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac0f1: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xdac0f6u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* dac0f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac0f7: jmp 0xdac113 */
  goto L_dac113;
L_dac0f9: /* dac0f9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* dac0fc: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* dac0ff: add ecx, -6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dac102: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dac105: fimul dword ptr [ebp - 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* dac108: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* dac10a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac10b: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xdac110u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* dac110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac111: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_dac113: /* dac113: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* dac116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dac117: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xdac11du); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* dac11d: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* dac120: call 0xd824c3 */
  esp -= 4; W32(esp, 0xdac125u); SPILL(); f_d824c3(); if (g_unwind) return; RELOAD();
/* dac125: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* dac12a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dac12c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac12e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac130: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* dac133: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* dac136: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* dac139: push 0x8035 */
  { uint32_t v = 0x8035u; esp -= 4; W32(esp, v); }
/* dac13e: push 0x111 */
  { uint32_t v = 0x111u; esp -= 4; W32(esp, v); }
/* dac143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac144: je 0xdac15d */
  if (zf) goto L_dac15d;
L_dac146: /* dac146: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xdac14cu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* dac14c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dac14f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac157: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac158: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac159: mov esp, ebp */
  esp = ebp;
/* dac15b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dac15c: ret  */
  esp += 4; SPILL(); return;
L_dac15d: /* dac15d: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xdac163u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* dac163: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dac166: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac167: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac168: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac16f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac170: mov esp, ebp */
  esp = ebp;
/* dac172: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dac173: ret  */
  esp += 4; SPILL(); return;
}

void f_dac174(void) {
  LOAD_REGS();
L_dac174: /* dac174: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* dac177: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dac17c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* dac17f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dac180: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* dac183: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdac188u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dac188(); return;
}

void f_dac188(void) {
  LOAD_REGS();
L_dac188: /* dac188: push 0xdc46d4 */
  { uint32_t v = 0xdc46d4u; esp -= 4; W32(esp, v); }
/* dac18d: push 0xde4290 */
  { uint32_t v = 0xde4290u; esp -= 4; W32(esp, v); }
/* dac192: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdac198u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dac198: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac19b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac19d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac19f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdac1a4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dac1a4: guest_badaddr(0xdac1a4); return;
}

void f_dac200(void) {
  LOAD_REGS();
L_dac200: /* dac200: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* dac203: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* dac207: mov dword ptr [eax + 0x40], edx */
  W32((uint32_t)(eax + 0x40u), edx);
/* dac20a: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* dac20d: call 0xd8160e */
  esp -= 4; W32(esp, 0xdac212u); SPILL(); f_d8160e(); if (g_unwind) return; RELOAD();
/* dac212: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac230(void) {
  LOAD_REGS();
L_dac230: /* dac230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dac231: mov ebp, esp */
  ebp = esp;
/* dac233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac235: push 0xdba8b0 */
  { uint32_t v = 0xdba8b0u; esp -= 4; W32(esp, v); }
/* dac23a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac248: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dac24b: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* dac24e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac250: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac251: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac252: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac253: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dac256: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dac25d: je 0xdac264 */
  if (zf) goto L_dac264;
L_dac25f: /* dac25f: call 0xd8160e */
  esp -= 4; W32(esp, 0xdac264u); SPILL(); f_d8160e(); if (g_unwind) return; RELOAD();
L_dac264: /* dac264: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dac267: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac268: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac269: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac270: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac271: mov esp, ebp */
  esp = ebp;
/* dac273: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dac274: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_dac277(void) {
  LOAD_REGS();
L_dac277: /* dac277: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* dac27a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dac27f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* dac282: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac283: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* dac286: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdac28bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dac28b(); return;
}

void f_dac28b(void) {
  LOAD_REGS();
L_dac28b: /* dac28b: push 0xdc4718 */
  { uint32_t v = 0xdc4718u; esp -= 4; W32(esp, v); }
/* dac290: push 0xde42a8 */
  { uint32_t v = 0xde42a8u; esp -= 4; W32(esp, v); }
/* dac295: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdac29bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dac29b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac29e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac2a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac2a2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdac2a7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dac2a7: guest_badaddr(0xdac2a7); return;
}

void f_dac2d0(void) {
  LOAD_REGS();
L_dac2d0: /* dac2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dac2d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac2d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac2d3: mov edi, ecx */
  edi = ecx;
/* dac2d5: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* dac2d8: xor esi, esi */
  esi = 0;
/* dac2da: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac2dc: jle 0xdac300 */
  if ((zf || sf != of)) goto L_dac300;
L_dac2de: /* dac2de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac2df: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_dac2e3: /* dac2e3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* dac2e5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* dac2e8: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dac2ea: jne 0xdac2f7 */
  if (!zf) goto L_dac2f7;
L_dac2ec: /* dac2ec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac2ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac2ef: mov ecx, edi */
  ecx = edi;
/* dac2f1: call 0xd81ec4 */
  esp -= 4; W32(esp, 0xdac2f6u); SPILL(); f_d81ec4(); if (g_unwind) return; RELOAD();
/* dac2f6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_dac2f7: /* dac2f7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac2fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dac2fb: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac2fd: jl 0xdac2e3 */
  if ((sf != of)) goto L_dac2e3;
L_dac2ff: /* dac2ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_dac300: /* dac300: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* dac303: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac304: mov eax, ebp */
  eax = ebp;
/* dac306: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac307: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dac309: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dac30a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac320(void) {
  LOAD_REGS();
L_dac320: /* dac320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac322: push 0xdba8c9 */
  { uint32_t v = 0xdba8c9u; esp -= 4; W32(esp, v); }
/* dac327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac32d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac32e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac336: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac337: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac338: mov esi, ecx */
  esi = ecx;
/* dac33a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac33b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* dac33f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* dac342: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac344: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* dac34a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* dac352: jge 0xdac368 */
  if ((sf == of)) goto L_dac368;
L_dac354: /* dac354: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* dac359: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac35e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* dac363: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac365u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac365: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac368: /* dac368: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac36b: jle 0xdac381 */
  if ((zf || sf != of)) goto L_dac381;
L_dac36d: /* dac36d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* dac372: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac377: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* dac37c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac37eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac37e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac381: /* dac381: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac383: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac384: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac386: mov ecx, esi */
  ecx = esi;
/* dac388: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xdac38eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* dac38e: mov ecx, esi */
  ecx = esi;
/* dac390: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* dac398: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdac39eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dac39e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* dac3a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac3a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac3a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac3a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac3ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac3af: ret  */
  esp += 4; SPILL(); return;
}

void f_dac3e0(void) {
  LOAD_REGS();
L_dac3e0: /* dac3e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dac3e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac3e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac3e3: mov edi, ecx */
  edi = ecx;
/* dac3e5: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* dac3e8: xor esi, esi */
  esi = 0;
/* dac3ea: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac3ec: jle 0xdac410 */
  if ((zf || sf != of)) goto L_dac410;
L_dac3ee: /* dac3ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac3ef: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_dac3f3: /* dac3f3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* dac3f5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* dac3f8: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dac3fa: jne 0xdac407 */
  if (!zf) goto L_dac407;
L_dac3fc: /* dac3fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac3fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac3ff: mov ecx, edi */
  ecx = edi;
/* dac401: call 0xd81997 */
  esp -= 4; W32(esp, 0xdac406u); SPILL(); f_d81997(); if (g_unwind) return; RELOAD();
/* dac406: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_dac407: /* dac407: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac40a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dac40b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac40d: jl 0xdac3f3 */
  if ((sf != of)) goto L_dac3f3;
L_dac40f: /* dac40f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_dac410: /* dac410: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* dac413: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac414: mov eax, ebp */
  eax = ebp;
/* dac416: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac417: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* dac419: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dac41a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac430(void) {
  LOAD_REGS();
L_dac430: /* dac430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac432: push 0xdba8e9 */
  { uint32_t v = 0xdba8e9u; esp -= 4; W32(esp, v); }
/* dac437: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac43d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac43e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac446: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac447: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac448: mov esi, ecx */
  esi = ecx;
/* dac44a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac44b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* dac44f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* dac452: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac454: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* dac45a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* dac462: jge 0xdac478 */
  if ((sf == of)) goto L_dac478;
L_dac464: /* dac464: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* dac469: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac46e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* dac473: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac475u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac475: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac478: /* dac478: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac47b: jle 0xdac491 */
  if ((zf || sf != of)) goto L_dac491;
L_dac47d: /* dac47d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* dac482: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac487: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* dac48c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac48eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac48e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac491: /* dac491: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac493: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac494: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac496: mov ecx, esi */
  ecx = esi;
/* dac498: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xdac49eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* dac49e: mov ecx, esi */
  ecx = esi;
/* dac4a0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* dac4a8: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdac4aeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dac4ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* dac4b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac4b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac4b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac4b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac4bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac4bf: ret  */
  esp += 4; SPILL(); return;
}

void f_dac4f0(void) {
  LOAD_REGS();
L_dac4f0: /* dac4f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac4f2: push 0xdba909 */
  { uint32_t v = 0xdba909u; esp -= 4; W32(esp, v); }
/* dac4f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac4fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac4fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac505: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac506: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac507: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac508: mov esi, ecx */
  esi = ecx;
/* dac50a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac50b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* dac50f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* dac512: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac514: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* dac51a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* dac522: jge 0xdac538 */
  if ((sf == of)) goto L_dac538;
L_dac524: /* dac524: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* dac529: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac52e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* dac533: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac535: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac538: /* dac538: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac53b: jle 0xdac551 */
  if ((zf || sf != of)) goto L_dac551;
L_dac53d: /* dac53d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* dac542: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac547: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* dac54c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac54eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac54e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac551: /* dac551: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac553: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac554: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac556: mov ecx, esi */
  ecx = esi;
/* dac558: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xdac55eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* dac55e: mov ecx, esi */
  ecx = esi;
/* dac560: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* dac568: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdac56eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dac56e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* dac572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac574: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac575: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac57c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac57f: ret  */
  esp += 4; SPILL(); return;
}

void f_dac5b0(void) {
  LOAD_REGS();
L_dac5b0: /* dac5b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac5b2: push 0xdba929 */
  { uint32_t v = 0xdba929u; esp -= 4; W32(esp, v); }
/* dac5b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac5bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac5be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac5c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac5c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac5c7: mov esi, ecx */
  esi = ecx;
/* dac5c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* dac5cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dac5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac5d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac5d3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* dac5db: call 0xd8202c */
  esp -= 4; W32(esp, 0xdac5e0u); SPILL(); f_d8202c(); if (g_unwind) return; RELOAD();
/* dac5e0: mov ecx, esi */
  ecx = esi;
/* dac5e2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* dac5ea: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdac5f0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dac5f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dac5f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac5f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac5fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac5ff: ret  */
  esp += 4; SPILL(); return;
}

void f_dac620(void) {
  LOAD_REGS();
L_dac620: /* dac620: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac622: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac623: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* dac627: mov esi, ecx */
  esi = ecx;
/* dac629: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dac62b: je 0xdac666 */
  if (zf) goto L_dac666;
L_dac62d: /* dac62d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac631: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac633: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdac639u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dac639: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac63c: xor ebx, ebx */
  ebx = 0;
/* dac63e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac640: jle 0xdac666 */
  if ((zf || sf != of)) goto L_dac666;
L_dac642: /* dac642: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac644: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac646: mov ecx, esi */
  ecx = esi;
/* dac648: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdac64eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dac64e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* dac650: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* dac653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac655: je 0xdac65e */
  if (zf) goto L_dac65e;
L_dac657: /* dac657: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dac659: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* dac65c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_dac65e: /* dac65e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac661: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dac662: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac664: jl 0xdac642 */
  if ((sf != of)) goto L_dac642;
L_dac666: /* dac666: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac667: mov eax, esi */
  eax = esi;
/* dac669: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac66a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac66b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac690(void) {
  LOAD_REGS();
L_dac690: /* dac690: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac692: push 0xdba949 */
  { uint32_t v = 0xdba949u; esp -= 4; W32(esp, v); }
/* dac697: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac69d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac69e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac6a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac6a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac6a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac6a8: mov esi, ecx */
  esi = ecx;
/* dac6aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac6ab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* dac6af: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* dac6b2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac6b4: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* dac6ba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* dac6c2: jge 0xdac6d8 */
  if ((sf == of)) goto L_dac6d8;
L_dac6c4: /* dac6c4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* dac6c9: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac6ce: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* dac6d3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac6d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac6d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac6d8: /* dac6d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac6db: jle 0xdac6f1 */
  if ((zf || sf != of)) goto L_dac6f1;
L_dac6dd: /* dac6dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* dac6e2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac6e7: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* dac6ec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac6eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac6ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac6f1: /* dac6f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac6f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac6f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac6f6: mov ecx, esi */
  ecx = esi;
/* dac6f8: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xdac6feu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* dac6fe: mov ecx, esi */
  ecx = esi;
/* dac700: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* dac708: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdac70eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dac70e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* dac712: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac714: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac715: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac71c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac71f: ret  */
  esp += 4; SPILL(); return;
}

void f_dac750(void) {
  LOAD_REGS();
L_dac750: /* dac750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac751: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac752: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac753: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* dac757: mov esi, ecx */
  esi = ecx;
/* dac759: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dac75b: je 0xdac796 */
  if (zf) goto L_dac796;
L_dac75d: /* dac75d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac761: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac763: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdac769u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dac769: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac76c: xor ebx, ebx */
  ebx = 0;
/* dac76e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac770: jle 0xdac796 */
  if ((zf || sf != of)) goto L_dac796;
L_dac772: /* dac772: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac774: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac776: mov ecx, esi */
  ecx = esi;
/* dac778: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdac77eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dac77e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* dac780: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* dac783: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac785: je 0xdac78e */
  if (zf) goto L_dac78e;
L_dac787: /* dac787: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dac789: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* dac78c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_dac78e: /* dac78e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac791: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dac792: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac794: jl 0xdac772 */
  if ((sf != of)) goto L_dac772;
L_dac796: /* dac796: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac797: mov eax, esi */
  eax = esi;
/* dac799: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac79a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac79b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac7c0(void) {
  LOAD_REGS();
L_dac7c0: /* dac7c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac7c2: push 0xdba969 */
  { uint32_t v = 0xdba969u; esp -= 4; W32(esp, v); }
/* dac7c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac7cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac7ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac7d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac7d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac7d8: mov esi, ecx */
  esi = ecx;
/* dac7da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac7db: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* dac7df: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* dac7e2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac7e4: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* dac7ea: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* dac7f2: jge 0xdac808 */
  if ((sf == of)) goto L_dac808;
L_dac7f4: /* dac7f4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* dac7f9: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac7fe: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* dac803: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac805u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac805: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac808: /* dac808: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac80b: jle 0xdac821 */
  if ((zf || sf != of)) goto L_dac821;
L_dac80d: /* dac80d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* dac812: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* dac817: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* dac81c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdac81eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dac81e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dac821: /* dac821: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac823: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dac826: mov ecx, esi */
  ecx = esi;
/* dac828: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xdac82eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* dac82e: mov ecx, esi */
  ecx = esi;
/* dac830: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* dac838: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdac83eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dac83e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* dac842: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac843: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac844: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac845: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dac84c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dac84f: ret  */
  esp += 4; SPILL(); return;
}

void f_dac880(void) {
  LOAD_REGS();
L_dac880: /* dac880: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac882: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac883: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* dac887: mov esi, ecx */
  esi = ecx;
/* dac889: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dac88b: je 0xdac8c6 */
  if (zf) goto L_dac8c6;
L_dac88d: /* dac88d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac891: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac893: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdac899u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dac899: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac89c: xor ebx, ebx */
  ebx = 0;
/* dac89e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac8a0: jle 0xdac8c6 */
  if ((zf || sf != of)) goto L_dac8c6;
L_dac8a2: /* dac8a2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac8a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac8a6: mov ecx, esi */
  ecx = esi;
/* dac8a8: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdac8aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dac8ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* dac8b0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* dac8b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac8b5: je 0xdac8be */
  if (zf) goto L_dac8be;
L_dac8b7: /* dac8b7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dac8b9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* dac8bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_dac8be: /* dac8be: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac8c1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dac8c2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac8c4: jl 0xdac8a2 */
  if ((sf != of)) goto L_dac8a2;
L_dac8c6: /* dac8c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac8c7: mov eax, esi */
  eax = esi;
/* dac8c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac8ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac8cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac8f0(void) {
  LOAD_REGS();
L_dac8f0: /* dac8f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac8f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac8f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac8f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* dac8f7: mov esi, ecx */
  esi = ecx;
/* dac8f9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dac8fb: je 0xdac936 */
  if (zf) goto L_dac936;
L_dac8fd: /* dac8fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac901: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac903: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdac909u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dac909: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac90c: xor ebx, ebx */
  ebx = 0;
/* dac90e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac910: jle 0xdac936 */
  if ((zf || sf != of)) goto L_dac936;
L_dac912: /* dac912: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac914: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac916: mov ecx, esi */
  ecx = esi;
/* dac918: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdac91eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dac91e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* dac920: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* dac923: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac925: je 0xdac92e */
  if (zf) goto L_dac92e;
L_dac927: /* dac927: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dac929: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* dac92c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_dac92e: /* dac92e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac931: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dac932: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac934: jl 0xdac912 */
  if ((sf != of)) goto L_dac912;
L_dac936: /* dac936: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac937: mov eax, esi */
  eax = esi;
/* dac939: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac93a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac93b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac960(void) {
  LOAD_REGS();
L_dac960: /* dac960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac962: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac963: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* dac967: mov esi, ecx */
  esi = ecx;
/* dac969: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dac96b: je 0xdac9a6 */
  if (zf) goto L_dac9a6;
L_dac96d: /* dac96d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac971: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac973: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdac979u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dac979: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac97c: xor ebx, ebx */
  ebx = 0;
/* dac97e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac980: jle 0xdac9a6 */
  if ((zf || sf != of)) goto L_dac9a6;
L_dac982: /* dac982: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dac984: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dac986: mov ecx, esi */
  ecx = esi;
/* dac988: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdac98eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dac98e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* dac990: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* dac993: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dac995: je 0xdac99e */
  if (zf) goto L_dac99e;
L_dac997: /* dac997: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dac999: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* dac99c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_dac99e: /* dac99e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dac9a1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dac9a2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dac9a4: jl 0xdac982 */
  if ((sf != of)) goto L_dac982;
L_dac9a6: /* dac9a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dac9a7: mov eax, esi */
  eax = esi;
/* dac9a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dac9aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dac9ab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dac9d0(void) {
  LOAD_REGS();
L_dac9d0: /* dac9d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dac9d2: push 0xdba989 */
  { uint32_t v = 0xdba989u; esp -= 4; W32(esp, v); }
/* dac9d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dac9dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dac9de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dac9e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dac9e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dac9e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dac9e8: mov esi, ecx */
  esi = ecx;
/* dac9ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dac9eb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* dac9ef: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* dac9f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dac9f4: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* dac9fa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* daca02: jge 0xdaca18 */
  if ((sf == of)) goto L_daca18;
L_daca04: /* daca04: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* daca09: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* daca0e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* daca13: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaca15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daca15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daca18: /* daca18: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* daca1b: jle 0xdaca31 */
  if ((zf || sf != of)) goto L_daca31;
L_daca1d: /* daca1d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* daca22: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* daca27: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* daca2c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaca2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daca2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daca31: /* daca31: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* daca33: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daca34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* daca36: mov ecx, esi */
  ecx = esi;
/* daca38: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xdaca3eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* daca3e: mov ecx, esi */
  ecx = esi;
/* daca40: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* daca48: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdaca4eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* daca4e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* daca52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daca53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daca54: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daca55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daca5c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daca5f: ret  */
  esp += 4; SPILL(); return;
}

void f_daca90(void) {
  LOAD_REGS();
L_daca90: /* daca90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daca91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daca92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daca93: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* daca97: mov esi, ecx */
  esi = ecx;
/* daca99: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daca9b: je 0xdacad6 */
  if (zf) goto L_dacad6;
L_daca9d: /* daca9d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dacaa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacaa1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dacaa3: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdacaa9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dacaa9: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dacaac: xor ebx, ebx */
  ebx = 0;
/* dacaae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dacab0: jle 0xdacad6 */
  if ((zf || sf != of)) goto L_dacad6;
L_dacab2: /* dacab2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dacab4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dacab6: mov ecx, esi */
  ecx = esi;
/* dacab8: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdacabeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dacabe: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* dacac0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* dacac3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dacac5: je 0xdacace */
  if (zf) goto L_dacace;
L_dacac7: /* dacac7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* dacac9: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* dacacc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_dacace: /* dacace: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dacad1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* dacad2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dacad4: jl 0xdacab2 */
  if ((sf != of)) goto L_dacab2;
L_dacad6: /* dacad6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dacad7: mov eax, esi */
  eax = esi;
/* dacad9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dacada: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dacadb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dacb00(void) {
  LOAD_REGS();
L_dacb00: /* dacb00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dacb01: mov esi, ecx */
  esi = ecx;
/* dacb03: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dacb06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dacb07: xor edi, edi */
  edi = 0;
/* dacb09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dacb0b: jle 0xdacb25 */
  if ((zf || sf != of)) goto L_dacb25;
L_dacb0d: /* dacb0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dacb0e: xor ebx, ebx */
  ebx = 0;
L_dacb10: /* dacb10: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* dacb12: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dacb14: call 0xd82545 */
  esp -= 4; W32(esp, 0xdacb19u); SPILL(); f_d82545(); if (g_unwind) return; RELOAD();
/* dacb19: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dacb1c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dacb1d: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* dacb20: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dacb22: jl 0xdacb10 */
  if ((sf != of)) goto L_dacb10;
L_dacb24: /* dacb24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_dacb25: /* dacb25: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* dacb29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacb2a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* dacb2c: mov ecx, esi */
  ecx = esi;
/* dacb2e: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdacb34u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dacb34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dacb35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dacb36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dacb50(void) {
  LOAD_REGS();
L_dacb50: /* dacb50: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* dacb54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dacb56: je 0xdacb5d */
  if (zf) goto L_dacb5d;
L_dacb58: /* dacb58: jmp 0xd8154b */
  SPILL(); f_d8154b(); return;
L_dacb5d: /* dacb5d: ret  */
  esp += 4; SPILL(); return;
}

void f_dacb70(void) {
  LOAD_REGS();
L_dacb70: /* dacb70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dacb71: mov ebp, esp */
  ebp = esp;
/* dacb73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dacb75: push 0xdba9ab */
  { uint32_t v = 0xdba9abu; esp -= 4; W32(esp, v); }
/* dacb7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dacb80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacb81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dacb88: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dacb8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dacb8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dacb8d: mov esi, ecx */
  esi = ecx;
/* dacb8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dacb90: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dacb93: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* dacb96: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* dacb9c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dacba3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dacba7: call 0xd8243c */
  esp -= 4; W32(esp, 0xdacbacu); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* dacbac: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* dacbaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacbb0: mov ecx, 0xde572c */
  ecx = 0xde572cu;
/* dacbb5: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* dacbb8: call 0xd8166d */
  esp -= 4; W32(esp, 0xdacbbdu); SPILL(); f_d8166d(); if (g_unwind) return; RELOAD();
/* dacbbd: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* dacbc0: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* dacbc7: call 0xd81b8b */
  esp -= 4; W32(esp, 0xdacbccu); SPILL(); f_d81b8b(); if (g_unwind) return; RELOAD();
/* dacbcc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dacbcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dacbd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dacbd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dacbd8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dacbd9: mov esp, ebp */
  esp = ebp;
/* dacbdb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dacbdc: ret  */
  esp += 4; SPILL(); return;
}

void f_dacbdd(void) {
  LOAD_REGS();
L_dacbdd: /* dacbdd: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* dacbe0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dacbe5: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* dacbe8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dacbe9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* dacbec: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdacbf1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dacbf1(); return;
}

void f_dacbf1(void) {
  LOAD_REGS();
L_dacbf1: /* dacbf1: push 0xdc4758 */
  { uint32_t v = 0xdc4758u; esp -= 4; W32(esp, v); }
/* dacbf6: push 0xde3854 */
  { uint32_t v = 0xde3854u; esp -= 4; W32(esp, v); }
/* dacbfb: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdacc01u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dacc01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dacc04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dacc06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dacc08: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdacc0du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dacc0d: guest_badaddr(0xdacc0d); return;
}

void f_dacc40(void) {
  LOAD_REGS();
L_dacc40: /* dacc40: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dacc43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dacc44: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dacc46: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* dacc4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacc4b: mov esi, ecx */
  esi = ecx;
/* dacc4d: call 0xd82202 */
  esp -= 4; W32(esp, 0xdacc52u); SPILL(); f_d82202(); if (g_unwind) return; RELOAD();
/* dacc52: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* dacc56: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* dacc5a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* dacc5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dacc5f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* dacc63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dacc64: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* dacc68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacc69: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* dacc6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dacc6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dacc6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacc6f: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xdacc75u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* dacc75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dacc76: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dacc79: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_dacc90(void) {
  LOAD_REGS();
L_dacc90: /* dacc90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dacc91: mov ebp, esp */
  ebp = esp;
/* dacc93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dacc95: push 0xdba9c0 */
  { uint32_t v = 0xdba9c0u; esp -= 4; W32(esp, v); }
/* dacc9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dacca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dacca8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daccab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daccac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daccad: mov esi, ecx */
  esi = ecx;
/* daccaf: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* daccb2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* daccb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daccb5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* daccb8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* daccbf: je 0xdaccc6 */
  if (zf) goto L_daccc6;
L_daccc1: /* daccc1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* daccc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daccc4: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xdaccc6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daccc6: /* daccc6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* daccc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dacccb: je 0xdaccd4 */
  if (zf) goto L_daccd4;
L_dacccd: /* dacccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daccce: call dword ptr [0xde8f0c] */
  esp -= 4; W32(esp, 0xdaccd4u); SPILL(); call_ind(R32(0xde8f0cu)); if (g_unwind) return; /* USER32!DestroyWindow */ RELOAD();
L_daccd4: /* daccd4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* daccd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daccd8: mov ecx, 0xde51e0 */
  ecx = 0xde51e0u;
/* daccdd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* dacce0: call 0xd8166d */
  esp -= 4; W32(esp, 0xdacce5u); SPILL(); f_d8166d(); if (g_unwind) return; RELOAD();
/* dacce5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dacce8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dacce9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daccea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daccf1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daccf2: mov esp, ebp */
  esp = ebp;
/* daccf4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daccf5: ret  */
  esp += 4; SPILL(); return;
}

void f_daccf6(void) {
  LOAD_REGS();
L_daccf6: /* daccf6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* daccf9: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* daccfe: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* dacd01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacd02: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* dacd05: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdacd0au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dacd0a(); return;
}

void f_dacd0a(void) {
  LOAD_REGS();
L_dacd0a: /* dacd0a: push 0xdc4784 */
  { uint32_t v = 0xdc4784u; esp -= 4; W32(esp, v); }
/* dacd0f: push 0xde387c */
  { uint32_t v = 0xde387cu; esp -= 4; W32(esp, v); }
/* dacd14: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdacd1au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dacd1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dacd1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dacd1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dacd21: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdacd26u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dacd26: guest_badaddr(0xdacd26); return;
}

void f_dacd60(void) {
  LOAD_REGS();
L_dacd60: /* dacd60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dacd61: mov ebp, esp */
  ebp = esp;
/* dacd63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dacd65: push 0xdba9d9 */
  { uint32_t v = 0xdba9d9u; esp -= 4; W32(esp, v); }
/* dacd6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dacd70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacd71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dacd78: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dacd7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dacd7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dacd7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dacd7e: mov edi, ecx */
  edi = ecx;
/* dacd80: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dacd83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dacd85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dacd88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dacd8f: jne 0xdacda9 */
  if (!zf) goto L_dacda9;
L_dacd91: /* dacd91: push 0x35d */
  { uint32_t v = 0x35du; esp -= 4; W32(esp, v); }
/* dacd96: push 0xde38dc */
  { uint32_t v = 0xde38dcu; esp -= 4; W32(esp, v); }
/* dacd9b: push 0xde38e8 */
  { uint32_t v = 0xde38e8u; esp -= 4; W32(esp, v); }
/* dacda0: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xdacda6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* dacda6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dacda9: /* dacda9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dacdab: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* dacdae: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdacdb4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* dacdb4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* dacdb7: lea ebx, [edi + 8] */
  ebx = (uint32_t)(edi + 0x8u);
/* dacdba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacdbb: mov ecx, ebx */
  ecx = ebx;
/* dacdbd: call dword ptr [0xde8a04] */
  esp -= 4; W32(esp, 0xdacdc3u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* dacdc3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dacdc5: je 0xdace41 */
  if (zf) goto L_dace41;
L_dacdc7: /* dacdc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dacdc9: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* dacdcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dacdcd: mov ecx, edi */
  ecx = edi;
/* dacdcf: call 0xd82202 */
  esp -= 4; W32(esp, 0xdacdd4u); SPILL(); f_d82202(); if (g_unwind) return; RELOAD();
/* dacdd4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* dacdd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dacdd8: call dword ptr [0xde8ebc] */
  esp -= 4; W32(esp, 0xdacddeu); SPILL(); call_ind(R32(0xde8ebcu)); if (g_unwind) return; /* USER32!IsZoomed */ RELOAD();
/* dacdde: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dacde0: jne 0xdace41 */
  if (!zf) goto L_dace41;
L_dacde2: /* dacde2: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* dacde5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* dacde8: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dacdeb: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* dacded: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dacdee: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* dacdf1: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* dacdf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dacdf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacdf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dacdf6: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* dacdf9: push 0xde38f0 */
  { uint32_t v = 0xde38f0u; esp -= 4; W32(esp, v); }
/* dacdfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacdff: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xdace05u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* dace05: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dace08: mov ecx, eax */
  ecx = eax;
/* dace0a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dace0e: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdace14u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dace14: mov ecx, ebx */
  ecx = ebx;
/* dace16: mov esi, eax */
  esi = eax;
/* dace18: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xdace1eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* dace1e: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* dace24: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dace26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dace28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dace2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dace2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dace2c: push 0xde3920 */
  { uint32_t v = 0xde3920u; esp -= 4; W32(esp, v); }
/* dace31: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xdace34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dace34: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* dace37: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dace3b: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdace41u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_dace41: /* dace41: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* dace44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dace45: mov ecx, 0xde51e0 */
  ecx = 0xde51e0u;
/* dace4a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* dace4d: call 0xd8166d */
  esp -= 4; W32(esp, 0xdace52u); SPILL(); f_d8166d(); if (g_unwind) return; RELOAD();
/* dace52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dace55: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
/* dace5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dace5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dace5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dace65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dace66: mov esp, ebp */
  esp = ebp;
/* dace68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dace69: ret  */
  esp += 4; SPILL(); return;
}

void f_dace6a(void) {
  LOAD_REGS();
L_dace6a: /* dace6a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* dace6d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dace72: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* dace75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dace76: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* dace79: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdace7eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dace7e(); return;
}

void f_dace7e(void) {
  LOAD_REGS();
L_dace7e: /* dace7e: push 0xdc47b4 */
  { uint32_t v = 0xdc47b4u; esp -= 4; W32(esp, v); }
/* dace83: push 0xde3940 */
  { uint32_t v = 0xde3940u; esp -= 4; W32(esp, v); }
/* dace88: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdace8eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dace8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dace91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dace93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dace95: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdace9au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dace9a: guest_badaddr(0xdace9a); return;
}

void f_dacef0(void) {
  LOAD_REGS();
L_dacef0: /* dacef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dacef2: push 0xdba9f8 */
  { uint32_t v = 0xdba9f8u; esp -= 4; W32(esp, v); }
/* dacef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dacefd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacefe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dacf05: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dacf08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dacf09: mov esi, ecx */
  esi = ecx;
/* dacf0b: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* dacf0f: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dacf15: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dacf18: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dacf1a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* dacf22: je 0xdacf35 */
  if (zf) goto L_dacf35;
L_dacf24: /* dacf24: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* dacf28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dacf29: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* dacf2c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* dacf30: call 0xd819d8 */
  esp -= 4; W32(esp, 0xdacf35u); SPILL(); f_d819d8(); if (g_unwind) return; RELOAD();
L_dacf35: /* dacf35: mov ecx, esi */
  ecx = esi;
/* dacf37: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* dacf3f: call 0xd8227f */
  esp -= 4; W32(esp, 0xdacf44u); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* dacf44: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* dacf48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dacf49: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dacf50: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dacf53: ret  */
  esp += 4; SPILL(); return;
}

void f_dacf80(void) {
  LOAD_REGS();
L_dacf80: /* dacf80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dacf81: mov ebp, esp */
  ebp = esp;
/* dacf83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dacf85: push 0xdbaa10 */
  { uint32_t v = 0xdbaa10u; esp -= 4; W32(esp, v); }
/* dacf8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dacf90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dacf91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dacf98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dacf9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dacf9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dacf9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dacf9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dacfa1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dacfa8: call 0xd81c58 */
  esp -= 4; W32(esp, 0xdacfadu); SPILL(); f_d81c58(); if (g_unwind) return; RELOAD();
/* dacfad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dacfb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dacfb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dacfb2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dacfb9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dacfba: mov esp, ebp */
  esp = ebp;
/* dacfbc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dacfbd: ret  */
  esp += 4; SPILL(); return;
}

void f_dacfbe(void) {
  LOAD_REGS();
L_dacfbe: /* dacfbe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* dacfc1: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dacfc6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* dacfc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dacfca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* dacfcd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdacfd2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dacfd2(); return;
}

void f_dacfd2(void) {
  LOAD_REGS();
L_dacfd2: /* dacfd2: push 0xdc47e4 */
  { uint32_t v = 0xdc47e4u; esp -= 4; W32(esp, v); }
/* dacfd7: push 0xde3b98 */
  { uint32_t v = 0xde3b98u; esp -= 4; W32(esp, v); }
/* dacfdc: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdacfe2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dacfe2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dacfe5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dacfe7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dacfe9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdacfeeu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dacfee: guest_badaddr(0xdacfee); return;
}

void f_dad010(void) {
  LOAD_REGS();
L_dad010: /* dad010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dad011: mov ebp, esp */
  ebp = esp;
/* dad013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dad015: push 0xdbaa20 */
  { uint32_t v = 0xdbaa20u; esp -= 4; W32(esp, v); }
/* dad01a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dad020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dad028: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad02b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad02c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad02d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad02e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dad031: mov esi, ecx */
  esi = ecx;
/* dad033: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad03a: call 0xd81c58 */
  esp -= 4; W32(esp, 0xdad03fu); SPILL(); f_d81c58(); if (g_unwind) return; RELOAD();
/* dad03f: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* dad042: mov edi, dword ptr [0xde8c5c] */
  edi = R32((uint32_t)(0xde8c5cu));
/* dad048: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad049: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad04bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad04b: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* dad04e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad04f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad051u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad051: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* dad054: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad055: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad057u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad057: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* dad05a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad05b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad05du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad05d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad060: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad062: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad069: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad06a: mov esp, ebp */
  esp = ebp;
/* dad06c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad06d: ret  */
  esp += 4; SPILL(); return;
}

void f_dad06e(void) {
  LOAD_REGS();
L_dad06e: /* dad06e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dad071: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dad076: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* dad079: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad07a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dad07d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad082u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dad082(); return;
}

void f_dad082(void) {
  LOAD_REGS();
L_dad082: /* dad082: push 0xdc4824 */
  { uint32_t v = 0xdc4824u; esp -= 4; W32(esp, v); }
/* dad087: push 0xde3c08 */
  { uint32_t v = 0xde3c08u; esp -= 4; W32(esp, v); }
/* dad08c: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdad092u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dad092: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad095: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad097: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad099: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad09eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dad09e: guest_badaddr(0xdad09e); return;
}

void f_dad0d0(void) {
  LOAD_REGS();
L_dad0d0: /* dad0d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dad0d1: mov ebp, esp */
  ebp = esp;
/* dad0d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dad0d5: push 0xdbaa81 */
  { uint32_t v = 0xdbaa81u; esp -= 4; W32(esp, v); }
/* dad0da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dad0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad0e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dad0e8: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad0eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad0ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad0ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad0ee: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* dad0f1: mov esi, ecx */
  esi = ecx;
/* dad0f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad0f4: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* dad0f7: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xdad0fdu); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* dad0fd: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* dad100: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dad103: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad104: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad105: call dword ptr [0xde8e40] */
  esp -= 4; W32(esp, 0xdad10bu); SPILL(); call_ind(R32(0xde8e40u)); if (g_unwind) return; /* USER32!WindowFromPoint */ RELOAD();
/* dad10b: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* dad111: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dad113: xor edi, edi */
  edi = 0;
/* dad115: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dad117: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad118: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad119: push 0x8034 */
  { uint32_t v = 0x8034u; esp -= 4; W32(esp, v); }
/* dad11e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad11f: je 0xdad129 */
  if (zf) goto L_dad129;
L_dad121: /* dad121: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xdad127u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* dad127: jmp 0xdad12f */
  goto L_dad12f;
L_dad129: /* dad129: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xdad12fu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_dad12f: /* dad12f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dad131: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* dad134: je 0xdad4a2 */
  if (zf) goto L_dad4a2;
L_dad13a: /* dad13a: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad13d: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdad143u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* dad143: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* dad146: mov ebx, 2 */
  ebx = 0x2u;
/* dad14b: jmp 0xdad150 */
  goto L_dad150;
L_dad150: /* dad150: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad153: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad154: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad155: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* dad158: push 0xde3c68 */
  { uint32_t v = 0xde3c68u; esp -= 4; W32(esp, v); }
/* dad15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad15e: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xdad164u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* dad164: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad167: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad16a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dad16e: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdad174u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* dad174: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* dad17a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dad17c: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* dad17e: push 0xde3c78 */
  { uint32_t v = 0xde3c78u; esp -= 4; W32(esp, v); }
/* dad183: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* dad186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad187: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad18a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* dad18d: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad193u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad193: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* dad199: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dad19b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad19c: push 0xde3c9c */
  { uint32_t v = 0xde3c9cu; esp -= 4; W32(esp, v); }
/* dad1a1: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0xdad1a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad1a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad1a6: je 0xdad285 */
  if (zf) goto L_dad285;
L_dad1ac: /* dad1ac: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* dad1af: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdad1b5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* dad1b5: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* dad1b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad1b9: push 0xde3cac */
  { uint32_t v = 0xde3cacu; esp -= 4; W32(esp, v); }
/* dad1be: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad1c1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* dad1c5: call dword ptr [0xde8b2c] */
  esp -= 4; W32(esp, 0xdad1cbu); SPILL(); f_4e3346(); if (g_unwind) return; /* Core!?ParseIntoArray@FString@@QAEHPBGPAV?$TArray@VFString@@@@@Z */ RELOAD();
/* dad1cb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dad1cd: jne 0xdad241 */
  if (!zf) goto L_dad241;
L_dad1cf: /* dad1cf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dad1d4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dad1d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dad1d8: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* dad1dd: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* dad1df: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdad1e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad1e1: mov esi, eax */
  esi = eax;
/* dad1e3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* dad1e6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad1e8: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* dad1ec: je 0xdad228 */
  if (zf) goto L_dad228;
L_dad1ee: /* dad1ee: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* dad1f1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad1f4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad1f7: mov ecx, esp */
  ecx = esp;
/* dad1f9: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* dad1fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad1fd: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdad203u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* dad203: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* dad206: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad209: mov ecx, esp */
  ecx = esp;
/* dad20b: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* dad20e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad20f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* dad213: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdad219u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* dad219: mov ecx, esi */
  ecx = esi;
/* dad21b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* dad21f: call 0xd81073 */
  esp -= 4; W32(esp, 0xdad224u); SPILL(); f_d81073(); if (g_unwind) return; RELOAD();
/* dad224: mov esi, eax */
  esi = eax;
/* dad226: jmp 0xdad22a */
  goto L_dad22a;
L_dad228: /* dad228: xor esi, esi */
  esi = 0;
L_dad22a: /* dad22a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dad22c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad22e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad231: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* dad235: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdad23bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dad23b: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad23e: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_dad241: /* dad241: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* dad244: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad245: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad247: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* dad24a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* dad24e: call 0xd8202c */
  esp -= 4; W32(esp, 0xdad253u); SPILL(); f_d8202c(); if (g_unwind) return; RELOAD();
/* dad253: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* dad256: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* dad259: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdad25fu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dad25f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad262: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dad266: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad26cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad26c: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad26f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad273: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad279u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad279: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dad27a: cmp edi, 0x32 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad27d: jl 0xdad150 */
  if ((sf != of)) goto L_dad150;
L_dad283: /* dad283: jmp 0xdad29f */
  goto L_dad29f;
L_dad285: /* dad285: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad288: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dad28c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad292u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad292: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad295: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad299: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad29fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_dad29f: /* dad29f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad2a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad2a4: je 0xdad47a */
  if (zf) goto L_dad47a;
L_dad2aa: /* dad2aa: xor eax, eax */
  eax = 0;
/* dad2ac: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad2af: jle 0xdad3d2 */
  if ((zf || sf != of)) goto L_dad3d2;
L_dad2b5: /* dad2b5: call dword ptr [0xde8ec4] */
  esp -= 4; W32(esp, 0xdad2bbu); SPILL(); call_ind(R32(0xde8ec4u)); if (g_unwind) return; /* USER32!CreatePopupMenu */ RELOAD();
/* dad2bb: mov edi, eax */
  edi = eax;
/* dad2bd: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad2c0: xor esi, esi */
  esi = 0;
/* dad2c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dad2c4: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* dad2c7: mov dword ptr [ebp - 0x84], 0x30 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x30u);
/* dad2d1: mov dword ptr [ebp - 0x80], 0x12 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x12u);
/* dad2d8: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* dad2df: jle 0xdad395 */
  if ((zf || sf != of)) goto L_dad395;
L_dad2e5: /* dad2e5: jmp 0xdad2f0 */
  goto L_dad2f0;
L_dad2f0: /* dad2f0: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad2f3: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* dad2f6: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad2fcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad2fc: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* dad302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad303: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad305: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad308: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad30a: jne 0xdad310 */
  if (!zf) goto L_dad310;
L_dad30c: /* dad30c: xor ebx, ebx */
  ebx = 0;
/* dad30e: jmp 0xdad335 */
  goto L_dad335;
L_dad310: /* dad310: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad313: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* dad316: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad31cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad31c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad31d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad31fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad31f: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad322: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dad325: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad328: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad32b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dad32e: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xdad333u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* dad333: mov ebx, esp */
  ebx = esp;
L_dad335: /* dad335: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad338: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* dad33b: lea edi, [edx + esi*4] */
  edi = (uint32_t)(edx + esi*4);
/* dad33e: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad344u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad344: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad345: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xdad34bu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* dad34b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* dad34d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad351: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad357u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad358: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad359: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xdad35fu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* dad35f: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad362: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad365: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* dad36b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad36c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad36e: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* dad371: push 0x1869f */
  { uint32_t v = 0x1869fu; esp -= 4; W32(esp, v); }
/* dad376: lea eax, [esi + 0x4c2c] */
  eax = (uint32_t)(esi + 0x4c2cu);
/* dad37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad37d: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* dad380: call dword ptr [0xde8ec0] */
  esp -= 4; W32(esp, 0xdad386u); SPILL(); call_ind(R32(0xde8ec0u)); if (g_unwind) return; /* USER32!InsertMenuItemA */ RELOAD();
/* dad386: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad389: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dad38a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad38c: jl 0xdad2f0 */
  if ((sf != of)) goto L_dad2f0;
L_dad392: /* dad392: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
L_dad395: /* dad395: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* dad398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad399: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xdad39fu); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* dad39f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* dad3a2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* dad3a5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* dad3a8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dad3ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad3ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad3b2: push 0x182 */
  { uint32_t v = 0x182u; esp -= 4; W32(esp, v); }
/* dad3b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad3b8: call dword ptr [0xde8e88] */
  esp -= 4; W32(esp, 0xdad3beu); SPILL(); call_ind(R32(0xde8e88u)); if (g_unwind) return; /* USER32!TrackPopupMenu */ RELOAD();
/* dad3be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad3bf: mov esi, eax */
  esi = eax;
/* dad3c1: call dword ptr [0xde8e84] */
  esp -= 4; W32(esp, 0xdad3c7u); SPILL(); call_ind(R32(0xde8e84u)); if (g_unwind) return; /* USER32!DestroyMenu */ RELOAD();
/* dad3c7: lea eax, [esi - 0x4c2c] */
  eax = (uint32_t)(esi + 0xffffb3d4u);
/* dad3cd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad3d0: jle 0xdad422 */
  if ((zf || sf != of)) goto L_dad422;
L_dad3d2: /* dad3d2: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad3d5: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* dad3d8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dad3db: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad3e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad3e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3e2: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* dad3e5: push 0xde3cb0 */
  { uint32_t v = 0xde3cb0u; esp -= 4; W32(esp, v); }
/* dad3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3eb: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xdad3f1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* dad3f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad3f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad3f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3fa: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad3fd: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* dad401: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad407u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad408: push 0xde3d0c */
  { uint32_t v = 0xde3d0cu; esp -= 4; W32(esp, v); }
/* dad40d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad40f: call dword ptr [0xde8db4] */
  esp -= 4; W32(esp, 0xdad415u); SPILL(); call_ind(R32(0xde8db4u)); if (g_unwind) return; /* SHELL32!ShellExecuteW */ RELOAD();
/* dad415: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad418: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad41c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad422u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_dad422: /* dad422: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad425: xor edi, edi */
  edi = 0;
/* dad427: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dad429: jle 0xdad46b */
  if ((zf || sf != of)) goto L_dad46b;
L_dad42b: /* dad42b: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* dad42d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_dad430: /* dad430: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad433: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* dad436: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad438: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* dad43b: je 0xdad463 */
  if (zf) goto L_dad463;
L_dad43d: /* dad43d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* dad440: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* dad443: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad449u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad449: mov ecx, esi */
  ecx = esi;
/* dad44b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad44f: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad455u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad455: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* dad45b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* dad45d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* dad45f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad460: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xdad463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dad463: /* dad463: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad466: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dad467: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad469: jl 0xdad430 */
  if ((sf != of)) goto L_dad430;
L_dad46b: /* dad46b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad46d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dad46f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad472: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdad478u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dad478: jmp 0xdad48e */
  goto L_dad48e;
L_dad47a: /* dad47a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad47d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad47e: push 0xde3d18 */
  { uint32_t v = 0xde3d18u; esp -= 4; W32(esp, v); }
/* dad483: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad485: call dword ptr [0xde8b28] */
  esp -= 4; W32(esp, 0xdad48bu); SPILL(); f_4e2ee6(); if (g_unwind) return; /* Core!?appMsgf@@YA?BHHPBGZZ */ RELOAD();
/* dad48b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dad48e: /* dad48e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad491: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* dad498: call 0xd823b5 */
  esp -= 4; W32(esp, 0xdad49du); SPILL(); f_d823b5(); if (g_unwind) return; RELOAD();
/* dad49d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* dad4a0: jmp 0xdad4b1 */
  goto L_dad4b1;
L_dad4a2: /* dad4a2: push 0xde3d50 */
  { uint32_t v = 0xde3d50u; esp -= 4; W32(esp, v); }
/* dad4a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad4a8: call dword ptr [0xde8b28] */
  esp -= 4; W32(esp, 0xdad4aeu); SPILL(); f_4e2ee6(); if (g_unwind) return; /* Core!?appMsgf@@YA?BHHPBGZZ */ RELOAD();
/* dad4ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dad4b1: /* dad4b1: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xdad4b7u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* dad4b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dad4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad4bb: mov ecx, esi */
  ecx = esi;
/* dad4bd: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xdad4c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad4c0: lea esp, [ebp - 0x90] */
  esp = (uint32_t)(ebp + 0xffffff70u);
/* dad4c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad4d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad4d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad4d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad4d3: mov esp, ebp */
  esp = ebp;
/* dad4d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad4d6: ret  */
  esp += 4; SPILL(); return;
}

void f_dad14d(void) {
  LOAD_REGS();
L_dad14d: /* dad14d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_dad150: /* dad150: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad153: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad154: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad155: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* dad158: push 0xde3c68 */
  { uint32_t v = 0xde3c68u; esp -= 4; W32(esp, v); }
/* dad15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad15e: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xdad164u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* dad164: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad167: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad16a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dad16e: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdad174u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* dad174: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* dad17a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dad17c: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* dad17e: push 0xde3c78 */
  { uint32_t v = 0xde3c78u; esp -= 4; W32(esp, v); }
/* dad183: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* dad186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad187: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad18a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* dad18d: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad193u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad193: mov ecx, dword ptr [0xde89d8] */
  ecx = R32((uint32_t)(0xde89d8u));
/* dad199: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dad19b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad19c: push 0xde3c9c */
  { uint32_t v = 0xde3c9cu; esp -= 4; W32(esp, v); }
/* dad1a1: call dword ptr [esi + 0xc] */
  { uint32_t t = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, 0xdad1a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad1a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad1a6: je 0xdad285 */
  if (zf) goto L_dad285;
L_dad1ac: /* dad1ac: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* dad1af: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdad1b5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* dad1b5: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* dad1b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad1b9: push 0xde3cac */
  { uint32_t v = 0xde3cacu; esp -= 4; W32(esp, v); }
/* dad1be: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad1c1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* dad1c5: call dword ptr [0xde8b2c] */
  esp -= 4; W32(esp, 0xdad1cbu); SPILL(); f_4e3346(); if (g_unwind) return; /* Core!?ParseIntoArray@FString@@QAEHPBGPAV?$TArray@VFString@@@@@Z */ RELOAD();
/* dad1cb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dad1cd: jne 0xdad241 */
  if (!zf) goto L_dad241;
L_dad1cf: /* dad1cf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dad1d4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dad1d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dad1d8: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* dad1dd: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* dad1df: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xdad1e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad1e1: mov esi, eax */
  esi = eax;
/* dad1e3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* dad1e6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad1e8: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* dad1ec: je 0xdad228 */
  if (zf) goto L_dad228;
L_dad1ee: /* dad1ee: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* dad1f1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad1f4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad1f7: mov ecx, esp */
  ecx = esp;
/* dad1f9: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* dad1fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad1fd: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdad203u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* dad203: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* dad206: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad209: mov ecx, esp */
  ecx = esp;
/* dad20b: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* dad20e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad20f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* dad213: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdad219u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* dad219: mov ecx, esi */
  ecx = esi;
/* dad21b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* dad21f: call 0xd81073 */
  esp -= 4; W32(esp, 0xdad224u); SPILL(); f_d81073(); if (g_unwind) return; RELOAD();
/* dad224: mov esi, eax */
  esi = eax;
/* dad226: jmp 0xdad22a */
  goto L_dad22a;
L_dad228: /* dad228: xor esi, esi */
  esi = 0;
L_dad22a: /* dad22a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dad22c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad22e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad231: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* dad235: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xdad23bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* dad23b: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad23e: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_dad241: /* dad241: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* dad244: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad245: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad247: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* dad24a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* dad24e: call 0xd8202c */
  esp -= 4; W32(esp, 0xdad253u); SPILL(); f_d8202c(); if (g_unwind) return; RELOAD();
/* dad253: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* dad256: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* dad259: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xdad25fu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* dad25f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad262: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dad266: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad26cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad26c: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad26f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad273: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad279u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad279: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dad27a: cmp edi, 0x32 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad27d: jl 0xdad150 */
  if ((sf != of)) goto L_dad150;
L_dad283: /* dad283: jmp 0xdad29f */
  goto L_dad29f;
L_dad285: /* dad285: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* dad288: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* dad28c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad292u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad292: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad295: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad299: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad29fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_dad29f: /* dad29f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad2a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad2a4: je 0xdad47a */
  if (zf) goto L_dad47a;
L_dad2aa: /* dad2aa: xor eax, eax */
  eax = 0;
/* dad2ac: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad2af: jle 0xdad3d2 */
  if ((zf || sf != of)) goto L_dad3d2;
L_dad2b5: /* dad2b5: call dword ptr [0xde8ec4] */
  esp -= 4; W32(esp, 0xdad2bbu); SPILL(); call_ind(R32(0xde8ec4u)); if (g_unwind) return; /* USER32!CreatePopupMenu */ RELOAD();
/* dad2bb: mov edi, eax */
  edi = eax;
/* dad2bd: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad2c0: xor esi, esi */
  esi = 0;
/* dad2c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dad2c4: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* dad2c7: mov dword ptr [ebp - 0x84], 0x30 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x30u);
/* dad2d1: mov dword ptr [ebp - 0x80], 0x12 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x12u);
/* dad2d8: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* dad2df: jle 0xdad395 */
  if ((zf || sf != of)) goto L_dad395;
L_dad2e5: /* dad2e5: jmp 0xdad2f0 */
  goto L_dad2f0;
L_dad2f0: /* dad2f0: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad2f3: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* dad2f6: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad2fcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad2fc: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* dad302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad303: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad305: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad308: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad30a: jne 0xdad310 */
  if (!zf) goto L_dad310;
L_dad30c: /* dad30c: xor ebx, ebx */
  ebx = 0;
/* dad30e: jmp 0xdad335 */
  goto L_dad335;
L_dad310: /* dad310: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad313: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* dad316: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad31cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad31c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad31d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad31fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad31f: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad322: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dad325: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad328: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad32b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dad32e: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xdad333u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* dad333: mov ebx, esp */
  ebx = esp;
L_dad335: /* dad335: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad338: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* dad33b: lea edi, [edx + esi*4] */
  edi = (uint32_t)(edx + esi*4);
/* dad33e: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad344u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad344: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad345: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xdad34bu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* dad34b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* dad34d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad351: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad357u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad358: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad359: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xdad35fu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* dad35f: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad362: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad365: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* dad36b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad36c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad36e: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* dad371: push 0x1869f */
  { uint32_t v = 0x1869fu; esp -= 4; W32(esp, v); }
/* dad376: lea eax, [esi + 0x4c2c] */
  eax = (uint32_t)(esi + 0x4c2cu);
/* dad37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad37d: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* dad380: call dword ptr [0xde8ec0] */
  esp -= 4; W32(esp, 0xdad386u); SPILL(); call_ind(R32(0xde8ec0u)); if (g_unwind) return; /* USER32!InsertMenuItemA */ RELOAD();
/* dad386: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad389: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dad38a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad38c: jl 0xdad2f0 */
  if ((sf != of)) goto L_dad2f0;
L_dad392: /* dad392: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
L_dad395: /* dad395: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* dad398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad399: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xdad39fu); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* dad39f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* dad3a2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* dad3a5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* dad3a8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dad3ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad3ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad3b2: push 0x182 */
  { uint32_t v = 0x182u; esp -= 4; W32(esp, v); }
/* dad3b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad3b8: call dword ptr [0xde8e88] */
  esp -= 4; W32(esp, 0xdad3beu); SPILL(); call_ind(R32(0xde8e88u)); if (g_unwind) return; /* USER32!TrackPopupMenu */ RELOAD();
/* dad3be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad3bf: mov esi, eax */
  esi = eax;
/* dad3c1: call dword ptr [0xde8e84] */
  esp -= 4; W32(esp, 0xdad3c7u); SPILL(); call_ind(R32(0xde8e84u)); if (g_unwind) return; /* USER32!DestroyMenu */ RELOAD();
/* dad3c7: lea eax, [esi - 0x4c2c] */
  eax = (uint32_t)(esi + 0xffffb3d4u);
/* dad3cd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad3d0: jle 0xdad422 */
  if ((zf || sf != of)) goto L_dad422;
L_dad3d2: /* dad3d2: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad3d5: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* dad3d8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dad3db: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad3e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad3e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3e2: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* dad3e5: push 0xde3cb0 */
  { uint32_t v = 0xde3cb0u; esp -= 4; W32(esp, v); }
/* dad3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3eb: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xdad3f1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* dad3f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad3f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad3f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3fa: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad3fd: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* dad401: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad407u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad408: push 0xde3d0c */
  { uint32_t v = 0xde3d0cu; esp -= 4; W32(esp, v); }
/* dad40d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad40f: call dword ptr [0xde8db4] */
  esp -= 4; W32(esp, 0xdad415u); SPILL(); call_ind(R32(0xde8db4u)); if (g_unwind) return; /* SHELL32!ShellExecuteW */ RELOAD();
/* dad415: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad418: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad41c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad422u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_dad422: /* dad422: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad425: xor edi, edi */
  edi = 0;
/* dad427: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dad429: jle 0xdad46b */
  if ((zf || sf != of)) goto L_dad46b;
L_dad42b: /* dad42b: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* dad42d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_dad430: /* dad430: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad433: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* dad436: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad438: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* dad43b: je 0xdad463 */
  if (zf) goto L_dad463;
L_dad43d: /* dad43d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* dad440: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* dad443: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad449u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad449: mov ecx, esi */
  ecx = esi;
/* dad44b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad44f: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad455u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad455: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* dad45b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* dad45d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* dad45f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad460: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xdad463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dad463: /* dad463: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad466: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dad467: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad469: jl 0xdad430 */
  if ((sf != of)) goto L_dad430;
L_dad46b: /* dad46b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad46d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dad46f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad472: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdad478u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dad478: jmp 0xdad48e */
  goto L_dad48e;
L_dad47a: /* dad47a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad47d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad47e: push 0xde3d18 */
  { uint32_t v = 0xde3d18u; esp -= 4; W32(esp, v); }
/* dad483: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad485: call dword ptr [0xde8b28] */
  esp -= 4; W32(esp, 0xdad48bu); SPILL(); f_4e2ee6(); if (g_unwind) return; /* Core!?appMsgf@@YA?BHHPBGZZ */ RELOAD();
/* dad48b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_dad48e: /* dad48e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad491: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* dad498: call 0xd823b5 */
  esp -= 4; W32(esp, 0xdad49du); SPILL(); f_d823b5(); if (g_unwind) return; RELOAD();
/* dad49d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* dad4a0: jmp 0xdad4b1 */
  goto L_dad4b1;
L_dad4b1: /* dad4b1: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xdad4b7u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* dad4b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dad4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad4bb: mov ecx, esi */
  ecx = esi;
/* dad4bd: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xdad4c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad4c0: lea esp, [ebp - 0x90] */
  esp = (uint32_t)(ebp + 0xffffff70u);
/* dad4c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad4d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad4d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad4d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad4d3: mov esp, ebp */
  esp = ebp;
/* dad4d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad4d6: ret  */
  esp += 4; SPILL(); return;
}

void f_dad2e7(void) {
  LOAD_REGS();
L_dad2e7: /* dad2e7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* dad2ee: mov edi, edi */
  edi = edi;
L_dad2f0: /* dad2f0: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad2f3: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* dad2f6: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad2fcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad2fc: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* dad302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad303: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad305u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad305: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad308: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad30a: jne 0xdad310 */
  if (!zf) goto L_dad310;
L_dad30c: /* dad30c: xor ebx, ebx */
  ebx = 0;
/* dad30e: jmp 0xdad335 */
  goto L_dad335;
L_dad310: /* dad310: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad313: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* dad316: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad31cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad31c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad31d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xdad31fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad31f: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad322: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dad325: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad328: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad32b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dad32e: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xdad333u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* dad333: mov ebx, esp */
  ebx = esp;
L_dad335: /* dad335: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad338: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* dad33b: lea edi, [edx + esi*4] */
  edi = (uint32_t)(edx + esi*4);
/* dad33e: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad344u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad344: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad345: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xdad34bu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* dad34b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* dad34d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad351: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad357u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad358: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad359: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xdad35fu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* dad35f: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad362: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad365: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* dad36b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad36c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad36e: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* dad371: push 0x1869f */
  { uint32_t v = 0x1869fu; esp -= 4; W32(esp, v); }
/* dad376: lea eax, [esi + 0x4c2c] */
  eax = (uint32_t)(esi + 0x4c2cu);
/* dad37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad37d: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* dad380: call dword ptr [0xde8ec0] */
  esp -= 4; W32(esp, 0xdad386u); SPILL(); call_ind(R32(0xde8ec0u)); if (g_unwind) return; /* USER32!InsertMenuItemA */ RELOAD();
/* dad386: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad389: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* dad38a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad38c: jl 0xdad2f0 */
  if ((sf != of)) goto L_dad2f0;
L_dad392: /* dad392: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* dad395: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* dad398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad399: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xdad39fu); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* dad39f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* dad3a2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* dad3a5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* dad3a8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dad3ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad3ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad3b2: push 0x182 */
  { uint32_t v = 0x182u; esp -= 4; W32(esp, v); }
/* dad3b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad3b8: call dword ptr [0xde8e88] */
  esp -= 4; W32(esp, 0xdad3beu); SPILL(); call_ind(R32(0xde8e88u)); if (g_unwind) return; /* USER32!TrackPopupMenu */ RELOAD();
/* dad3be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad3bf: mov esi, eax */
  esi = eax;
/* dad3c1: call dword ptr [0xde8e84] */
  esp -= 4; W32(esp, 0xdad3c7u); SPILL(); call_ind(R32(0xde8e84u)); if (g_unwind) return; /* USER32!DestroyMenu */ RELOAD();
/* dad3c7: lea eax, [esi - 0x4c2c] */
  eax = (uint32_t)(esi + 0xffffb3d4u);
/* dad3cd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad3d0: jle 0xdad422 */
  if ((zf || sf != of)) goto L_dad422;
L_dad3d2: /* dad3d2: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad3d5: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* dad3d8: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dad3db: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad3e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad3e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3e2: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* dad3e5: push 0xde3cb0 */
  { uint32_t v = 0xde3cb0u; esp -= 4; W32(esp, v); }
/* dad3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad3eb: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xdad3f1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* dad3f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad3f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad3f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad3fa: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad3fd: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* dad401: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xdad407u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* dad407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad408: push 0xde3d0c */
  { uint32_t v = 0xde3d0cu; esp -= 4; W32(esp, v); }
/* dad40d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad40f: call dword ptr [0xde8db4] */
  esp -= 4; W32(esp, 0xdad415u); SPILL(); call_ind(R32(0xde8db4u)); if (g_unwind) return; /* SHELL32!ShellExecuteW */ RELOAD();
/* dad415: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* dad418: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad41c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad422u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_dad422: /* dad422: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad425: xor edi, edi */
  edi = 0;
/* dad427: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* dad429: jle 0xdad46b */
  if ((zf || sf != of)) goto L_dad46b;
L_dad42b: /* dad42b: mov bl, 8 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x8u) & 0xffu);
/* dad42d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_dad430: /* dad430: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad433: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* dad436: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad438: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* dad43b: je 0xdad463 */
  if (zf) goto L_dad463;
L_dad43d: /* dad43d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* dad440: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* dad443: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad449u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad449: mov ecx, esi */
  ecx = esi;
/* dad44b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad44f: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdad455u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* dad455: mov edx, dword ptr [0xde88a4] */
  edx = R32((uint32_t)(0xde88a4u));
/* dad45b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* dad45d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* dad45f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad460: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xdad463u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dad463: /* dad463: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad466: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* dad467: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* dad469: jl 0xdad430 */
  if ((sf != of)) goto L_dad430;
L_dad46b: /* dad46b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad46d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* dad46f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad472: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xdad478u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* dad478: jmp 0xdad48e */
  goto L_dad48e;
L_dad48e: /* dad48e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* dad491: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* dad498: call 0xd823b5 */
  esp -= 4; W32(esp, 0xdad49du); SPILL(); f_d823b5(); if (g_unwind) return; RELOAD();
/* dad49d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* dad4a0: jmp 0xdad4b1 */
  goto L_dad4b1;
L_dad4b1: /* dad4b1: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xdad4b7u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* dad4b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dad4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad4bb: mov ecx, esi */
  ecx = esi;
/* dad4bd: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xdad4c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad4c0: lea esp, [ebp - 0x90] */
  esp = (uint32_t)(ebp + 0xffffff70u);
/* dad4c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad4d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad4d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad4d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad4d3: mov esp, ebp */
  esp = ebp;
/* dad4d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad4d6: ret  */
  esp += 4; SPILL(); return;
}

void f_dad4a2(void) {
  LOAD_REGS();
L_dad4a2: /* dad4a2: push 0xde3d50 */
  { uint32_t v = 0xde3d50u; esp -= 4; W32(esp, v); }
/* dad4a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad4a8: call dword ptr [0xde8b28] */
  esp -= 4; W32(esp, 0xdad4aeu); SPILL(); f_4e2ee6(); if (g_unwind) return; /* Core!?appMsgf@@YA?BHHPBGZZ */ RELOAD();
/* dad4ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad4b1: call dword ptr [0xde8e38] */
  esp -= 4; W32(esp, 0xdad4b7u); SPILL(); call_ind(R32(0xde8e38u)); if (g_unwind) return; /* USER32!ReleaseCapture */ RELOAD();
/* dad4b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* dad4b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad4bb: mov ecx, esi */
  ecx = esi;
/* dad4bd: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xdad4c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* dad4c0: lea esp, [ebp - 0x90] */
  esp = (uint32_t)(ebp + 0xffffff70u);
/* dad4c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad4d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad4d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad4d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad4d3: mov esp, ebp */
  esp = ebp;
/* dad4d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad4d6: ret  */
  esp += 4; SPILL(); return;
}

void f_dad5f0(void) {
  LOAD_REGS();
L_dad5f0: /* dad5f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dad5f1: mov ebp, esp */
  ebp = esp;
/* dad5f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dad5f5: push 0xdbaab0 */
  { uint32_t v = 0xdbaab0u; esp -= 4; W32(esp, v); }
/* dad5fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dad600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dad608: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad60b: mov eax, dword ptr [0xde8b24] */
  eax = R32((uint32_t)(0xde8b24u));
/* dad610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad612: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad613: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dad616: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad61d: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* dad623: call 0xd81c58 */
  esp -= 4; W32(esp, 0xdad628u); SPILL(); f_d81c58(); if (g_unwind) return; RELOAD();
/* dad628: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad62b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad62c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad62d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad634: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad635: mov esp, ebp */
  esp = ebp;
/* dad637: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad638: ret  */
  esp += 4; SPILL(); return;
}

void f_dad639(void) {
  LOAD_REGS();
L_dad639: /* dad639: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dad63c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dad641: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* dad644: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad645: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dad648: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad64du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dad64d(); return;
}

void f_dad64d(void) {
  LOAD_REGS();
L_dad64d: /* dad64d: push 0xdc4864 */
  { uint32_t v = 0xdc4864u; esp -= 4; W32(esp, v); }
/* dad652: push 0xde3ecc */
  { uint32_t v = 0xde3eccu; esp -= 4; W32(esp, v); }
/* dad657: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdad65du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dad65d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad660: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad662: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad664: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad669u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dad669: guest_badaddr(0xdad669); return;
}

void f_dad690(void) {
  LOAD_REGS();
L_dad690: /* dad690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dad691: mov ebp, esp */
  ebp = esp;
/* dad693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dad695: push 0xdbaac0 */
  { uint32_t v = 0xdbaac0u; esp -= 4; W32(esp, v); }
/* dad69a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dad6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad6a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dad6a8: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad6ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad6ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad6ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad6ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dad6b1: mov esi, ecx */
  esi = ecx;
/* dad6b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad6ba: call dword ptr [0xde8e80] */
  esp -= 4; W32(esp, 0xdad6c0u); SPILL(); call_ind(R32(0xde8e80u)); if (g_unwind) return; /* USER32!GetCapture */ RELOAD();
/* dad6c0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dad6c3: jne 0xdad777 */
  if (!zf) goto L_dad777;
L_dad6c9: /* dad6c9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dad6cc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* dad6cf: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* dad6d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad6d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad6d4: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xdad6dau); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* dad6da: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* dad6dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad6de: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xdad6e4u); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* dad6e4: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* dad6e7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* dad6ea: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* dad6ed: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* dad6f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* dad6f3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* dad6f6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* dad6f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dad6fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad6fb: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xdad701u); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* dad701: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* dad704: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* dad707: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* dad70a: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* dad70d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad70f: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* dad712: je 0xdad725 */
  if (zf) goto L_dad725;
L_dad714: /* dad714: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* dad717: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* dad71a: add eax, -6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* dad71d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* dad720: fidiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* dad723: jmp 0xdad734 */
  goto L_dad734;
L_dad725: /* dad725: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* dad728: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* dad72b: add ecx, -6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffau);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* dad72e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dad731: fidiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
L_dad734: /* dad734: fmul dword ptr [0xdc3ae8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc3ae8u)));
/* dad73a: fstp dword ptr [esi + 0x40] */
  WF32((uint32_t)(esi + 0x40u), ST0); FPOP();
/* dad73d: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* dad740: fcom dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
/* dad746: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* dad748: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dad74b: je 0xdad755 */
  if (zf) goto L_dad755;
L_dad74d: /* dad74d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* dad74f: fld dword ptr [0xdc1460] */
  { double v = F32((uint32_t)(0xdc1460u)); FPUSH(v); }
L_dad755: /* dad755: fcom dword ptr [0xdc3ae8] */
  fpu_com(ST0, F32((uint32_t)(0xdc3ae8u)));
/* dad75b: fst dword ptr [esi + 0x40] */
  WF32((uint32_t)(esi + 0x40u), ST0);
/* dad75e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* dad760: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* dad763: jnp 0xdad76d */
  if (!pf) goto L_dad76d;
L_dad765: /* dad765: fstp st(0) */
  STI(0) = ST0; FPOP();
/* dad767: fld dword ptr [0xdc3ae8] */
  { double v = F32((uint32_t)(0xdc3ae8u)); FPUSH(v); }
L_dad76d: /* dad76d: mov ecx, esi */
  ecx = esi;
/* dad76f: fstp dword ptr [esi + 0x40] */
  WF32((uint32_t)(esi + 0x40u), ST0); FPOP();
/* dad772: call 0xd8160e */
  esp -= 4; W32(esp, 0xdad777u); SPILL(); f_d8160e(); if (g_unwind) return; RELOAD();
L_dad777: /* dad777: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad77a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad77b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad77c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad783: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad784: mov esp, ebp */
  esp = ebp;
/* dad786: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad787: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_dad78a(void) {
  LOAD_REGS();
L_dad78a: /* dad78a: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* dad78d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dad792: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* dad795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad796: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* dad799: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad79eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dad79e(); return;
}

void f_dad79e(void) {
  LOAD_REGS();
L_dad79e: /* dad79e: push 0xdc488c */
  { uint32_t v = 0xdc488cu; esp -= 4; W32(esp, v); }
/* dad7a3: push 0xde4280 */
  { uint32_t v = 0xde4280u; esp -= 4; W32(esp, v); }
/* dad7a8: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdad7aeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dad7ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad7b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad7b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad7b5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad7bau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dad7ba: guest_badaddr(0xdad7ba); return;
}

void f_dad810(void) {
  LOAD_REGS();
L_dad810: /* dad810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* dad811: mov ebp, esp */
  ebp = esp;
/* dad813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dad815: push 0xdbaad0 */
  { uint32_t v = 0xdbaad0u; esp -= 4; W32(esp, v); }
/* dad81a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dad820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dad828: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dad82b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dad82c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad82d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad82e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* dad831: mov esi, ecx */
  esi = ecx;
/* dad833: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* dad83a: call 0xd81c58 */
  esp -= 4; W32(esp, 0xdad83fu); SPILL(); f_d81c58(); if (g_unwind) return; RELOAD();
/* dad83f: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* dad842: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad844: je 0xdad84d */
  if (zf) goto L_dad84d;
L_dad846: /* dad846: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* dad848: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad84a: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xdad84du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dad84d: /* dad84d: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* dad850: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad852: je 0xdad85b */
  if (zf) goto L_dad85b;
L_dad854: /* dad854: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dad856: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad858: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xdad85bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dad85b: /* dad85b: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* dad85e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dad860: je 0xdad869 */
  if (zf) goto L_dad869;
L_dad862: /* dad862: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* dad864: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dad866: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xdad869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dad869: /* dad869: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* dad86c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad86d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad86e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dad875: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dad876: mov esp, ebp */
  esp = ebp;
/* dad878: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* dad879: ret  */
  esp += 4; SPILL(); return;
}

void f_dad87a(void) {
  LOAD_REGS();
L_dad87a: /* dad87a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* dad87d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* dad882: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* dad885: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dad886: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* dad889: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad88eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_dad88e(); return;
}

void f_dad88e(void) {
  LOAD_REGS();
L_dad88e: /* dad88e: push 0xdc48c4 */
  { uint32_t v = 0xdc48c4u; esp -= 4; W32(esp, v); }
/* dad893: push 0xde42a0 */
  { uint32_t v = 0xde42a0u; esp -= 4; W32(esp, v); }
/* dad898: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xdad89eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* dad89e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dad8a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad8a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dad8a5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xdad8aau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_dad8aa: guest_badaddr(0xdad8aa); return;
}

void f_dad8e0(void) {
  LOAD_REGS();
L_dad8e0: /* dad8e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad8e1: mov esi, ecx */
  esi = ecx;
/* dad8e3: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* dad8e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad8ea: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dad8ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dad8f1: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* dad8f4: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* dad8f7: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* dad8fa: mov dx, word ptr [edi + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xcu))) & 0xffffu);
/* dad8fe: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* dad901: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* dad905: mov ax, word ptr [edi + 0xe] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xeu))) & 0xffffu);
/* dad909: mov word ptr [esi + 0xe], ax */
  W16((uint32_t)(esi + 0xeu), (eax & 0xffffu));
/* dad90d: xor ecx, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* dad910: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* dad913: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* dad916: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* dad918: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* dad91b: mov eax, edx */
  eax = edx;
/* dad91d: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* dad920: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* dad922: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* dad925: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* dad927: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* dad92a: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* dad92d: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* dad930: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* dad933: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* dad936: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* dad939: lea eax, [edi + 0x20] */
  eax = (uint32_t)(edi + 0x20u);
/* dad93c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad93d: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* dad940: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* dad943: call 0xd81aaa */
  esp -= 4; W32(esp, 0xdad948u); SPILL(); f_d81aaa(); if (g_unwind) return; RELOAD();
/* dad948: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* dad94b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* dad94e: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* dad951: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* dad954: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* dad957: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* dad95a: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* dad95d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dad95e: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* dad961: mov eax, esi */
  eax = esi;
/* dad963: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dad964: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dad9a0(void) {
  LOAD_REGS();
L_dad9a0: /* dad9a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dad9a1: mov esi, ecx */
  esi = ecx;
/* dad9a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dad9a4: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dad9a8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* dad9ab: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* dad9ae: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* dad9b1: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* dad9b4: mov dx, word ptr [edi + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xcu))) & 0xffffu);
/* dad9b8: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* dad9bb: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* dad9bf: mov ax, word ptr [edi + 0xe] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0xeu))) & 0xffffu);
/* dad9c3: mov word ptr [esi + 0xe], ax */
  W16((uint32_t)(esi + 0xeu), (eax & 0xffffu));
/* dad9c7: xor ecx, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* dad9ca: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* dad9cd: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* dad9d0: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* dad9d2: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* dad9d5: mov eax, edx */
  eax = edx;
/* dad9d7: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* dad9da: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* dad9dc: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* dad9df: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* dad9e1: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* dad9e4: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* dad9e7: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* dad9ea: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* dad9ed: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* dad9f0: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* dad9f3: lea eax, [edi + 0x20] */
  eax = (uint32_t)(edi + 0x20u);
/* dad9f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dad9f7: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* dad9fa: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* dad9fd: call 0xd82388 */
  esp -= 4; W32(esp, 0xdada02u); SPILL(); f_d82388(); if (g_unwind) return; RELOAD();
/* dada02: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* dada05: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* dada08: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* dada0b: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* dada0e: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* dada11: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* dada14: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* dada17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dada18: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* dada1b: mov eax, esi */
  eax = esi;
/* dada1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dada1e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dada60(void) {
  LOAD_REGS();
L_dada60: /* dada60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dada61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dada63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dada64: mov esi, ecx */
  esi = ecx;
/* dada66: mov ecx, esp */
  ecx = esp;
/* dada68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dada6a: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdada70u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* dada70: mov ecx, esi */
  ecx = esi;
/* dada72: call 0xd81410 */
  esp -= 4; W32(esp, 0xdada77u); SPILL(); f_d81410(); if (g_unwind) return; RELOAD();
/* dada77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dada78: ret  */
  esp += 4; SPILL(); return;
}

void f_dada90(void) {
  LOAD_REGS();
L_dada90: /* dada90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dada91: mov esi, ecx */
  esi = ecx;
/* dada93: call 0xd8227f */
  esp -= 4; W32(esp, 0xdada98u); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* dada98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dada9d: je 0xdadaac */
  if (zf) goto L_dadaac;
L_dada9f: /* dada9f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dadaa4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dadaa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dadaa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadaa9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdadaacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dadaac: /* dadaac: mov eax, esi */
  eax = esi;
/* dadaae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadaaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadad0(void) {
  LOAD_REGS();
L_dadad0: /* dadad0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dadad1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadad2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadad3: mov esi, ecx */
  esi = ecx;
/* dadad5: xor edi, edi */
  edi = 0;
/* dadad7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadad8: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* dadadc: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdadae2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* dadae2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* dadae6: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* dadae9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* dadaec: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dadaef: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* dadaf2: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* dadaf8: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* dadafb: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* dadaff: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* dadb05: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* dadb08: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* dadb0b: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* dadb0e: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* dadb11: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdadb17u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* dadb17: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* dadb1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadb1b: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dadb21: mov eax, esi */
  eax = esi;
/* dadb23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadb24: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* dadb25: ret  */
  esp += 4; SPILL(); return;
}

void f_dadb50(void) {
  LOAD_REGS();
L_dadb50: /* dadb50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadb51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadb52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dadb56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadb57: mov esi, ecx */
  esi = ecx;
/* dadb59: call 0xd824dc */
  esp -= 4; W32(esp, 0xdadb5eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dadb5e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dadb64: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadb67: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadb6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadb6b: mov eax, esi */
  eax = esi;
/* dadb6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadb6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadb90(void) {
  LOAD_REGS();
L_dadb90: /* dadb90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadb91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadb92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dadb96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadb97: mov esi, ecx */
  esi = ecx;
/* dadb99: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdadb9eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dadb9e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadba1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadba4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadba5: mov eax, esi */
  eax = esi;
/* dadba7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadba8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadbc0(void) {
  LOAD_REGS();
L_dadbc0: /* dadbc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadbc1: mov esi, ecx */
  esi = ecx;
/* dadbc3: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdadbc8u); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* dadbc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dadbcd: je 0xdadbdc */
  if (zf) goto L_dadbdc;
L_dadbcf: /* dadbcf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dadbd4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dadbd6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dadbd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadbd9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdadbdcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dadbdc: /* dadbdc: mov eax, esi */
  eax = esi;
/* dadbde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadbdf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadc00(void) {
  LOAD_REGS();
L_dadc00: /* dadc00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadc01: mov esi, ecx */
  esi = ecx;
/* dadc03: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdadc08u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* dadc08: mov dword ptr [esi], 0xdbf600 */
  W32((uint32_t)(esi), 0xdbf600u);
/* dadc0e: xor eax, eax */
  eax = 0;
/* dadc10: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* dadc13: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* dadc16: mov dword ptr [esi + 0x40], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x40u), 0xdbf5f8u);
/* dadc1d: mov eax, esi */
  eax = esi;
/* dadc1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadc20: ret  */
  esp += 4; SPILL(); return;
}

void f_dadc40(void) {
  LOAD_REGS();
L_dadc40: /* dadc40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadc41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadc42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dadc46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadc47: mov esi, ecx */
  esi = ecx;
/* dadc49: call 0xd824dc */
  esp -= 4; W32(esp, 0xdadc4eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dadc4e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dadc54: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadc57: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadc5a: mov dword ptr [esi], 0xdbf600 */
  W32((uint32_t)(esi), 0xdbf600u);
/* dadc60: mov dword ptr [esi + 0x40], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x40u), 0xdbf5f8u);
/* dadc67: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* dadc6a: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* dadc6d: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* dadc70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadc71: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* dadc74: mov eax, esi */
  eax = esi;
/* dadc76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadc77: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadc90(void) {
  LOAD_REGS();
L_dadc90: /* dadc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadc91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadc92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dadc96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadc97: mov esi, ecx */
  esi = ecx;
/* dadc99: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdadc9eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dadc9e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadca1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadca4: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* dadca7: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* dadcaa: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* dadcad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadcae: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* dadcb1: mov eax, esi */
  eax = esi;
/* dadcb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadcb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadcd0(void) {
  LOAD_REGS();
L_dadcd0: /* dadcd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadcd1: mov esi, ecx */
  esi = ecx;
/* dadcd3: call 0xd826da */
  esp -= 4; W32(esp, 0xdadcd8u); SPILL(); f_d826da(); if (g_unwind) return; RELOAD();
/* dadcd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dadcdd: je 0xdadcec */
  if (zf) goto L_dadcec;
L_dadcdf: /* dadcdf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dadce4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dadce6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dadce8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadce9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdadcecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dadcec: /* dadcec: mov eax, esi */
  eax = esi;
/* dadcee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadcef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadd10(void) {
  LOAD_REGS();
L_dadd10: /* dadd10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadd11: mov esi, ecx */
  esi = ecx;
/* dadd13: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdadd18u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* dadd18: mov dword ptr [esi], 0xdbf748 */
  W32((uint32_t)(esi), 0xdbf748u);
/* dadd1e: mov eax, esi */
  eax = esi;
/* dadd20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadd21: ret  */
  esp += 4; SPILL(); return;
}

void f_dadd40(void) {
  LOAD_REGS();
L_dadd40: /* dadd40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadd41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadd42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dadd46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadd47: mov esi, ecx */
  esi = ecx;
/* dadd49: call 0xd824dc */
  esp -= 4; W32(esp, 0xdadd4eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dadd4e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dadd54: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadd57: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadd5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadd5b: mov dword ptr [esi], 0xdbf748 */
  W32((uint32_t)(esi), 0xdbf748u);
/* dadd61: mov eax, esi */
  eax = esi;
/* dadd63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadd64: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadd80(void) {
  LOAD_REGS();
L_dadd80: /* dadd80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadd81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadd82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dadd86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadd87: mov esi, ecx */
  esi = ecx;
/* dadd89: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdadd8eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dadd8e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadd91: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadd94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadd95: mov eax, esi */
  eax = esi;
/* dadd97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadd98: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daddb0(void) {
  LOAD_REGS();
L_daddb0: /* daddb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daddb1: mov esi, ecx */
  esi = ecx;
/* daddb3: call 0xd82662 */
  esp -= 4; W32(esp, 0xdaddb8u); SPILL(); f_d82662(); if (g_unwind) return; RELOAD();
/* daddb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daddbd: je 0xdaddcc */
  if (zf) goto L_daddcc;
L_daddbf: /* daddbf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daddc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daddc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daddc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daddc9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaddccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daddcc: /* daddcc: mov eax, esi */
  eax = esi;
/* daddce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daddcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daddf0(void) {
  LOAD_REGS();
L_daddf0: /* daddf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daddf2: push 0xdbaae8 */
  { uint32_t v = 0xdbaae8u; esp -= 4; W32(esp, v); }
/* daddf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daddfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daddfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dade05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dade06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dade07: mov esi, ecx */
  esi = ecx;
/* dade09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* dade0d: mov dword ptr [esi], 0xdc4910 */
  W32((uint32_t)(esi), 0xdc4910u);
/* dade13: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* dade1b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdade20u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* dade20: mov ecx, esi */
  ecx = esi;
/* dade22: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* dade2a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdade2fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* dade2f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dade33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dade34: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dade3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dade3e: ret  */
  esp += 4; SPILL(); return;
}

void f_dade60(void) {
  LOAD_REGS();
L_dade60: /* dade60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dade61: mov esi, ecx */
  esi = ecx;
/* dade63: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdade68u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* dade68: mov dword ptr [esi], 0xdc4910 */
  W32((uint32_t)(esi), 0xdc4910u);
/* dade6e: mov eax, esi */
  eax = esi;
/* dade70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dade71: ret  */
  esp += 4; SPILL(); return;
}

void f_dade90(void) {
  LOAD_REGS();
L_dade90: /* dade90: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* dade94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dade96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dade97: mov esi, ecx */
  esi = ecx;
/* dade99: jne 0xdadea0 */
  if (!zf) goto L_dadea0;
L_dade9b: /* dade9b: mov eax, dword ptr [0xde5028] */
  eax = R32((uint32_t)(0xde5028u));
L_dadea0: /* dadea0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dadea4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dadea5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* dadea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dadeaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dadeab: mov ecx, esi */
  ecx = esi;
/* dadead: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdadeb2u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* dadeb2: mov dword ptr [esi], 0xdc4910 */
  W32((uint32_t)(esi), 0xdc4910u);
/* dadeb8: mov eax, esi */
  eax = esi;
/* dadeba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadebb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_daded0(void) {
  LOAD_REGS();
L_daded0: /* daded0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daded1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daded2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daded6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daded7: mov esi, ecx */
  esi = ecx;
/* daded9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdadedeu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dadede: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dadee4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadee7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadeea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadeeb: mov dword ptr [esi], 0xdc4910 */
  W32((uint32_t)(esi), 0xdc4910u);
/* dadef1: mov eax, esi */
  eax = esi;
/* dadef3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadef4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadf10(void) {
  LOAD_REGS();
L_dadf10: /* dadf10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadf11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadf12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dadf16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadf17: mov esi, ecx */
  esi = ecx;
/* dadf19: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdadf1eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dadf1e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dadf21: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dadf24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadf25: mov eax, esi */
  eax = esi;
/* dadf27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadf28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadf40(void) {
  LOAD_REGS();
L_dadf40: /* dadf40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadf41: mov esi, ecx */
  esi = ecx;
/* dadf43: call 0xd821c1 */
  esp -= 4; W32(esp, 0xdadf48u); SPILL(); f_d821c1(); if (g_unwind) return; RELOAD();
/* dadf48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dadf4d: je 0xdadf5c */
  if (zf) goto L_dadf5c;
L_dadf4f: /* dadf4f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dadf54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dadf56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dadf58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadf59: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdadf5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dadf5c: /* dadf5c: mov eax, esi */
  eax = esi;
/* dadf5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadf5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dadf80(void) {
  LOAD_REGS();
L_dadf80: /* dadf80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dadf81: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* dadf85: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dadf88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadf89: mov esi, ecx */
  esi = ecx;
/* dadf8b: je 0xdadfbd */
  if (zf) goto L_dadfbd;
L_dadf8d: /* dadf8d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* dadf90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadf91: push 0xd821c1 */
  { uint32_t v = 0xd821c1u; esp -= 4; W32(esp, v); }
/* dadf96: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* dadf99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dadf9a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* dadf9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadf9d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdadfa2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* dadfa2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dadfa5: je 0xdadfb5 */
  if (zf) goto L_dadfb5;
L_dadfa7: /* dadfa7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* dadfad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dadfaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dadfb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dadfb2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdadfb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dadfb5: /* dadfb5: mov eax, edi */
  eax = edi;
/* dadfb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dadfb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadfb9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dadfba: ret 4 */
  esp += 8; SPILL(); return;
L_dadfbd: /* dadfbd: mov ecx, esi */
  ecx = esi;
/* dadfbf: call 0xd821c1 */
  esp -= 4; W32(esp, 0xdadfc4u); SPILL(); f_d821c1(); if (g_unwind) return; RELOAD();
/* dadfc4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dadfc7: je 0xdadfd6 */
  if (zf) goto L_dadfd6;
L_dadfc9: /* dadfc9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dadfce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dadfd0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dadfd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dadfd3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdadfd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dadfd6: /* dadfd6: mov eax, esi */
  eax = esi;
/* dadfd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dadfd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dadfda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae000(void) {
  LOAD_REGS();
L_dae000: /* dae000: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dae002: push 0xdbab13 */
  { uint32_t v = 0xdbab13u; esp -= 4; W32(esp, v); }
/* dae007: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dae00d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae00e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dae015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae017: mov esi, ecx */
  esi = ecx;
/* dae019: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* dae01d: mov dword ptr [esi], 0xdc4a28 */
  W32((uint32_t)(esi), 0xdc4a28u);
/* dae023: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* dae02b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdae030u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* dae030: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* dae033: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* dae038: call 0xd812d5 */
  esp -= 4; W32(esp, 0xdae03du); SPILL(); f_d812d5(); if (g_unwind) return; RELOAD();
/* dae03d: mov ecx, esi */
  ecx = esi;
/* dae03f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* dae047: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdae04cu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* dae04c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dae050: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae051: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dae058: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dae05b: ret  */
  esp += 4; SPILL(); return;
}

void f_dae080(void) {
  LOAD_REGS();
L_dae080: /* dae080: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dae082: push 0xdbab38 */
  { uint32_t v = 0xdbab38u; esp -= 4; W32(esp, v); }
/* dae087: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dae08d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae08e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dae095: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae096: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae097: mov esi, ecx */
  esi = ecx;
/* dae099: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae09a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* dae09e: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdae0a3u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* dae0a3: xor edi, edi */
  edi = 0;
/* dae0a5: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* dae0a8: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* dae0ac: mov dword ptr [esi], 0xdc4a28 */
  W32((uint32_t)(esi), 0xdc4a28u);
/* dae0b2: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdae0b8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* dae0b8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* dae0bc: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* dae0bf: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* dae0c2: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* dae0c5: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* dae0c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae0c9: mov eax, esi */
  eax = esi;
/* dae0cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae0cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dae0d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dae0d6: ret  */
  esp += 4; SPILL(); return;
}

void f_dae100(void) {
  LOAD_REGS();
L_dae100: /* dae100: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dae102: push 0xdbab58 */
  { uint32_t v = 0xdbab58u; esp -= 4; W32(esp, v); }
/* dae107: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dae10d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae10e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dae115: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae116: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* dae11a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae11b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae11c: xor edi, edi */
  edi = 0;
/* dae11e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* dae120: mov esi, ecx */
  esi = ecx;
/* dae122: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* dae126: jne 0xdae12d */
  if (!zf) goto L_dae12d;
L_dae128: /* dae128: mov eax, dword ptr [0xde50d4] */
  eax = R32((uint32_t)(0xde50d4u));
L_dae12d: /* dae12d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* dae131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae132: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* dae136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae137: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae138: mov ecx, esi */
  ecx = esi;
/* dae13a: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdae13fu); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* dae13f: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* dae142: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* dae146: mov dword ptr [esi], 0xdc4a28 */
  W32((uint32_t)(esi), 0xdc4a28u);
/* dae14c: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdae152u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* dae152: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* dae156: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* dae159: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* dae15c: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* dae15f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae160: mov eax, esi */
  eax = esi;
/* dae162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae163: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dae16a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dae16d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_dae190(void) {
  LOAD_REGS();
L_dae190: /* dae190: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dae192: push 0xdbab78 */
  { uint32_t v = 0xdbab78u; esp -= 4; W32(esp, v); }
/* dae197: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dae19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae19e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dae1a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae1a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae1a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae1a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* dae1ac: mov esi, ecx */
  esi = ecx;
/* dae1ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae1af: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* dae1b3: call 0xd824dc */
  esp -= 4; W32(esp, 0xdae1b8u); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dae1b8: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dae1be: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dae1c1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dae1c4: mov dword ptr [esi], 0xdc4a28 */
  W32((uint32_t)(esi), 0xdc4a28u);
/* dae1ca: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* dae1cd: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* dae1d0: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* dae1d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dae1d4: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* dae1d7: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* dae1df: call 0xd81131 */
  esp -= 4; W32(esp, 0xdae1e4u); SPILL(); f_d81131(); if (g_unwind) return; RELOAD();
/* dae1e4: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* dae1e7: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* dae1ea: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* dae1ed: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* dae1f0: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* dae1f3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* dae1f7: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* dae1fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae1fb: mov eax, esi */
  eax = esi;
/* dae1fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae1fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dae205: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dae208: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae230(void) {
  LOAD_REGS();
L_dae230: /* dae230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae231: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae232: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dae236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae237: mov esi, ecx */
  esi = ecx;
/* dae239: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdae23eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dae23e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dae241: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dae244: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* dae247: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* dae24a: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* dae24d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* dae24e: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* dae251: call 0xd821fd */
  esp -= 4; W32(esp, 0xdae256u); SPILL(); f_d821fd(); if (g_unwind) return; RELOAD();
/* dae256: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* dae259: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* dae25c: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* dae25f: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* dae262: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* dae265: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae266: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* dae269: mov eax, esi */
  eax = esi;
/* dae26b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae26c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae280(void) {
  LOAD_REGS();
L_dae280: /* dae280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae281: mov esi, ecx */
  esi = ecx;
/* dae283: call 0xd81d66 */
  esp -= 4; W32(esp, 0xdae288u); SPILL(); f_d81d66(); if (g_unwind) return; RELOAD();
/* dae288: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae28d: je 0xdae29c */
  if (zf) goto L_dae29c;
L_dae28f: /* dae28f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dae294: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dae296: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dae298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae299: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdae29cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dae29c: /* dae29c: mov eax, esi */
  eax = esi;
/* dae29e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae29f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae2c0(void) {
  LOAD_REGS();
L_dae2c0: /* dae2c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dae2c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* dae2c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae2c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae2c9: mov esi, ecx */
  esi = ecx;
/* dae2cb: je 0xdae2fd */
  if (zf) goto L_dae2fd;
L_dae2cd: /* dae2cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* dae2d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae2d1: push 0xd81d66 */
  { uint32_t v = 0xd81d66u; esp -= 4; W32(esp, v); }
/* dae2d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* dae2d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae2da: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* dae2dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae2dd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdae2e2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* dae2e2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae2e5: je 0xdae2f5 */
  if (zf) goto L_dae2f5;
L_dae2e7: /* dae2e7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* dae2ed: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dae2ef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dae2f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae2f2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdae2f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dae2f5: /* dae2f5: mov eax, edi */
  eax = edi;
/* dae2f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae2f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae2f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dae2fa: ret 4 */
  esp += 8; SPILL(); return;
L_dae2fd: /* dae2fd: mov ecx, esi */
  ecx = esi;
/* dae2ff: call 0xd81d66 */
  esp -= 4; W32(esp, 0xdae304u); SPILL(); f_d81d66(); if (g_unwind) return; RELOAD();
/* dae304: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae307: je 0xdae316 */
  if (zf) goto L_dae316;
L_dae309: /* dae309: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dae30e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dae310: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dae312: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae313: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdae316u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dae316: /* dae316: mov eax, esi */
  eax = esi;
/* dae318: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae319: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dae31a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae340(void) {
  LOAD_REGS();
L_dae340: /* dae340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dae342: push 0xdbab98 */
  { uint32_t v = 0xdbab98u; esp -= 4; W32(esp, v); }
/* dae347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dae34d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae34e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dae355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae357: mov esi, ecx */
  esi = ecx;
/* dae359: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* dae35d: mov dword ptr [esi], 0xdc4b40 */
  W32((uint32_t)(esi), 0xdc4b40u);
/* dae363: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* dae36b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdae370u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* dae370: mov ecx, esi */
  ecx = esi;
/* dae372: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* dae37a: call 0xd82662 */
  esp -= 4; W32(esp, 0xdae37fu); SPILL(); f_d82662(); if (g_unwind) return; RELOAD();
/* dae37f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dae383: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae384: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dae38b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dae38e: ret  */
  esp += 4; SPILL(); return;
}

void f_dae3b0(void) {
  LOAD_REGS();
L_dae3b0: /* dae3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae3b1: mov esi, ecx */
  esi = ecx;
/* dae3b3: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdae3b8u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* dae3b8: mov dword ptr [esi], 0xdc4b40 */
  W32((uint32_t)(esi), 0xdc4b40u);
/* dae3be: mov eax, esi */
  eax = esi;
/* dae3c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae3c1: ret  */
  esp += 4; SPILL(); return;
}

void f_dae3e0(void) {
  LOAD_REGS();
L_dae3e0: /* dae3e0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* dae3e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dae3e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae3e7: mov esi, ecx */
  esi = ecx;
/* dae3e9: jne 0xdae3f9 */
  if (!zf) goto L_dae3f9;
L_dae3eb: /* dae3eb: mov eax, dword ptr [0xde50ec] */
  eax = R32((uint32_t)(0xde50ecu));
/* dae3f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dae3f2: jne 0xdae3f9 */
  if (!zf) goto L_dae3f9;
L_dae3f4: /* dae3f4: mov eax, dword ptr [0xde5198] */
  eax = R32((uint32_t)(0xde5198u));
L_dae3f9: /* dae3f9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dae3fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae3fe: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* dae402: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae404: mov ecx, esi */
  ecx = esi;
/* dae406: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdae40bu); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* dae40b: mov dword ptr [esi], 0xdc4b40 */
  W32((uint32_t)(esi), 0xdc4b40u);
/* dae411: mov eax, esi */
  eax = esi;
/* dae413: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae414: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_dae430(void) {
  LOAD_REGS();
L_dae430: /* dae430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae431: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae432: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dae436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae437: mov esi, ecx */
  esi = ecx;
/* dae439: call 0xd824dc */
  esp -= 4; W32(esp, 0xdae43eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dae43e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dae444: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dae447: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dae44a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae44b: mov dword ptr [esi], 0xdc4b40 */
  W32((uint32_t)(esi), 0xdc4b40u);
/* dae451: mov eax, esi */
  eax = esi;
/* dae453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae454: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae470(void) {
  LOAD_REGS();
L_dae470: /* dae470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae471: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae472: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dae476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae477: mov esi, ecx */
  esi = ecx;
/* dae479: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdae47eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dae47e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dae481: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dae484: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae485: mov eax, esi */
  eax = esi;
/* dae487: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae488: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae4a0(void) {
  LOAD_REGS();
L_dae4a0: /* dae4a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae4a1: mov esi, ecx */
  esi = ecx;
/* dae4a3: call 0xd8245a */
  esp -= 4; W32(esp, 0xdae4a8u); SPILL(); f_d8245a(); if (g_unwind) return; RELOAD();
/* dae4a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae4ad: je 0xdae4bc */
  if (zf) goto L_dae4bc;
L_dae4af: /* dae4af: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dae4b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dae4b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dae4b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae4b9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdae4bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dae4bc: /* dae4bc: mov eax, esi */
  eax = esi;
/* dae4be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae4bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae4e0(void) {
  LOAD_REGS();
L_dae4e0: /* dae4e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dae4e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* dae4e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae4e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae4e9: mov esi, ecx */
  esi = ecx;
/* dae4eb: je 0xdae51d */
  if (zf) goto L_dae51d;
L_dae4ed: /* dae4ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* dae4f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae4f1: push 0xd8245a */
  { uint32_t v = 0xd8245au; esp -= 4; W32(esp, v); }
/* dae4f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* dae4f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae4fa: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* dae4fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae4fd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdae502u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* dae502: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae505: je 0xdae515 */
  if (zf) goto L_dae515;
L_dae507: /* dae507: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* dae50d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dae50f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dae511: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae512: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdae515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dae515: /* dae515: mov eax, edi */
  eax = edi;
/* dae517: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae518: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae519: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dae51a: ret 4 */
  esp += 8; SPILL(); return;
L_dae51d: /* dae51d: mov ecx, esi */
  ecx = esi;
/* dae51f: call 0xd8245a */
  esp -= 4; W32(esp, 0xdae524u); SPILL(); f_d8245a(); if (g_unwind) return; RELOAD();
/* dae524: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae527: je 0xdae536 */
  if (zf) goto L_dae536;
L_dae529: /* dae529: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dae52e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dae530: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dae532: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae533: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdae536u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dae536: /* dae536: mov eax, esi */
  eax = esi;
/* dae538: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae539: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dae53a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae560(void) {
  LOAD_REGS();
L_dae560: /* dae560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae561: mov esi, ecx */
  esi = ecx;
/* dae563: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdae568u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* dae568: mov dword ptr [esi], 0xdc19a8 */
  W32((uint32_t)(esi), 0xdc19a8u);
/* dae56e: xor eax, eax */
  eax = 0;
/* dae570: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* dae573: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* dae576: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* dae57b: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* dae57e: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* dae581: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* dae584: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* dae587: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* dae58a: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* dae58d: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* dae590: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* dae593: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* dae596: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* dae599: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* dae59c: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* dae59f: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* dae5a2: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* dae5a8: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* dae5ae: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* dae5b1: mov eax, esi */
  eax = esi;
/* dae5b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae5b4: ret  */
  esp += 4; SPILL(); return;
}

void f_dae5e0(void) {
  LOAD_REGS();
L_dae5e0: /* dae5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae5e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae5e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dae5e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae5e7: mov esi, ecx */
  esi = ecx;
/* dae5e9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdae5eeu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dae5ee: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* dae5f4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dae5f7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dae5fa: mov dword ptr [esi], 0xdc19a8 */
  W32((uint32_t)(esi), 0xdc19a8u);
/* dae600: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* dae605: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* dae608: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* dae60b: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* dae60e: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* dae611: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* dae614: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* dae617: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* dae61a: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* dae61d: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* dae620: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* dae623: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* dae626: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* dae629: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* dae62c: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* dae62f: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* dae632: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* dae635: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* dae638: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* dae63b: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* dae63e: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* dae641: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* dae644: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* dae647: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* dae64a: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* dae64d: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* dae650: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* dae653: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* dae659: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* dae65f: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* dae665: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* dae66b: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* dae671: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* dae677: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* dae67d: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* dae683: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* dae689: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae68a: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* dae690: mov eax, esi */
  eax = esi;
/* dae692: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae693: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae6d0(void) {
  LOAD_REGS();
L_dae6d0: /* dae6d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae6d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae6d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dae6d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae6d7: mov esi, ecx */
  esi = ecx;
/* dae6d9: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdae6deu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dae6de: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* dae6e1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* dae6e4: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* dae6e7: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* dae6ea: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* dae6ed: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* dae6f0: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* dae6f3: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* dae6f6: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* dae6f9: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* dae6fc: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* dae6ff: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* dae702: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* dae705: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* dae708: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* dae70b: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* dae70e: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* dae711: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* dae714: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* dae717: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* dae71a: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* dae71d: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* dae720: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* dae726: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* dae72c: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* dae732: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* dae738: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* dae73e: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* dae744: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* dae74a: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* dae750: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* dae756: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* dae75c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae75d: mov eax, esi */
  eax = esi;
/* dae75f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae760: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae7a0(void) {
  LOAD_REGS();
L_dae7a0: /* dae7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae7a1: mov esi, ecx */
  esi = ecx;
/* dae7a3: call 0xd81bfe */
  esp -= 4; W32(esp, 0xdae7a8u); SPILL(); f_d81bfe(); if (g_unwind) return; RELOAD();
/* dae7a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dae7ad: je 0xdae7bc */
  if (zf) goto L_dae7bc;
L_dae7af: /* dae7af: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dae7b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dae7b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dae7b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae7b9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdae7bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dae7bc: /* dae7bc: mov eax, esi */
  eax = esi;
/* dae7be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae7bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae7e0(void) {
  LOAD_REGS();
L_dae7e0: /* dae7e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dae7e2: push 0xdbabb8 */
  { uint32_t v = 0xdbabb8u; esp -= 4; W32(esp, v); }
/* dae7e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dae7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae7ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dae7f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae7f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae7f7: mov esi, ecx */
  esi = ecx;
/* dae7f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* dae7fd: mov dword ptr [esi], 0xdc4c58 */
  W32((uint32_t)(esi), 0xdc4c58u);
/* dae803: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* dae80b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdae810u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* dae810: mov ecx, esi */
  ecx = esi;
/* dae812: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* dae81a: call 0xd81bfe */
  esp -= 4; W32(esp, 0xdae81fu); SPILL(); f_d81bfe(); if (g_unwind) return; RELOAD();
/* dae81f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dae823: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae824: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dae82b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dae82e: ret  */
  esp += 4; SPILL(); return;
}

void f_dae850(void) {
  LOAD_REGS();
L_dae850: /* dae850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae851: mov esi, ecx */
  esi = ecx;
/* dae853: call 0xd81591 */
  esp -= 4; W32(esp, 0xdae858u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* dae858: mov dword ptr [esi], 0xdc4c58 */
  W32((uint32_t)(esi), 0xdc4c58u);
/* dae85e: mov eax, esi */
  eax = esi;
/* dae860: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae861: ret  */
  esp += 4; SPILL(); return;
}

void f_dae880(void) {
  LOAD_REGS();
L_dae880: /* dae880: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* dae884: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* dae888: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae88a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dae88d: mov eax, esp */
  eax = esp;
/* dae88f: mov esi, ecx */
  esi = ecx;
/* dae891: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* dae895: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* dae898: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* dae89c: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* dae8a2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* dae8a5: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* dae8a9: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* dae8ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dae8ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dae8af: mov ecx, esi */
  ecx = esi;
/* dae8b1: call 0xd81adc */
  esp -= 4; W32(esp, 0xdae8b6u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* dae8b6: mov dword ptr [esi], 0xdc4c58 */
  W32((uint32_t)(esi), 0xdc4c58u);
/* dae8bc: mov dword ptr [esi + 0xc8], 0 */
  W32((uint32_t)(esi + 0xc8u), 0x0u);
/* dae8c6: mov eax, esi */
  eax = esi;
/* dae8c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae8c9: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_dae8f0(void) {
  LOAD_REGS();
L_dae8f0: /* dae8f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae8f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae8f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dae8f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae8f7: mov esi, ecx */
  esi = ecx;
/* dae8f9: call 0xd81915 */
  esp -= 4; W32(esp, 0xdae8feu); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* dae8fe: mov dword ptr [esi], 0xdc4c58 */
  W32((uint32_t)(esi), 0xdc4c58u);
/* dae904: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* dae90a: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* dae910: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* dae916: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* dae918: lea edx, [esi + 0x98] */
  edx = (uint32_t)(esi + 0x98u);
/* dae91e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* dae920: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* dae923: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* dae926: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* dae929: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* dae92c: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* dae92f: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* dae932: lea edx, [edi + 0xa8] */
  edx = (uint32_t)(edi + 0xa8u);
/* dae938: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* dae93a: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* dae940: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* dae942: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* dae945: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* dae948: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* dae94b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* dae94e: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* dae951: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* dae954: lea eax, [edi + 0xb8] */
  eax = (uint32_t)(edi + 0xb8u);
/* dae95a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* dae95c: lea ecx, [esi + 0xb8] */
  ecx = (uint32_t)(esi + 0xb8u);
/* dae962: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* dae964: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* dae967: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* dae96a: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* dae96d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* dae970: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* dae973: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* dae976: mov ecx, dword ptr [edi + 0xc8] */
  ecx = R32((uint32_t)(edi + 0xc8u));
/* dae97c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dae97d: mov dword ptr [esi + 0xc8], ecx */
  W32((uint32_t)(esi + 0xc8u), ecx);
/* dae983: mov eax, esi */
  eax = esi;
/* dae985: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dae986: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dae9c0(void) {
  LOAD_REGS();
L_dae9c0: /* dae9c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dae9c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae9c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dae9c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dae9c7: mov esi, ecx */
  esi = ecx;
/* dae9c9: call 0xd82149 */
  esp -= 4; W32(esp, 0xdae9ceu); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* dae9ce: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* dae9d4: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* dae9da: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* dae9e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* dae9e2: lea edx, [esi + 0x98] */
  edx = (uint32_t)(esi + 0x98u);
/* dae9e8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* dae9ea: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* dae9ed: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* dae9f0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* dae9f3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* dae9f6: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* dae9f9: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* dae9fc: lea edx, [edi + 0xa8] */
  edx = (uint32_t)(edi + 0xa8u);
/* daea02: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* daea04: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* daea0a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* daea0c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* daea0f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* daea12: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* daea15: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* daea18: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* daea1b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* daea1e: lea eax, [edi + 0xb8] */
  eax = (uint32_t)(edi + 0xb8u);
/* daea24: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* daea26: lea ecx, [esi + 0xb8] */
  ecx = (uint32_t)(esi + 0xb8u);
/* daea2c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* daea2e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* daea31: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* daea34: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* daea37: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* daea3a: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* daea3d: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* daea40: mov ecx, dword ptr [edi + 0xc8] */
  ecx = R32((uint32_t)(edi + 0xc8u));
/* daea46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daea47: mov dword ptr [esi + 0xc8], ecx */
  W32((uint32_t)(esi + 0xc8u), ecx);
/* daea4d: mov eax, esi */
  eax = esi;
/* daea4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daea50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daea90(void) {
  LOAD_REGS();
L_daea90: /* daea90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daea91: mov esi, ecx */
  esi = ecx;
/* daea93: call 0xd82559 */
  esp -= 4; W32(esp, 0xdaea98u); SPILL(); f_d82559(); if (g_unwind) return; RELOAD();
/* daea98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daea9d: je 0xdaeaac */
  if (zf) goto L_daeaac;
L_daea9f: /* daea9f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daeaa4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daeaa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daeaa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daeaa9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaeaacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daeaac: /* daeaac: mov eax, esi */
  eax = esi;
/* daeaae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daeaaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daead0(void) {
  LOAD_REGS();
L_daead0: /* daead0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daead1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* daead5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daead8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daead9: mov esi, ecx */
  esi = ecx;
/* daeadb: je 0xdaeb10 */
  if (zf) goto L_daeb10;
L_daeadd: /* daeadd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* daeae0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daeae1: push 0xd82559 */
  { uint32_t v = 0xd82559u; esp -= 4; W32(esp, v); }
/* daeae6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* daeae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daeaea: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* daeaef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daeaf0: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdaeaf5u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* daeaf5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daeaf8: je 0xdaeb08 */
  if (zf) goto L_daeb08;
L_daeafa: /* daeafa: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* daeb00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* daeb02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daeb04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daeb05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaeb08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daeb08: /* daeb08: mov eax, edi */
  eax = edi;
/* daeb0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daeb0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daeb0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daeb0d: ret 4 */
  esp += 8; SPILL(); return;
L_daeb10: /* daeb10: mov ecx, esi */
  ecx = esi;
/* daeb12: call 0xd82559 */
  esp -= 4; W32(esp, 0xdaeb17u); SPILL(); f_d82559(); if (g_unwind) return; RELOAD();
/* daeb17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daeb1a: je 0xdaeb29 */
  if (zf) goto L_daeb29;
L_daeb1c: /* daeb1c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daeb21: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daeb23: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daeb25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daeb26: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaeb29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daeb29: /* daeb29: mov eax, esi */
  eax = esi;
/* daeb2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daeb2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daeb2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daeb50(void) {
  LOAD_REGS();
L_daeb50: /* daeb50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daeb52: push 0xdbabd8 */
  { uint32_t v = 0xdbabd8u; esp -= 4; W32(esp, v); }
/* daeb57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daeb5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daeb5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daeb65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daeb66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daeb67: mov esi, ecx */
  esi = ecx;
/* daeb69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* daeb6d: mov dword ptr [esi], 0xdc4d78 */
  W32((uint32_t)(esi), 0xdc4d78u);
/* daeb73: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* daeb7b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdaeb80u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* daeb80: mov ecx, esi */
  ecx = esi;
/* daeb82: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* daeb8a: call 0xd81bfe */
  esp -= 4; W32(esp, 0xdaeb8fu); SPILL(); f_d81bfe(); if (g_unwind) return; RELOAD();
/* daeb8f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* daeb93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daeb94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daeb9b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daeb9e: ret  */
  esp += 4; SPILL(); return;
}

void f_daebc0(void) {
  LOAD_REGS();
L_daebc0: /* daebc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daebc1: mov esi, ecx */
  esi = ecx;
/* daebc3: call 0xd81591 */
  esp -= 4; W32(esp, 0xdaebc8u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* daebc8: mov dword ptr [esi], 0xdc4d78 */
  W32((uint32_t)(esi), 0xdc4d78u);
/* daebce: mov eax, esi */
  eax = esi;
/* daebd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daebd1: ret  */
  esp += 4; SPILL(); return;
}

void f_daebf0(void) {
  LOAD_REGS();
L_daebf0: /* daebf0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* daebf4: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* daebf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daebf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daebfa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daebfd: mov eax, esp */
  eax = esp;
/* daebff: mov esi, ecx */
  esi = ecx;
/* daec01: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* daec05: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* daec08: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* daec0c: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* daec12: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* daec15: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* daec19: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* daec1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daec1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daec1f: mov ecx, esi */
  ecx = esi;
/* daec21: call 0xd81adc */
  esp -= 4; W32(esp, 0xdaec26u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* daec26: mov eax, 0xff */
  eax = 0xffu;
/* daec2b: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* daec31: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* daec37: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* daec3d: mov dword ptr [esi], 0xdc4d78 */
  W32((uint32_t)(esi), 0xdc4d78u);
/* daec43: mov eax, esi */
  eax = esi;
/* daec45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daec46: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_daec70(void) {
  LOAD_REGS();
L_daec70: /* daec70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daec71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daec72: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daec76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daec77: mov esi, ecx */
  esi = ecx;
/* daec79: call 0xd81915 */
  esp -= 4; W32(esp, 0xdaec7eu); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* daec7e: mov dword ptr [esi], 0xdc4d78 */
  W32((uint32_t)(esi), 0xdc4d78u);
/* daec84: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* daec8a: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* daec90: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* daec96: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* daec9c: mov edx, dword ptr [edi + 0x9c] */
  edx = R32((uint32_t)(edi + 0x9cu));
/* daeca2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daeca3: mov dword ptr [esi + 0x9c], edx */
  W32((uint32_t)(esi + 0x9cu), edx);
/* daeca9: mov eax, esi */
  eax = esi;
/* daecab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daecac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daecc0(void) {
  LOAD_REGS();
L_daecc0: /* daecc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daecc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daecc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daecc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daecc7: mov esi, ecx */
  esi = ecx;
/* daecc9: call 0xd82149 */
  esp -= 4; W32(esp, 0xdaecceu); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* daecce: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* daecd4: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* daecda: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* daece0: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* daece6: mov edx, dword ptr [edi + 0x9c] */
  edx = R32((uint32_t)(edi + 0x9cu));
/* daecec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daeced: mov dword ptr [esi + 0x9c], edx */
  W32((uint32_t)(esi + 0x9cu), edx);
/* daecf3: mov eax, esi */
  eax = esi;
/* daecf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daecf6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daed10(void) {
  LOAD_REGS();
L_daed10: /* daed10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daed11: mov esi, ecx */
  esi = ecx;
/* daed13: call 0xd82342 */
  esp -= 4; W32(esp, 0xdaed18u); SPILL(); f_d82342(); if (g_unwind) return; RELOAD();
/* daed18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daed1d: je 0xdaed2c */
  if (zf) goto L_daed2c;
L_daed1f: /* daed1f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daed24: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daed26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daed28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daed29: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaed2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daed2c: /* daed2c: mov eax, esi */
  eax = esi;
/* daed2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daed2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daed50(void) {
  LOAD_REGS();
L_daed50: /* daed50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daed51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* daed55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daed58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daed59: mov esi, ecx */
  esi = ecx;
/* daed5b: je 0xdaed90 */
  if (zf) goto L_daed90;
L_daed5d: /* daed5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* daed60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daed61: push 0xd82342 */
  { uint32_t v = 0xd82342u; esp -= 4; W32(esp, v); }
/* daed66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* daed69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daed6a: push 0xa0 */
  { uint32_t v = 0xa0u; esp -= 4; W32(esp, v); }
/* daed6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daed70: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdaed75u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* daed75: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daed78: je 0xdaed88 */
  if (zf) goto L_daed88;
L_daed7a: /* daed7a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* daed80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* daed82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daed84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daed85: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaed88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daed88: /* daed88: mov eax, edi */
  eax = edi;
/* daed8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daed8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daed8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daed8d: ret 4 */
  esp += 8; SPILL(); return;
L_daed90: /* daed90: mov ecx, esi */
  ecx = esi;
/* daed92: call 0xd82342 */
  esp -= 4; W32(esp, 0xdaed97u); SPILL(); f_d82342(); if (g_unwind) return; RELOAD();
/* daed97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daed9a: je 0xdaeda9 */
  if (zf) goto L_daeda9;
L_daed9c: /* daed9c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daeda1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daeda3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daeda5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daeda6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaeda9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daeda9: /* daeda9: mov eax, esi */
  eax = esi;
/* daedab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daedac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daedad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daedd0(void) {
  LOAD_REGS();
L_daedd0: /* daedd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daedd1: mov esi, ecx */
  esi = ecx;
/* daedd3: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdaedd8u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* daedd8: mov dword ptr [esi], 0xdbf860 */
  W32((uint32_t)(esi), 0xdbf860u);
/* daedde: mov eax, esi */
  eax = esi;
/* daede0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daede1: ret  */
  esp += 4; SPILL(); return;
}

void f_daee00(void) {
  LOAD_REGS();
L_daee00: /* daee00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daee01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daee02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daee06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daee07: mov esi, ecx */
  esi = ecx;
/* daee09: call 0xd824dc */
  esp -= 4; W32(esp, 0xdaee0eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* daee0e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* daee14: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* daee17: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* daee1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daee1b: mov dword ptr [esi], 0xdbf860 */
  W32((uint32_t)(esi), 0xdbf860u);
/* daee21: mov eax, esi */
  eax = esi;
/* daee23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daee24: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daee40(void) {
  LOAD_REGS();
L_daee40: /* daee40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daee41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daee42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daee46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daee47: mov esi, ecx */
  esi = ecx;
/* daee49: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdaee4eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* daee4e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* daee51: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* daee54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daee55: mov eax, esi */
  eax = esi;
/* daee57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daee58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daee70(void) {
  LOAD_REGS();
L_daee70: /* daee70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daee71: mov esi, ecx */
  esi = ecx;
/* daee73: call 0xd81645 */
  esp -= 4; W32(esp, 0xdaee78u); SPILL(); f_d81645(); if (g_unwind) return; RELOAD();
/* daee78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daee7d: je 0xdaee8c */
  if (zf) goto L_daee8c;
L_daee7f: /* daee7f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daee84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daee86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daee88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daee89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaee8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daee8c: /* daee8c: mov eax, esi */
  eax = esi;
/* daee8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daee8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daeeb0(void) {
  LOAD_REGS();
L_daeeb0: /* daeeb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daeeb2: push 0xdbabf8 */
  { uint32_t v = 0xdbabf8u; esp -= 4; W32(esp, v); }
/* daeeb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daeebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daeebe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daeec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daeec6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daeec7: mov esi, ecx */
  esi = ecx;
/* daeec9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* daeecd: mov dword ptr [esi], 0xdc4e98 */
  W32((uint32_t)(esi), 0xdc4e98u);
/* daeed3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* daeedb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdaeee0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* daeee0: mov ecx, esi */
  ecx = esi;
/* daeee2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* daeeea: call 0xd8227f */
  esp -= 4; W32(esp, 0xdaeeefu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* daeeef: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* daeef3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daeef4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daeefb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daeefe: ret  */
  esp += 4; SPILL(); return;
}

void f_daef20(void) {
  LOAD_REGS();
L_daef20: /* daef20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daef21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daef22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daef23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daef25: mov esi, ecx */
  esi = ecx;
/* daef27: push 0xde4c34 */
  { uint32_t v = 0xde4c34u; esp -= 4; W32(esp, v); }
/* daef2c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* daef30: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdaef36u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* daef36: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* daef3a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* daef3e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* daef41: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* daef44: xor edi, edi */
  edi = 0;
/* daef46: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* daef49: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* daef4c: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* daef4f: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* daef55: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* daef58: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* daef5c: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* daef62: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* daef65: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* daef68: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* daef6b: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdaef71u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* daef71: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* daef75: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* daef78: mov dword ptr [esi], 0xdc4e98 */
  W32((uint32_t)(esi), 0xdc4e98u);
/* daef7e: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* daef81: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* daef84: mov dword ptr [esi + 0x3c], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x3cu), 0xdbf5f8u);
/* daef8b: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* daef8e: mov eax, dword ptr [0xde5188] */
  eax = R32((uint32_t)(0xde5188u));
/* daef93: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* daef96: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* daef99: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* daef9c: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* daef9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daefa0: mov eax, esi */
  eax = esi;
/* daefa2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daefa3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* daefa4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_daefe0(void) {
  LOAD_REGS();
L_daefe0: /* daefe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daefe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daefe2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daefe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daefe7: mov esi, ecx */
  esi = ecx;
/* daefe9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdaefeeu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* daefee: mov dword ptr [esi], 0xdc4e98 */
  W32((uint32_t)(esi), 0xdc4e98u);
/* daeff4: mov dword ptr [esi + 0x3c], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x3cu), 0xdbf5f8u);
/* daeffb: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* daeffe: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* daf001: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* daf004: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* daf007: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* daf00a: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* daf00d: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* daf010: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* daf013: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* daf016: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* daf019: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* daf01c: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* daf01f: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* daf022: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* daf025: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* daf028: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* daf02b: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* daf02e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf02f: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* daf032: mov eax, esi */
  eax = esi;
/* daf034: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf035: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf060(void) {
  LOAD_REGS();
L_daf060: /* daf060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf061: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf062: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daf066: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf067: mov esi, ecx */
  esi = ecx;
/* daf069: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdaf06eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* daf06e: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* daf071: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* daf074: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* daf077: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* daf07a: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* daf07d: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* daf080: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* daf083: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* daf086: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* daf089: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* daf08c: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* daf08f: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* daf092: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* daf095: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* daf098: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* daf09b: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* daf09e: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* daf0a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf0a2: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* daf0a5: mov eax, esi */
  eax = esi;
/* daf0a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf0a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf0d0(void) {
  LOAD_REGS();
L_daf0d0: /* daf0d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf0d1: mov esi, ecx */
  esi = ecx;
/* daf0d3: call 0xd8259a */
  esp -= 4; W32(esp, 0xdaf0d8u); SPILL(); f_d8259a(); if (g_unwind) return; RELOAD();
/* daf0d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf0dd: je 0xdaf0ec */
  if (zf) goto L_daf0ec;
L_daf0df: /* daf0df: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daf0e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daf0e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daf0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf0e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaf0ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daf0ec: /* daf0ec: mov eax, esi */
  eax = esi;
/* daf0ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf0ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf110(void) {
  LOAD_REGS();
L_daf110: /* daf110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daf111: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* daf115: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf119: mov esi, ecx */
  esi = ecx;
/* daf11b: je 0xdaf14d */
  if (zf) goto L_daf14d;
L_daf11d: /* daf11d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* daf120: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf121: push 0xd8259a */
  { uint32_t v = 0xd8259au; esp -= 4; W32(esp, v); }
/* daf126: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* daf129: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf12a: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* daf12c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf12d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdaf132u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* daf132: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf135: je 0xdaf145 */
  if (zf) goto L_daf145;
L_daf137: /* daf137: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* daf13d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* daf13f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daf141: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf142: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaf145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daf145: /* daf145: mov eax, edi */
  eax = edi;
/* daf147: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf148: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf149: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daf14a: ret 4 */
  esp += 8; SPILL(); return;
L_daf14d: /* daf14d: mov ecx, esi */
  ecx = esi;
/* daf14f: call 0xd8259a */
  esp -= 4; W32(esp, 0xdaf154u); SPILL(); f_d8259a(); if (g_unwind) return; RELOAD();
/* daf154: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf157: je 0xdaf166 */
  if (zf) goto L_daf166;
L_daf159: /* daf159: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daf15e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daf160: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daf162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf163: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaf166u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daf166: /* daf166: mov eax, esi */
  eax = esi;
/* daf168: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf169: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daf16a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf190(void) {
  LOAD_REGS();
L_daf190: /* daf190: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daf192: push 0xdbac18 */
  { uint32_t v = 0xdbac18u; esp -= 4; W32(esp, v); }
/* daf197: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daf19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf19e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daf1a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daf1a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf1a7: mov esi, ecx */
  esi = ecx;
/* daf1a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* daf1ad: mov dword ptr [esi], 0xdc4fb0 */
  W32((uint32_t)(esi), 0xdc4fb0u);
/* daf1b3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* daf1bb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdaf1c0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* daf1c0: mov ecx, esi */
  ecx = esi;
/* daf1c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* daf1ca: call 0xd8227f */
  esp -= 4; W32(esp, 0xdaf1cfu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* daf1cf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* daf1d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf1d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daf1db: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daf1de: ret  */
  esp += 4; SPILL(); return;
}

void f_daf200(void) {
  LOAD_REGS();
L_daf200: /* daf200: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daf202: push 0xdbac38 */
  { uint32_t v = 0xdbac38u; esp -= 4; W32(esp, v); }
/* daf207: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daf20d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf20e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daf215: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daf218: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daf219: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daf21a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf21b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf21c: mov esi, ecx */
  esi = ecx;
/* daf21e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daf220: push 0xde4c88 */
  { uint32_t v = 0xde4c88u; esp -= 4; W32(esp, v); }
/* daf225: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* daf229: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* daf22d: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdaf233u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* daf233: mov ebx, dword ptr [esi + 0x10] */
  ebx = R32((uint32_t)(esi + 0x10u));
/* daf236: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* daf23a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* daf23e: xor edi, edi */
  edi = 0;
/* daf240: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* daf243: and ebx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* daf246: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* daf249: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* daf24f: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* daf252: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* daf255: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* daf259: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* daf25f: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* daf262: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* daf265: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* daf268: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdaf26eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* daf26e: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* daf271: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* daf275: mov ebx, dword ptr [0xde8ec8] */
  ebx = R32((uint32_t)(0xde8ec8u));
/* daf27b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf27c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf27d: mov dword ptr [esi], 0xdc4fb0 */
  W32((uint32_t)(esi), 0xdc4fb0u);
/* daf283: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf284: mov dword ptr [esi + 0x3c], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x3cu), 0xdbf5f8u);
/* daf28b: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* daf28e: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* daf291: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf292: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* daf295: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* daf29a: push 0x697a */
  { uint32_t v = 0x697au; esp -= 4; W32(esp, v); }
/* daf29f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf2a0: mov dword ptr [esp + 0x38], edi */
  W32((uint32_t)(esp + 0x38u), edi);
/* daf2a4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf2a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf2a6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daf2a8: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* daf2ae: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* daf2b1: jne 0xdaf2c7 */
  if (!zf) goto L_daf2c7;
L_daf2b3: /* daf2b3: push 0x487 */
  { uint32_t v = 0x487u; esp -= 4; W32(esp, v); }
/* daf2b8: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* daf2bd: push 0xde4c7c */
  { uint32_t v = 0xde4c7cu; esp -= 4; W32(esp, v); }
/* daf2c2: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xdaf2c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf2c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daf2c7: /* daf2c7: mov ecx, dword ptr [0xde50e8] */
  ecx = R32((uint32_t)(0xde50e8u));
/* daf2cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2d1: push 0x697b */
  { uint32_t v = 0x697bu; esp -= 4; W32(esp, v); }
/* daf2d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daf2d7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf2d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf2d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daf2db: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* daf2de: jne 0xdaf2f4 */
  if (!zf) goto L_daf2f4;
L_daf2e0: /* daf2e0: push 0x488 */
  { uint32_t v = 0x488u; esp -= 4; W32(esp, v); }
/* daf2e5: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* daf2ea: push 0xde4c70 */
  { uint32_t v = 0xde4c70u; esp -= 4; W32(esp, v); }
/* daf2ef: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xdaf2f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf2f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daf2f4: /* daf2f4: mov edx, dword ptr [0xde50e8] */
  edx = R32((uint32_t)(0xde50e8u));
/* daf2fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf2fe: push 0x697c */
  { uint32_t v = 0x697cu; esp -= 4; W32(esp, v); }
/* daf303: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daf304: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf306u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf306: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daf308: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* daf30b: jne 0xdaf321 */
  if (!zf) goto L_daf321;
L_daf30d: /* daf30d: push 0x489 */
  { uint32_t v = 0x489u; esp -= 4; W32(esp, v); }
/* daf312: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* daf317: push 0xde4c64 */
  { uint32_t v = 0xde4c64u; esp -= 4; W32(esp, v); }
/* daf31c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xdaf31eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf31e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daf321: /* daf321: mov eax, dword ptr [0xde50e8] */
  eax = R32((uint32_t)(0xde50e8u));
/* daf326: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf327: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf329: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf32a: push 0x697d */
  { uint32_t v = 0x697du; esp -= 4; W32(esp, v); }
/* daf32f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf330: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf332: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* daf334: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* daf337: jne 0xdaf34d */
  if (!zf) goto L_daf34d;
L_daf339: /* daf339: push 0x48a */
  { uint32_t v = 0x48au; esp -= 4; W32(esp, v); }
/* daf33e: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* daf343: push 0xde4c58 */
  { uint32_t v = 0xde4c58u; esp -= 4; W32(esp, v); }
/* daf348: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xdaf34au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf34a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_daf34d: /* daf34d: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* daf350: mov ebx, dword ptr [0xde8c70] */
  ebx = R32((uint32_t)(0xde8c70u));
/* daf356: lea ecx, [esi + 0x6c] */
  ecx = (uint32_t)(esi + 0x6cu);
/* daf359: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daf35a: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* daf35c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daf35d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf35fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf35f: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* daf362: lea eax, [esi + 0x84] */
  eax = (uint32_t)(esi + 0x84u);
/* daf368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf369: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* daf36b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daf36c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf36eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf36e: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* daf371: lea edx, [esi + 0x9c] */
  edx = (uint32_t)(esi + 0x9cu);
/* daf377: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daf378: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* daf37a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf37b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf37du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf37d: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* daf380: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* daf386: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daf387: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* daf389: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daf38a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdaf38cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* daf38c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* daf390: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* daf393: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* daf396: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf397: mov eax, esi */
  eax = esi;
/* daf399: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf39a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daf39b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daf39c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daf3a3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daf3a6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_daf420(void) {
  LOAD_REGS();
L_daf420: /* daf420: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daf421: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daf422: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* daf426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf428: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daf429: mov ebx, ecx */
  ebx = ecx;
/* daf42b: call 0xd824dc */
  esp -= 4; W32(esp, 0xdaf430u); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* daf430: mov dword ptr [ebx], 0xdc4fb0 */
  W32((uint32_t)(ebx), 0xdc4fb0u);
/* daf436: mov dword ptr [ebx + 0x3c], 0xdbf5f8 */
  W32((uint32_t)(ebx + 0x3cu), 0xdbf5f8u);
/* daf43d: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* daf440: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* daf443: mov ecx, dword ptr [ebp + 0x44] */
  ecx = R32((uint32_t)(ebp + 0x44u));
/* daf446: mov dword ptr [ebx + 0x44], ecx */
  W32((uint32_t)(ebx + 0x44u), ecx);
/* daf449: mov edx, dword ptr [ebp + 0x48] */
  edx = R32((uint32_t)(ebp + 0x48u));
/* daf44c: mov dword ptr [ebx + 0x48], edx */
  W32((uint32_t)(ebx + 0x48u), edx);
/* daf44f: mov eax, dword ptr [ebp + 0x4c] */
  eax = R32((uint32_t)(ebp + 0x4cu));
/* daf452: mov dword ptr [ebx + 0x4c], eax */
  W32((uint32_t)(ebx + 0x4cu), eax);
/* daf455: mov ecx, dword ptr [ebp + 0x50] */
  ecx = R32((uint32_t)(ebp + 0x50u));
/* daf458: mov dword ptr [ebx + 0x50], ecx */
  W32((uint32_t)(ebx + 0x50u), ecx);
/* daf45b: mov edx, dword ptr [ebp + 0x54] */
  edx = R32((uint32_t)(ebp + 0x54u));
/* daf45e: mov dword ptr [ebx + 0x54], edx */
  W32((uint32_t)(ebx + 0x54u), edx);
/* daf461: mov eax, dword ptr [ebp + 0x58] */
  eax = R32((uint32_t)(ebp + 0x58u));
/* daf464: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* daf467: mov ecx, dword ptr [ebp + 0x5c] */
  ecx = R32((uint32_t)(ebp + 0x5cu));
/* daf46a: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* daf46d: mov edx, dword ptr [ebp + 0x60] */
  edx = R32((uint32_t)(ebp + 0x60u));
/* daf470: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* daf473: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* daf476: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* daf479: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* daf47c: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* daf47f: lea esi, [ebp + 0x6c] */
  esi = (uint32_t)(ebp + 0x6cu);
/* daf482: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* daf485: mov ecx, 6 */
  ecx = 0x6u;
/* daf48a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf48c: lea esi, [ebp + 0x84] */
  esi = (uint32_t)(ebp + 0x84u);
/* daf492: lea edi, [ebx + 0x84] */
  edi = (uint32_t)(ebx + 0x84u);
/* daf498: mov ecx, 6 */
  ecx = 0x6u;
/* daf49d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf49f: lea esi, [ebp + 0x9c] */
  esi = (uint32_t)(ebp + 0x9cu);
/* daf4a5: lea edi, [ebx + 0x9c] */
  edi = (uint32_t)(ebx + 0x9cu);
/* daf4ab: mov ecx, 6 */
  ecx = 0x6u;
/* daf4b0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf4b2: lea esi, [ebp + 0xb4] */
  esi = (uint32_t)(ebp + 0xb4u);
/* daf4b8: lea edi, [ebx + 0xb4] */
  edi = (uint32_t)(ebx + 0xb4u);
/* daf4be: mov ecx, 6 */
  ecx = 0x6u;
/* daf4c3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf4c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf4c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf4c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daf4c8: mov eax, ebx */
  eax = ebx;
/* daf4ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daf4cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf500(void) {
  LOAD_REGS();
L_daf500: /* daf500: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daf501: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daf502: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* daf506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf508: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* daf509: mov ebx, ecx */
  ebx = ecx;
/* daf50b: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdaf510u); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* daf510: mov eax, dword ptr [ebp + 0x40] */
  eax = R32((uint32_t)(ebp + 0x40u));
/* daf513: mov dword ptr [ebx + 0x40], eax */
  W32((uint32_t)(ebx + 0x40u), eax);
/* daf516: mov ecx, dword ptr [ebp + 0x44] */
  ecx = R32((uint32_t)(ebp + 0x44u));
/* daf519: mov dword ptr [ebx + 0x44], ecx */
  W32((uint32_t)(ebx + 0x44u), ecx);
/* daf51c: mov edx, dword ptr [ebp + 0x48] */
  edx = R32((uint32_t)(ebp + 0x48u));
/* daf51f: mov dword ptr [ebx + 0x48], edx */
  W32((uint32_t)(ebx + 0x48u), edx);
/* daf522: mov eax, dword ptr [ebp + 0x4c] */
  eax = R32((uint32_t)(ebp + 0x4cu));
/* daf525: mov dword ptr [ebx + 0x4c], eax */
  W32((uint32_t)(ebx + 0x4cu), eax);
/* daf528: mov ecx, dword ptr [ebp + 0x50] */
  ecx = R32((uint32_t)(ebp + 0x50u));
/* daf52b: mov dword ptr [ebx + 0x50], ecx */
  W32((uint32_t)(ebx + 0x50u), ecx);
/* daf52e: mov edx, dword ptr [ebp + 0x54] */
  edx = R32((uint32_t)(ebp + 0x54u));
/* daf531: mov dword ptr [ebx + 0x54], edx */
  W32((uint32_t)(ebx + 0x54u), edx);
/* daf534: mov eax, dword ptr [ebp + 0x58] */
  eax = R32((uint32_t)(ebp + 0x58u));
/* daf537: mov dword ptr [ebx + 0x58], eax */
  W32((uint32_t)(ebx + 0x58u), eax);
/* daf53a: mov ecx, dword ptr [ebp + 0x5c] */
  ecx = R32((uint32_t)(ebp + 0x5cu));
/* daf53d: mov dword ptr [ebx + 0x5c], ecx */
  W32((uint32_t)(ebx + 0x5cu), ecx);
/* daf540: mov edx, dword ptr [ebp + 0x60] */
  edx = R32((uint32_t)(ebp + 0x60u));
/* daf543: mov dword ptr [ebx + 0x60], edx */
  W32((uint32_t)(ebx + 0x60u), edx);
/* daf546: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* daf549: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* daf54c: mov ecx, dword ptr [ebp + 0x68] */
  ecx = R32((uint32_t)(ebp + 0x68u));
/* daf54f: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* daf552: lea esi, [ebp + 0x6c] */
  esi = (uint32_t)(ebp + 0x6cu);
/* daf555: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* daf558: mov ecx, 6 */
  ecx = 0x6u;
/* daf55d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf55f: lea esi, [ebp + 0x84] */
  esi = (uint32_t)(ebp + 0x84u);
/* daf565: lea edi, [ebx + 0x84] */
  edi = (uint32_t)(ebx + 0x84u);
/* daf56b: mov ecx, 6 */
  ecx = 0x6u;
/* daf570: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf572: lea esi, [ebp + 0x9c] */
  esi = (uint32_t)(ebp + 0x9cu);
/* daf578: lea edi, [ebx + 0x9c] */
  edi = (uint32_t)(ebx + 0x9cu);
/* daf57e: mov ecx, 6 */
  ecx = 0x6u;
/* daf583: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf585: lea esi, [ebp + 0xb4] */
  esi = (uint32_t)(ebp + 0xb4u);
/* daf58b: lea edi, [ebx + 0xb4] */
  edi = (uint32_t)(ebx + 0xb4u);
/* daf591: mov ecx, 6 */
  ecx = 0x6u;
/* daf596: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* daf598: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf599: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf59a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* daf59b: mov eax, ebx */
  eax = ebx;
/* daf59d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daf59e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf5e0(void) {
  LOAD_REGS();
L_daf5e0: /* daf5e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf5e1: mov esi, ecx */
  esi = ecx;
/* daf5e3: call 0xd817cb */
  esp -= 4; W32(esp, 0xdaf5e8u); SPILL(); f_d817cb(); if (g_unwind) return; RELOAD();
/* daf5e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf5ed: je 0xdaf5fc */
  if (zf) goto L_daf5fc;
L_daf5ef: /* daf5ef: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daf5f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daf5f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daf5f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf5f9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaf5fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daf5fc: /* daf5fc: mov eax, esi */
  eax = esi;
/* daf5fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf5ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf620(void) {
  LOAD_REGS();
L_daf620: /* daf620: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* daf621: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* daf625: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf629: mov esi, ecx */
  esi = ecx;
/* daf62b: je 0xdaf660 */
  if (zf) goto L_daf660;
L_daf62d: /* daf62d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* daf630: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf631: push 0xd817cb */
  { uint32_t v = 0xd817cbu; esp -= 4; W32(esp, v); }
/* daf636: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* daf639: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf63a: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* daf63f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf640: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdaf645u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* daf645: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf648: je 0xdaf658 */
  if (zf) goto L_daf658;
L_daf64a: /* daf64a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* daf650: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* daf652: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daf654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf655: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaf658u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daf658: /* daf658: mov eax, edi */
  eax = edi;
/* daf65a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf65b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf65c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daf65d: ret 4 */
  esp += 8; SPILL(); return;
L_daf660: /* daf660: mov ecx, esi */
  ecx = esi;
/* daf662: call 0xd817cb */
  esp -= 4; W32(esp, 0xdaf667u); SPILL(); f_d817cb(); if (g_unwind) return; RELOAD();
/* daf667: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daf66a: je 0xdaf679 */
  if (zf) goto L_daf679;
L_daf66c: /* daf66c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daf671: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daf673: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daf675: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf676: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaf679u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daf679: /* daf679: mov eax, esi */
  eax = esi;
/* daf67b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf67c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daf67d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf6a0(void) {
  LOAD_REGS();
L_daf6a0: /* daf6a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daf6a2: push 0xdbac64 */
  { uint32_t v = 0xdbac64u; esp -= 4; W32(esp, v); }
/* daf6a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daf6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf6ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daf6b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daf6b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf6b7: mov esi, ecx */
  esi = ecx;
/* daf6b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* daf6bd: mov dword ptr [esi], 0xdc50c8 */
  W32((uint32_t)(esi), 0xdc50c8u);
/* daf6c3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* daf6cb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdaf6d0u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* daf6d0: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* daf6d3: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* daf6d8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdaf6deu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* daf6de: mov ecx, esi */
  ecx = esi;
/* daf6e0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* daf6e8: call 0xd8227f */
  esp -= 4; W32(esp, 0xdaf6edu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* daf6ed: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* daf6f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf6f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daf6f9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daf6fc: ret  */
  esp += 4; SPILL(); return;
}

void f_daf720(void) {
  LOAD_REGS();
L_daf720: /* daf720: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daf722: push 0xdbac88 */
  { uint32_t v = 0xdbac88u; esp -= 4; W32(esp, v); }
/* daf727: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daf72d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf72e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daf735: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* daf738: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf73a: mov esi, ecx */
  esi = ecx;
/* daf73c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* daf73e: push 0xde4cac */
  { uint32_t v = 0xde4cacu; esp -= 4; W32(esp, v); }
/* daf743: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* daf747: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* daf74b: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdaf751u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* daf751: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* daf755: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* daf759: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* daf75c: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* daf75f: xor edi, edi */
  edi = 0;
/* daf761: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* daf764: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* daf767: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* daf76a: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* daf770: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* daf773: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* daf777: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* daf77d: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* daf780: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* daf783: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* daf786: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdaf78cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* daf78c: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* daf78f: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* daf792: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* daf796: mov dword ptr [esi], 0xdc50c8 */
  W32((uint32_t)(esi), 0xdc50c8u);
/* daf79c: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdaf7a2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* daf7a2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* daf7a6: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* daf7a9: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* daf7ac: mov dword ptr [esi + 0x8c], edi */
  W32((uint32_t)(esi + 0x8cu), edi);
/* daf7b2: mov dword ptr [esi + 0x88], edi */
  W32((uint32_t)(esi + 0x88u), edi);
/* daf7b8: mov dword ptr [esi + 0x84], edi */
  W32((uint32_t)(esi + 0x84u), edi);
/* daf7be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf7bf: mov eax, esi */
  eax = esi;
/* daf7c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf7c2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daf7c9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daf7cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf800(void) {
  LOAD_REGS();
L_daf800: /* daf800: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daf802: push 0xdbaca8 */
  { uint32_t v = 0xdbaca8u; esp -= 4; W32(esp, v); }
/* daf807: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daf80d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daf80e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daf815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daf816: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf817: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf818: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* daf81c: mov esi, ecx */
  esi = ecx;
/* daf81e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf81f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* daf823: call 0xd824dc */
  esp -= 4; W32(esp, 0xdaf828u); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* daf828: mov dword ptr [esi], 0xdc50c8 */
  W32((uint32_t)(esi), 0xdc50c8u);
/* daf82e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* daf831: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* daf834: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* daf837: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* daf83a: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* daf83d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* daf83f: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* daf842: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* daf844: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* daf847: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* daf84a: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* daf84d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* daf850: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* daf853: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* daf856: lea eax, [edi + 0x54] */
  eax = (uint32_t)(edi + 0x54u);
/* daf859: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* daf85b: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* daf85e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* daf860: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* daf863: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* daf866: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* daf869: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* daf86c: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* daf86f: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* daf872: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* daf875: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* daf877: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* daf87a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* daf87c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* daf87f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* daf882: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* daf885: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* daf888: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* daf88b: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* daf88e: lea edx, [edi + 0x74] */
  edx = (uint32_t)(edi + 0x74u);
/* daf891: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daf892: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* daf895: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* daf89d: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdaf8a3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* daf8a3: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* daf8a9: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* daf8af: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* daf8b5: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* daf8bb: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* daf8c1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* daf8c5: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* daf8cb: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* daf8d1: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* daf8d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf8d8: mov eax, esi */
  eax = esi;
/* daf8da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf8db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daf8e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daf8e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daf930(void) {
  LOAD_REGS();
L_daf930: /* daf930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daf931: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf932: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* daf936: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daf937: mov esi, ecx */
  esi = ecx;
/* daf939: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdaf93eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* daf93e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* daf941: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* daf944: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* daf947: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* daf94a: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* daf94d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* daf94f: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* daf952: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* daf954: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* daf957: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* daf95a: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* daf95d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* daf960: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* daf963: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* daf966: lea eax, [edi + 0x54] */
  eax = (uint32_t)(edi + 0x54u);
/* daf969: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* daf96b: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* daf96e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* daf970: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* daf973: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* daf976: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* daf979: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* daf97c: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* daf97f: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* daf982: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* daf985: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* daf987: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* daf98a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* daf98c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* daf98f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* daf992: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* daf995: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* daf998: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* daf99b: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* daf99e: lea edx, [edi + 0x74] */
  edx = (uint32_t)(edi + 0x74u);
/* daf9a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* daf9a2: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* daf9a5: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdaf9abu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* daf9ab: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* daf9b1: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* daf9b7: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* daf9bd: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* daf9c3: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* daf9c9: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* daf9cf: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* daf9d5: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* daf9db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daf9dc: mov eax, esi */
  eax = esi;
/* daf9de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daf9df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafa20(void) {
  LOAD_REGS();
L_dafa20: /* dafa20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafa21: mov esi, ecx */
  esi = ecx;
/* dafa23: call 0xd81f91 */
  esp -= 4; W32(esp, 0xdafa28u); SPILL(); f_d81f91(); if (g_unwind) return; RELOAD();
/* dafa28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafa2d: je 0xdafa3c */
  if (zf) goto L_dafa3c;
L_dafa2f: /* dafa2f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dafa34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dafa36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dafa38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafa39: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdafa3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dafa3c: /* dafa3c: mov eax, esi */
  eax = esi;
/* dafa3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafa3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafa60(void) {
  LOAD_REGS();
L_dafa60: /* dafa60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dafa61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* dafa65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafa68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafa69: mov esi, ecx */
  esi = ecx;
/* dafa6b: je 0xdafaa0 */
  if (zf) goto L_dafaa0;
L_dafa6d: /* dafa6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* dafa70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafa71: push 0xd81f91 */
  { uint32_t v = 0xd81f91u; esp -= 4; W32(esp, v); }
/* dafa76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* dafa79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafa7a: push 0x90 */
  { uint32_t v = 0x90u; esp -= 4; W32(esp, v); }
/* dafa7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafa80: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdafa85u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* dafa85: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafa88: je 0xdafa98 */
  if (zf) goto L_dafa98;
L_dafa8a: /* dafa8a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* dafa90: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dafa92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dafa94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafa95: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdafa98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dafa98: /* dafa98: mov eax, edi */
  eax = edi;
/* dafa9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dafa9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafa9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dafa9d: ret 4 */
  esp += 8; SPILL(); return;
L_dafaa0: /* dafaa0: mov ecx, esi */
  ecx = esi;
/* dafaa2: call 0xd81f91 */
  esp -= 4; W32(esp, 0xdafaa7u); SPILL(); f_d81f91(); if (g_unwind) return; RELOAD();
/* dafaa7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafaaa: je 0xdafab9 */
  if (zf) goto L_dafab9;
L_dafaac: /* dafaac: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dafab1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dafab3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dafab5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafab6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdafab9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dafab9: /* dafab9: mov eax, esi */
  eax = esi;
/* dafabb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafabc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dafabd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafae0(void) {
  LOAD_REGS();
L_dafae0: /* dafae0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dafae2: push 0xdbacc8 */
  { uint32_t v = 0xdbacc8u; esp -= 4; W32(esp, v); }
/* dafae7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dafaed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafaee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dafaf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dafaf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafaf7: mov esi, ecx */
  esi = ecx;
/* dafaf9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* dafafd: mov dword ptr [esi], 0xdc51e0 */
  W32((uint32_t)(esi), 0xdc51e0u);
/* dafb03: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* dafb0b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdafb10u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* dafb10: mov ecx, esi */
  ecx = esi;
/* dafb12: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* dafb1a: call 0xd8227f */
  esp -= 4; W32(esp, 0xdafb1fu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* dafb1f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dafb23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafb24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dafb2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dafb2e: ret  */
  esp += 4; SPILL(); return;
}

void f_dafb50(void) {
  LOAD_REGS();
L_dafb50: /* dafb50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dafb51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafb52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafb53: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* dafb55: mov esi, ecx */
  esi = ecx;
/* dafb57: push 0xde4cd0 */
  { uint32_t v = 0xde4cd0u; esp -= 4; W32(esp, v); }
/* dafb5c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* dafb60: call dword ptr [0xde8b30] */
  esp -= 4; W32(esp, 0xdafb66u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* dafb66: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* dafb6a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* dafb6e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* dafb71: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* dafb74: xor edi, edi */
  edi = 0;
/* dafb76: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* dafb79: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* dafb7c: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* dafb7f: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* dafb85: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* dafb88: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* dafb8c: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* dafb92: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* dafb95: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* dafb98: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* dafb9b: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdafba1u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* dafba1: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* dafba4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dafba5: mov dword ptr [esi], 0xdc51e0 */
  W32((uint32_t)(esi), 0xdc51e0u);
/* dafbab: mov eax, esi */
  eax = esi;
/* dafbad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafbae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* dafbaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafbe0(void) {
  LOAD_REGS();
L_dafbe0: /* dafbe0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* dafbe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafbe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafbe6: mov esi, ecx */
  esi = ecx;
/* dafbe8: call 0xd824dc */
  esp -= 4; W32(esp, 0xdafbedu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* dafbed: mov dword ptr [esi], 0xdc51e0 */
  W32((uint32_t)(esi), 0xdc51e0u);
/* dafbf3: mov eax, esi */
  eax = esi;
/* dafbf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafbf6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafc10(void) {
  LOAD_REGS();
L_dafc10: /* dafc10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* dafc14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafc15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafc16: mov esi, ecx */
  esi = ecx;
/* dafc18: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdafc1du); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* dafc1d: mov eax, esi */
  eax = esi;
/* dafc1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafc20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafc40(void) {
  LOAD_REGS();
L_dafc40: /* dafc40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafc41: mov esi, ecx */
  esi = ecx;
/* dafc43: call 0xd81762 */
  esp -= 4; W32(esp, 0xdafc48u); SPILL(); f_d81762(); if (g_unwind) return; RELOAD();
/* dafc48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafc4d: je 0xdafc5c */
  if (zf) goto L_dafc5c;
L_dafc4f: /* dafc4f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dafc54: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dafc56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dafc58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafc59: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdafc5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dafc5c: /* dafc5c: mov eax, esi */
  eax = esi;
/* dafc5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafc5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafc80(void) {
  LOAD_REGS();
L_dafc80: /* dafc80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dafc81: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* dafc85: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafc88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafc89: mov esi, ecx */
  esi = ecx;
/* dafc8b: je 0xdafcbd */
  if (zf) goto L_dafcbd;
L_dafc8d: /* dafc8d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* dafc90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafc91: push 0xd81762 */
  { uint32_t v = 0xd81762u; esp -= 4; W32(esp, v); }
/* dafc96: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* dafc99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafc9a: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* dafc9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafc9d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdafca2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* dafca2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafca5: je 0xdafcb5 */
  if (zf) goto L_dafcb5;
L_dafca7: /* dafca7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* dafcad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* dafcaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dafcb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafcb2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdafcb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dafcb5: /* dafcb5: mov eax, edi */
  eax = edi;
/* dafcb7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dafcb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafcb9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dafcba: ret 4 */
  esp += 8; SPILL(); return;
L_dafcbd: /* dafcbd: mov ecx, esi */
  ecx = esi;
/* dafcbf: call 0xd81762 */
  esp -= 4; W32(esp, 0xdafcc4u); SPILL(); f_d81762(); if (g_unwind) return; RELOAD();
/* dafcc4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafcc7: je 0xdafcd6 */
  if (zf) goto L_dafcd6;
L_dafcc9: /* dafcc9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dafcce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dafcd0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dafcd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafcd3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdafcd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dafcd6: /* dafcd6: mov eax, esi */
  eax = esi;
/* dafcd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafcd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* dafcda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafd00(void) {
  LOAD_REGS();
L_dafd00: /* dafd00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* dafd02: push 0xdbace8 */
  { uint32_t v = 0xdbace8u; esp -= 4; W32(esp, v); }
/* dafd07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* dafd0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafd0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* dafd15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dafd16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafd17: mov esi, ecx */
  esi = ecx;
/* dafd19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* dafd1d: mov dword ptr [esi], 0xdc52f8 */
  W32((uint32_t)(esi), 0xdc52f8u);
/* dafd23: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* dafd2b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdafd30u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* dafd30: mov ecx, esi */
  ecx = esi;
/* dafd32: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* dafd3a: call 0xd81bfe */
  esp -= 4; W32(esp, 0xdafd3fu); SPILL(); f_d81bfe(); if (g_unwind) return; RELOAD();
/* dafd3f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* dafd43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafd44: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* dafd4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* dafd4e: ret  */
  esp += 4; SPILL(); return;
}

void f_dafd70(void) {
  LOAD_REGS();
L_dafd70: /* dafd70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafd71: mov esi, ecx */
  esi = ecx;
/* dafd73: call 0xd81591 */
  esp -= 4; W32(esp, 0xdafd78u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* dafd78: mov dword ptr [esi], 0xdc52f8 */
  W32((uint32_t)(esi), 0xdc52f8u);
/* dafd7e: mov eax, esi */
  eax = esi;
/* dafd80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafd81: ret  */
  esp += 4; SPILL(); return;
}

void f_dafda0(void) {
  LOAD_REGS();
L_dafda0: /* dafda0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dafda1: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* dafda5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafda6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* dafda8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* dafdab: mov eax, esp */
  eax = esp;
/* dafdad: mov esi, ecx */
  esi = ecx;
/* dafdaf: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* dafdb3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* dafdb6: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* dafdba: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* dafdc0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* dafdc3: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* dafdc7: mov dword ptr [esp + 0x14], esp */
  W32((uint32_t)(esp + 0x14u), esp);
/* dafdcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafdcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* dafdcd: mov ecx, esi */
  ecx = esi;
/* dafdcf: call 0xd81adc */
  esp -= 4; W32(esp, 0xdafdd4u); SPILL(); f_d81adc(); if (g_unwind) return; RELOAD();
/* dafdd4: mov dword ptr [esi], 0xdc52f8 */
  W32((uint32_t)(esi), 0xdc52f8u);
/* dafdda: mov eax, esi */
  eax = esi;
/* dafddc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafddd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* dafdde: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_dafe10(void) {
  LOAD_REGS();
L_dafe10: /* dafe10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafe11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafe12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dafe16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafe17: mov esi, ecx */
  esi = ecx;
/* dafe19: call 0xd81915 */
  esp -= 4; W32(esp, 0xdafe1eu); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* dafe1e: mov dword ptr [esi], 0xdc52f8 */
  W32((uint32_t)(esi), 0xdc52f8u);
/* dafe24: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* dafe2a: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* dafe30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dafe31: mov eax, esi */
  eax = esi;
/* dafe33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafe34: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafe50(void) {
  LOAD_REGS();
L_dafe50: /* dafe50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafe51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafe52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* dafe56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafe57: mov esi, ecx */
  esi = ecx;
/* dafe59: call 0xd82149 */
  esp -= 4; W32(esp, 0xdafe5eu); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* dafe5e: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* dafe64: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* dafe6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* dafe6b: mov eax, esi */
  eax = esi;
/* dafe6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafe6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafe90(void) {
  LOAD_REGS();
L_dafe90: /* dafe90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafe91: mov esi, ecx */
  esi = ecx;
/* dafe93: call 0xd8187f */
  esp -= 4; W32(esp, 0xdafe98u); SPILL(); f_d8187f(); if (g_unwind) return; RELOAD();
/* dafe98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafe9d: je 0xdafeac */
  if (zf) goto L_dafeac;
L_dafe9f: /* dafe9f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* dafea4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* dafea6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* dafea8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafea9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdafeacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_dafeac: /* dafeac: mov eax, esi */
  eax = esi;
/* dafeae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* dafeaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_dafed0(void) {
  LOAD_REGS();
L_dafed0: /* dafed0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* dafed1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* dafed5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafed8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafed9: mov esi, ecx */
  esi = ecx;
/* dafedb: je 0xdaff10 */
  if (zf) goto L_daff10;
L_dafedd: /* dafedd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* dafee0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* dafee1: push 0xd8187f */
  { uint32_t v = 0xd8187fu; esp -= 4; W32(esp, v); }
/* dafee6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* dafee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* dafeea: push 0x98 */
  { uint32_t v = 0x98u; esp -= 4; W32(esp, v); }
/* dafeef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafef0: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdafef5u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* dafef5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* dafef8: je 0xdaff08 */
  if (zf) goto L_daff08;
L_dafefa: /* dafefa: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* daff00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* daff02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daff04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* daff05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaff08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daff08: /* daff08: mov eax, edi */
  eax = edi;
/* daff0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* daff0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daff0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daff0d: ret 4 */
  esp += 8; SPILL(); return;
L_daff10: /* daff10: mov ecx, esi */
  ecx = esi;
/* daff12: call 0xd8187f */
  esp -= 4; W32(esp, 0xdaff17u); SPILL(); f_d8187f(); if (g_unwind) return; RELOAD();
/* daff17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* daff1a: je 0xdaff29 */
  if (zf) goto L_daff29;
L_daff1c: /* daff1c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* daff21: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* daff23: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* daff25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daff26: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdaff29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_daff29: /* daff29: mov eax, esi */
  eax = esi;
/* daff2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daff2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* daff2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_daff50(void) {
  LOAD_REGS();
L_daff50: /* daff50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* daff52: push 0xdbad08 */
  { uint32_t v = 0xdbad08u; esp -= 4; W32(esp, v); }
/* daff57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* daff5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* daff5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* daff65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* daff66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daff67: mov esi, ecx */
  esi = ecx;
/* daff69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* daff6d: mov dword ptr [esi], 0xdc5418 */
  W32((uint32_t)(esi), 0xdc5418u);
/* daff73: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* daff7b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdaff80u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* daff80: mov ecx, esi */
  ecx = esi;
/* daff82: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* daff8a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdaff8fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* daff8f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* daff93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daff94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* daff9b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* daff9e: ret  */
  esp += 4; SPILL(); return;
}

void f_daffc0(void) {
  LOAD_REGS();
L_daffc0: /* daffc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* daffc1: mov esi, ecx */
  esi = ecx;
/* daffc3: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdaffc8u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* daffc8: mov dword ptr [esi], 0xdc5418 */
  W32((uint32_t)(esi), 0xdc5418u);
/* daffce: mov eax, esi */
  eax = esi;
/* daffd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* daffd1: ret  */
  esp += 4; SPILL(); return;
}

void f_dafff0(void) {
  LOAD_REGS();
L_dafff0: /* dafff0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* dafff4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* dafff6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* dafff7: mov esi, ecx */
  esi = ecx;
/* dafff9: jne 0xdb0000 */
  if (!zf) goto L_db0000;
L_dafffb: /* dafffb: mov eax, dword ptr [0xde50f4] */
  eax = R32((uint32_t)(0xde50f4u));
L_db0000: /* db0000: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db0004: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db0005: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db0009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db000a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db000b: mov ecx, esi */
  ecx = esi;
/* db000d: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb0012u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db0012: mov dword ptr [esi], 0xdc5418 */
  W32((uint32_t)(esi), 0xdc5418u);
/* db0018: mov eax, esi */
  eax = esi;
/* db001a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db001b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db0030(void) {
  LOAD_REGS();
L_db0030: /* db0030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0031: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0032: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0037: mov esi, ecx */
  esi = ecx;
/* db0039: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb003eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db003e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db0044: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0047: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db004a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db004b: mov dword ptr [esi], 0xdc5418 */
  W32((uint32_t)(esi), 0xdc5418u);
/* db0051: mov eax, esi */
  eax = esi;
/* db0053: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0054: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0070(void) {
  LOAD_REGS();
L_db0070: /* db0070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0071: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0072: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0076: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0077: mov esi, ecx */
  esi = ecx;
/* db0079: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb007eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db007e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0081: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db0084: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0085: mov eax, esi */
  eax = esi;
/* db0087: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0088: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db00a0(void) {
  LOAD_REGS();
L_db00a0: /* db00a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db00a1: mov esi, ecx */
  esi = ecx;
/* db00a3: call 0xd8106e */
  esp -= 4; W32(esp, 0xdb00a8u); SPILL(); f_d8106e(); if (g_unwind) return; RELOAD();
/* db00a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db00ad: je 0xdb00bc */
  if (zf) goto L_db00bc;
L_db00af: /* db00af: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db00b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db00b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db00b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db00b9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb00bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db00bc: /* db00bc: mov eax, esi */
  eax = esi;
/* db00be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db00bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db00e0(void) {
  LOAD_REGS();
L_db00e0: /* db00e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db00e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db00e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db00e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db00e9: mov esi, ecx */
  esi = ecx;
/* db00eb: je 0xdb011d */
  if (zf) goto L_db011d;
L_db00ed: /* db00ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db00f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db00f1: push 0xd8106e */
  { uint32_t v = 0xd8106eu; esp -= 4; W32(esp, v); }
/* db00f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db00f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db00fa: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* db00fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db00fd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb0102u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db0102: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0105: je 0xdb0115 */
  if (zf) goto L_db0115;
L_db0107: /* db0107: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db010d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db010f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0111: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0112: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0115u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0115: /* db0115: mov eax, edi */
  eax = edi;
/* db0117: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0118: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0119: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db011a: ret 4 */
  esp += 8; SPILL(); return;
L_db011d: /* db011d: mov ecx, esi */
  ecx = esi;
/* db011f: call 0xd8106e */
  esp -= 4; W32(esp, 0xdb0124u); SPILL(); f_d8106e(); if (g_unwind) return; RELOAD();
/* db0124: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0127: je 0xdb0136 */
  if (zf) goto L_db0136;
L_db0129: /* db0129: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db012e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0130: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0133: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0136u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0136: /* db0136: mov eax, esi */
  eax = esi;
/* db0138: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0139: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db013a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0160(void) {
  LOAD_REGS();
L_db0160: /* db0160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db0162: push 0xdbad28 */
  { uint32_t v = 0xdbad28u; esp -= 4; W32(esp, v); }
/* db0167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db016d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db016e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db0175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db0176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0177: mov esi, ecx */
  esi = ecx;
/* db0179: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db017d: mov dword ptr [esi], 0xdc5530 */
  W32((uint32_t)(esi), 0xdc5530u);
/* db0183: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db018b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb0190u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db0190: mov ecx, esi */
  ecx = esi;
/* db0192: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db019a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdb019fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* db019f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db01a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db01a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db01ab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db01ae: ret  */
  esp += 4; SPILL(); return;
}

void f_db01d0(void) {
  LOAD_REGS();
L_db01d0: /* db01d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db01d1: mov esi, ecx */
  esi = ecx;
/* db01d3: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb01d8u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db01d8: mov dword ptr [esi], 0xdc5530 */
  W32((uint32_t)(esi), 0xdc5530u);
/* db01de: xor eax, eax */
  eax = 0;
/* db01e0: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* db01e3: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db01e6: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* db01eb: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db01ee: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db01f1: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db01f4: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db01f7: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* db01fa: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db01fd: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db0200: mov eax, esi */
  eax = esi;
/* db0202: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0203: ret  */
  esp += 4; SPILL(); return;
}

void f_db0220(void) {
  LOAD_REGS();
L_db0220: /* db0220: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* db0224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0225: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0226: xor edi, edi */
  edi = 0;
/* db0228: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db022a: mov esi, ecx */
  esi = ecx;
/* db022c: jne 0xdb0233 */
  if (!zf) goto L_db0233;
L_db022e: /* db022e: mov eax, dword ptr [0xde5154] */
  eax = R32((uint32_t)(0xde5154u));
L_db0233: /* db0233: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db0237: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db0238: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* db023c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db023d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db023e: mov ecx, esi */
  ecx = esi;
/* db0240: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb0245u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db0245: mov dword ptr [esi], 0xdc5530 */
  W32((uint32_t)(esi), 0xdc5530u);
/* db024b: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* db024e: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* db0251: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db0256: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db0259: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db025c: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* db025f: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* db0262: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* db0265: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* db0268: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db026b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db026c: mov eax, esi */
  eax = esi;
/* db026e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db026f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db02a0(void) {
  LOAD_REGS();
L_db02a0: /* db02a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db02a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db02a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db02a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db02a7: mov esi, ecx */
  esi = ecx;
/* db02a9: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb02aeu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db02ae: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db02b4: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db02b7: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db02ba: mov dword ptr [esi], 0xdc5530 */
  W32((uint32_t)(esi), 0xdc5530u);
/* db02c0: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db02c5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db02c8: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db02cb: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db02ce: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db02d1: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db02d4: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db02d7: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* db02da: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* db02dd: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* db02e0: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* db02e3: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db02e6: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* db02e9: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* db02ec: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* db02ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db02f0: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* db02f3: mov eax, esi */
  eax = esi;
/* db02f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db02f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0320(void) {
  LOAD_REGS();
L_db0320: /* db0320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0321: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0322: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0326: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0327: mov esi, ecx */
  esi = ecx;
/* db0329: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb032eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db032e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0331: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db0334: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db0337: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db033a: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db033d: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db0340: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db0343: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db0346: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db0349: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db034c: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db034f: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db0352: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db0355: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db0358: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0359: mov eax, esi */
  eax = esi;
/* db035b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db035c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0370(void) {
  LOAD_REGS();
L_db0370: /* db0370: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0371: mov esi, ecx */
  esi = ecx;
/* db0373: call 0xd821df */
  esp -= 4; W32(esp, 0xdb0378u); SPILL(); f_d821df(); if (g_unwind) return; RELOAD();
/* db0378: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db037d: je 0xdb038c */
  if (zf) goto L_db038c;
L_db037f: /* db037f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db0384: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0386: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0389: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb038cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db038c: /* db038c: mov eax, esi */
  eax = esi;
/* db038e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db038f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db03b0(void) {
  LOAD_REGS();
L_db03b0: /* db03b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db03b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db03b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db03b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db03b9: mov esi, ecx */
  esi = ecx;
/* db03bb: je 0xdb03ed */
  if (zf) goto L_db03ed;
L_db03bd: /* db03bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db03c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db03c1: push 0xd821df */
  { uint32_t v = 0xd821dfu; esp -= 4; W32(esp, v); }
/* db03c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db03c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db03ca: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* db03cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db03cd: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb03d2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db03d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db03d5: je 0xdb03e5 */
  if (zf) goto L_db03e5;
L_db03d7: /* db03d7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db03dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db03df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db03e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db03e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb03e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db03e5: /* db03e5: mov eax, edi */
  eax = edi;
/* db03e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db03e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db03e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db03ea: ret 4 */
  esp += 8; SPILL(); return;
L_db03ed: /* db03ed: mov ecx, esi */
  ecx = esi;
/* db03ef: call 0xd821df */
  esp -= 4; W32(esp, 0xdb03f4u); SPILL(); f_d821df(); if (g_unwind) return; RELOAD();
/* db03f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db03f7: je 0xdb0406 */
  if (zf) goto L_db0406;
L_db03f9: /* db03f9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db03fe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0400: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0402: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0403: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0406u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0406: /* db0406: mov eax, esi */
  eax = esi;
/* db0408: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0409: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db040a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0430(void) {
  LOAD_REGS();
L_db0430: /* db0430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0431: mov esi, ecx */
  esi = ecx;
/* db0433: call 0xd81591 */
  esp -= 4; W32(esp, 0xdb0438u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* db0438: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* db043e: mov eax, esi */
  eax = esi;
/* db0440: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0441: ret  */
  esp += 4; SPILL(); return;
}

void f_db0460(void) {
  LOAD_REGS();
L_db0460: /* db0460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0461: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0462: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0466: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0467: mov esi, ecx */
  esi = ecx;
/* db0469: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb046eu); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db046e: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* db0474: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* db047a: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* db0480: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* db0486: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0487: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* db048d: mov eax, esi */
  eax = esi;
/* db048f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0490: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db04b0(void) {
  LOAD_REGS();
L_db04b0: /* db04b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db04b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db04b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db04b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db04b7: mov esi, ecx */
  esi = ecx;
/* db04b9: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb04beu); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db04be: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* db04c4: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* db04ca: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* db04d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db04d1: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* db04d7: mov eax, esi */
  eax = esi;
/* db04d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db04da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db04f0(void) {
  LOAD_REGS();
L_db04f0: /* db04f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db04f1: mov esi, ecx */
  esi = ecx;
/* db04f3: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb04f8u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db04f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db04fd: je 0xdb050c */
  if (zf) goto L_db050c;
L_db04ff: /* db04ff: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db0504: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0506: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0508: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0509: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb050cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db050c: /* db050c: mov eax, esi */
  eax = esi;
/* db050e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db050f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0530(void) {
  LOAD_REGS();
L_db0530: /* db0530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db0532: push 0xdbad57 */
  { uint32_t v = 0xdbad57u; esp -= 4; W32(esp, v); }
/* db0537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db053d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db053e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db0545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db0546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0547: mov esi, ecx */
  esi = ecx;
/* db0549: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db054d: mov dword ptr [esi], 0xdc5648 */
  W32((uint32_t)(esi), 0xdc5648u);
/* db0553: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* db055b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb0560u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db0560: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* db0566: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db056b: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdb0571u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* db0571: mov ecx, esi */
  ecx = esi;
/* db0573: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db057b: call 0xd81b90 */
  esp -= 4; W32(esp, 0xdb0580u); SPILL(); f_d81b90(); if (g_unwind) return; RELOAD();
/* db0580: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db0584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db058c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db058f: ret  */
  esp += 4; SPILL(); return;
}

void f_db05b0(void) {
  LOAD_REGS();
L_db05b0: /* db05b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db05b2: push 0xdbad78 */
  { uint32_t v = 0xdbad78u; esp -= 4; W32(esp, v); }
/* db05b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db05bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db05be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db05c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db05c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db05c7: mov esi, ecx */
  esi = ecx;
/* db05c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db05cd: call 0xd81591 */
  esp -= 4; W32(esp, 0xdb05d2u); SPILL(); f_d81591(); if (g_unwind) return; RELOAD();
/* db05d2: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* db05d8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db05e0: mov dword ptr [esi], 0xdc5648 */
  W32((uint32_t)(esi), 0xdc5648u);
/* db05e6: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdb05ecu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* db05ec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db05f0: mov eax, esi */
  eax = esi;
/* db05f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db05f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db05fa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db05fd: ret  */
  esp += 4; SPILL(); return;
}

void f_db0620(void) {
  LOAD_REGS();
L_db0620: /* db0620: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db0622: push 0xdbad98 */
  { uint32_t v = 0xdbad98u; esp -= 4; W32(esp, v); }
/* db0627: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db062d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db062e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db0635: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db0638: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0639: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* db063b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* db063e: mov eax, esp */
  eax = esp;
/* db0640: mov esi, ecx */
  esi = ecx;
/* db0642: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* db0646: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* db064c: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* db064f: mov dword ptr [eax + 8], 0xd8213f */
  W32((uint32_t)(eax + 0x8u), 0xd8213fu);
/* db0656: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* db065a: mov dword ptr [esp + 0x18], esp */
  W32((uint32_t)(esp + 0x18u), esp);
/* db065e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db065f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db0660: mov ecx, esi */
  ecx = esi;
/* db0662: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* db0666: call 0xd821f3 */
  esp -= 4; W32(esp, 0xdb066bu); SPILL(); f_d821f3(); if (g_unwind) return; RELOAD();
/* db066b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* db066f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db0670: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* db0676: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db067e: mov dword ptr [esi], 0xdc5648 */
  W32((uint32_t)(esi), 0xdc5648u);
/* db0684: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xdb068au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* db068a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db068e: mov dword ptr [esi + 0x98], 0x19 */
  W32((uint32_t)(esi + 0x98u), 0x19u);
/* db0698: mov eax, esi */
  eax = esi;
/* db069a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db06a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db06a2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db06a5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db06e0(void) {
  LOAD_REGS();
L_db06e0: /* db06e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db06e2: push 0xdbadb8 */
  { uint32_t v = 0xdbadb8u; esp -= 4; W32(esp, v); }
/* db06e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db06ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db06ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db06f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db06f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db06f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db06f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db06fc: mov esi, ecx */
  esi = ecx;
/* db06fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db06ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db0703: call 0xd81915 */
  esp -= 4; W32(esp, 0xdb0708u); SPILL(); f_d81915(); if (g_unwind) return; RELOAD();
/* db0708: mov dword ptr [esi], 0xdc1ac8 */
  W32((uint32_t)(esi), 0xdc1ac8u);
/* db070e: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* db0714: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* db071a: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* db0720: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* db0726: add edi, 0x9c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db072c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db072d: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* db0733: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db073b: mov dword ptr [esi], 0xdc5648 */
  W32((uint32_t)(esi), 0xdc5648u);
/* db0741: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb0747u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db0747: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db074b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db074c: mov eax, esi */
  eax = esi;
/* db074e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db074f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db0756: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db0759: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0780(void) {
  LOAD_REGS();
L_db0780: /* db0780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0781: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0782: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0787: mov esi, ecx */
  esi = ecx;
/* db0789: call 0xd82149 */
  esp -= 4; W32(esp, 0xdb078eu); SPILL(); f_d82149(); if (g_unwind) return; RELOAD();
/* db078e: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* db0794: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* db079a: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* db07a0: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* db07a6: add edi, 0x9c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db07ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db07ad: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* db07b3: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xdb07b9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db07b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db07ba: mov eax, esi */
  eax = esi;
/* db07bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db07bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db07d0(void) {
  LOAD_REGS();
L_db07d0: /* db07d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db07d1: mov esi, ecx */
  esi = ecx;
/* db07d3: call 0xd8294b */
  esp -= 4; W32(esp, 0xdb07d8u); SPILL(); f_d8294b(); if (g_unwind) return; RELOAD();
/* db07d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db07dd: je 0xdb07ec */
  if (zf) goto L_db07ec;
L_db07df: /* db07df: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db07e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db07e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db07e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db07e9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb07ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db07ec: /* db07ec: mov eax, esi */
  eax = esi;
/* db07ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db07ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0810(void) {
  LOAD_REGS();
L_db0810: /* db0810: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db0811: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db0815: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0818: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0819: mov esi, ecx */
  esi = ecx;
/* db081b: je 0xdb0850 */
  if (zf) goto L_db0850;
L_db081d: /* db081d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db0820: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0821: push 0xd8294b */
  { uint32_t v = 0xd8294bu; esp -= 4; W32(esp, v); }
/* db0826: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db0829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db082a: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* db082f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0830: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb0835u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db0835: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0838: je 0xdb0848 */
  if (zf) goto L_db0848;
L_db083a: /* db083a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db0840: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db0842: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0844: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0845: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0848u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0848: /* db0848: mov eax, edi */
  eax = edi;
/* db084a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db084b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db084c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db084d: ret 4 */
  esp += 8; SPILL(); return;
L_db0850: /* db0850: mov ecx, esi */
  ecx = esi;
/* db0852: call 0xd8294b */
  esp -= 4; W32(esp, 0xdb0857u); SPILL(); f_d8294b(); if (g_unwind) return; RELOAD();
/* db0857: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db085a: je 0xdb0869 */
  if (zf) goto L_db0869;
L_db085c: /* db085c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db0861: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0863: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0865: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0866: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0869u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0869: /* db0869: mov eax, esi */
  eax = esi;
/* db086b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db086c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db086d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0890(void) {
  LOAD_REGS();
L_db0890: /* db0890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0891: mov esi, ecx */
  esi = ecx;
/* db0893: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb0898u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db0898: mov dword ptr [esi], 0xdc1be8 */
  W32((uint32_t)(esi), 0xdc1be8u);
/* db089e: xor eax, eax */
  eax = 0;
/* db08a0: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* db08a3: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db08a6: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* db08ab: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db08ae: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db08b1: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db08b4: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db08b7: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* db08ba: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db08bd: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db08c0: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* db08c3: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* db08c6: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* db08c9: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* db08cc: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* db08cf: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* db08d2: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* db08d8: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* db08de: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* db08e1: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* db08e7: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* db08ed: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* db08f3: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* db08f9: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* db08ff: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* db0905: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* db090b: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* db0911: mov dword ptr [esi + 0xa0], ecx */
  W32((uint32_t)(esi + 0xa0u), ecx);
/* db0917: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* db091d: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* db0923: mov dword ptr [esi + 0xac], ecx */
  W32((uint32_t)(esi + 0xacu), ecx);
/* db0929: mov eax, esi */
  eax = esi;
/* db092b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db092c: ret  */
  esp += 4; SPILL(); return;
}

void f_db0960(void) {
  LOAD_REGS();
L_db0960: /* db0960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0961: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0962: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0967: mov esi, ecx */
  esi = ecx;
/* db0969: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb096eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db096e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db0974: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0977: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db097a: mov dword ptr [esi], 0xdc1be8 */
  W32((uint32_t)(esi), 0xdc1be8u);
/* db0980: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db0985: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db0988: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db098b: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db098e: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db0991: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db0994: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db0997: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* db099a: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* db099d: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* db09a0: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* db09a3: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db09a6: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* db09a9: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* db09ac: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* db09af: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* db09b2: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db09b5: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* db09b8: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* db09bb: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* db09be: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* db09c1: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* db09c4: mov ecx, dword ptr [edi + 0x74] */
  ecx = R32((uint32_t)(edi + 0x74u));
/* db09c7: mov dword ptr [esi + 0x74], ecx */
  W32((uint32_t)(esi + 0x74u), ecx);
/* db09ca: mov edx, dword ptr [edi + 0x78] */
  edx = R32((uint32_t)(edi + 0x78u));
/* db09cd: mov dword ptr [esi + 0x78], edx */
  W32((uint32_t)(esi + 0x78u), edx);
/* db09d0: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* db09d3: mov ecx, dword ptr [edi + 0x80] */
  ecx = R32((uint32_t)(edi + 0x80u));
/* db09d9: mov dword ptr [esi + 0x80], ecx */
  W32((uint32_t)(esi + 0x80u), ecx);
/* db09df: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* db09e5: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* db09eb: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* db09f1: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* db09f7: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* db09fd: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* db0a03: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* db0a09: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* db0a0f: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* db0a15: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* db0a1b: mov edx, dword ptr [edi + 0x9c] */
  edx = R32((uint32_t)(edi + 0x9cu));
/* db0a21: mov dword ptr [esi + 0x9c], edx */
  W32((uint32_t)(esi + 0x9cu), edx);
/* db0a27: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* db0a2d: mov ecx, dword ptr [edi + 0xa4] */
  ecx = R32((uint32_t)(edi + 0xa4u));
/* db0a33: mov dword ptr [esi + 0xa4], ecx */
  W32((uint32_t)(esi + 0xa4u), ecx);
/* db0a39: mov edx, dword ptr [edi + 0xa8] */
  edx = R32((uint32_t)(edi + 0xa8u));
/* db0a3f: mov dword ptr [esi + 0xa8], edx */
  W32((uint32_t)(esi + 0xa8u), edx);
/* db0a45: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* db0a4b: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* db0a51: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* db0a57: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* db0a5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0a5e: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* db0a64: mov eax, esi */
  eax = esi;
/* db0a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0a67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0ac0(void) {
  LOAD_REGS();
L_db0ac0: /* db0ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0ac1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0ac2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0ac6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0ac7: mov esi, ecx */
  esi = ecx;
/* db0ac9: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb0aceu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db0ace: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0ad1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db0ad4: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db0ad7: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db0ada: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db0add: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db0ae0: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db0ae3: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db0ae6: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db0ae9: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db0aec: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db0aef: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db0af2: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db0af5: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db0af8: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* db0afb: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* db0afe: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* db0b01: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* db0b04: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* db0b07: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* db0b0a: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* db0b0d: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* db0b10: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* db0b16: mov dword ptr [esi + 0x80], edx */
  W32((uint32_t)(esi + 0x80u), edx);
/* db0b1c: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* db0b22: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* db0b28: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* db0b2e: mov dword ptr [esi + 0x8c], ecx */
  W32((uint32_t)(esi + 0x8cu), ecx);
/* db0b34: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* db0b3a: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* db0b40: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* db0b46: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* db0b4c: mov ecx, dword ptr [edi + 0x9c] */
  ecx = R32((uint32_t)(edi + 0x9cu));
/* db0b52: mov dword ptr [esi + 0x9c], ecx */
  W32((uint32_t)(esi + 0x9cu), ecx);
/* db0b58: mov edx, dword ptr [edi + 0xa4] */
  edx = R32((uint32_t)(edi + 0xa4u));
/* db0b5e: mov dword ptr [esi + 0xa4], edx */
  W32((uint32_t)(esi + 0xa4u), edx);
/* db0b64: mov eax, dword ptr [edi + 0xa8] */
  eax = R32((uint32_t)(edi + 0xa8u));
/* db0b6a: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* db0b70: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* db0b76: mov dword ptr [esi + 0xb0], ecx */
  W32((uint32_t)(esi + 0xb0u), ecx);
/* db0b7c: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* db0b82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0b83: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* db0b89: mov eax, esi */
  eax = esi;
/* db0b8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0b8c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0bd0(void) {
  LOAD_REGS();
L_db0bd0: /* db0bd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0bd1: mov esi, ecx */
  esi = ecx;
/* db0bd3: call 0xd81226 */
  esp -= 4; W32(esp, 0xdb0bd8u); SPILL(); f_d81226(); if (g_unwind) return; RELOAD();
/* db0bd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0bdd: je 0xdb0bec */
  if (zf) goto L_db0bec;
L_db0bdf: /* db0bdf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db0be4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0be6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0be8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0be9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0becu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0bec: /* db0bec: mov eax, esi */
  eax = esi;
/* db0bee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0bef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0c10(void) {
  LOAD_REGS();
L_db0c10: /* db0c10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0c11: mov esi, ecx */
  esi = ecx;
/* db0c13: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb0c18u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db0c18: mov dword ptr [esi], 0xdc1d28 */
  W32((uint32_t)(esi), 0xdc1d28u);
/* db0c1e: xor eax, eax */
  eax = 0;
/* db0c20: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* db0c23: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db0c26: mov ecx, 0xdbf5f8 */
  ecx = 0xdbf5f8u;
/* db0c2b: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* db0c2e: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* db0c31: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db0c34: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* db0c37: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* db0c3a: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db0c3d: mov ecx, 0xdc19a0 */
  ecx = 0xdc19a0u;
/* db0c42: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* db0c45: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* db0c48: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* db0c4b: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* db0c4e: mov eax, esi */
  eax = esi;
/* db0c50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0c51: ret  */
  esp += 4; SPILL(); return;
}

void f_db0c80(void) {
  LOAD_REGS();
L_db0c80: /* db0c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0c81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0c82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0c87: mov esi, ecx */
  esi = ecx;
/* db0c89: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb0c8eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db0c8e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db0c94: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0c97: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db0c9a: mov dword ptr [esi], 0xdc1d28 */
  W32((uint32_t)(esi), 0xdc1d28u);
/* db0ca0: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db0ca5: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db0ca8: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db0cab: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db0cae: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db0cb1: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db0cb4: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db0cb7: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db0cba: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db0cbd: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db0cc0: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db0cc3: mov eax, 0xdc19a0 */
  eax = 0xdc19a0u;
/* db0cc8: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db0ccb: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db0cce: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db0cd1: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* db0cd4: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* db0cd7: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db0cda: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* db0cdd: mov dword ptr [esi + 0x68], edx */
  W32((uint32_t)(esi + 0x68u), edx);
/* db0ce0: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* db0ce3: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* db0ce6: mov ecx, dword ptr [edi + 0x70] */
  ecx = R32((uint32_t)(edi + 0x70u));
/* db0ce9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0cea: mov dword ptr [esi + 0x70], ecx */
  W32((uint32_t)(esi + 0x70u), ecx);
/* db0ced: mov eax, esi */
  eax = esi;
/* db0cef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0cf0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0d20(void) {
  LOAD_REGS();
L_db0d20: /* db0d20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0d21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0d22: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0d26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0d27: mov esi, ecx */
  esi = ecx;
/* db0d29: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb0d2eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db0d2e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0d31: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db0d34: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db0d37: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db0d3a: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db0d3d: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db0d40: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* db0d43: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* db0d46: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* db0d49: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* db0d4c: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* db0d4f: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
/* db0d52: mov eax, dword ptr [edi + 0x60] */
  eax = R32((uint32_t)(edi + 0x60u));
/* db0d55: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* db0d58: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* db0d5b: mov dword ptr [esi + 0x68], ecx */
  W32((uint32_t)(esi + 0x68u), ecx);
/* db0d5e: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* db0d61: mov dword ptr [esi + 0x6c], edx */
  W32((uint32_t)(esi + 0x6cu), edx);
/* db0d64: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* db0d67: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* db0d6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0d6b: mov eax, esi */
  eax = esi;
/* db0d6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0d6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0da0(void) {
  LOAD_REGS();
L_db0da0: /* db0da0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0da1: mov esi, ecx */
  esi = ecx;
/* db0da3: call 0xd82306 */
  esp -= 4; W32(esp, 0xdb0da8u); SPILL(); f_d82306(); if (g_unwind) return; RELOAD();
/* db0da8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0dad: je 0xdb0dbc */
  if (zf) goto L_db0dbc;
L_db0daf: /* db0daf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db0db4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0db6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0db8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0db9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0dbc: /* db0dbc: mov eax, esi */
  eax = esi;
/* db0dbe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0dbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0de0(void) {
  LOAD_REGS();
L_db0de0: /* db0de0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db0de2: push 0xdbadd8 */
  { uint32_t v = 0xdbadd8u; esp -= 4; W32(esp, v); }
/* db0de7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db0ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db0dee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db0df5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db0df6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0df7: mov esi, ecx */
  esi = ecx;
/* db0df9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db0dfd: mov dword ptr [esi], 0xdc5768 */
  W32((uint32_t)(esi), 0xdc5768u);
/* db0e03: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db0e0b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb0e10u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db0e10: mov ecx, esi */
  ecx = esi;
/* db0e12: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db0e1a: call 0xd81d89 */
  esp -= 4; W32(esp, 0xdb0e1fu); SPILL(); f_d81d89(); if (g_unwind) return; RELOAD();
/* db0e1f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db0e23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0e24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db0e2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db0e2e: ret  */
  esp += 4; SPILL(); return;
}

void f_db0e50(void) {
  LOAD_REGS();
L_db0e50: /* db0e50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0e51: mov esi, ecx */
  esi = ecx;
/* db0e53: call 0xd816d6 */
  esp -= 4; W32(esp, 0xdb0e58u); SPILL(); f_d816d6(); if (g_unwind) return; RELOAD();
/* db0e58: mov dword ptr [esi], 0xdc5768 */
  W32((uint32_t)(esi), 0xdc5768u);
/* db0e5e: xor eax, eax */
  eax = 0;
/* db0e60: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* db0e63: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* db0e66: mov dword ptr [esi + 0x40], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x40u), 0xdbf5f8u);
/* db0e6d: mov eax, esi */
  eax = esi;
/* db0e6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0e70: ret  */
  esp += 4; SPILL(); return;
}

void f_db0e90(void) {
  LOAD_REGS();
L_db0e90: /* db0e90: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* db0e94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db0e96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0e97: mov esi, ecx */
  esi = ecx;
/* db0e99: jne 0xdb0ea0 */
  if (!zf) goto L_db0ea0;
L_db0e9b: /* db0e9b: mov eax, dword ptr [0xde5020] */
  eax = R32((uint32_t)(0xde5020u));
L_db0ea0: /* db0ea0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db0ea4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db0ea5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* db0ea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db0eaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db0eab: mov ecx, esi */
  ecx = esi;
/* db0ead: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb0eb2u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db0eb2: mov dword ptr [esi], 0xdc5768 */
  W32((uint32_t)(esi), 0xdc5768u);
/* db0eb8: mov dword ptr [esi + 0x40], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x40u), 0xdbf5f8u);
/* db0ebf: mov dword ptr [esi + 0x44], 0 */
  W32((uint32_t)(esi + 0x44u), 0x0u);
/* db0ec6: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
/* db0ecd: mov eax, esi */
  eax = esi;
/* db0ecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0ed0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db0f00(void) {
  LOAD_REGS();
L_db0f00: /* db0f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0f01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0f02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0f06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0f07: mov esi, ecx */
  esi = ecx;
/* db0f09: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb0f0eu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db0f0e: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* db0f14: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0f17: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db0f1a: mov dword ptr [esi], 0xdc5768 */
  W32((uint32_t)(esi), 0xdc5768u);
/* db0f20: mov dword ptr [esi + 0x40], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x40u), 0xdbf5f8u);
/* db0f27: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db0f2a: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db0f2d: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db0f30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0f31: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db0f34: mov eax, esi */
  eax = esi;
/* db0f36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0f37: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0f50(void) {
  LOAD_REGS();
L_db0f50: /* db0f50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0f51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0f52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db0f56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0f57: mov esi, ecx */
  esi = ecx;
/* db0f59: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb0f5eu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db0f5e: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* db0f61: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* db0f64: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* db0f67: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* db0f6a: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* db0f6d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db0f6e: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* db0f71: mov eax, esi */
  eax = esi;
/* db0f73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0f74: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0f90(void) {
  LOAD_REGS();
L_db0f90: /* db0f90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0f91: mov esi, ecx */
  esi = ecx;
/* db0f93: call 0xd81a4b */
  esp -= 4; W32(esp, 0xdb0f98u); SPILL(); f_d81a4b(); if (g_unwind) return; RELOAD();
/* db0f98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0f9d: je 0xdb0fac */
  if (zf) goto L_db0fac;
L_db0f9f: /* db0f9f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db0fa4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db0fa6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db0fa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0fa9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb0facu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db0fac: /* db0fac: mov eax, esi */
  eax = esi;
/* db0fae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db0faf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db0fd0(void) {
  LOAD_REGS();
L_db0fd0: /* db0fd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db0fd1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db0fd5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0fd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0fd9: mov esi, ecx */
  esi = ecx;
/* db0fdb: je 0xdb100d */
  if (zf) goto L_db100d;
L_db0fdd: /* db0fdd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db0fe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db0fe1: push 0xd81a4b */
  { uint32_t v = 0xd81a4bu; esp -= 4; W32(esp, v); }
/* db0fe6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db0fe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db0fea: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* db0fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db0fed: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb0ff2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db0ff2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db0ff5: je 0xdb1005 */
  if (zf) goto L_db1005;
L_db0ff7: /* db0ff7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db0ffd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db0fff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1001: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1002: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1005: /* db1005: mov eax, edi */
  eax = edi;
/* db1007: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1008: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1009: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db100a: ret 4 */
  esp += 8; SPILL(); return;
L_db100d: /* db100d: mov ecx, esi */
  ecx = esi;
/* db100f: call 0xd81a4b */
  esp -= 4; W32(esp, 0xdb1014u); SPILL(); f_d81a4b(); if (g_unwind) return; RELOAD();
/* db1014: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1017: je 0xdb1026 */
  if (zf) goto L_db1026;
L_db1019: /* db1019: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db101e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1020: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1022: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1023: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1026: /* db1026: mov eax, esi */
  eax = esi;
/* db1028: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1029: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db102a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1050(void) {
  LOAD_REGS();
L_db1050: /* db1050: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1052: push 0xdbadf8 */
  { uint32_t v = 0xdbadf8u; esp -= 4; W32(esp, v); }
/* db1057: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db105d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db105e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1065: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1067: mov esi, ecx */
  esi = ecx;
/* db1069: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db106d: mov dword ptr [esi], 0xdc5880 */
  W32((uint32_t)(esi), 0xdc5880u);
/* db1073: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db107b: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb1080u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db1080: mov ecx, esi */
  ecx = esi;
/* db1082: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db108a: call 0xd8227f */
  esp -= 4; W32(esp, 0xdb108fu); SPILL(); f_d8227f(); if (g_unwind) return; RELOAD();
/* db108f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db1093: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1094: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db109b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db109e: ret  */
  esp += 4; SPILL(); return;
}

void f_db10c0(void) {
  LOAD_REGS();
L_db10c0: /* db10c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db10c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db10c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db10c3: mov esi, ecx */
  esi = ecx;
/* db10c5: xor edi, edi */
  edi = 0;
/* db10c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db10c8: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* db10cc: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdb10d2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* db10d2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db10d6: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db10d9: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db10dc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db10df: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db10e2: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db10e8: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db10eb: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db10ef: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db10f5: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db10f8: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* db10fb: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db10fe: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db1101: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb1107u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db1107: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db110a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db110b: mov dword ptr [esi], 0xdc5880 */
  W32((uint32_t)(esi), 0xdc5880u);
/* db1111: mov eax, esi */
  eax = esi;
/* db1113: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1114: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db1115: ret  */
  esp += 4; SPILL(); return;
}

void f_db1140(void) {
  LOAD_REGS();
L_db1140: /* db1140: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db1144: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1145: mov esi, ecx */
  esi = ecx;
/* db1147: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db114b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db114e: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db1151: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1152: xor edi, edi */
  edi = 0;
/* db1154: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db1157: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db115a: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db115d: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db1163: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db1166: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db116a: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db1170: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db1173: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db1176: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db1179: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb117fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db117f: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db1182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1183: mov dword ptr [esi], 0xdc5880 */
  W32((uint32_t)(esi), 0xdc5880u);
/* db1189: mov eax, esi */
  eax = esi;
/* db118b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db118c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_db11b0(void) {
  LOAD_REGS();
L_db11b0: /* db11b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db11b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db11b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db11b6: mov esi, ecx */
  esi = ecx;
/* db11b8: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb11bdu); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db11bd: mov dword ptr [esi], 0xdc5880 */
  W32((uint32_t)(esi), 0xdc5880u);
/* db11c3: mov eax, esi */
  eax = esi;
/* db11c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db11c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db11e0(void) {
  LOAD_REGS();
L_db11e0: /* db11e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db11e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db11e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db11e6: mov esi, ecx */
  esi = ecx;
/* db11e8: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb11edu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db11ed: mov eax, esi */
  eax = esi;
/* db11ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db11f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1210(void) {
  LOAD_REGS();
L_db1210: /* db1210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1211: mov esi, ecx */
  esi = ecx;
/* db1213: call 0xd81848 */
  esp -= 4; W32(esp, 0xdb1218u); SPILL(); f_d81848(); if (g_unwind) return; RELOAD();
/* db1218: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db121d: je 0xdb122c */
  if (zf) goto L_db122c;
L_db121f: /* db121f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db1224: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1226: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1229: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb122cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db122c: /* db122c: mov eax, esi */
  eax = esi;
/* db122e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db122f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1250(void) {
  LOAD_REGS();
L_db1250: /* db1250: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1251: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db1255: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1258: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1259: mov esi, ecx */
  esi = ecx;
/* db125b: je 0xdb128d */
  if (zf) goto L_db128d;
L_db125d: /* db125d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db1260: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1261: push 0xd81848 */
  { uint32_t v = 0xd81848u; esp -= 4; W32(esp, v); }
/* db1266: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db1269: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db126a: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* db126c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db126d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb1272u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db1272: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1275: je 0xdb1285 */
  if (zf) goto L_db1285;
L_db1277: /* db1277: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db127d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db127f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1281: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1282: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1285: /* db1285: mov eax, edi */
  eax = edi;
/* db1287: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1288: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1289: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db128a: ret 4 */
  esp += 8; SPILL(); return;
L_db128d: /* db128d: mov ecx, esi */
  ecx = esi;
/* db128f: call 0xd81848 */
  esp -= 4; W32(esp, 0xdb1294u); SPILL(); f_d81848(); if (g_unwind) return; RELOAD();
/* db1294: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1297: je 0xdb12a6 */
  if (zf) goto L_db12a6;
L_db1299: /* db1299: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db129e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db12a0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db12a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db12a3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb12a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db12a6: /* db12a6: mov eax, esi */
  eax = esi;
/* db12a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db12a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db12aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db12d0(void) {
  LOAD_REGS();
L_db12d0: /* db12d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db12d2: push 0xdbae18 */
  { uint32_t v = 0xdbae18u; esp -= 4; W32(esp, v); }
/* db12d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db12dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db12de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db12e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db12e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db12e7: mov esi, ecx */
  esi = ecx;
/* db12e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db12ed: mov dword ptr [esi], 0xdc59a0 */
  W32((uint32_t)(esi), 0xdc59a0u);
/* db12f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db12fb: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb1300u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db1300: mov ecx, esi */
  ecx = esi;
/* db1302: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db130a: call 0xd82306 */
  esp -= 4; W32(esp, 0xdb130fu); SPILL(); f_d82306(); if (g_unwind) return; RELOAD();
/* db130f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db1313: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1314: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db131b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db131e: ret  */
  esp += 4; SPILL(); return;
}

void f_db1340(void) {
  LOAD_REGS();
L_db1340: /* db1340: mov eax, dword ptr [0xde5164] */
  eax = R32((uint32_t)(0xde5164u));
/* db1345: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1346: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* db134a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db134b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db134c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db134d: xor edi, edi */
  edi = 0;
/* db134f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1350: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1351: mov esi, ecx */
  esi = ecx;
/* db1353: call 0xd814e7 */
  esp -= 4; W32(esp, 0xdb1358u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* db1358: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* db135b: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* db135e: mov eax, 0xdbf5f8 */
  eax = 0xdbf5f8u;
/* db1363: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* db1366: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* db1369: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* db136c: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* db136f: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* db1372: mov dword ptr [esi + 0x60], edi */
  W32((uint32_t)(esi + 0x60u), edi);
/* db1375: mov eax, 0xdc19a0 */
  eax = 0xdc19a0u;
/* db137a: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* db137d: mov dword ptr [esi + 0x68], edi */
  W32((uint32_t)(esi + 0x68u), edi);
/* db1380: mov dword ptr [esi + 0x6c], edi */
  W32((uint32_t)(esi + 0x6cu), edi);
/* db1383: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* db1386: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1387: mov dword ptr [esi + 0x74], ebx */
  W32((uint32_t)(esi + 0x74u), ebx);
/* db138a: mov dword ptr [esi + 0x70], 0xffffffff */
  W32((uint32_t)(esi + 0x70u), 0xffffffffu);
/* db1391: mov dword ptr [esi], 0xdc59a0 */
  W32((uint32_t)(esi), 0xdc59a0u);
/* db1397: mov eax, esi */
  eax = esi;
/* db1399: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db139a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db139b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db13c0(void) {
  LOAD_REGS();
L_db13c0: /* db13c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db13c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db13c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db13c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db13c7: mov esi, ecx */
  esi = ecx;
/* db13c9: call 0xd828b5 */
  esp -= 4; W32(esp, 0xdb13ceu); SPILL(); f_d828b5(); if (g_unwind) return; RELOAD();
/* db13ce: mov dword ptr [esi], 0xdc59a0 */
  W32((uint32_t)(esi), 0xdc59a0u);
/* db13d4: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* db13d7: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* db13da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db13db: mov eax, esi */
  eax = esi;
/* db13dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db13de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1400(void) {
  LOAD_REGS();
L_db1400: /* db1400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1401: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1402: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* db1406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1407: mov esi, ecx */
  esi = ecx;
/* db1409: call 0xd81a32 */
  esp -= 4; W32(esp, 0xdb140eu); SPILL(); f_d81a32(); if (g_unwind) return; RELOAD();
/* db140e: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* db1411: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* db1414: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1415: mov eax, esi */
  eax = esi;
/* db1417: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1418: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1430(void) {
  LOAD_REGS();
L_db1430: /* db1430: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db1432: call 0xd824aa */
  esp -= 4; W32(esp, 0xdb1437u); SPILL(); f_d824aa(); if (g_unwind) return; RELOAD();
/* db1437: ret  */
  esp += 4; SPILL(); return;
}

void f_db1450(void) {
  LOAD_REGS();
L_db1450: /* db1450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1451: mov esi, ecx */
  esi = ecx;
/* db1453: call 0xd81096 */
  esp -= 4; W32(esp, 0xdb1458u); SPILL(); f_d81096(); if (g_unwind) return; RELOAD();
/* db1458: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db145d: je 0xdb146c */
  if (zf) goto L_db146c;
L_db145f: /* db145f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db1464: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1466: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1469: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb146cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db146c: /* db146c: mov eax, esi */
  eax = esi;
/* db146e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db146f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1490(void) {
  LOAD_REGS();
L_db1490: /* db1490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1491: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db1495: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1498: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1499: mov esi, ecx */
  esi = ecx;
/* db149b: je 0xdb14cd */
  if (zf) goto L_db14cd;
L_db149d: /* db149d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db14a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db14a1: push 0xd81096 */
  { uint32_t v = 0xd81096u; esp -= 4; W32(esp, v); }
/* db14a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db14a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db14aa: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* db14ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db14ad: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb14b2u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db14b2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db14b5: je 0xdb14c5 */
  if (zf) goto L_db14c5;
L_db14b7: /* db14b7: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db14bd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db14bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db14c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db14c2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb14c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db14c5: /* db14c5: mov eax, edi */
  eax = edi;
/* db14c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db14c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db14c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db14ca: ret 4 */
  esp += 8; SPILL(); return;
L_db14cd: /* db14cd: mov ecx, esi */
  ecx = esi;
/* db14cf: call 0xd81096 */
  esp -= 4; W32(esp, 0xdb14d4u); SPILL(); f_d81096(); if (g_unwind) return; RELOAD();
/* db14d4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db14d7: je 0xdb14e6 */
  if (zf) goto L_db14e6;
L_db14d9: /* db14d9: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db14de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db14e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db14e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db14e3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb14e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db14e6: /* db14e6: mov eax, esi */
  eax = esi;
/* db14e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db14e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db14ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1510(void) {
  LOAD_REGS();
L_db1510: /* db1510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1512: push 0xdbae43 */
  { uint32_t v = 0xdbae43u; esp -= 4; W32(esp, v); }
/* db1517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db151d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db151e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1527: mov esi, ecx */
  esi = ecx;
/* db1529: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db152d: mov dword ptr [esi], 0xdc5ac8 */
  W32((uint32_t)(esi), 0xdc5ac8u);
/* db1533: mov dword ptr [esi + 0x3c], 0xdc5ab8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc5ab8u);
/* db153a: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* db1542: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb1547u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db1547: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* db154a: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db154f: call 0xd81096 */
  esp -= 4; W32(esp, 0xdb1554u); SPILL(); f_d81096(); if (g_unwind) return; RELOAD();
/* db1554: mov ecx, esi */
  ecx = esi;
/* db1556: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db155e: call 0xd81848 */
  esp -= 4; W32(esp, 0xdb1563u); SPILL(); f_d81848(); if (g_unwind) return; RELOAD();
/* db1563: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db1567: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1568: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db156f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1572: ret  */
  esp += 4; SPILL(); return;
}

void f_db15a0(void) {
  LOAD_REGS();
L_db15a0: /* db15a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db15a2: push 0xdbae68 */
  { uint32_t v = 0xdbae68u; esp -= 4; W32(esp, v); }
/* db15a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db15ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db15ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db15b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db15b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db15b7: mov esi, ecx */
  esi = ecx;
/* db15b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db15ba: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* db15be: call 0xd81479 */
  esp -= 4; W32(esp, 0xdb15c3u); SPILL(); f_d81479(); if (g_unwind) return; RELOAD();
/* db15c3: lea edi, [esi + 0x3c] */
  edi = (uint32_t)(esi + 0x3cu);
/* db15c6: mov ecx, edi */
  ecx = edi;
/* db15c8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* db15d0: call dword ptr [0xde8b38] */
  esp -= 4; W32(esp, 0xdb15d6u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* db15d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* db15d8: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* db15db: mov dword ptr [esi], 0xdc5ac8 */
  W32((uint32_t)(esi), 0xdc5ac8u);
/* db15e1: mov dword ptr [edi], 0xdc5ab8 */
  W32((uint32_t)(edi), 0xdc5ab8u);
/* db15e7: call 0xd824aa */
  esp -= 4; W32(esp, 0xdb15ecu); SPILL(); f_d824aa(); if (g_unwind) return; RELOAD();
/* db15ec: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db15f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db15f1: mov eax, esi */
  eax = esi;
/* db15f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db15f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db15fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db15fe: ret  */
  esp += 4; SPILL(); return;
}

void f_db1620(void) {
  LOAD_REGS();
L_db1620: /* db1620: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1622: push 0xdbae93 */
  { uint32_t v = 0xdbae93u; esp -= 4; W32(esp, v); }
/* db1627: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db162d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db162e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1636: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* db163a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db163b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db163c: mov esi, ecx */
  esi = ecx;
/* db163e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* db1642: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db1645: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db1648: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1649: xor edi, edi */
  edi = 0;
/* db164b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db164e: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db1651: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db1654: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db1658: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db165e: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db1661: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db1665: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db166b: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db166e: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db1671: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db1674: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb167au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db167a: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db167d: mov dword ptr [esi], 0xdc5880 */
  W32((uint32_t)(esi), 0xdc5880u);
/* db1683: lea ebx, [esi + 0x3c] */
  ebx = (uint32_t)(esi + 0x3cu);
/* db1686: mov ecx, ebx */
  ecx = ebx;
/* db1688: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* db168c: call dword ptr [0xde8b38] */
  esp -= 4; W32(esp, 0xdb1692u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* db1692: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1693: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* db1696: mov dword ptr [esi], 0xdc5ac8 */
  W32((uint32_t)(esi), 0xdc5ac8u);
/* db169c: mov dword ptr [ebx], 0xdc5ab8 */
  W32((uint32_t)(ebx), 0xdc5ab8u);
/* db16a2: call 0xd824aa */
  esp -= 4; W32(esp, 0xdb16a7u); SPILL(); f_d824aa(); if (g_unwind) return; RELOAD();
/* db16a7: lea edx, [esi + 0xc4] */
  edx = (uint32_t)(esi + 0xc4u);
/* db16ad: push 0xde4cdc */
  { uint32_t v = 0xde4cdcu; esp -= 4; W32(esp, v); }
/* db16b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* db16b3: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* db16b8: mov dword ptr [esi + 0xb8], edi */
  W32((uint32_t)(esi + 0xb8u), edi);
/* db16be: mov dword ptr [esi + 0xbc], 0x100 */
  W32((uint32_t)(esi + 0xbcu), 0x100u);
/* db16c8: mov dword ptr [esi + 0xc0], 0x40 */
  W32((uint32_t)(esi + 0xc0u), 0x40u);
/* db16d2: mov dword ptr [esi + 0x2c4], edi */
  W32((uint32_t)(esi + 0x2c4u), edi);
/* db16d8: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xdb16deu); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* db16de: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* db16e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db16e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db16e6: mov eax, esi */
  eax = esi;
/* db16e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db16e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db16ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db16f1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db16f4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_db1740(void) {
  LOAD_REGS();
L_db1740: /* db1740: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1742: push 0xdbaeb8 */
  { uint32_t v = 0xdbaeb8u; esp -= 4; W32(esp, v); }
/* db1747: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db174d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db174e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1755: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1756: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1757: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db1758: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* db175c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db175d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db175e: mov ebx, ecx */
  ebx = ecx;
/* db1760: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db1761: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* db1765: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb176au); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db176a: mov dword ptr [ebx], 0xdc5880 */
  W32((uint32_t)(ebx), 0xdc5880u);
/* db1770: xor eax, eax */
  eax = 0;
/* db1772: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db1774: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* db1778: je 0xdb177d */
  if (zf) goto L_db177d;
L_db177a: /* db177a: lea eax, [ebp + 0x3c] */
  eax = (uint32_t)(ebp + 0x3cu);
L_db177d: /* db177d: lea esi, [ebx + 0x3c] */
  esi = (uint32_t)(ebx + 0x3cu);
/* db1780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1781: mov ecx, esi */
  ecx = esi;
/* db1783: call dword ptr [0xde8b3c] */
  esp -= 4; W32(esp, 0xdb1789u); SPILL(); f_4e2090(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@ABV0@@Z */ RELOAD();
/* db1789: mov dword ptr [esi], 0xdc5ab8 */
  W32((uint32_t)(esi), 0xdc5ab8u);
/* db178f: lea edi, [ebp + 0x40] */
  edi = (uint32_t)(ebp + 0x40u);
/* db1792: lea esi, [ebx + 0x40] */
  esi = (uint32_t)(ebx + 0x40u);
/* db1795: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1796: mov ecx, esi */
  ecx = esi;
/* db1798: mov dword ptr [ebx], 0xdc5ac8 */
  W32((uint32_t)(ebx), 0xdc5ac8u);
/* db179e: call 0xd828b5 */
  esp -= 4; W32(esp, 0xdb17a3u); SPILL(); f_d828b5(); if (g_unwind) return; RELOAD();
/* db17a3: mov dword ptr [esi], 0xdc59a0 */
  W32((uint32_t)(esi), 0xdc59a0u);
/* db17a9: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* db17ac: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* db17af: mov ecx, dword ptr [ebp + 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xb8u));
/* db17b5: mov dword ptr [ebx + 0xb8], ecx */
  W32((uint32_t)(ebx + 0xb8u), ecx);
/* db17bb: mov edx, dword ptr [ebp + 0xbc] */
  edx = R32((uint32_t)(ebp + 0xbcu));
/* db17c1: mov dword ptr [ebx + 0xbc], edx */
  W32((uint32_t)(ebx + 0xbcu), edx);
/* db17c7: mov eax, dword ptr [ebp + 0xc0] */
  eax = R32((uint32_t)(ebp + 0xc0u));
/* db17cd: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* db17d3: lea esi, [ebp + 0xc4] */
  esi = (uint32_t)(ebp + 0xc4u);
/* db17d9: lea edi, [ebx + 0xc4] */
  edi = (uint32_t)(ebx + 0xc4u);
/* db17df: mov ecx, 0x80 */
  ecx = 0x80u;
/* db17e4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* db17e6: mov ecx, dword ptr [ebp + 0x2c4] */
  ecx = R32((uint32_t)(ebp + 0x2c4u));
/* db17ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db17ed: mov dword ptr [ebx + 0x2c4], ecx */
  W32((uint32_t)(ebx + 0x2c4u), ecx);
/* db17f3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db17f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db17f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db17f9: mov eax, ebx */
  eax = ebx;
/* db17fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db17fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db1803: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1806: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1850(void) {
  LOAD_REGS();
L_db1850: /* db1850: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1851: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db1852: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1853: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1854: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* db1858: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1859: mov esi, ecx */
  esi = ecx;
/* db185b: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb1860u); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db1860: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db1862: je 0xdb1869 */
  if (zf) goto L_db1869;
L_db1864: /* db1864: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* db1867: jmp 0xdb186b */
  goto L_db186b;
L_db1869: /* db1869: xor eax, eax */
  eax = 0;
L_db186b: /* db186b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db186c: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* db186f: call dword ptr [0xde8b40] */
  esp -= 4; W32(esp, 0xdb1875u); SPILL(); f_4e3026(); if (g_unwind) return; /* Core!??4FOutputDevice@@QAEAAV0@ABV0@@Z */ RELOAD();
/* db1875: lea ebx, [edi + 0x40] */
  ebx = (uint32_t)(edi + 0x40u);
/* db1878: lea ebp, [esi + 0x40] */
  ebp = (uint32_t)(esi + 0x40u);
/* db187b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db187c: mov ecx, ebp */
  ecx = ebp;
/* db187e: call 0xd81a32 */
  esp -= 4; W32(esp, 0xdb1883u); SPILL(); f_d81a32(); if (g_unwind) return; RELOAD();
/* db1883: mov eax, dword ptr [ebx + 0x74] */
  eax = R32((uint32_t)(ebx + 0x74u));
/* db1886: mov dword ptr [ebp + 0x74], eax */
  W32((uint32_t)(ebp + 0x74u), eax);
/* db1889: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* db188f: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* db1895: mov edx, dword ptr [edi + 0xbc] */
  edx = R32((uint32_t)(edi + 0xbcu));
/* db189b: mov dword ptr [esi + 0xbc], edx */
  W32((uint32_t)(esi + 0xbcu), edx);
/* db18a1: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* db18a7: mov ecx, edi */
  ecx = edi;
/* db18a9: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* db18af: lea eax, [esi + 0xc4] */
  eax = (uint32_t)(esi + 0xc4u);
/* db18b5: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* db18b7: mov edx, 0x100 */
  edx = 0x100u;
/* db18bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_db18c0: /* db18c0: mov bx, word ptr [ecx + eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax))) & 0xffffu);
/* db18c4: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* db18c7: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* db18ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* db18cb: jne 0xdb18c0 */
  if (!zf) goto L_db18c0;
L_db18cd: /* db18cd: mov ecx, dword ptr [edi + 0x2c4] */
  ecx = R32((uint32_t)(edi + 0x2c4u));
/* db18d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db18d4: mov dword ptr [esi + 0x2c4], ecx */
  W32((uint32_t)(esi + 0x2c4u), ecx);
/* db18da: mov eax, esi */
  eax = esi;
/* db18dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db18dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db18de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db18df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1920(void) {
  LOAD_REGS();
L_db1920: /* db1920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1921: mov esi, ecx */
  esi = ecx;
/* db1923: call 0xd813ac */
  esp -= 4; W32(esp, 0xdb1928u); SPILL(); f_d813ac(); if (g_unwind) return; RELOAD();
/* db1928: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db192d: je 0xdb193c */
  if (zf) goto L_db193c;
L_db192f: /* db192f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db1934: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1936: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1938: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1939: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb193cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db193c: /* db193c: mov eax, esi */
  eax = esi;
/* db193e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db193f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1960(void) {
  LOAD_REGS();
L_db1960: /* db1960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1961: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db1965: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1968: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1969: mov esi, ecx */
  esi = ecx;
/* db196b: je 0xdb19a0 */
  if (zf) goto L_db19a0;
L_db196d: /* db196d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db1970: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1971: push 0xd813ac */
  { uint32_t v = 0xd813acu; esp -= 4; W32(esp, v); }
/* db1976: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db1979: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db197a: push 0x2c8 */
  { uint32_t v = 0x2c8u; esp -= 4; W32(esp, v); }
/* db197f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1980: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb1985u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db1985: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1988: je 0xdb1998 */
  if (zf) goto L_db1998;
L_db198a: /* db198a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db1990: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db1992: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1994: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1995: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1998: /* db1998: mov eax, edi */
  eax = edi;
/* db199a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db199b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db199c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db199d: ret 4 */
  esp += 8; SPILL(); return;
L_db19a0: /* db19a0: mov ecx, esi */
  ecx = esi;
/* db19a2: call 0xd813ac */
  esp -= 4; W32(esp, 0xdb19a7u); SPILL(); f_d813ac(); if (g_unwind) return; RELOAD();
/* db19a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db19aa: je 0xdb19b9 */
  if (zf) goto L_db19b9;
L_db19ac: /* db19ac: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db19b1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db19b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db19b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db19b6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb19b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db19b9: /* db19b9: mov eax, esi */
  eax = esi;
/* db19bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db19bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db19bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db19e0(void) {
  LOAD_REGS();
L_db19e0: /* db19e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db19e2: push 0xdbaee7 */
  { uint32_t v = 0xdbaee7u; esp -= 4; W32(esp, v); }
/* db19e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db19ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db19ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db19f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db19f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db19f7: mov esi, ecx */
  esi = ecx;
/* db19f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db19fd: mov dword ptr [esi], 0xdc5bf8 */
  W32((uint32_t)(esi), 0xdc5bf8u);
/* db1a03: mov dword ptr [esi + 0x3c], 0xdc5be8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc5be8u);
/* db1a0a: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* db1a12: call 0xd8243c */
  esp -= 4; W32(esp, 0xdb1a17u); SPILL(); f_d8243c(); if (g_unwind) return; RELOAD();
/* db1a17: lea ecx, [esi + 0x2d0] */
  ecx = (uint32_t)(esi + 0x2d0u);
/* db1a1d: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* db1a22: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xdb1a28u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* db1a28: mov ecx, esi */
  ecx = esi;
/* db1a2a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* db1a32: call 0xd813ac */
  esp -= 4; W32(esp, 0xdb1a37u); SPILL(); f_d813ac(); if (g_unwind) return; RELOAD();
/* db1a37: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db1a3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1a3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db1a43: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1a46: ret  */
  esp += 4; SPILL(); return;
}

void f_db1a70(void) {
  LOAD_REGS();
L_db1a70: /* db1a70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1a72: push 0xdbaf08 */
  { uint32_t v = 0xdbaf08u; esp -= 4; W32(esp, v); }
/* db1a77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db1a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1a7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1a85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1a86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1a87: mov esi, ecx */
  esi = ecx;
/* db1a89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* db1a8d: call 0xd81280 */
  esp -= 4; W32(esp, 0xdb1a92u); SPILL(); f_d81280(); if (g_unwind) return; RELOAD();
/* db1a92: lea ecx, [esi + 0x2d0] */
  ecx = (uint32_t)(esi + 0x2d0u);
/* db1a98: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* db1aa0: mov dword ptr [esi], 0xdc5bf8 */
  W32((uint32_t)(esi), 0xdc5bf8u);
/* db1aa6: mov dword ptr [esi + 0x3c], 0xdc5be8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc5be8u);
/* db1aad: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xdb1ab3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* db1ab3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* db1ab7: mov eax, esi */
  eax = esi;
/* db1ab9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1aba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db1ac1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1ac4: ret  */
  esp += 4; SPILL(); return;
}

void f_db1af0(void) {
  LOAD_REGS();
L_db1af0: /* db1af0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* db1af1: mov ebp, esp */
  ebp = esp;
/* db1af3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1af5: push 0xdbaf28 */
  { uint32_t v = 0xdbaf28u; esp -= 4; W32(esp, v); }
/* db1afa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db1b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1b01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1b08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1b09: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* db1b0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1b0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1b0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1b0f: mov esi, ecx */
  esi = ecx;
/* db1b11: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* db1b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1b15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1b16: mov ecx, esi */
  ecx = esi;
/* db1b18: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* db1b1b: call 0xd8132f */
  esp -= 4; W32(esp, 0xdb1b20u); SPILL(); f_d8132f(); if (g_unwind) return; RELOAD();
/* db1b20: mov dword ptr [esi], 0xdc5bf8 */
  W32((uint32_t)(esi), 0xdc5bf8u);
/* db1b26: mov dword ptr [esi + 0x3c], 0xdc5be8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc5be8u);
/* db1b2d: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* db1b33: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* db1b35: xor edi, edi */
  edi = 0;
/* db1b37: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* db1b39: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* db1b3c: push 0xde4ce0 */
  { uint32_t v = 0xde4ce0u; esp -= 4; W32(esp, v); }
/* db1b41: je 0xdb1b4b */
  if (zf) goto L_db1b4b;
L_db1b43: /* db1b43: call dword ptr [0xde8e68] */
  esp -= 4; W32(esp, 0xdb1b49u); SPILL(); call_ind(R32(0xde8e68u)); if (g_unwind) return; /* USER32!RegisterWindowMessageW */ RELOAD();
/* db1b49: jmp 0xdb1b95 */
  goto L_db1b95;
L_db1b4b: /* db1b4b: mov ebx, dword ptr [0xde88c8] */
  ebx = R32((uint32_t)(0xde88c8u));
/* db1b51: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdb1b53u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db1b53: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1b56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* db1b58: je 0xdb1b77 */
  if (zf) goto L_db1b77;
L_db1b5a: /* db1b5a: push 0xde4ce0 */
  { uint32_t v = 0xde4ce0u; esp -= 4; W32(esp, v); }
/* db1b5f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdb1b61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db1b61: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* db1b64: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db1b67: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* db1b6a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1b6d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db1b70: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xdb1b75u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* db1b75: mov edi, esp */
  edi = esp;
L_db1b77: /* db1b77: push 0xde4ce0 */
  { uint32_t v = 0xde4ce0u; esp -= 4; W32(esp, v); }
/* db1b7c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xdb1b7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* db1b7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1b7f: push 0xde4ce0 */
  { uint32_t v = 0xde4ce0u; esp -= 4; W32(esp, v); }
/* db1b84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1b85: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xdb1b8bu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* db1b8b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1b8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1b8f: call dword ptr [0xde8ea0] */
  esp -= 4; W32(esp, 0xdb1b95u); SPILL(); call_ind(R32(0xde8ea0u)); if (g_unwind) return; /* USER32!RegisterWindowMessageA */ RELOAD();
L_db1b95: /* db1b95: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* db1b98: mov dword ptr [esi + 0x2c8], eax */
  W32((uint32_t)(esi + 0x2c8u), eax);
/* db1b9e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* db1ba1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1ba2: lea ecx, [esi + 0x2d0] */
  ecx = (uint32_t)(esi + 0x2d0u);
/* db1ba8: mov dword ptr [esi + 0x2cc], eax */
  W32((uint32_t)(esi + 0x2ccu), eax);
/* db1bae: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xdb1bb4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* db1bb4: mov eax, esi */
  eax = esi;
/* db1bb6: lea esp, [ebp - 0x1c] */
  esp = (uint32_t)(ebp + 0xffffffe4u);
/* db1bb9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* db1bbc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db1bc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1bc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1bc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db1bc6: mov esp, ebp */
  esp = ebp;
/* db1bc8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* db1bc9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_db1c10(void) {
  LOAD_REGS();
L_db1c10: /* db1c10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* db1c12: push 0xdbaf48 */
  { uint32_t v = 0xdbaf48u; esp -= 4; W32(esp, v); }
/* db1c17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* db1c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1c1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* db1c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1c27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1c28: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* db1c2c: mov esi, ecx */
  esi = ecx;
/* db1c2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1c2f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* db1c33: call 0xd813d9 */
  esp -= 4; W32(esp, 0xdb1c38u); SPILL(); f_d813d9(); if (g_unwind) return; RELOAD();
/* db1c38: mov dword ptr [esi], 0xdc5bf8 */
  W32((uint32_t)(esi), 0xdc5bf8u);
/* db1c3e: mov dword ptr [esi + 0x3c], 0xdc5be8 */
  W32((uint32_t)(esi + 0x3cu), 0xdc5be8u);
/* db1c45: mov eax, dword ptr [edi + 0x2c8] */
  eax = R32((uint32_t)(edi + 0x2c8u));
/* db1c4b: mov dword ptr [esi + 0x2c8], eax */
  W32((uint32_t)(esi + 0x2c8u), eax);
/* db1c51: mov ecx, dword ptr [edi + 0x2cc] */
  ecx = R32((uint32_t)(edi + 0x2ccu));
/* db1c57: add edi, 0x2d0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2d0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* db1c5d: mov dword ptr [esi + 0x2cc], ecx */
  W32((uint32_t)(esi + 0x2ccu), ecx);
/* db1c63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1c64: lea ecx, [esi + 0x2d0] */
  ecx = (uint32_t)(esi + 0x2d0u);
/* db1c6a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* db1c72: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xdb1c78u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* db1c78: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* db1c7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1c7d: mov eax, esi */
  eax = esi;
/* db1c7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1c80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* db1c87: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* db1c8a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1cb0(void) {
  LOAD_REGS();
L_db1cb0: /* db1cb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1cb1: mov esi, ecx */
  esi = ecx;
/* db1cb3: call 0xd82743 */
  esp -= 4; W32(esp, 0xdb1cb8u); SPILL(); f_d82743(); if (g_unwind) return; RELOAD();
/* db1cb8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1cbd: je 0xdb1ccc */
  if (zf) goto L_db1ccc;
L_db1cbf: /* db1cbf: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db1cc4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1cc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1cc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1cc9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1cccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1ccc: /* db1ccc: mov eax, esi */
  eax = esi;
/* db1cce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1ccf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1cf0(void) {
  LOAD_REGS();
L_db1cf0: /* db1cf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1cf1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db1cf5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1cf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1cf9: mov esi, ecx */
  esi = ecx;
/* db1cfb: je 0xdb1d30 */
  if (zf) goto L_db1d30;
L_db1cfd: /* db1cfd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db1d00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1d01: push 0xd82743 */
  { uint32_t v = 0xd82743u; esp -= 4; W32(esp, v); }
/* db1d06: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db1d09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1d0a: push 0x2dc */
  { uint32_t v = 0x2dcu; esp -= 4; W32(esp, v); }
/* db1d0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1d10: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb1d15u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db1d15: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1d18: je 0xdb1d28 */
  if (zf) goto L_db1d28;
L_db1d1a: /* db1d1a: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db1d20: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db1d22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1d24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1d25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1d28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1d28: /* db1d28: mov eax, edi */
  eax = edi;
/* db1d2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1d2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1d2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db1d2d: ret 4 */
  esp += 8; SPILL(); return;
L_db1d30: /* db1d30: mov ecx, esi */
  ecx = esi;
/* db1d32: call 0xd82743 */
  esp -= 4; W32(esp, 0xdb1d37u); SPILL(); f_d82743(); if (g_unwind) return; RELOAD();
/* db1d37: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1d3a: je 0xdb1d49 */
  if (zf) goto L_db1d49;
L_db1d3c: /* db1d3c: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db1d41: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1d43: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1d45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1d46: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1d49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1d49: /* db1d49: mov eax, esi */
  eax = esi;
/* db1d4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1d4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db1d4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1d70(void) {
  LOAD_REGS();
L_db1d70: /* db1d70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* db1d71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1d72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1d73: mov esi, ecx */
  esi = ecx;
/* db1d75: xor edi, edi */
  edi = 0;
/* db1d77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1d78: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* db1d7c: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xdb1d82u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* db1d82: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* db1d86: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db1d89: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db1d8c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db1d8f: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db1d92: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db1d98: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db1d9b: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db1d9f: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db1da5: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db1da8: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* db1dab: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db1dae: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db1db1: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb1db7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db1db7: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db1dba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1dbb: mov dword ptr [esi], 0xdc5d18 */
  W32((uint32_t)(esi), 0xdc5d18u);
/* db1dc1: mov eax, esi */
  eax = esi;
/* db1dc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1dc4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* db1dc5: ret  */
  esp += 4; SPILL(); return;
}

void f_db1df0(void) {
  LOAD_REGS();
L_db1df0: /* db1df0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db1df4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1df5: mov esi, ecx */
  esi = ecx;
/* db1df7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* db1dfb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* db1dfe: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* db1e01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1e02: xor edi, edi */
  edi = 0;
/* db1e04: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* db1e07: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* db1e0a: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* db1e0d: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* db1e13: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* db1e16: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* db1e1a: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* db1e20: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* db1e23: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* db1e26: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* db1e29: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xdb1e2fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* db1e2f: mov dx, word ptr [esp + 0x10] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x10u))) & 0xffffu);
/* db1e34: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* db1e37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1e38: mov dword ptr [esi], 0xdc5d18 */
  W32((uint32_t)(esi), 0xdc5d18u);
/* db1e3e: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* db1e42: mov eax, esi */
  eax = esi;
/* db1e44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1e45: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_db1e70(void) {
  LOAD_REGS();
L_db1e70: /* db1e70: jmp 0xd8227f */
  SPILL(); f_d8227f(); return;
}

void f_db1e90(void) {
  LOAD_REGS();
L_db1e90: /* db1e90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db1e94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1e96: mov esi, ecx */
  esi = ecx;
/* db1e98: call 0xd824dc */
  esp -= 4; W32(esp, 0xdb1e9du); SPILL(); f_d824dc(); if (g_unwind) return; RELOAD();
/* db1e9d: mov dword ptr [esi], 0xdc5d18 */
  W32((uint32_t)(esi), 0xdc5d18u);
/* db1ea3: mov eax, esi */
  eax = esi;
/* db1ea5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1ea6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1ec0(void) {
  LOAD_REGS();
L_db1ec0: /* db1ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* db1ec4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1ec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1ec6: mov esi, ecx */
  esi = ecx;
/* db1ec8: call 0xd814a1 */
  esp -= 4; W32(esp, 0xdb1ecdu); SPILL(); f_d814a1(); if (g_unwind) return; RELOAD();
/* db1ecd: mov eax, esi */
  eax = esi;
/* db1ecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1ed0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1ef0(void) {
  LOAD_REGS();
L_db1ef0: /* db1ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1ef1: mov esi, ecx */
  esi = ecx;
/* db1ef3: call 0xd82982 */
  esp -= 4; W32(esp, 0xdb1ef8u); SPILL(); f_d82982(); if (g_unwind) return; RELOAD();
/* db1ef8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1efd: je 0xdb1f0c */
  if (zf) goto L_db1f0c;
L_db1eff: /* db1eff: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db1f04: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1f06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1f08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1f09: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1f0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1f0c: /* db1f0c: mov eax, esi */
  eax = esi;
/* db1f0e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1f0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_db1f30(void) {
  LOAD_REGS();
L_db1f30: /* db1f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* db1f31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* db1f35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1f38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1f39: mov esi, ecx */
  esi = ecx;
/* db1f3b: je 0xdb1f6d */
  if (zf) goto L_db1f6d;
L_db1f3d: /* db1f3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* db1f40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1f41: push 0xd82982 */
  { uint32_t v = 0xd82982u; esp -= 4; W32(esp, v); }
/* db1f46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* db1f49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* db1f4a: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* db1f4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1f4d: call 0xdb7bba */
  esp -= 4; W32(esp, 0xdb1f52u); SPILL(); f_db7bba(); if (g_unwind) return; RELOAD();
/* db1f52: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1f55: je 0xdb1f65 */
  if (zf) goto L_db1f65;
L_db1f57: /* db1f57: mov ecx, dword ptr [0xde88a4] */
  ecx = R32((uint32_t)(0xde88a4u));
/* db1f5d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* db1f5f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1f61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* db1f62: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1f65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1f65: /* db1f65: mov eax, edi */
  eax = edi;
/* db1f67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* db1f68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1f69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db1f6a: ret 4 */
  esp += 8; SPILL(); return;
L_db1f6d: /* db1f6d: mov ecx, esi */
  ecx = esi;
/* db1f6f: call 0xd82982 */
  esp -= 4; W32(esp, 0xdb1f74u); SPILL(); f_d82982(); if (g_unwind) return; RELOAD();
/* db1f74: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* db1f77: je 0xdb1f86 */
  if (zf) goto L_db1f86;
L_db1f79: /* db1f79: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* db1f7e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* db1f80: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* db1f82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* db1f83: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xdb1f86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_db1f86: /* db1f86: mov eax, esi */
  eax = esi;
/* db1f88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* db1f89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* db1f8a: ret 4 */
  esp += 8; SPILL(); return;
}
