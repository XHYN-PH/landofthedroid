#include "recomp.h"
#include "rec_mod.h"

void f_7cccdd(void) {
  LOAD_REGS();
L_7cccdd: /* 7cccdd: push 0xa0ee98 */
  { uint32_t v = 0xa0ee98u; esp -= 4; W32(esp, v); }
/* 7ccce2: push 0xad5648 */
  { uint32_t v = 0xad5648u; esp -= 4; W32(esp, v); }
/* 7ccce7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cccedu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ccced: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cccf0: xor esi, esi */
  esi = 0;
/* 7cccf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cccf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cccf4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cccf9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cccf9: guest_badaddr(0x7cccf9); return;
}

void f_7ccd30(void) {
  LOAD_REGS();
L_7ccd30: /* 7ccd30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ccd31: mov ebp, esp */
  ebp = esp;
/* 7ccd33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ccd35: push 0x9cfcf0 */
  { uint32_t v = 0x9cfcf0u; esp -= 4; W32(esp, v); }
/* 7ccd3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ccd40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccd41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ccd48: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ccd4b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ccd4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ccd4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ccd50: xor esi, esi */
  esi = 0;
/* 7ccd52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ccd53: mov ebx, ecx */
  ebx = ecx;
/* 7ccd55: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ccd58: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7ccd5b: xor eax, eax */
  eax = 0;
/* 7ccd5d: mov ecx, 0x10 */
  ecx = 0x10u;
L_7ccd62: /* 7ccd62: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccd65: jge 0x7ccd74 */
  if ((sf == of)) goto L_7ccd74;
L_7ccd67: /* 7ccd67: mov di, word ptr [edx + eax*2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 7ccd6b: mov word ptr [ebp + ecx*2 - 0x5c], di */
  W16((uint32_t)(ebp + ecx*2 + 0xffffffa4u), (edi & 0xffffu));
/* 7ccd70: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ccd71: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ccd72: jmp 0x7ccd62 */
  goto L_7ccd62;
L_7ccd74: /* 7ccd74: mov ecx, 8 */
  ecx = 0x8u;
/* 7ccd79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ccd80: /* 7ccd80: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccd83: jge 0x7ccd92 */
  if ((sf == of)) goto L_7ccd92;
L_7ccd85: /* 7ccd85: mov di, word ptr [edx + eax*2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 7ccd89: mov word ptr [ebp + ecx*2 - 0x5c], di */
  W16((uint32_t)(ebp + ecx*2 + 0xffffffa4u), (edi & 0xffffu));
/* 7ccd8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ccd8f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ccd90: jmp 0x7ccd80 */
  goto L_7ccd80;
L_7ccd92: /* 7ccd92: xor ecx, ecx */
  ecx = 0;
L_7ccd94: /* 7ccd94: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccd97: jge 0x7ccda6 */
  if ((sf == of)) goto L_7ccda6;
L_7ccd99: /* 7ccd99: mov di, word ptr [edx + eax*2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + eax*2))) & 0xffffu);
/* 7ccd9d: mov word ptr [ebp + ecx*2 - 0x5c], di */
  W16((uint32_t)(ebp + ecx*2 + 0xffffffa4u), (edi & 0xffffu));
/* 7ccda2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ccda3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ccda4: jmp 0x7ccd94 */
  goto L_7ccd94;
L_7ccda6: /* 7ccda6: mov word ptr [ebp - 0x1c], si */
  W16((uint32_t)(ebp + 0xffffffe4u), (esi & 0xffffu));
/* 7ccdaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7ccdb0: /* 7ccdb0: cmp esi, dword ptr [ebx + 0x174] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccdb6: jge 0x7cce51 */
  if ((sf == of)) goto L_7cce51;
L_7ccdbc: /* 7ccdbc: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 7ccdc2: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 7ccdc5: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 7ccdc8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ccdceu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ccdce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccdcf: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7ccdd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ccdd3: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ccdd9u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ccdd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ccddc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccdde: jne 0x7cce1e */
  if (!zf) goto L_7cce1e;
L_7ccde0: /* 7ccde0: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7ccde3: xor esi, esi */
  esi = 0;
L_7ccde5: /* 7ccde5: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccde8: jge 0x7cce51 */
  if ((sf == of)) goto L_7cce51;
L_7ccdea: /* 7ccdea: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7ccded: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7ccdf0: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7ccdf3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ccdf9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ccdf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccdfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ccdfb: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7cce01u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7cce01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cce04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cce06: jne 0x7cce1b */
  if (!zf) goto L_7cce1b;
L_7cce08: /* 7cce08: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cce0b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cce12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cce13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cce14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cce15: mov esp, ebp */
  esp = ebp;
/* 7cce17: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cce18: ret 8 */
  esp += 12; SPILL(); return;
L_7cce1b: /* 7cce1b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cce1c: jmp 0x7ccde5 */
  goto L_7ccde5;
L_7cce1e: /* 7cce1e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cce1f: jmp 0x7ccdb0 */
  goto L_7ccdb0;
L_7cce51: /* 7cce51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cce54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cce55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cce56: mov eax, 2 */
  eax = 0x2u;
/* 7cce5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cce62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cce63: mov esp, ebp */
  esp = ebp;
/* 7cce65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cce66: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7cce21(void) {
  LOAD_REGS();
L_7cce21: /* 7cce21: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cce24: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cce29: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7cce2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cce2d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cce30: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cce35u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cce35(); return;
}

void f_7cce35(void) {
  LOAD_REGS();
L_7cce35: /* 7cce35: push 0xa0eee4 */
  { uint32_t v = 0xa0eee4u; esp -= 4; W32(esp, v); }
/* 7cce3a: push 0xadb3f8 */
  { uint32_t v = 0xadb3f8u; esp -= 4; W32(esp, v); }
/* 7cce3f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cce45u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cce45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cce48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cce4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cce4c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cce51u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7cce51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cce54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cce55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cce56: mov eax, 2 */
  eax = 0x2u;
/* 7cce5b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cce62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cce63: mov esp, ebp */
  esp = ebp;
/* 7cce65: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cce66: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ccec0(void) {
  LOAD_REGS();
L_7ccec0: /* 7ccec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ccec1: mov esi, dword ptr [ecx + 0x174] */
  esi = R32((uint32_t)(ecx + 0x174u));
/* 7ccec7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7cceca: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ccecc: jle 0x7ccee5 */
  if ((zf || sf != of)) goto L_7ccee5;
L_7ccece: /* 7ccece: mov edx, dword ptr [ecx + 0x170] */
  edx = R32((uint32_t)(ecx + 0x170u));
L_7cced4: /* 7cced4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7cced6: mov ecx, dword ptr [ecx + 0x44] */
  ecx = R32((uint32_t)(ecx + 0x44u));
/* 7cced9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ccedb: jle 0x7ccedf */
  if ((zf || sf != of)) goto L_7ccedf;
L_7ccedd: /* 7ccedd: mov eax, ecx */
  eax = ecx;
L_7ccedf: /* 7ccedf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ccee2: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 7ccee3: jne 0x7cced4 */
  if (!zf) goto L_7cced4;
L_7ccee5: /* 7ccee5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ccee6: ret  */
  esp += 4; SPILL(); return;
}

void f_7ccf00(void) {
  LOAD_REGS();
L_7ccf00: /* 7ccf00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ccf01: mov ebp, esp */
  ebp = esp;
/* 7ccf03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ccf05: push 0x9cfd00 */
  { uint32_t v = 0x9cfd00u; esp -= 4; W32(esp, v); }
/* 7ccf0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ccf10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ccf11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ccf18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ccf1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ccf1c: mov bl, byte ptr [ebp + 0xc] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 7ccf1f: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccf22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ccf23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ccf24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ccf27: mov esi, ecx */
  esi = ecx;
/* 7ccf29: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ccf30: je 0x7ccf95 */
  if (zf) goto L_7ccf95;
L_7ccf32: /* 7ccf32: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7ccf35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccf37: je 0x7ccf95 */
  if (zf) goto L_7ccf95;
L_7ccf39: /* 7ccf39: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ccf3c: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ccf3f: jne 0x7ccf95 */
  if (!zf) goto L_7ccf95;
L_7ccf41: /* 7ccf41: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7ccf47: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccf49: je 0x7ccf95 */
  if (zf) goto L_7ccf95;
L_7ccf4b: /* 7ccf4b: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7ccf4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ccf50: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ccf52: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7ccf55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ccf55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccf57: jne 0x7ccf95 */
  if (!zf) goto L_7ccf95;
L_7ccf59: /* 7ccf59: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7ccf5f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ccf61: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0x7ccf67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ccf67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccf69: jne 0x7ccf95 */
  if (!zf) goto L_7ccf95;
L_7ccf6b: /* 7ccf6b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ccf6e: test byte ptr [ecx + 0x38], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccf72: jne 0x7ccf98 */
  if (!zf) goto L_7ccf98;
L_7ccf74: /* 7ccf74: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ccf76: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ccf78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ccf7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_7ccf7c: /* 7ccf7c: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7ccf82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ccf82: /* 7ccf82: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ccf85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ccf86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ccf87: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ccf8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ccf8f: mov esp, ebp */
  esp = ebp;
/* 7ccf91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ccf92: ret 0x10 */
  esp += 20; SPILL(); return;
L_7ccf95: /* 7ccf95: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7ccf98: /* 7ccf98: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccf9b: je 0x7ccf82 */
  if (zf) goto L_7ccf82;
L_7ccf9d: /* 7ccf9d: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7ccfa0: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 7ccfa3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ccfa5: jne 0x7ccf82 */
  if (!zf) goto L_7ccf82;
L_7ccfa7: /* 7ccfa7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ccfa9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccfab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccfad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccfaf: jmp 0x7ccf7c */
  goto L_7ccf7c;
}

void f_7ccfb1(void) {
  LOAD_REGS();
L_7ccfb1: /* 7ccfb1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ccfb4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ccfb9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ccfbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ccfbd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ccfc0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ccfc5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ccfc5(); return;
}

void f_7ccfc5(void) {
  LOAD_REGS();
L_7ccfc5: /* 7ccfc5: push 0xa0ef2c */
  { uint32_t v = 0xa0ef2cu; esp -= 4; W32(esp, v); }
/* 7ccfca: push 0xadb820 */
  { uint32_t v = 0xadb820u; esp -= 4; W32(esp, v); }
/* 7ccfcf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ccfd5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ccfd5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ccfd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccfda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ccfdc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ccfe1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ccfe1: guest_badaddr(0x7ccfe1); return;
}

void f_7cd030(void) {
  LOAD_REGS();
L_7cd030: /* 7cd030: mov eax, ecx */
  eax = ecx;
/* 7cd032: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7cd036: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7cd038: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 7cd03f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cd060(void) {
  LOAD_REGS();
L_7cd060: /* 7cd060: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cd063: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7cd065: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd067: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 7cd06a: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 7cd06d: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd080(void) {
  LOAD_REGS();
L_7cd080: /* 7cd080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cd081: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 7cd085: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd086: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd087: mov edi, ecx */
  edi = ecx;
/* 7cd089: mov ecx, ebp */
  ecx = ebp;
/* 7cd08b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cd091u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cd091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd092: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7cd097u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7cd097: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 7cd09a: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 7cd09d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd0a0: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7cd0a1: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7cd0a3: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 7cd0a6: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cd0a9: je 0x7cd0f4 */
  if (zf) goto L_7cd0f4;
L_7cd0ab: /* 7cd0ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cd0ac: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
L_7cd0b0: /* 7cd0b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cd0b2: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7cd0b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cd0b6: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 7cd0ba: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x7cd0c0u); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 7cd0c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd0c2: je 0x7cd0e9 */
  if (zf) goto L_7cd0e9;
L_7cd0c4: /* 7cd0c4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7cd0c6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cd0c8: mov ecx, ebx */
  ecx = ebx;
/* 7cd0ca: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cd0d0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cd0d0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7cd0d2: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7cd0d5: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7cd0d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd0da: je 0x7cd0e9 */
  if (zf) goto L_7cd0e9;
L_7cd0dc: /* 7cd0dc: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cd0de: lea edx, [esi + eax + 0x10] */
  edx = (uint32_t)(esi + eax + 0x10u);
/* 7cd0e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd0e3: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7cd0e9u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_7cd0e9: /* 7cd0e9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7cd0eb: mov esi, dword ptr [esi + eax] */
  esi = R32((uint32_t)(esi + eax));
/* 7cd0ee: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cd0f1: jne 0x7cd0b0 */
  if (!zf) goto L_7cd0b0;
L_7cd0f3: /* 7cd0f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7cd0f4: /* 7cd0f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cd0f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd0f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cd0f7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7cd120(void) {
  LOAD_REGS();
L_7cd120: /* 7cd120: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cd123: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7cd129: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd12b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7cd12e: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd140(void) {
  LOAD_REGS();
L_7cd140: /* 7cd140: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cd143: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7cd149: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd14b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7cd14e: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd160(void) {
  LOAD_REGS();
L_7cd160: /* 7cd160: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cd163: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7cd169: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd16b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7cd16e: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd180(void) {
  LOAD_REGS();
L_7cd180: /* 7cd180: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cd183: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 7cd189: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd18b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7cd18e: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd1a0(void) {
  LOAD_REGS();
L_7cd1a0: /* 7cd1a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd1a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cd1a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cd1a5: mov esi, ecx */
  esi = ecx;
/* 7cd1a7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cd1adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cd1ad: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7cd1b1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cd1b3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7cd1b5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7cd1b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd1b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cd1d0(void) {
  LOAD_REGS();
L_7cd1d0: /* 7cd1d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cd1d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cd1d2: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 7cd1d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd1d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd1da: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7cd1de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7cd1e0: mov esi, ecx */
  esi = ecx;
/* 7cd1e2: jge 0x7cd1f8 */
  if ((sf == of)) goto L_7cd1f8;
L_7cd1e4: /* 7cd1e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7cd1e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cd1ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7cd1f3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7cd1f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd1f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd1f8: /* 7cd1f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cd1fb: jle 0x7cd211 */
  if ((zf || sf != of)) goto L_7cd211;
L_7cd1fd: /* 7cd1fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7cd202: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cd207: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7cd20c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7cd20eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd20e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd211: /* 7cd211: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7cd215: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7cd218: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 7cd21b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cd21d: jle 0x7cd233 */
  if ((zf || sf != of)) goto L_7cd233;
L_7cd21f: /* 7cd21f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7cd224: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cd229: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7cd22e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7cd230u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd230: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd233: /* 7cd233: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cd235: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cd236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd237: mov ecx, esi */
  ecx = esi;
/* 7cd239: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7cd23fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7cd23f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cd240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd241: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cd242: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cd243: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7cd270(void) {
  LOAD_REGS();
L_7cd270: /* 7cd270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd271: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cd275: push 0xb79940 */
  { uint32_t v = 0xb79940u; esp -= 4; W32(esp, v); }
/* 7cd27a: mov ecx, esi */
  ecx = esi;
/* 7cd27c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7cd282u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7cd282: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd284: jne 0x7cd29e */
  if (!zf) goto L_7cd29e;
L_7cd286: /* 7cd286: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7cd28b: push 0xadb858 */
  { uint32_t v = 0xadb858u; esp -= 4; W32(esp, v); }
/* 7cd290: push 0xadb89c */
  { uint32_t v = 0xadb89cu; esp -= 4; W32(esp, v); }
/* 7cd295: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7cd29bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7cd29b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd29e: /* 7cd29e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cd2a2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cd2a5: jne 0x7cd2ad */
  if (!zf) goto L_7cd2ad;
L_7cd2a7: /* 7cd2a7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7cd2adu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7cd2ad: /* 7cd2ad: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7cd2b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd2b5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7cd2b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd2bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd2bc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7cd2c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd2c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd2c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd2c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd2c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd2c6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7cd2ccu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7cd2cc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd2cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd2d0: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd300(void) {
  LOAD_REGS();
L_7cd300: /* 7cd300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd301: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cd305: push 0xb7dd58 */
  { uint32_t v = 0xb7dd58u; esp -= 4; W32(esp, v); }
/* 7cd30a: mov ecx, esi */
  ecx = esi;
/* 7cd30c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7cd312u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7cd312: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd314: jne 0x7cd32e */
  if (!zf) goto L_7cd32e;
L_7cd316: /* 7cd316: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7cd31b: push 0xadb8c0 */
  { uint32_t v = 0xadb8c0u; esp -= 4; W32(esp, v); }
/* 7cd320: push 0xadb904 */
  { uint32_t v = 0xadb904u; esp -= 4; W32(esp, v); }
/* 7cd325: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7cd32bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7cd32b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd32e: /* 7cd32e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cd332: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cd335: jne 0x7cd33d */
  if (!zf) goto L_7cd33d;
L_7cd337: /* 7cd337: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7cd33du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7cd33d: /* 7cd33d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7cd343: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd345: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7cd349: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd34b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd34c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7cd350: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd353: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd354: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd355: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd356: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7cd35cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7cd35c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd35f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd360: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd390(void) {
  LOAD_REGS();
L_7cd390: /* 7cd390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd391: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cd395: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd397: je 0x7cd3ae */
  if (zf) goto L_7cd3ae;
L_7cd399: /* 7cd399: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7cd39e: mov ecx, esi */
  ecx = esi;
/* 7cd3a0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cd3a6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cd3a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd3a8: je 0x7cd3ae */
  if (zf) goto L_7cd3ae;
L_7cd3aa: /* 7cd3aa: mov eax, esi */
  eax = esi;
/* 7cd3ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd3ad: ret  */
  esp += 4; SPILL(); return;
L_7cd3ae: /* 7cd3ae: xor eax, eax */
  eax = 0;
/* 7cd3b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd3b1: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd3d0(void) {
  LOAD_REGS();
L_7cd3d0: /* 7cd3d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd3d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cd3d5: push 0xb84060 */
  { uint32_t v = 0xb84060u; esp -= 4; W32(esp, v); }
/* 7cd3da: mov ecx, esi */
  ecx = esi;
/* 7cd3dc: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7cd3e2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7cd3e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd3e4: jne 0x7cd3fe */
  if (!zf) goto L_7cd3fe;
L_7cd3e6: /* 7cd3e6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7cd3eb: push 0xadb928 */
  { uint32_t v = 0xadb928u; esp -= 4; W32(esp, v); }
/* 7cd3f0: push 0xadb96c */
  { uint32_t v = 0xadb96cu; esp -= 4; W32(esp, v); }
/* 7cd3f5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7cd3fbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7cd3fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd3fe: /* 7cd3fe: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cd402: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cd405: jne 0x7cd40d */
  if (!zf) goto L_7cd40d;
L_7cd407: /* 7cd407: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7cd40du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7cd40d: /* 7cd40d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7cd413: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd415: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7cd419: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd41b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd41c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7cd420: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd422: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd423: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd425: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd426: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7cd42cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7cd42c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd42f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd430: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd460(void) {
  LOAD_REGS();
L_7cd460: /* 7cd460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd461: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cd465: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd467: je 0x7cd47e */
  if (zf) goto L_7cd47e;
L_7cd469: /* 7cd469: push 0xb832e0 */
  { uint32_t v = 0xb832e0u; esp -= 4; W32(esp, v); }
/* 7cd46e: mov ecx, esi */
  ecx = esi;
/* 7cd470: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cd476u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cd476: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd478: je 0x7cd47e */
  if (zf) goto L_7cd47e;
L_7cd47a: /* 7cd47a: mov eax, esi */
  eax = esi;
/* 7cd47c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd47d: ret  */
  esp += 4; SPILL(); return;
L_7cd47e: /* 7cd47e: xor eax, eax */
  eax = 0;
/* 7cd480: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd481: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd4a0(void) {
  LOAD_REGS();
L_7cd4a0: /* 7cd4a0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7cd4a4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7cd4a8: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7cd4ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd4ad: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7cd4b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd4b2: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7cd4b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd4b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd4b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd4b9: push 0xb84d18 */
  { uint32_t v = 0xb84d18u; esp -= 4; W32(esp, v); }
/* 7cd4be: call dword ptr [0xcfa7c4] */
  esp -= 4; W32(esp, 0x7cd4c4u); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7cd4c4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd4c7: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd4e0(void) {
  LOAD_REGS();
L_7cd4e0: /* 7cd4e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd4e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cd4e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd4e7: je 0x7cd4fe */
  if (zf) goto L_7cd4fe;
L_7cd4e9: /* 7cd4e9: push 0xb6dcb8 */
  { uint32_t v = 0xb6dcb8u; esp -= 4; W32(esp, v); }
/* 7cd4ee: mov ecx, esi */
  ecx = esi;
/* 7cd4f0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cd4f6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cd4f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd4f8: je 0x7cd4fe */
  if (zf) goto L_7cd4fe;
L_7cd4fa: /* 7cd4fa: mov eax, esi */
  eax = esi;
/* 7cd4fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd4fd: ret  */
  esp += 4; SPILL(); return;
L_7cd4fe: /* 7cd4fe: xor eax, eax */
  eax = 0;
/* 7cd500: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd501: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd520(void) {
  LOAD_REGS();
L_7cd520: /* 7cd520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd521: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7cd525: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd527: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd528: je 0x7cd548 */
  if (zf) goto L_7cd548;
L_7cd52a: /* 7cd52a: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7cd52f: mov ecx, esi */
  ecx = esi;
/* 7cd531: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cd537u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cd537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd539: jne 0x7cd570 */
  if (!zf) goto L_7cd570;
L_7cd53b: /* 7cd53b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd53c: mov ecx, esi */
  ecx = esi;
/* 7cd53e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cd544u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cd544: mov edi, eax */
  edi = eax;
/* 7cd546: jmp 0x7cd54d */
  goto L_7cd54d;
L_7cd548: /* 7cd548: mov edi, 0xadba3c */
  edi = 0xadba3cu;
L_7cd54d: /* 7cd54d: mov ecx, 0xb79f88 */
  ecx = 0xb79f88u;
/* 7cd552: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cd558u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cd558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd559: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7cd55e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cd560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd561: push 0xadba48 */
  { uint32_t v = 0xadba48u; esp -= 4; W32(esp, v); }
/* 7cd566: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd567: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cd56du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cd56d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd570: /* 7cd570: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cd571: mov eax, esi */
  eax = esi;
/* 7cd573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd574: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd5a0(void) {
  LOAD_REGS();
L_7cd5a0: /* 7cd5a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7cd5a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd5a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd5a7: mov esi, ecx */
  esi = ecx;
/* 7cd5a9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7cd5ab: je 0x7cd5be */
  if (zf) goto L_7cd5be;
L_7cd5ad: /* 7cd5ad: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7cd5b0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7cd5b3: call 0x6c566e */
  esp -= 4; W32(esp, 0x7cd5b8u); SPILL(); f_6c566e(); if (g_unwind) return; RELOAD();
/* 7cd5b8: mov eax, esi */
  eax = esi;
/* 7cd5ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd5bb: ret 4 */
  esp += 8; SPILL(); return;
L_7cd5be: /* 7cd5be: xor eax, eax */
  eax = 0;
/* 7cd5c0: mov ecx, esi */
  ecx = esi;
/* 7cd5c2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7cd5c5: call 0x6c566e */
  esp -= 4; W32(esp, 0x7cd5cau); SPILL(); f_6c566e(); if (g_unwind) return; RELOAD();
/* 7cd5ca: mov eax, esi */
  eax = esi;
/* 7cd5cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd5cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cd5e0(void) {
  LOAD_REGS();
L_7cd5e0: /* 7cd5e0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cd5e3: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7cd5e6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7cd5e9: jmp 0x6c566e */
  SPILL(); f_6c566e(); return;
}

void f_7cd600(void) {
  LOAD_REGS();
L_7cd600: /* 7cd600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cd602: push 0x9cfd19 */
  { uint32_t v = 0x9cfd19u; esp -= 4; W32(esp, v); }
/* 7cd607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cd60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd60e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cd615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd616: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cd617: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd618: mov esi, ecx */
  esi = ecx;
/* 7cd61a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd61b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7cd61f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7cd622: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7cd624: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7cd62a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7cd632: jge 0x7cd648 */
  if ((sf == of)) goto L_7cd648;
L_7cd634: /* 7cd634: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7cd639: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cd63e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7cd643: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cd645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd645: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd648: /* 7cd648: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cd64b: jle 0x7cd661 */
  if ((zf || sf != of)) goto L_7cd661;
L_7cd64d: /* 7cd64d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7cd652: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7cd657: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7cd65c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cd65eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd65e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd661: /* 7cd661: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cd663: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd666: mov ecx, esi */
  ecx = esi;
/* 7cd668: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7cd66eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7cd66e: mov ecx, esi */
  ecx = esi;
/* 7cd670: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7cd678: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7cd67eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7cd67e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7cd682: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cd683: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd684: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cd685: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cd68c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd68f: ret  */
  esp += 4; SPILL(); return;
}

void f_7cd6c0(void) {
  LOAD_REGS();
L_7cd6c0: /* 7cd6c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7cd6c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd6c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd6c7: mov esi, ecx */
  esi = ecx;
/* 7cd6c9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7cd6cb: je 0x7cd6de */
  if (zf) goto L_7cd6de;
L_7cd6cd: /* 7cd6cd: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7cd6d0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7cd6d3: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7cd6d8u); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7cd6d8: mov eax, esi */
  eax = esi;
/* 7cd6da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd6db: ret 4 */
  esp += 8; SPILL(); return;
L_7cd6de: /* 7cd6de: xor eax, eax */
  eax = 0;
/* 7cd6e0: mov ecx, esi */
  ecx = esi;
/* 7cd6e2: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7cd6e5: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7cd6eau); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7cd6ea: mov eax, esi */
  eax = esi;
/* 7cd6ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd6ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cd700(void) {
  LOAD_REGS();
L_7cd700: /* 7cd700: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7cd703: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7cd706: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7cd709: jmp 0x6c39bd */
  SPILL(); f_6c39bd(); return;
}

void f_7cd720(void) {
  LOAD_REGS();
L_7cd720: /* 7cd720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cd721: mov ebp, esp */
  ebp = esp;
/* 7cd723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cd725: push 0x9cfd30 */
  { uint32_t v = 0x9cfd30u; esp -= 4; W32(esp, v); }
/* 7cd72a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cd730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cd738: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cd73b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cd73e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd740: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cd741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd742: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd743: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7cd749: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cd74c: mov ebx, ecx */
  ebx = ecx;
/* 7cd74e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cd755: jne 0x7cd76b */
  if (!zf) goto L_7cd76b;
L_7cd757: /* 7cd757: push 0x96 */
  { uint32_t v = 0x96u; esp -= 4; W32(esp, v); }
/* 7cd75c: push 0xad46cc */
  { uint32_t v = 0xad46ccu; esp -= 4; W32(esp, v); }
/* 7cd761: push 0xad46d8 */
  { uint32_t v = 0xad46d8u; esp -= 4; W32(esp, v); }
/* 7cd766: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cd768u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd768: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd76b: /* 7cd76b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7cd76e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd770: jne 0x7cd786 */
  if (!zf) goto L_7cd786;
L_7cd772: /* 7cd772: push 0x97 */
  { uint32_t v = 0x97u; esp -= 4; W32(esp, v); }
/* 7cd777: push 0xad46e4 */
  { uint32_t v = 0xad46e4u; esp -= 4; W32(esp, v); }
/* 7cd77c: push 0xad46f0 */
  { uint32_t v = 0xad46f0u; esp -= 4; W32(esp, v); }
/* 7cd781: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cd783u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd783: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd786: /* 7cd786: call dword ptr [0xcfa8c4] */
  esp -= 4; W32(esp, 0x7cd78cu); SPILL(); f_4e3d50(); if (g_unwind) return; /* Core!?BeginLoad@UObject@@SAXXZ */ RELOAD();
/* 7cd78c: mov ecx, esi */
  ecx = esi;
/* 7cd78e: call dword ptr [0xcfa850] */
  esp -= 4; W32(esp, 0x7cd794u); SPILL(); f_4e2883(); if (g_unwind) return; /* Core!?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */ RELOAD();
/* 7cd794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd796: jne 0x7cd7ac */
  if (!zf) goto L_7cd7ac;
L_7cd798: /* 7cd798: push 0x9b */
  { uint32_t v = 0x9bu; esp -= 4; W32(esp, v); }
/* 7cd79d: push 0xad46f8 */
  { uint32_t v = 0xad46f8u; esp -= 4; W32(esp, v); }
/* 7cd7a2: push 0xad4704 */
  { uint32_t v = 0xad4704u; esp -= 4; W32(esp, v); }
/* 7cd7a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cd7a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd7a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd7ac: /* 7cd7ac: mov ecx, esi */
  ecx = esi;
/* 7cd7ae: call dword ptr [0xcfa850] */
  esp -= 4; W32(esp, 0x7cd7b4u); SPILL(); f_4e2883(); if (g_unwind) return; /* Core!?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */ RELOAD();
/* 7cd7b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cd7b7: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 7cd7ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd7bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd7bd: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7cd7c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd7c0: xor edi, edi */
  edi = 0;
L_7cd7c2: /* 7cd7c2: cmp edi, dword ptr [ebx + 0x168] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x168u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cd7c8: jge 0x7cd842 */
  if ((sf == of)) goto L_7cd842;
L_7cd7ca: /* 7cd7ca: mov ecx, dword ptr [ebx + 0x164] */
  ecx = R32((uint32_t)(ebx + 0x164u));
/* 7cd7d0: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 7cd7d3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7cd7d6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cd7d8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cd7deu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cd7de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd7df: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cd7e4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cd7e6: push 0xad471c */
  { uint32_t v = 0xad471cu; esp -= 4; W32(esp, v); }
/* 7cd7eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd7ec: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cd7f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cd7f2: mov ecx, dword ptr [ebx + 0x164] */
  ecx = R32((uint32_t)(ebx + 0x164u));
/* 7cd7f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd7fb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cd7fd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cd803u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cd803: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd805: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd807: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cd809: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd80a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd80c: call dword ptr [0xcfa8c0] */
  esp -= 4; W32(esp, 0x7cd812u); SPILL(); f_4e43b8(); if (g_unwind) return; /* Core!?GetPackageLinker@UObject@@SAPAVULinkerLoad@@PAV1@PBGKPAVUPackageMap@@PAVFGuid@@@Z */ RELOAD();
/* 7cd812: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cd815: mov ecx, dword ptr [edx + 0x40] */
  ecx = R32((uint32_t)(edx + 0x40u));
/* 7cd818: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd81a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd81e: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7cd821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd821: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cd824: jne 0x7cd83c */
  if (!zf) goto L_7cd83c;
L_7cd826: /* 7cd826: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cd82b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cd82d: push 0xad4744 */
  { uint32_t v = 0xad4744u; esp -= 4; W32(esp, v); }
/* 7cd832: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cd833: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cd839u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cd839: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd83c: /* 7cd83c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7cd83f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cd840: jmp 0x7cd7c2 */
  goto L_7cd7c2;
L_7cd842: /* 7cd842: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7cd845: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cd848: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 7cd84e: jne 0x7cd864 */
  if (!zf) goto L_7cd864;
L_7cd850: /* 7cd850: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 7cd855: push 0xad4770 */
  { uint32_t v = 0xad4770u; esp -= 4; W32(esp, v); }
/* 7cd85a: push 0xad477c */
  { uint32_t v = 0xad477cu; esp -= 4; W32(esp, v); }
/* 7cd85f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cd861u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd861: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd864: /* 7cd864: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 7cd867: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7cd869: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 7cd86f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd871: jne 0x7cd887 */
  if (!zf) goto L_7cd887;
L_7cd873: /* 7cd873: push 0xa9 */
  { uint32_t v = 0xa9u; esp -= 4; W32(esp, v); }
/* 7cd878: push 0xad4794 */
  { uint32_t v = 0xad4794u; esp -= 4; W32(esp, v); }
/* 7cd87d: push 0xad47a0 */
  { uint32_t v = 0xad47a0u; esp -= 4; W32(esp, v); }
/* 7cd882: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cd884u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd884: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd887: /* 7cd887: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7cd88a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cd88c: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 7cd892: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7cd898u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7cd898: mov ecx, eax */
  ecx = eax;
/* 7cd89a: call dword ptr [0xcfa850] */
  esp -= 4; W32(esp, 0x7cd8a0u); SPILL(); f_4e2883(); if (g_unwind) return; /* Core!?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */ RELOAD();
/* 7cd8a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd8a2: jne 0x7cd8b8 */
  if (!zf) goto L_7cd8b8;
L_7cd8a4: /* 7cd8a4: push 0xaa */
  { uint32_t v = 0xaau; esp -= 4; W32(esp, v); }
/* 7cd8a9: push 0xad47c0 */
  { uint32_t v = 0xad47c0u; esp -= 4; W32(esp, v); }
/* 7cd8ae: push 0xad47cc */
  { uint32_t v = 0xad47ccu; esp -= 4; W32(esp, v); }
/* 7cd8b3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7cd8b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd8b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cd8b8: /* 7cd8b8: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7cd8bb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7cd8bd: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 7cd8c3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7cd8c9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7cd8c9: mov ecx, eax */
  ecx = eax;
/* 7cd8cb: call dword ptr [0xcfa850] */
  esp -= 4; W32(esp, 0x7cd8d1u); SPILL(); f_4e2883(); if (g_unwind) return; /* Core!?GetLinker@UObject@@QAEPAVULinkerLoad@@XZ */ RELOAD();
/* 7cd8d1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cd8d4: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7cd8d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cd8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd8da: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x7cd8ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd8dd: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7cd8e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cd8e2: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x7cd8e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cd8e8: call dword ptr [0xcfa8bc] */
  esp -= 4; W32(esp, 0x7cd8eeu); SPILL(); f_4e375b(); if (g_unwind) return; /* Core!?EndLoad@UObject@@SAXXZ */ RELOAD();
/* 7cd8ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cd8f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cd8f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cd8f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cd8fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cd8fb: mov esp, ebp */
  esp = ebp;
/* 7cd8fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cd8fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7cd901(void) {
  LOAD_REGS();
L_7cd901: /* 7cd901: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cd904: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cd909: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7cd90c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cd90d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cd910: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cd915u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cd915(); return;
}

void f_7cd915(void) {
  LOAD_REGS();
L_7cd915: /* 7cd915: push 0xa0ef68 */
  { uint32_t v = 0xa0ef68u; esp -= 4; W32(esp, v); }
/* 7cd91a: push 0xad4804 */
  { uint32_t v = 0xad4804u; esp -= 4; W32(esp, v); }
/* 7cd91f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cd925u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cd925: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cd928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd92a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cd92c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cd931u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cd931: guest_badaddr(0x7cd931); return;
}

void f_7cd9d0(void) {
  LOAD_REGS();
L_7cd9d0: /* 7cd9d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cd9d1: mov ebp, esp */
  ebp = esp;
/* 7cd9d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cd9d5: push 0x9cfd52 */
  { uint32_t v = 0x9cfd52u; esp -= 4; W32(esp, v); }
/* 7cd9da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cd9e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cd9e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cd9e8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cd9eb: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7cd9ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cd9f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cd9f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cd9f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cd9f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cd9f6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cd9fd: je 0x7cdad1 */
  if (zf) goto L_7cdad1;
L_7cda03: /* 7cda03: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7cda06: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cda08: je 0x7cdad1 */
  if (zf) goto L_7cdad1;
L_7cda0e: /* 7cda0e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7cda11: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7cda14: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 7cda1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cda1c: mov esi, dword ptr [ecx + 0x30] */
  esi = R32((uint32_t)(ecx + 0x30u));
/* 7cda1f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7cda21: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7cda24: jp 0x7cda35 */
  if (pf) goto L_7cda35;
L_7cda26: /* 7cda26: mov ecx, dword ptr [esi + 0x648] */
  ecx = R32((uint32_t)(esi + 0x648u));
/* 7cda2c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cda2e: je 0x7cda35 */
  if (zf) goto L_7cda35;
L_7cda30: /* 7cda30: call 0x6c481d */
  esp -= 4; W32(esp, 0x7cda35u); SPILL(); f_6c481d(); if (g_unwind) return; RELOAD();
L_7cda35: /* 7cda35: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cda38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cda39: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cda3c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7cda42u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7cda42: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 7cda44: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 7cda47: mov byte ptr [ebp + 9], bl */
  W8((uint32_t)(ebp + 0x9u), (ebx & 0xffu));
/* 7cda4a: mov byte ptr [ebp + 0xa], bl */
  W8((uint32_t)(ebp + 0xau), (ebx & 0xffu));
/* 7cda4d: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 7cda50: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cda53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cda54: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cda57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cda58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cda5a: mov ecx, esi */
  ecx = esi;
/* 7cda5c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cda60: call 0x6c245a */
  esp -= 4; W32(esp, 0x7cda65u); SPILL(); f_6c245a(); if (g_unwind) return; RELOAD();
/* 7cda65: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cda68: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cda6c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cda72u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cda72: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7cda75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cda76: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cda79: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7cda7fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7cda7f: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 7cda82: mov byte ptr [ebp + 9], bl */
  W8((uint32_t)(ebp + 0x9u), (ebx & 0xffu));
/* 7cda85: mov byte ptr [ebp + 0xa], bl */
  W8((uint32_t)(ebp + 0xau), (ebx & 0xffu));
/* 7cda88: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 7cda8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cda8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cda8f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cda92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cda93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cda95: mov ecx, esi */
  ecx = esi;
/* 7cda97: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cda9b: call 0x6c245a */
  esp -= 4; W32(esp, 0x7cdaa0u); SPILL(); f_6c245a(); if (g_unwind) return; RELOAD();
/* 7cdaa0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7cdaa3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cdaa7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cdaadu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cdaad: mov eax, dword ptr [0xb7e404] */
  eax = R32((uint32_t)(0xb7e404u));
/* 7cdab2: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7cdab5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cdab7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdab8: mov ecx, esi */
  ecx = esi;
/* 7cdaba: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 7cdabd: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7cdac3u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7cdac3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cdac5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cdac7: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 7cdaca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdacb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdacc: mov ecx, esi */
  ecx = esi;
/* 7cdace: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7cdad1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7cdad1: /* 7cdad1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cdad4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cdad5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cdad6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cdadd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cdade: mov esp, ebp */
  esp = ebp;
/* 7cdae0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cdae1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7cdae4(void) {
  LOAD_REGS();
L_7cdae4: /* 7cdae4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cdae7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cdaec: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7cdaef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdaf0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7cdaf3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cdaf8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cdaf8(); return;
}

void f_7cdaf8(void) {
  LOAD_REGS();
L_7cdaf8: /* 7cdaf8: push 0xa0efbc */
  { uint32_t v = 0xa0efbcu; esp -= 4; W32(esp, v); }
/* 7cdafd: push 0xad4bfc */
  { uint32_t v = 0xad4bfcu; esp -= 4; W32(esp, v); }
/* 7cdb02: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cdb08u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cdb08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdb0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cdb0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cdb0f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cdb14u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cdb14: guest_badaddr(0x7cdb14); return;
}

void f_7cdb80(void) {
  LOAD_REGS();
L_7cdb80: /* 7cdb80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cdb81: mov ebp, esp */
  ebp = esp;
/* 7cdb83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cdb85: push 0x9cfd79 */
  { uint32_t v = 0x9cfd79u; esp -= 4; W32(esp, v); }
/* 7cdb8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cdb90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdb91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cdb98: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cdb9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cdb9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cdb9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cdb9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cdba1: mov esi, ecx */
  esi = ecx;
/* 7cdba3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cdbaa: xor edi, edi */
  edi = 0;
/* 7cdbac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cdbb0: /* 7cdbb0: cmp edi, dword ptr [esi + 0x174] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cdbb6: jge 0x7cdcee */
  if ((sf == of)) goto L_7cdcee;
L_7cdbbc: /* 7cdbbc: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 7cdbc2: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7cdbc5: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cdbc8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cdbceu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cdbce: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cdbd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdbd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdbd3: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7cdbd9u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7cdbd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdbdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdbde: jne 0x7cdce8 */
  if (!zf) goto L_7cdce8;
L_7cdbe4: /* 7cdbe4: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 7cdbea: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 7cdbed: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 7cdbf0: cmp dword ptr [eax + 0x44], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cdbf3: jge 0x7cdc1d */
  if ((sf == of)) goto L_7cdc1d;
L_7cdbf5: /* 7cdbf5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cdbf8: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7cdbfe: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7cdc00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cdc01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdc02: push 0xad5108 */
  { uint32_t v = 0xad5108u; esp -= 4; W32(esp, v); }
/* 7cdc07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdc08: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cdc0eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cdc0e: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7cdc14: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 7cdc17: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdc1a: mov dword ptr [edx + 0x44], ebx */
  W32((uint32_t)(edx + 0x44u), ebx);
L_7cdc1d: /* 7cdc1d: xor ebx, ebx */
  ebx = 0;
/* 7cdc1f: nop  */
L_7cdc20: /* 7cdc20: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 7cdc26: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7cdc29: cmp ebx, dword ptr [eax + 0x38] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cdc2c: jge 0x7cdc83 */
  if ((sf == of)) goto L_7cdc83;
L_7cdc2e: /* 7cdc2e: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 7cdc31: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 7cdc34: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7cdc37: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cdc3du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cdc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdc3e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7cdc41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdc42: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7cdc48u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7cdc48: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdc4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdc4d: jne 0x7cdc80 */
  if (!zf) goto L_7cdc80;
L_7cdc4f: /* 7cdc4f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7cdc52: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cdc55: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cdc5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdc5b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cdc5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdc5e: push 0xad5158 */
  { uint32_t v = 0xad5158u; esp -= 4; W32(esp, v); }
/* 7cdc63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdc64: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cdc6au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cdc6a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cdc6d: /* 7cdc6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cdc70: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cdc77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cdc78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cdc79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cdc7a: mov esp, ebp */
  esp = ebp;
/* 7cdc7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cdc7d: ret 0xc */
  esp += 16; SPILL(); return;
L_7cdc80: /* 7cdc80: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cdc81: jmp 0x7cdc20 */
  goto L_7cdc20;
L_7cdc83: /* 7cdc83: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7cdc86: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cdc89: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cdc8e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cdc90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cdc91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdc92: push 0xad51a4 */
  { uint32_t v = 0xad51a4u; esp -= 4; W32(esp, v); }
/* 7cdc97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdc98: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cdc9eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cdc9e: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 7cdca4: mov edi, dword ptr [edx + edi*4] */
  edi = R32((uint32_t)(edx + edi*4));
/* 7cdca7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdcaa: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7cdcac: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7cdcaf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cdcb1: mov ecx, edi */
  ecx = edi;
/* 7cdcb3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cdcb9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cdcb9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7cdcbb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7cdcbe: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7cdcc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdcc3: je 0x7cdc6d */
  if (zf) goto L_7cdc6d;
L_7cdcc5: /* 7cdcc5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cdcc6: push 0xad51d8 */
  { uint32_t v = 0xad51d8u; esp -= 4; W32(esp, v); }
/* 7cdccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdccc: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7cdcd2u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7cdcd2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdcd5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cdcd8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cdcdf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cdce0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cdce1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cdce2: mov esp, ebp */
  esp = ebp;
/* 7cdce4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cdce5: ret 0xc */
  esp += 16; SPILL(); return;
L_7cdce8: /* 7cdce8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cdce9: jmp 0x7cdbb0 */
  goto L_7cdbb0;
L_7cdcee: /* 7cdcee: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7cdcf1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cdcf4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7cdcfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdcfb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cdcfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdcfe: push 0xad51e0 */
  { uint32_t v = 0xad51e0u; esp -= 4; W32(esp, v); }
/* 7cdd03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdd04: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cdd0au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cdd0a: mov ebx, dword ptr [esi + 0x174] */
  ebx = R32((uint32_t)(esi + 0x174u));
/* 7cdd10: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdd13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cdd15: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7cdd18: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7cdd1eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7cdd1e: mov edi, dword ptr [esi + 0x17c] */
  edi = R32((uint32_t)(esi + 0x17cu));
/* 7cdd24: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7cdd29: mov ecx, 0xcc5bc8 */
  ecx = 0xcc5bc8u;
/* 7cdd2e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7cdd34u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7cdd34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdd36: jne 0x7cdd50 */
  if (!zf) goto L_7cdd50;
L_7cdd38: /* 7cdd38: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7cdd3d: push 0xadb998 */
  { uint32_t v = 0xadb998u; esp -= 4; W32(esp, v); }
/* 7cdd42: push 0xadb9dc */
  { uint32_t v = 0xadb9dcu; esp -= 4; W32(esp, v); }
/* 7cdd47: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7cdd4du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7cdd4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cdd50: /* 7cdd50: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cdd53: jne 0x7cdd5d */
  if (!zf) goto L_7cdd5d;
L_7cdd55: /* 7cdd55: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7cdd5bu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7cdd5b: mov edi, eax */
  edi = eax;
L_7cdd5d: /* 7cdd5d: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7cdd62: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cdd64: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cdd67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cdd69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdd6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cdd6c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cdd6e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdd6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cdd70: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7cdd75: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7cdd7bu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7cdd7b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdd7e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cdd80: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7cdd86: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cdd88: mov ecx, esi */
  ecx = esi;
/* 7cdd8a: mov edi, eax */
  edi = eax;
/* 7cdd8c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cdd92u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cdd92: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cdd95: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cdd97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdd98: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7cdd9b: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7cdd9e: push 0xad521c */
  { uint32_t v = 0xad521cu; esp -= 4; W32(esp, v); }
/* 7cdda3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdda4: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7cddaau); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7cddaa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cddad: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cddaf: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 7cddb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cddb3: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cddb6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cddba: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7cddc0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7cddc0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7cddc3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cddc7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cddcdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7cddcd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cddcf: mov edi, dword ptr [edx + ebx*4] */
  edi = R32((uint32_t)(edx + ebx*4));
/* 7cddd2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7cddd4: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7cddd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cddd9: mov ecx, edi */
  ecx = edi;
/* 7cdddb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cdde1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cdde1: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7cdde3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7cdde6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7cdde9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cddeb: je 0x7cde00 */
  if (zf) goto L_7cde00;
L_7cdded: /* 7cdded: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7cddf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cddf1: push 0xad5224 */
  { uint32_t v = 0xad5224u; esp -= 4; W32(esp, v); }
/* 7cddf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cddf7: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7cddfdu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7cddfd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cde00: /* 7cde00: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7cde02: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 7cde05: mov dword ptr [ecx + 0x40], 1 */
  W32((uint32_t)(ecx + 0x40u), 0x1u);
/* 7cde0c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cde0e: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 7cde11: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7cde14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cde15: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 7cde18: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cde1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cde1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cde23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cde24: mov esp, ebp */
  esp = ebp;
/* 7cde26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cde27: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7cde2a(void) {
  LOAD_REGS();
L_7cde2a: /* 7cde2a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cde2d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cde32: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7cde35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cde36: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7cde39: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cde3eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cde3e(); return;
}

void f_7cde3e(void) {
  LOAD_REGS();
L_7cde3e: /* 7cde3e: push 0xa0eff8 */
  { uint32_t v = 0xa0eff8u; esp -= 4; W32(esp, v); }
/* 7cde43: push 0xad522c */
  { uint32_t v = 0xad522cu; esp -= 4; W32(esp, v); }
/* 7cde48: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cde4eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cde4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cde51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cde53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cde55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cde5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cde5a: guest_badaddr(0x7cde5a); return;
}

void f_7cdf20(void) {
  LOAD_REGS();
L_7cdf20: /* 7cdf20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cdf21: mov ebp, esp */
  ebp = esp;
/* 7cdf23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cdf25: push 0x9cfdb3 */
  { uint32_t v = 0x9cfdb3u; esp -= 4; W32(esp, v); }
/* 7cdf2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cdf30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdf31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cdf38: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cdf3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cdf3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cdf3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cdf3e: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7cdf41: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cdf44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdf45: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cdf48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cdf4f: call dword ptr [0xcfa8cc] */
  esp -= 4; W32(esp, 0x7cdf55u); SPILL(); f_4e247d(); if (g_unwind) return; /* Core!?GetLoaderList@UObject@@SA?AV?$TArray@PAVUObject@@@@XZ */ RELOAD();
/* 7cdf55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cdf58: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cdf5c: xor eax, eax */
  eax = 0;
L_7cdf5e: /* 7cdf5e: cmp eax, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cdf61: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7cdf64: jge 0x7ce27c */
  if ((sf == of)) goto L_7ce27c;
L_7cdf6a: /* 7cdf6a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cdf6d: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7cdf70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdf72: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7cdf75: je 0x7cdf97 */
  if (zf) goto L_7cdf97;
L_7cdf77: /* 7cdf77: mov edx, dword ptr [0xcfa8a8] */
  edx = R32((uint32_t)(0xcfa8a8u));
/* 7cdf7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdf7e: mov ecx, esi */
  ecx = esi;
/* 7cdf80: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cdf86u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cdf86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdf88: jne 0x7cdfc0 */
  if (!zf) goto L_7cdfc0;
L_7cdf8a: /* 7cdf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdf8b: mov ecx, esi */
  ecx = esi;
/* 7cdf8d: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cdf93u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cdf93: mov edi, eax */
  edi = eax;
/* 7cdf95: jmp 0x7cdf9c */
  goto L_7cdf9c;
L_7cdf97: /* 7cdf97: mov edi, 0xadba00 */
  edi = 0xadba00u;
L_7cdf9c: /* 7cdf9c: mov ecx, dword ptr [0xcfa8a8] */
  ecx = R32((uint32_t)(0xcfa8a8u));
/* 7cdfa2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cdfa8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cdfa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdfa9: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7cdfae: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cdfb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cdfb1: push 0xadba0c */
  { uint32_t v = 0xadba0cu; esp -= 4; W32(esp, v); }
/* 7cdfb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdfb7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cdfbdu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cdfbd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cdfc0: /* 7cdfc0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cdfc2: mov ecx, esi */
  ecx = esi;
/* 7cdfc4: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7cdfc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cdfc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdfc9: je 0x7ce273 */
  if (zf) goto L_7ce273;
L_7cdfcf: /* 7cdfcf: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 7cdfd2: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7cdfd5: xor esi, esi */
  esi = 0;
/* 7cdfd7: jmp 0x7cdfe0 */
  goto L_7cdfe0;
L_7cdfe0: /* 7cdfe0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cdfe3: cmp esi, dword ptr [eax + 0x174] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cdfe9: jge 0x7ce025 */
  if ((sf == of)) goto L_7ce025;
L_7cdfeb: /* 7cdfeb: mov ecx, eax */
  ecx = eax;
/* 7cdfed: mov edx, dword ptr [ecx + 0x170] */
  edx = R32((uint32_t)(ecx + 0x170u));
/* 7cdff3: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7cdff6: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cdff9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cdfffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cdfff: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce002: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce005: mov edi, eax */
  edi = eax;
/* 7ce007: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x7ce00du); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 7ce00d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ce00e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce00f: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ce015u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ce015: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce018: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce01a: jne 0x7ce0ac */
  if (!zf) goto L_7ce0ac;
L_7ce020: /* 7ce020: mov ebx, esi */
  ebx = esi;
/* 7ce022: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_7ce025: /* 7ce025: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ce027: jl 0x7ce11a */
  if ((sf != of)) goto L_7ce11a;
L_7ce02d: /* 7ce02d: xor edi, edi */
  edi = 0;
/* 7ce02f: nop  */
L_7ce030: /* 7ce030: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce033: mov ecx, dword ptr [eax + 0x170] */
  ecx = R32((uint32_t)(eax + 0x170u));
/* 7ce039: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7ce03c: cmp edi, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce03f: lea esi, [ebx*4] */
  esi = (uint32_t)(ebx*4);
/* 7ce046: jge 0x7ce0b2 */
  if ((sf == of)) goto L_7ce0b2;
L_7ce048: /* 7ce048: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce04b: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7ce04e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce04f: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce055u); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
/* 7ce055: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce058: mov edx, dword ptr [ecx + 0x170] */
  edx = R32((uint32_t)(ecx + 0x170u));
/* 7ce05e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ce060: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7ce062: mov edx, dword ptr [edx + 0x34] */
  edx = R32((uint32_t)(edx + 0x34u));
/* 7ce065: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7ce068: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 7ce06b: mov ecx, eax */
  ecx = eax;
/* 7ce06d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ce071: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ce077u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ce077: mov ecx, ebx */
  ecx = ebx;
/* 7ce079: mov esi, eax */
  esi = eax;
/* 7ce07b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ce081u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ce081: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce083: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ce089u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ce089: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce08c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce08e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7ce091: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ce094: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ce098: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ce09eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ce09e: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce0a0: jne 0x7ce273 */
  if (!zf) goto L_7ce273;
L_7ce0a6: /* 7ce0a6: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ce0a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ce0aa: jmp 0x7ce030 */
  goto L_7ce030;
L_7ce0ac: /* 7ce0ac: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7ce0ad: jmp 0x7cdfe0 */
  goto L_7cdfe0;
L_7ce0b2: /* 7ce0b2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ce0b4: jl 0x7ce273 */
  if ((sf != of)) goto L_7ce273;
L_7ce0ba: /* 7ce0ba: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce0bd: mov ecx, dword ptr [eax + 0x170] */
  ecx = R32((uint32_t)(eax + 0x170u));
/* 7ce0c3: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7ce0c6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7ce0c8: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ce0cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce0cd: mov ecx, esi */
  ecx = esi;
/* 7ce0cf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ce0d5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ce0d5: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7ce0d8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ce0da: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7ce0dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce0df: je 0x7ce0eb */
  if (zf) goto L_7ce0eb;
L_7ce0e1: /* 7ce0e1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce0e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce0e5: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce0ebu); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
L_7ce0eb: /* 7ce0eb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce0ee: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 7ce0f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce0f3: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7ce0f9u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7ce0f9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ce0ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce100: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ce102: push 0xad52c0 */
  { uint32_t v = 0xad52c0u; esp -= 4; W32(esp, v); }
/* 7ce107: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce108: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce10eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce10e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ce111: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce114: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce115: jmp 0x7cdf5e */
  goto L_7cdf5e;
L_7ce11a: /* 7ce11a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce11d: mov ebx, dword ptr [esi + 0x174] */
  ebx = R32((uint32_t)(esi + 0x174u));
/* 7ce123: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce125: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ce128: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ce12eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ce12e: mov esi, dword ptr [esi + 0x17c] */
  esi = R32((uint32_t)(esi + 0x17cu));
/* 7ce134: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7ce139: mov ecx, 0xcc5bc8 */
  ecx = 0xcc5bc8u;
/* 7ce13e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ce144u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ce144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce146: jne 0x7ce160 */
  if (!zf) goto L_7ce160;
L_7ce148: /* 7ce148: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ce14d: push 0xadb998 */
  { uint32_t v = 0xadb998u; esp -= 4; W32(esp, v); }
/* 7ce152: push 0xadb9dc */
  { uint32_t v = 0xadb9dcu; esp -= 4; W32(esp, v); }
/* 7ce157: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ce15du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ce15d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ce160: /* 7ce160: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce163: jne 0x7ce16d */
  if (!zf) goto L_7ce16d;
L_7ce165: /* 7ce165: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ce16bu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7ce16b: mov esi, eax */
  esi = eax;
L_7ce16d: /* 7ce16d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ce173: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce175: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ce178: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce17a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce17b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce17d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ce17f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce181: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7ce186: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ce18cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ce18c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce18f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce192: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ce194: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ce19a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce19c: mov ecx, esi */
  ecx = esi;
/* 7ce19e: mov edi, eax */
  edi = eax;
/* 7ce1a0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ce1a6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ce1a6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce1a8: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7ce1ab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce1ae: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce1b1: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x7ce1b7u); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 7ce1b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce1b8: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 7ce1bb: push 0xad5304 */
  { uint32_t v = 0xad5304u; esp -= 4; W32(esp, v); }
/* 7ce1c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce1c1: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7ce1c7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7ce1c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce1ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce1cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ce1cd: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 7ce1d0: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce1d3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ce1d7: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7ce1ddu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7ce1dd: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7ce1e0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ce1e4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ce1eau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ce1ea: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce1ec: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 7ce1ef: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7ce1f1: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ce1f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce1f6: mov ecx, edi */
  ecx = edi;
/* 7ce1f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ce1feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ce1fe: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7ce201: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7ce203: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce206: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7ce209: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce20b: je 0x7ce216 */
  if (zf) goto L_7ce216;
L_7ce20d: /* 7ce20d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce20e: mov ecx, edi */
  ecx = edi;
/* 7ce210: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce216u); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
L_7ce216: /* 7ce216: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce218: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7ce21b: xor eax, eax */
  eax = 0;
/* 7ce21d: mov dword ptr [edx + 0x40], eax */
  W32((uint32_t)(edx + 0x40u), eax);
/* 7ce220: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce222: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7ce225: mov dword ptr [edx + 0x44], eax */
  W32((uint32_t)(edx + 0x44u), eax);
/* 7ce228: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 7ce22b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce22c: mov ecx, edi */
  ecx = edi;
/* 7ce22e: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce234u); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
/* 7ce234: mov ecx, eax */
  ecx = eax;
/* 7ce236: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ce23a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ce240u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ce240: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7ce243: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce245: mov esi, eax */
  esi = eax;
/* 7ce247: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7ce24du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7ce24d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ce253: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce255: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce256: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce257: push 0xad5310 */
  { uint32_t v = 0xad5310u; esp -= 4; W32(esp, v); }
/* 7ce25c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce25d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce263u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce263: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce266: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7ce269: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ce26d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ce273u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7ce273: /* 7ce273: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ce276: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce277: jmp 0x7cdf5e */
  goto L_7cdf5e;
L_7ce27c: /* 7ce27c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ce27f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ce283: call 0x6c9dea */
  esp -= 4; W32(esp, 0x7ce288u); SPILL(); f_6c9dea(); if (g_unwind) return; RELOAD();
/* 7ce288: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ce28b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ce28c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ce28d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ce294: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ce295: mov esp, ebp */
  esp = ebp;
/* 7ce297: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ce298: ret  */
  esp += 4; SPILL(); return;
}

void f_7cdfd9(void) {
  LOAD_REGS();
  goto L_7cdfd9;
L_7cdf5e: /* 7cdf5e: cmp eax, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cdf61: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7cdf64: jge 0x7ce27c */
  if ((sf == of)) goto L_7ce27c;
L_7cdf6a: /* 7cdf6a: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cdf6d: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7cdf70: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdf72: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7cdf75: je 0x7cdf97 */
  if (zf) goto L_7cdf97;
L_7cdf77: /* 7cdf77: mov edx, dword ptr [0xcfa8a8] */
  edx = R32((uint32_t)(0xcfa8a8u));
/* 7cdf7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cdf7e: mov ecx, esi */
  ecx = esi;
/* 7cdf80: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cdf86u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cdf86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdf88: jne 0x7cdfc0 */
  if (!zf) goto L_7cdfc0;
L_7cdf8a: /* 7cdf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdf8b: mov ecx, esi */
  ecx = esi;
/* 7cdf8d: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cdf93u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cdf93: mov edi, eax */
  edi = eax;
/* 7cdf95: jmp 0x7cdf9c */
  goto L_7cdf9c;
L_7cdf97: /* 7cdf97: mov edi, 0xadba00 */
  edi = 0xadba00u;
L_7cdf9c: /* 7cdf9c: mov ecx, dword ptr [0xcfa8a8] */
  ecx = R32((uint32_t)(0xcfa8a8u));
/* 7cdfa2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cdfa8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cdfa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cdfa9: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7cdfae: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cdfb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cdfb1: push 0xadba0c */
  { uint32_t v = 0xadba0cu; esp -= 4; W32(esp, v); }
/* 7cdfb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cdfb7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cdfbdu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cdfbd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cdfc0: /* 7cdfc0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cdfc2: mov ecx, esi */
  ecx = esi;
/* 7cdfc4: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7cdfc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cdfc7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cdfc9: je 0x7ce273 */
  if (zf) goto L_7ce273;
L_7cdfcf: /* 7cdfcf: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 7cdfd2: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7cdfd5: xor esi, esi */
  esi = 0;
/* 7cdfd7: jmp 0x7cdfe0 */
  goto L_7cdfe0;
L_7cdfd9: /* 7cdfd9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cdfe0: /* 7cdfe0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cdfe3: cmp esi, dword ptr [eax + 0x174] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cdfe9: jge 0x7ce025 */
  if ((sf == of)) goto L_7ce025;
L_7cdfeb: /* 7cdfeb: mov ecx, eax */
  ecx = eax;
/* 7cdfed: mov edx, dword ptr [ecx + 0x170] */
  edx = R32((uint32_t)(ecx + 0x170u));
/* 7cdff3: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 7cdff6: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cdff9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cdfffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cdfff: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce002: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce005: mov edi, eax */
  edi = eax;
/* 7ce007: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x7ce00du); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 7ce00d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ce00e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce00f: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ce015u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ce015: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce018: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce01a: jne 0x7ce0ac */
  if (!zf) goto L_7ce0ac;
L_7ce020: /* 7ce020: mov ebx, esi */
  ebx = esi;
/* 7ce022: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_7ce025: /* 7ce025: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ce027: jl 0x7ce11a */
  if ((sf != of)) goto L_7ce11a;
L_7ce02d: /* 7ce02d: xor edi, edi */
  edi = 0;
/* 7ce02f: nop  */
L_7ce030: /* 7ce030: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce033: mov ecx, dword ptr [eax + 0x170] */
  ecx = R32((uint32_t)(eax + 0x170u));
/* 7ce039: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7ce03c: cmp edi, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce03f: lea esi, [ebx*4] */
  esi = (uint32_t)(ebx*4);
/* 7ce046: jge 0x7ce0b2 */
  if ((sf == of)) goto L_7ce0b2;
L_7ce048: /* 7ce048: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce04b: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7ce04e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce04f: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce055u); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
/* 7ce055: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce058: mov edx, dword ptr [ecx + 0x170] */
  edx = R32((uint32_t)(ecx + 0x170u));
/* 7ce05e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ce060: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7ce062: mov edx, dword ptr [edx + 0x34] */
  edx = R32((uint32_t)(edx + 0x34u));
/* 7ce065: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7ce068: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 7ce06b: mov ecx, eax */
  ecx = eax;
/* 7ce06d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ce071: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ce077u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ce077: mov ecx, ebx */
  ecx = ebx;
/* 7ce079: mov esi, eax */
  esi = eax;
/* 7ce07b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ce081u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ce081: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce083: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ce089u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ce089: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce08c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce08e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7ce091: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7ce094: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ce098: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ce09eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ce09e: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce0a0: jne 0x7ce273 */
  if (!zf) goto L_7ce273;
L_7ce0a6: /* 7ce0a6: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ce0a9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ce0aa: jmp 0x7ce030 */
  goto L_7ce030;
L_7ce0ac: /* 7ce0ac: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7ce0ad: jmp 0x7cdfe0 */
  goto L_7cdfe0;
L_7ce0b2: /* 7ce0b2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ce0b4: jl 0x7ce273 */
  if ((sf != of)) goto L_7ce273;
L_7ce0ba: /* 7ce0ba: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce0bd: mov ecx, dword ptr [eax + 0x170] */
  ecx = R32((uint32_t)(eax + 0x170u));
/* 7ce0c3: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 7ce0c6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7ce0c8: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ce0cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce0cd: mov ecx, esi */
  ecx = esi;
/* 7ce0cf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ce0d5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ce0d5: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7ce0d8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ce0da: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7ce0dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce0df: je 0x7ce0eb */
  if (zf) goto L_7ce0eb;
L_7ce0e1: /* 7ce0e1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce0e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce0e5: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce0ebu); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
L_7ce0eb: /* 7ce0eb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce0ee: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 7ce0f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce0f3: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7ce0f9u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7ce0f9: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7ce0ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce100: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ce102: push 0xad52c0 */
  { uint32_t v = 0xad52c0u; esp -= 4; W32(esp, v); }
/* 7ce107: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce108: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce10eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce10e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ce111: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce114: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce115: jmp 0x7cdf5e */
  goto L_7cdf5e;
L_7ce11a: /* 7ce11a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce11d: mov ebx, dword ptr [esi + 0x174] */
  ebx = R32((uint32_t)(esi + 0x174u));
/* 7ce123: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce125: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ce128: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ce12eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ce12e: mov esi, dword ptr [esi + 0x17c] */
  esi = R32((uint32_t)(esi + 0x17cu));
/* 7ce134: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7ce139: mov ecx, 0xcc5bc8 */
  ecx = 0xcc5bc8u;
/* 7ce13e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ce144u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ce144: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce146: jne 0x7ce160 */
  if (!zf) goto L_7ce160;
L_7ce148: /* 7ce148: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ce14d: push 0xadb998 */
  { uint32_t v = 0xadb998u; esp -= 4; W32(esp, v); }
/* 7ce152: push 0xadb9dc */
  { uint32_t v = 0xadb9dcu; esp -= 4; W32(esp, v); }
/* 7ce157: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ce15du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ce15d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ce160: /* 7ce160: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce163: jne 0x7ce16d */
  if (!zf) goto L_7ce16d;
L_7ce165: /* 7ce165: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ce16bu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7ce16b: mov esi, eax */
  esi = eax;
L_7ce16d: /* 7ce16d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ce173: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce175: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ce178: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce17a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce17b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce17d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ce17f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce181: push 0xcc5bc8 */
  { uint32_t v = 0xcc5bc8u; esp -= 4; W32(esp, v); }
/* 7ce186: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ce18cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ce18c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce18f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce192: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ce194: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ce19a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce19c: mov ecx, esi */
  ecx = esi;
/* 7ce19e: mov edi, eax */
  edi = eax;
/* 7ce1a0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ce1a6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ce1a6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce1a8: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7ce1ab: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce1ae: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce1b1: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x7ce1b7u); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 7ce1b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce1b8: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 7ce1bb: push 0xad5304 */
  { uint32_t v = 0xad5304u; esp -= 4; W32(esp, v); }
/* 7ce1c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce1c1: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7ce1c7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7ce1c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce1ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce1cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ce1cd: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 7ce1d0: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce1d3: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ce1d7: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7ce1ddu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7ce1dd: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 7ce1e0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ce1e4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ce1eau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ce1ea: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce1ec: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 7ce1ef: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7ce1f1: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7ce1f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce1f6: mov ecx, edi */
  ecx = edi;
/* 7ce1f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ce1feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ce1fe: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7ce201: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7ce203: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce206: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 7ce209: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce20b: je 0x7ce216 */
  if (zf) goto L_7ce216;
L_7ce20d: /* 7ce20d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce20e: mov ecx, edi */
  ecx = edi;
/* 7ce210: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce216u); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
L_7ce216: /* 7ce216: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce218: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7ce21b: xor eax, eax */
  eax = 0;
/* 7ce21d: mov dword ptr [edx + 0x40], eax */
  W32((uint32_t)(edx + 0x40u), eax);
/* 7ce220: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce222: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 7ce225: mov dword ptr [edx + 0x44], eax */
  W32((uint32_t)(edx + 0x44u), eax);
/* 7ce228: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 7ce22b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce22c: mov ecx, edi */
  ecx = edi;
/* 7ce22e: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7ce234u); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
/* 7ce234: mov ecx, eax */
  ecx = eax;
/* 7ce236: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ce23a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ce240u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ce240: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7ce243: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce245: mov esi, eax */
  esi = eax;
/* 7ce247: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7ce24du); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7ce24d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ce253: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce255: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce256: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce257: push 0xad5310 */
  { uint32_t v = 0xad5310u; esp -= 4; W32(esp, v); }
/* 7ce25c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce25d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce263u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce263: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce266: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7ce269: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ce26d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ce273u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7ce273: /* 7ce273: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ce276: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce277: jmp 0x7cdf5e */
  goto L_7cdf5e;
L_7ce27c: /* 7ce27c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ce27f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ce283: call 0x6c9dea */
  esp -= 4; W32(esp, 0x7ce288u); SPILL(); f_6c9dea(); if (g_unwind) return; RELOAD();
/* 7ce288: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ce28b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ce28c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ce28d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ce294: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ce295: mov esp, ebp */
  esp = ebp;
/* 7ce297: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ce298: ret  */
  esp += 4; SPILL(); return;
}

void f_7ce299(void) {
  LOAD_REGS();
L_7ce299: /* 7ce299: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ce29c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ce2a1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7ce2a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ce2a5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7ce2a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ce2adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ce2ad(); return;
}

void f_7ce2ad(void) {
  LOAD_REGS();
L_7ce2ad: /* 7ce2ad: push 0xa0f028 */
  { uint32_t v = 0xa0f028u; esp -= 4; W32(esp, v); }
/* 7ce2b2: push 0xad5374 */
  { uint32_t v = 0xad5374u; esp -= 4; W32(esp, v); }
/* 7ce2b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ce2bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ce2bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce2c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce2c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce2c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ce2c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ce2c9: guest_badaddr(0x7ce2c9); return;
}

void f_7ce3c0(void) {
  LOAD_REGS();
  extern uint32_t g_lotd_viewport;
  uint32_t cur_vp = R32(esp + 4);
  if (cur_vp && cur_vp != g_lotd_viewport) {
      g_lotd_viewport = cur_vp;
  }
L_7ce3c0: /* 7ce3c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ce3c1: mov ebp, esp */
  ebp = esp;
/* 7ce3c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ce3c5: push 0x9cfe2c */
  { uint32_t v = 0x9cfe2cu; esp -= 4; W32(esp, v); }
/* 7ce3ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ce3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce3d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ce3d8: sub esp, 0x2ec */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2ecu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce3de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ce3df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce3e0: mov esi, dword ptr [0xcfafa4] */
  esi = R32((uint32_t)(0xcfafa4u));
/* 7ce3e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ce3e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ce3ea: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7ce3ed: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ce3f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ce3f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce3f6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce3f8: je 0x7ce415 */
  if (zf) goto L_7ce415;
L_7ce3fa: /* 7ce3fa: call dword ptr [0xcfafa8] */
  esp -= 4; W32(esp, 0x7ce400u); SPILL(); f_d511e5(); if (g_unwind) return; /* EngineEx!?Bink_Manager_Tick@@YAXXZ */ RELOAD();
/* 7ce400: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ce402u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ce402: /* 7ce402: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ce405: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ce40c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ce40d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ce40e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ce40f: mov esp, ebp */
  esp = ebp;
/* 7ce411: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ce412: ret 0x10 */
  esp += 20; SPILL(); return;
L_7ce415: /* 7ce415: mov eax, dword ptr [0xcfa78c] */
  eax = R32((uint32_t)(0xcfa78cu));
/* 7ce41a: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce41d: je 0x7ce402 */
  if (zf) goto L_7ce402;
L_7ce41f: /* 7ce41f: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7ce425: mov edx, dword ptr [0xce8318] */
  edx = R32((uint32_t)(0xce8318u));
/* 7ce42b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7ce42e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ce430: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7ce432: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce435: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ce438: mov eax, ecx */
  eax = ecx;
/* 7ce43a: lea edx, [eax + 0x170] */
  edx = (uint32_t)(eax + 0x170u);
/* 7ce440: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7ce442: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7ce445: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 7ce448: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7ce44b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7ce44e: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ce453: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 7ce456: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ce458: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7ce45b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7ce45e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ce461: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7ce464: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ce467: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce468: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7ce46b: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 7ce46e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce46f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ce472: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce473: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 7ce476: call 0x6c204a */
  esp -= 4; W32(esp, 0x7ce47bu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7ce47b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ce47e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce480: mov edi, dword ptr [0xcfa884] */
  edi = R32((uint32_t)(0xcfa884u));
/* 7ce486: jne 0x7ce4b5 */
  if (!zf) goto L_7ce4b5;
L_7ce488: /* 7ce488: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce48b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ce48e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce490: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce492: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ce494u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce494: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ce49a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce49c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce49d: push 0xadb168 */
  { uint32_t v = 0xadb168u; esp -= 4; W32(esp, v); }
/* 7ce4a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce4a3: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce4a9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce4a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce4ac: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ce4af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce4b2: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
L_7ce4b5: /* 7ce4b5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ce4b8: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7ce4bb: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 7ce4c1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ce4c4: cmp edx, dword ptr [ecx + 0x108] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x108u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce4ca: jne 0x7ce402 */
  if (!zf) goto L_7ce402;
L_7ce4d0: /* 7ce4d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ce4d2: call dword ptr [eax + 0xe4] */
  { uint32_t t = R32((uint32_t)(eax + 0xe4u)); esp -= 4; W32(esp, 0x7ce4d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce4d8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce4db: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 7ce4de: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 7ce4e1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce4e3: je 0x7ce511 */
  if (zf) goto L_7ce511;
L_7ce4e5: /* 7ce4e5: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 7ce4e8: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 7ce4ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce4f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce4f2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ce4f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce4f4: push 0xadb1e4 */
  { uint32_t v = 0xadb1e4u; esp -= 4; W32(esp, v); }
/* 7ce4f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce4fa: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7ce500u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7ce500: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce503: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce505: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce508: jne 0x7ce511 */
  if (!zf) goto L_7ce511;
L_7ce50a: /* 7ce50a: mov ebx, 1 */
  ebx = 0x1u;
/* 7ce50f: jmp 0x7ce513 */
  goto L_7ce513;
L_7ce511: /* 7ce511: xor ebx, ebx */
  ebx = 0;
L_7ce513: /* 7ce513: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ce516: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7ce51c: mov dl, byte ptr [ecx + 0x4bc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x4bcu))) & 0xffu);
/* 7ce522: mov eax, dword ptr [eax + 0x70] */
  eax = R32((uint32_t)(eax + 0x70u));
/* 7ce525: mov byte ptr [ebp - 0x1d], dl */
  W8((uint32_t)(ebp + 0xffffffe3u), (edx & 0xffu));
/* 7ce528: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 7ce52b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce52d: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 7ce530: je 0x7ce539 */
  if (zf) goto L_7ce539;
L_7ce532: /* 7ce532: mov byte ptr [ecx + 0x4bc], 4 */
  W8((uint32_t)(ecx + 0x4bcu), 0x4u);
L_7ce539: /* 7ce539: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ce53bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce53b: xor esi, esi */
  esi = 0;
/* 7ce53d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce53f: jne 0x7ce55d */
  if (!zf) goto L_7ce55d;
L_7ce541: /* 7ce541: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce543: jne 0x7ce55d */
  if (!zf) goto L_7ce55d;
L_7ce545: /* 7ce545: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce548: cmp dword ptr [ecx + 0x158], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x158u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce54e: je 0x7ce560 */
  if (zf) goto L_7ce560;
L_7ce550: /* 7ce550: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 7ce553: cmp dword ptr [edx + 0x44], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x44u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce556: jne 0x7ce560 */
  if (!zf) goto L_7ce560;
L_7ce558: /* 7ce558: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ce55a: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x7ce55du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ce55d: /* 7ce55d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_7ce560: /* 7ce560: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 7ce563: cmp dword ptr [edx + 0x44], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x44u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce566: je 0x7ce9be */
  if (zf) goto L_7ce9be;
L_7ce56c: /* 7ce56c: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ce56f: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ce575: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce577: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ce579u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce579: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ce57f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce582: push 0xadb208 */
  { uint32_t v = 0xadb208u; esp -= 4; W32(esp, v); }
/* 7ce587: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce588: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce58eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce58e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce591: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 7ce594: mov dword ptr [ecx + 0x44], esi */
  W32((uint32_t)(ecx + 0x44u), esi);
/* 7ce597: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ce59a: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7ce59d: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ce5a3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce5a6: call 0x6c4679 */
  esp -= 4; W32(esp, 0x7ce5abu); SPILL(); f_6c4679(); if (g_unwind) return; RELOAD();
/* 7ce5ab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce5ae: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7ce5b1: mov ecx, dword ptr [edx + 0xb0] */
  ecx = R32((uint32_t)(edx + 0xb0u));
/* 7ce5b7: call 0x6c9336 */
  esp -= 4; W32(esp, 0x7ce5bcu); SPILL(); f_6c9336(); if (g_unwind) return; RELOAD();
/* 7ce5bc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce5bf: mov dword ptr [eax + 0x154], 1 */
  W32((uint32_t)(eax + 0x154u), 0x1u);
/* 7ce5c9: call 0x6c44ad */
  esp -= 4; W32(esp, 0x7ce5ceu); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 7ce5ce: fstp qword ptr [ebp - 0x88] */
  WF64((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7ce5d4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ce5d7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce5da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce5dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce5dd: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7ce5e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce5e1: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7ce5e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce5e4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce5e6: je 0x7ce7e5 */
  if (zf) goto L_7ce7e5;
L_7ce5ec: /* 7ce5ec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce5ef: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ce5f2: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7ce5f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce5f9: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ce5fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce5ff: mov ecx, esp */
  ecx = esp;
/* 7ce601: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ce603: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ce606: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ce609: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ce60c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ce60f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ce612: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce615: mov ecx, esp */
  ecx = esp;
/* 7ce617: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ce619: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7ce61c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ce61f: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7ce622: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ce625: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ce628: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ce629: lea edx, [eax + 0xd0] */
  edx = (uint32_t)(eax + 0xd0u);
/* 7ce62f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce631: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce637: call 0x6c74a5 */
  esp -= 4; W32(esp, 0x7ce63cu); SPILL(); f_6c74a5(); if (g_unwind) return; RELOAD();
/* 7ce63c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce63f: lea eax, [ebp - 0x2b8] */
  eax = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce645: mov dword ptr [ecx + 0x14c], eax */
  W32((uint32_t)(ecx + 0x14cu), eax);
/* 7ce64b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ce64e: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 7ce654: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ce656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce657: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ce65b: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x7ce65eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce65e: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce660: jne 0x7ce677 */
  if (!zf) goto L_7ce677;
L_7ce662: /* 7ce662: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce665: mov edx, dword ptr [ecx + 0x148] */
  edx = R32((uint32_t)(ecx + 0x148u));
/* 7ce66b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce66c: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce672: call 0x6c132a */
  esp -= 4; W32(esp, 0x7ce677u); SPILL(); f_6c132a(); if (g_unwind) return; RELOAD();
L_7ce677: /* 7ce677: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ce67a: xor eax, eax */
  eax = 0;
L_7ce67c: /* 7ce67c: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7ce67f: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7ce685: cmp eax, dword ptr [ecx + 0x544] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x544u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce68b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ce68e: jge 0x7ce7a3 */
  if ((sf == of)) goto L_7ce7a3;
L_7ce694: /* 7ce694: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7ce697: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7ce69d: mov ecx, dword ptr [ecx + 0x540] */
  ecx = R32((uint32_t)(ecx + 0x540u));
/* 7ce6a3: mov ebx, dword ptr [ecx + eax*4] */
  ebx = R32((uint32_t)(ecx + eax*4));
/* 7ce6a6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce6a8: je 0x7ce795 */
  if (zf) goto L_7ce795;
L_7ce6ae: /* 7ce6ae: lea eax, [ebx + 0x60] */
  eax = (uint32_t)(ebx + 0x60u);
/* 7ce6b1: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7ce6b4: xor eax, eax */
  eax = 0;
/* 7ce6b6: mov ecx, 8 */
  ecx = 0x8u;
/* 7ce6bb: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 7ce6be: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7ce6c0: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 7ce6c3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce6c5: mov eax, 1 */
  eax = 0x1u;
/* 7ce6ca: je 0x7ce795 */
  if (zf) goto L_7ce795;
L_7ce6d0: /* 7ce6d0: mov ecx, dword ptr [ebx + 0x128] */
  ecx = R32((uint32_t)(ebx + 0x128u));
/* 7ce6d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce6d8: je 0x7ce6ec */
  if (zf) goto L_7ce6ec;
L_7ce6da: /* 7ce6da: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 7ce6e0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce6e2: je 0x7ce704 */
  if (zf) goto L_7ce704;
L_7ce6e4: /* 7ce6e4: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 7ce6e7: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7ce6ea: jmp 0x7ce6ff */
  goto L_7ce6ff;
L_7ce6ec: /* 7ce6ec: mov ecx, dword ptr [ebx + 0xa0] */
  ecx = R32((uint32_t)(ebx + 0xa0u));
/* 7ce6f2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce6f4: je 0x7ce704 */
  if (zf) goto L_7ce704;
L_7ce6f6: /* 7ce6f6: lea eax, [ebx + 0x98] */
  eax = (uint32_t)(ebx + 0x98u);
/* 7ce6fc: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
L_7ce6ff: /* 7ce6ff: mov eax, 2 */
  eax = 0x2u;
L_7ce704: /* 7ce704: xor ecx, ecx */
  ecx = 0;
L_7ce706: /* 7ce706: cmp ecx, dword ptr [ebx + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce70c: jge 0x7ce723 */
  if ((sf == of)) goto L_7ce723;
L_7ce70e: /* 7ce70e: mov edi, dword ptr [ebx + 0xb4] */
  edi = R32((uint32_t)(ebx + 0xb4u));
/* 7ce714: mov esi, ecx */
  esi = ecx;
/* 7ce716: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7ce719: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ce71b: mov dword ptr [ebp + eax*4 - 0x64], esi */
  W32((uint32_t)(ebp + eax*4 + 0xffffff9cu), esi);
/* 7ce71f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce720: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7ce721: jmp 0x7ce706 */
  goto L_7ce706;
L_7ce723: /* 7ce723: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 7ce729: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce72b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce72c: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 7ce72f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce730: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce732: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x7ce735u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce735: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce738: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7ce73e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce740: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ce742: lea eax, [ebx + 0xc0] */
  eax = (uint32_t)(ebx + 0xc0u);
/* 7ce748: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce749: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7ce74cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce74c: xor edi, edi */
  edi = 0;
/* 7ce74e: mov edi, edi */
  edi = edi;
L_7ce750: /* 7ce750: cmp edi, dword ptr [ebx + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce756: jge 0x7ce792 */
  if ((sf == of)) goto L_7ce792;
L_7ce758: /* 7ce758: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 7ce75e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7ce761: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7ce764: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce767: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7ce76a: mov esi, dword ptr [edx + 0xb0] */
  esi = R32((uint32_t)(edx + 0xb0u));
/* 7ce770: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ce772: add esi, 0x534 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ce778: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce77a: mov ecx, esi */
  ecx = esi;
/* 7ce77c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ce77f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ce785u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ce785: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ce788: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ce78a: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7ce78c: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7ce78f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ce790: jmp 0x7ce750 */
  goto L_7ce750;
L_7ce792: /* 7ce792: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7ce795: /* 7ce795: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ce798: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ce79b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce79c: xor esi, esi */
  esi = 0;
/* 7ce79e: jmp 0x7ce67c */
  goto L_7ce67c;
L_7ce7a3: /* 7ce7a3: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7ce7a6: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ce7ac: add ecx, 0x540 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x540u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce7b2: xor eax, eax */
  eax = 0;
L_7ce7b4: /* 7ce7b4: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce7b7: jge 0x7ce7bc */
  if ((sf == of)) goto L_7ce7bc;
L_7ce7b9: /* 7ce7b9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce7ba: jmp 0x7ce7b4 */
  goto L_7ce7b4;
L_7ce7bc: /* 7ce7bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce7bd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ce7bf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7ce7c5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7ce7c5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce7c8: mov dword ptr [ecx + 0x14c], esi */
  W32((uint32_t)(ecx + 0x14cu), esi);
/* 7ce7ce: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce7d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce7d3: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7ce7d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce7d6: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce7dc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ce7e0: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7ce7e5u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
L_7ce7e5: /* 7ce7e5: call 0x6c44ad */
  esp -= 4; W32(esp, 0x7ce7eau); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 7ce7ea: fsub qword ptr [ebp - 0x88] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffff78u)));
/* 7ce7f0: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7ce7f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ce7f7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce7fa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7ce7fd: push 0xadb228 */
  { uint32_t v = 0xadb228u; esp -= 4; W32(esp, v); }
/* 7ce802: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ce803: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce809u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce809: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce80c: call 0x6c44ad */
  esp -= 4; W32(esp, 0x7ce811u); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 7ce811: fstp qword ptr [ebp - 0x88] */
  WF64((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7ce817: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ce81a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce81d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce820: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7ce823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce824: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7ce827u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce827: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce829: je 0x7ce931 */
  if (zf) goto L_7ce931;
L_7ce82f: /* 7ce82f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce832: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ce835: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7ce83b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce83c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ce83f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce842: mov ecx, esp */
  ecx = esp;
/* 7ce844: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ce846: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ce849: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ce84c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ce84f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ce852: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7ce855: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce858: mov ecx, esp */
  ecx = esp;
/* 7ce85a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ce85c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7ce85f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ce862: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7ce865: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ce868: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ce86b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ce86c: lea edx, [eax + 0xd0] */
  edx = (uint32_t)(eax + 0xd0u);
/* 7ce872: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce874: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce87a: call 0x6c74a5 */
  esp -= 4; W32(esp, 0x7ce87fu); SPILL(); f_6c74a5(); if (g_unwind) return; RELOAD();
/* 7ce87f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce882: lea eax, [ebp - 0x2b8] */
  eax = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce888: mov dword ptr [ecx + 0x14c], eax */
  W32((uint32_t)(ecx + 0x14cu), eax);
/* 7ce88e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ce891: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 7ce897: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ce899: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ce89b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ce89f: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x7ce8a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce8a2: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce8a4: jne 0x7ce8bb */
  if (!zf) goto L_7ce8bb;
L_7ce8a6: /* 7ce8a6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce8a9: mov edx, dword ptr [ecx + 0x148] */
  edx = R32((uint32_t)(ecx + 0x148u));
/* 7ce8af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce8b0: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce8b6: call 0x6c132a */
  esp -= 4; W32(esp, 0x7ce8bbu); SPILL(); f_6c132a(); if (g_unwind) return; RELOAD();
L_7ce8bb: /* 7ce8bb: xor edi, edi */
  edi = 0;
/* 7ce8bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7ce8c0: /* 7ce8c0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce8c3: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ce8c6: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 7ce8cc: cmp edi, dword ptr [eax + 0x538] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x538u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce8d2: jge 0x7ce8ef */
  if ((sf == of)) goto L_7ce8ef;
L_7ce8d4: /* 7ce8d4: mov eax, dword ptr [eax + 0x534] */
  eax = R32((uint32_t)(eax + 0x534u));
/* 7ce8da: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7ce8e0: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 7ce8e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce8e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce8e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce8e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce8e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce8e9: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7ce8ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce8ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ce8ed: jmp 0x7ce8c0 */
  goto L_7ce8c0;
L_7ce8ef: /* 7ce8ef: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7ce8f2: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7ce8f8: add ecx, 0x534 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ce8fe: xor eax, eax */
  eax = 0;
L_7ce900: /* 7ce900: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ce903: jge 0x7ce908 */
  if ((sf == of)) goto L_7ce908;
L_7ce905: /* 7ce905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ce906: jmp 0x7ce900 */
  goto L_7ce900;
L_7ce908: /* 7ce908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ce909: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ce90b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7ce911u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7ce911: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ce914: mov dword ptr [edx + 0x14c], esi */
  W32((uint32_t)(edx + 0x14cu), esi);
/* 7ce91a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce91d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ce91f: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7ce922u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce922: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7ce928: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ce92c: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7ce931u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
L_7ce931: /* 7ce931: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ce933: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7ce936: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7ce939: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7ce93c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ce93f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ce941: jge 0x7ce949 */
  if ((sf == of)) goto L_7ce949;
L_7ce943: /* 7ce943: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7ce949: /* 7ce949: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ce94c: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 7ce952: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ce954: fild dword ptr [ebp - 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7ce957: jge 0x7ce95f */
  if ((sf == of)) goto L_7ce95f;
L_7ce959: /* 7ce959: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7ce95f: /* 7ce95f: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 7ce964: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ce966: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7ce96c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce96e: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 7ce970: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce973: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 7ce979: fsub qword ptr [ebp - 0x88] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffff78u)));
/* 7ce97f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7ce982: push 0xadb288 */
  { uint32_t v = 0xadb288u; esp -= 4; W32(esp, v); }
/* 7ce987: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ce988: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7ce98eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7ce98e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce991: mov dword ptr [eax + 0x154], esi */
  W32((uint32_t)(eax + 0x154u), esi);
/* 7ce997: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ce99a: mov dword ptr [ecx + 0x158], esi */
  W32((uint32_t)(ecx + 0x158u), esi);
/* 7ce9a0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ce9a3: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7ce9a6: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 7ce9ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ce9af: mov dword ptr [ecx + 0x100], 1 */
  W32((uint32_t)(ecx + 0x100u), 0x1u);
/* 7ce9b9: jmp 0x7cf0d0 */
  goto L_7cf0d0;
L_7ce9be: /* 7ce9be: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ce9c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ce9c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce9c4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7ce9c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ce9c8: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x7ce9cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ce9cb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ce9cd: je 0x7cf0d0 */
  if (zf) goto L_7cf0d0;
L_7ce9d3: /* 7ce9d3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ce9d6: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7ce9d9: test dword ptr [ecx + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ce9e3: je 0x7cef65 */
  if (zf) goto L_7cef65;
L_7ce9e9: /* 7ce9e9: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7ce9ec: lea ebx, [ecx + 0x5a0] */
  ebx = (uint32_t)(ecx + 0x5a0u);
/* 7ce9f2: fchs  */
  ST0 = -ST0;
/* 7ce9f4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ce9f7: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 7ce9fa: mov ecx, esp */
  ecx = esp;
/* 7ce9fc: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7ce9ff: fchs  */
  ST0 = -ST0;
/* 7cea01: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7cea04: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7cea07: fchs  */
  ST0 = -ST0;
/* 7cea09: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 7cea0f: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 7cea15: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7cea17: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 7cea1d: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7cea23: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7cea26: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 7cea2c: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7cea32: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7cea35: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7cea38: call 0x6cb389 */
  esp -= 4; W32(esp, 0x7cea3du); SPILL(); f_6cb389(); if (g_unwind) return; RELOAD();
/* 7cea3d: mov esi, eax */
  esi = eax;
/* 7cea3f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7cea44: mov edi, ebx */
  edi = ebx;
/* 7cea46: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7cea48: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7cea4b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7cea51u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7cea51: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cea54: mov ecx, esi */
  ecx = esi;
/* 7cea56: call 0x6c8a1c */
  esp -= 4; W32(esp, 0x7cea5bu); SPILL(); f_6c8a1c(); if (g_unwind) return; RELOAD();
/* 7cea5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cea5d: jne 0x7ceae8 */
  if (!zf) goto L_7ceae8;
L_7cea63: /* 7cea63: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7cea66: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7cea69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cea6c: mov eax, esp */
  eax = esp;
/* 7cea6e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7cea70: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7cea73: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7cea76: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7cea79: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7cea7f: call 0x6c818e */
  esp -= 4; W32(esp, 0x7cea84u); SPILL(); f_6c818e(); if (g_unwind) return; RELOAD();
/* 7cea84: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7cea89: mov esi, eax */
  esi = eax;
/* 7cea8b: lea edi, [ebp - 0x2f8] */
  edi = (uint32_t)(ebp + 0xfffffd08u);
/* 7cea91: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7cea93: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cea96: mov edi, esp */
  edi = esp;
/* 7cea98: mov esi, eax */
  esi = eax;
/* 7cea9a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7cea9f: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 7ceaa2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ceaa4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ceaa5: mov ecx, ebx */
  ecx = ebx;
/* 7ceaa7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ceaab: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7ceab1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7ceab1: mov esi, eax */
  esi = eax;
/* 7ceab3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7ceab8: mov edi, ebx */
  edi = ebx;
/* 7ceaba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ceabc: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7ceabf: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7ceac5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7ceac5: lea ecx, [ebp - 0x2f8] */
  ecx = (uint32_t)(ebp + 0xfffffd08u);
/* 7ceacb: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ceacf: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7cead5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7cead5: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7ceadb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ceadf: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7ceae5u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7ceae5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7ceae8: /* 7ceae8: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7ceaeb: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 7ceaf1: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ceaf4: jne 0x7ceb84 */
  if (!zf) goto L_7ceb84;
L_7ceafa: /* 7ceafa: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 7ceb00: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7ceb03: fld dword ptr [esi + 0x94] */
  { double v = F32((uint32_t)(esi + 0x94u)); FPUSH(v); }
/* 7ceb09: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 7ceb0c: fchs  */
  ST0 = -ST0;
/* 7ceb0e: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7ceb15: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 7ceb18: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7ceb1f: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7ceb26: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7ceb29: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7ceb30: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7ceb37: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7ceb3e: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7ceb45: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7ceb4c: mov dword ptr [ebp - 0x58], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xbf800000u);
/* 7ceb53: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7ceb5a: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7ceb61: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7ceb68: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 7ceb6f: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ceb72: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 7ceb78: mov edi, esp */
  edi = esp;
/* 7ceb7a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7ceb7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ceb7f: jmp 0x7ced34 */
  goto L_7ced34;
L_7ceb84: /* 7ceb84: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ceb87: jne 0x7cec1f */
  if (!zf) goto L_7cec1f;
L_7ceb8d: /* 7ceb8d: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* 7ceb93: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7ceb96: fld dword ptr [esi + 0x94] */
  { double v = F32((uint32_t)(esi + 0x94u)); FPUSH(v); }
/* 7ceb9c: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 7ceb9f: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7ceba2: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7ceba9: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7cebb0: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7cebb3: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7cebba: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7cebc1: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7cebc8: mov dword ptr [ebp - 0x68], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffff98u), 0xbf800000u);
/* 7cebcf: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7cebd6: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7cebdd: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 7cebe4: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7cebeb: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7cebf2: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7cebf9: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 7cec00: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cec03: mov edi, esp */
  edi = esp;
/* 7cec05: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7cec0a: lea esi, [ebp - 0x80] */
  esi = (uint32_t)(ebp + 0xffffff80u);
/* 7cec0d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7cec0f: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7cec15: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7cec19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cec1a: jmp 0x7ced3e */
  goto L_7ced3e;
L_7cec1f: /* 7cec1f: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cec22: jne 0x7cecb0 */
  if (!zf) goto L_7cecb0;
L_7cec28: /* 7cec28: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7cec2b: fld dword ptr [esi + 0x94] */
  { double v = F32((uint32_t)(esi + 0x94u)); FPUSH(v); }
/* 7cec31: fld dword ptr [esi + 0x90] */
  { double v = F32((uint32_t)(esi + 0x90u)); FPUSH(v); }
/* 7cec37: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 7cec3e: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7cec41: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7cec48: mov dword ptr [ebp - 0x78], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x3f800000u);
/* 7cec4f: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7cec52: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7cec59: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7cec60: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7cec63: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7cec6a: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7cec71: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7cec78: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 7cec7f: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7cec86: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7cec8d: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7cec94: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 7cec9b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cec9e: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 7ceca4: mov edi, esp */
  edi = esp;
/* 7ceca6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7cecaa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cecab: jmp 0x7ced34 */
  goto L_7ced34;
L_7cecb0: /* 7cecb0: fld dword ptr [esi + 0x94] */
  { double v = F32((uint32_t)(esi + 0x94u)); FPUSH(v); }
/* 7cecb6: fld dword ptr [esi + 0x90] */
  { double v = F32((uint32_t)(esi + 0x90u)); FPUSH(v); }
/* 7cecbc: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 7cecc3: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 7cecc6: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7ceccd: mov dword ptr [ebp - 0x78], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x3f800000u);
/* 7cecd4: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 7cecd7: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7cecde: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 7cece5: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7cecec: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 7cecf3: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 7cecfa: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 7ced01: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7ced08: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7ced0f: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7ced16: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7ced1d: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 7ced24: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ced27: lea eax, [ebp - 0xd4] */
  eax = (uint32_t)(ebp + 0xffffff2cu);
/* 7ced2d: mov edi, esp */
  edi = esp;
/* 7ced2f: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7ced33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7ced34: /* 7ced34: lea esi, [ebp - 0x80] */
  esi = (uint32_t)(ebp + 0xffffff80u);
/* 7ced37: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7ced3c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7ced3e: /* 7ced3e: mov ecx, ebx */
  ecx = ebx;
/* 7ced40: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7ced46u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7ced46: mov esi, eax */
  esi = eax;
/* 7ced48: mov edi, ebx */
  edi = ebx;
/* 7ced4a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7ced4f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ced51: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 7ced57: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7ced5du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7ced5d: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7ced60: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ced64: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7ced6au); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7ced6a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ced6d: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 7ced70: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7ced76: lea edx, [eax + 0x588] */
  edx = (uint32_t)(eax + 0x588u);
/* 7ced7c: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7ced7e: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 7ced81: mov edi, dword ptr [edx + 8] */
  edi = R32((uint32_t)(edx + 0x8u));
/* 7ced84: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ced89: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7ced8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ced8d: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7ced90: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7ced93: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7ced96: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ced98: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ced9d: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7ceda0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ceda2: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7ceda6: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 7cedaa: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 7cedae: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7cedb2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cedb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cedb6: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7cedb9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cedbb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cedbd: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7cedc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cedc0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_7cedc3: /* 7cedc3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7cedc6: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7cedcc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cedcd: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7cedd0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cedd3: mov ecx, esp */
  ecx = esp;
/* 7cedd5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7cedd7: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7cedda: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ceddd: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7cede0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7cede3: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7cede6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cede9: mov ecx, esp */
  ecx = esp;
/* 7cedeb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7ceded: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7cedf0: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7cedf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cedf4: lea ecx, [eax + 0xd0] */
  ecx = (uint32_t)(eax + 0xd0u);
/* 7cedfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cedfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cedfc: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7cee02: call 0x6c74a5 */
  esp -= 4; W32(esp, 0x7cee07u); SPILL(); f_6c74a5(); if (g_unwind) return; RELOAD();
/* 7cee07: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cee0a: lea edx, [ebp - 0x2b8] */
  edx = (uint32_t)(ebp + 0xfffffd48u);
/* 7cee10: mov dword ptr [eax + 0x14c], edx */
  W32((uint32_t)(eax + 0x14cu), edx);
/* 7cee16: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cee19: mov esi, dword ptr [ecx + 0x148] */
  esi = R32((uint32_t)(ecx + 0x148u));
/* 7cee1f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7cee21: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7cee25: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7cee29: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 7cee2d: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 7cee31: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7cee35: call 0x6c3549 */
  esp -= 4; W32(esp, 0x7cee3au); SPILL(); f_6c3549(); if (g_unwind) return; RELOAD();
/* 7cee3a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cee3d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7cee3f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7cee41: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7cee44: not eax */
  eax = ~eax;
/* 7cee46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cee47: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cee49: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7cee4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cee50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cee51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cee53: mov ecx, esi */
  ecx = esi;
/* 7cee55: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7cee58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cee58: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cee5b: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* 7cee5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cee60: je 0x7cee9f */
  if (zf) goto L_7cee9f;
L_7cee62: /* 7cee62: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7cee67: mov ecx, dword ptr [0xce8464] */
  ecx = R32((uint32_t)(0xce8464u));
/* 7cee6d: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7cee70: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7cee72: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7cee74: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cee77: mov ecx, dword ptr [edx + 0x34] */
  ecx = R32((uint32_t)(edx + 0x34u));
/* 7cee7a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7cee7c: lea edx, [ebp - 0x2b8] */
  edx = (uint32_t)(ebp + 0xfffffd48u);
/* 7cee82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cee83: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x7cee86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cee86: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7cee8b: mov ecx, dword ptr [0xce8464] */
  ecx = R32((uint32_t)(0xce8464u));
/* 7cee91: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7cee94: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7cee96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cee98: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7cee9b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7cee9d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_7cee9f: /* 7cee9f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ceea2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ceea4: jne 0x7ceebb */
  if (!zf) goto L_7ceebb;
L_7ceea6: /* 7ceea6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ceea9: mov eax, dword ptr [edx + 0x148] */
  eax = R32((uint32_t)(edx + 0x148u));
/* 7ceeaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ceeb0: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7ceeb6: call 0x6c132a */
  esp -= 4; W32(esp, 0x7ceebbu); SPILL(); f_6c132a(); if (g_unwind) return; RELOAD();
L_7ceebb: /* 7ceebb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ceebe: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 7ceec1: mov ecx, dword ptr [edx + 0x9c] */
  ecx = R32((uint32_t)(edx + 0x9cu));
/* 7ceec7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ceec9: je 0x7ceed0 */
  if (zf) goto L_7ceed0;
L_7ceecb: /* 7ceecb: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x7ceed0u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_7ceed0: /* 7ceed0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ceed3: mov dword ptr [eax + 0x154], 1 */
  W32((uint32_t)(eax + 0x154u), 0x1u);
/* 7ceedd: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ceee0: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7ceee7: jmp 0x7ceef0 */
  goto L_7ceef0;
L_7ceef0: /* 7ceef0: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7ceef3: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7ceef9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ceefc: mov esi, dword ptr [eax + 0x544] */
  esi = R32((uint32_t)(eax + 0x544u));
/* 7cef02: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7cef05: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cef07: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7cef0d: jge 0x7cf025 */
  if ((sf == of)) goto L_7cf025;
L_7cef13: /* 7cef13: mov eax, dword ptr [ecx + 0x540] */
  eax = R32((uint32_t)(ecx + 0x540u));
/* 7cef19: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cef1c: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 7cef1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef21: je 0x7cf01d */
  if (zf) goto L_7cf01d;
L_7cef27: /* 7cef27: lea eax, [ebx + 0x60] */
  eax = (uint32_t)(ebx + 0x60u);
/* 7cef2a: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7cef2d: xor eax, eax */
  eax = 0;
/* 7cef2f: mov ecx, 8 */
  ecx = 0x8u;
/* 7cef34: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 7cef37: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7cef39: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 7cef3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef3e: mov eax, 1 */
  eax = 0x1u;
/* 7cef43: je 0x7cf01d */
  if (zf) goto L_7cf01d;
L_7cef49: /* 7cef49: mov ecx, dword ptr [ebx + 0x128] */
  ecx = R32((uint32_t)(ebx + 0x128u));
/* 7cef4f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef51: je 0x7cef73 */
  if (zf) goto L_7cef73;
L_7cef53: /* 7cef53: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 7cef59: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef5b: je 0x7cef8b */
  if (zf) goto L_7cef8b;
L_7cef5d: /* 7cef5d: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 7cef60: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7cef63: jmp 0x7cef86 */
  goto L_7cef86;
L_7cef65: /* 7cef65: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7cef68: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7cef6b: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7cef6e: jmp 0x7cedc3 */
  goto L_7cedc3;
L_7cef73: /* 7cef73: mov ecx, dword ptr [ebx + 0xa0] */
  ecx = R32((uint32_t)(ebx + 0xa0u));
/* 7cef79: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef7b: je 0x7cef8b */
  if (zf) goto L_7cef8b;
L_7cef7d: /* 7cef7d: lea eax, [ebx + 0x98] */
  eax = (uint32_t)(ebx + 0x98u);
/* 7cef83: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
L_7cef86: /* 7cef86: mov eax, 2 */
  eax = 0x2u;
L_7cef8b: /* 7cef8b: xor ecx, ecx */
  ecx = 0;
/* 7cef8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7cef90: /* 7cef90: cmp ecx, dword ptr [ebx + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cef96: jge 0x7cefad */
  if ((sf == of)) goto L_7cefad;
L_7cef98: /* 7cef98: mov edi, dword ptr [ebx + 0xb4] */
  edi = R32((uint32_t)(ebx + 0xb4u));
/* 7cef9e: mov esi, ecx */
  esi = ecx;
/* 7cefa0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7cefa3: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7cefa5: mov dword ptr [ebp + eax*4 - 0x64], esi */
  W32((uint32_t)(ebp + eax*4 + 0xffffff9cu), esi);
/* 7cefa9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cefaa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7cefab: jmp 0x7cef90 */
  goto L_7cef90;
L_7cefad: /* 7cefad: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 7cefb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cefb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cefb6: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 7cefb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cefba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cefbc: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x7cefbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cefbf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cefc2: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7cefc8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cefca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cefcc: lea eax, [ebx + 0xc0] */
  eax = (uint32_t)(ebx + 0xc0u);
/* 7cefd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cefd3: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7cefd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cefd6: xor edi, edi */
  edi = 0;
L_7cefd8: /* 7cefd8: cmp edi, dword ptr [ebx + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cefde: jge 0x7cf01a */
  if ((sf == of)) goto L_7cf01a;
L_7cefe0: /* 7cefe0: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 7cefe6: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7cefe9: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7cefec: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cefef: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7ceff2: mov esi, dword ptr [edx + 0xb0] */
  esi = R32((uint32_t)(edx + 0xb0u));
/* 7ceff8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ceffa: add esi, 0x534 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7cf000: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cf002: mov ecx, esi */
  ecx = esi;
/* 7cf004: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7cf007: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cf00du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cf00d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cf010: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cf012: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7cf014: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7cf017: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cf018: jmp 0x7cefd8 */
  goto L_7cefd8;
L_7cf01a: /* 7cf01a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7cf01d: /* 7cf01d: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7cf020: jmp 0x7ceef0 */
  goto L_7ceef0;
L_7cf025: /* 7cf025: add ecx, 0x540 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x540u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cf02b: xor edi, edi */
  edi = 0;
/* 7cf02d: xor eax, eax */
  eax = 0;
/* 7cf02f: nop  */
L_7cf030: /* 7cf030: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf033: jge 0x7cf038 */
  if ((sf == of)) goto L_7cf038;
L_7cf035: /* 7cf035: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cf036: jmp 0x7cf030 */
  goto L_7cf030;
L_7cf038: /* 7cf038: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf039: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cf03b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7cf041u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7cf041: xor esi, esi */
  esi = 0;
L_7cf043: /* 7cf043: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf046: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7cf049: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 7cf04f: cmp esi, dword ptr [eax + 0x538] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x538u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf055: jge 0x7cf072 */
  if ((sf == of)) goto L_7cf072;
L_7cf057: /* 7cf057: mov eax, dword ptr [eax + 0x534] */
  eax = R32((uint32_t)(eax + 0x534u));
/* 7cf05d: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7cf063: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7cf066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cf068: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf069: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf06a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf06b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf06c: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7cf06fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cf06f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cf070: jmp 0x7cf043 */
  goto L_7cf043;
L_7cf072: /* 7cf072: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7cf075: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7cf07b: add ecx, 0x534 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cf081: xor eax, eax */
  eax = 0;
L_7cf083: /* 7cf083: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf086: jge 0x7cf08b */
  if ((sf == of)) goto L_7cf08b;
L_7cf088: /* 7cf088: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cf089: jmp 0x7cf083 */
  goto L_7cf083;
L_7cf08b: /* 7cf08b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf08c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cf08e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7cf094u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7cf094: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cf097: mov dword ptr [edx + 0x154], edi */
  W32((uint32_t)(edx + 0x154u), edi);
/* 7cf09d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cf0a0: mov dword ptr [eax + 0x14c], edi */
  W32((uint32_t)(eax + 0x14cu), edi);
/* 7cf0a6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf0a9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cf0ab: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7cf0aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cf0ae: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7cf0b1: xor eax, eax */
  eax = 0;
/* 7cf0b3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cf0b5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf0b8: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7cf0bb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cf0bf: mov dword ptr [ecx + 0x158], eax */
  W32((uint32_t)(ecx + 0x158u), eax);
/* 7cf0c5: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7cf0cb: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7cf0d0u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
L_7cf0d0: /* 7cf0d0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cf0d3: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7cf0d6: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7cf0dc: mov dl, byte ptr [ebp - 0x1d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe3u))) & 0xffu);
/* 7cf0df: mov byte ptr [ecx + 0x4bc], dl */
  W8((uint32_t)(ecx + 0x4bcu), (edx & 0xffu));
/* 7cf0e5: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7cf0ea: mov ecx, dword ptr [0xce8318] */
  ecx = R32((uint32_t)(0xce8318u));
/* 7cf0f0: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7cf0f3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7cf0f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cf0f7: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7cf0fa: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7cf0fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf0fd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7cf0ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf102: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf103: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf10a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf10b: mov esp, ebp */
  esp = ebp;
/* 7cf10d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf10e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7ceee9(void) {
  LOAD_REGS();
L_7ceee9: /* 7ceee9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7ceef0: /* 7ceef0: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 7ceef3: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7ceef9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ceefc: mov esi, dword ptr [eax + 0x544] */
  esi = R32((uint32_t)(eax + 0x544u));
/* 7cef02: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7cef05: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cef07: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7cef0d: jge 0x7cf025 */
  if ((sf == of)) goto L_7cf025;
L_7cef13: /* 7cef13: mov eax, dword ptr [ecx + 0x540] */
  eax = R32((uint32_t)(ecx + 0x540u));
/* 7cef19: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cef1c: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 7cef1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef21: je 0x7cf01d */
  if (zf) goto L_7cf01d;
L_7cef27: /* 7cef27: lea eax, [ebx + 0x60] */
  eax = (uint32_t)(ebx + 0x60u);
/* 7cef2a: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 7cef2d: xor eax, eax */
  eax = 0;
/* 7cef2f: mov ecx, 8 */
  ecx = 0x8u;
/* 7cef34: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 7cef37: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7cef39: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 7cef3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef3e: mov eax, 1 */
  eax = 0x1u;
/* 7cef43: je 0x7cf01d */
  if (zf) goto L_7cf01d;
L_7cef49: /* 7cef49: mov ecx, dword ptr [ebx + 0x128] */
  ecx = R32((uint32_t)(ebx + 0x128u));
/* 7cef4f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef51: je 0x7cef73 */
  if (zf) goto L_7cef73;
L_7cef53: /* 7cef53: mov ecx, dword ptr [ebx + 0x84] */
  ecx = R32((uint32_t)(ebx + 0x84u));
/* 7cef59: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef5b: je 0x7cef8b */
  if (zf) goto L_7cef8b;
L_7cef5d: /* 7cef5d: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 7cef60: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 7cef63: jmp 0x7cef86 */
  goto L_7cef86;
L_7cef73: /* 7cef73: mov ecx, dword ptr [ebx + 0xa0] */
  ecx = R32((uint32_t)(ebx + 0xa0u));
/* 7cef79: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cef7b: je 0x7cef8b */
  if (zf) goto L_7cef8b;
L_7cef7d: /* 7cef7d: lea eax, [ebx + 0x98] */
  eax = (uint32_t)(ebx + 0x98u);
/* 7cef83: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
L_7cef86: /* 7cef86: mov eax, 2 */
  eax = 0x2u;
L_7cef8b: /* 7cef8b: xor ecx, ecx */
  ecx = 0;
/* 7cef8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7cef90: /* 7cef90: cmp ecx, dword ptr [ebx + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cef96: jge 0x7cefad */
  if ((sf == of)) goto L_7cefad;
L_7cef98: /* 7cef98: mov edi, dword ptr [ebx + 0xb4] */
  edi = R32((uint32_t)(ebx + 0xb4u));
/* 7cef9e: mov esi, ecx */
  esi = ecx;
/* 7cefa0: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7cefa3: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7cefa5: mov dword ptr [ebp + eax*4 - 0x64], esi */
  W32((uint32_t)(ebp + eax*4 + 0xffffff9cu), esi);
/* 7cefa9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cefaa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7cefab: jmp 0x7cef90 */
  goto L_7cef90;
L_7cefad: /* 7cefad: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 7cefb3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cefb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cefb6: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 7cefb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cefba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cefbc: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x7cefbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cefbf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cefc2: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7cefc8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cefca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cefcc: lea eax, [ebx + 0xc0] */
  eax = (uint32_t)(ebx + 0xc0u);
/* 7cefd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cefd3: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7cefd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cefd6: xor edi, edi */
  edi = 0;
L_7cefd8: /* 7cefd8: cmp edi, dword ptr [ebx + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cefde: jge 0x7cf01a */
  if ((sf == of)) goto L_7cf01a;
L_7cefe0: /* 7cefe0: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 7cefe6: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7cefe9: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7cefec: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cefef: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7ceff2: mov esi, dword ptr [edx + 0xb0] */
  esi = R32((uint32_t)(edx + 0xb0u));
/* 7ceff8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ceffa: add esi, 0x534 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7cf000: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7cf002: mov ecx, esi */
  ecx = esi;
/* 7cf004: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7cf007: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7cf00du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7cf00d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cf010: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7cf012: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7cf014: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7cf017: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cf018: jmp 0x7cefd8 */
  goto L_7cefd8;
L_7cf01a: /* 7cf01a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
L_7cf01d: /* 7cf01d: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7cf020: jmp 0x7ceef0 */
  goto L_7ceef0;
L_7cf025: /* 7cf025: add ecx, 0x540 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x540u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cf02b: xor edi, edi */
  edi = 0;
/* 7cf02d: xor eax, eax */
  eax = 0;
/* 7cf02f: nop  */
L_7cf030: /* 7cf030: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf033: jge 0x7cf038 */
  if ((sf == of)) goto L_7cf038;
L_7cf035: /* 7cf035: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cf036: jmp 0x7cf030 */
  goto L_7cf030;
L_7cf038: /* 7cf038: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf039: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cf03b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7cf041u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7cf041: xor esi, esi */
  esi = 0;
L_7cf043: /* 7cf043: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf046: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7cf049: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 7cf04f: cmp esi, dword ptr [eax + 0x538] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x538u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf055: jge 0x7cf072 */
  if ((sf == of)) goto L_7cf072;
L_7cf057: /* 7cf057: mov eax, dword ptr [eax + 0x534] */
  eax = R32((uint32_t)(eax + 0x534u));
/* 7cf05d: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7cf063: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 7cf066: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cf068: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf069: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf06a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf06b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf06c: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x7cf06fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cf06f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7cf070: jmp 0x7cf043 */
  goto L_7cf043;
L_7cf072: /* 7cf072: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 7cf075: mov ecx, dword ptr [ecx + 0xb0] */
  ecx = R32((uint32_t)(ecx + 0xb0u));
/* 7cf07b: add ecx, 0x534 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x534u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cf081: xor eax, eax */
  eax = 0;
L_7cf083: /* 7cf083: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf086: jge 0x7cf08b */
  if ((sf == of)) goto L_7cf08b;
L_7cf088: /* 7cf088: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cf089: jmp 0x7cf083 */
  goto L_7cf083;
L_7cf08b: /* 7cf08b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf08c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7cf08e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7cf094u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 7cf094: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cf097: mov dword ptr [edx + 0x154], edi */
  W32((uint32_t)(edx + 0x154u), edi);
/* 7cf09d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cf0a0: mov dword ptr [eax + 0x14c], edi */
  W32((uint32_t)(eax + 0x14cu), edi);
/* 7cf0a6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf0a9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cf0ab: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7cf0aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cf0ae: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7cf0b1: xor eax, eax */
  eax = 0;
/* 7cf0b3: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cf0b5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf0b8: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7cf0bb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cf0bf: mov dword ptr [ecx + 0x158], eax */
  W32((uint32_t)(ecx + 0x158u), eax);
/* 7cf0c5: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 7cf0cb: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7cf0d0u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 7cf0d0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cf0d3: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7cf0d6: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7cf0dc: mov dl, byte ptr [ebp - 0x1d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffe3u))) & 0xffu);
/* 7cf0df: mov byte ptr [ecx + 0x4bc], dl */
  W8((uint32_t)(ecx + 0x4bcu), (edx & 0xffu));
/* 7cf0e5: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7cf0ea: mov ecx, dword ptr [0xce8318] */
  ecx = R32((uint32_t)(0xce8318u));
/* 7cf0f0: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7cf0f3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7cf0f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cf0f7: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7cf0fa: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7cf0fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf0fd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7cf0ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf102: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf103: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf10a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf10b: mov esp, ebp */
  esp = ebp;
/* 7cf10d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf10e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7cf111(void) {
  LOAD_REGS();
L_7cf111: /* 7cf111: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 7cf117: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cf11c: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 7cf122: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf123: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 7cf129: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf12eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cf12e(); return;
}

void f_7cf12e(void) {
  LOAD_REGS();
L_7cf12e: /* 7cf12e: push 0xa0f070 */
  { uint32_t v = 0xa0f070u; esp -= 4; W32(esp, v); }
/* 7cf133: push 0xadb2e4 */
  { uint32_t v = 0xadb2e4u; esp -= 4; W32(esp, v); }
/* 7cf138: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cf13eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cf13e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf141: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf143: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf145: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf14au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cf14a: guest_badaddr(0x7cf14a); return;
}

void f_7cf4c0(void) {
  LOAD_REGS();
L_7cf4c0: /* 7cf4c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cf4c1: mov ebp, esp */
  ebp = esp;
/* 7cf4c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cf4c5: push 0x9cfe50 */
  { uint32_t v = 0x9cfe50u; esp -= 4; W32(esp, v); }
/* 7cf4ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cf4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf4d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cf4d8: sub esp, 0x814 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x814u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cf4de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf4df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cf4e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf4e1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7cf4e4: mov ebx, ecx */
  ebx = ecx;
/* 7cf4e6: mov ecx, edi */
  ecx = edi;
/* 7cf4e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cf4eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cf4f2: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7cf4f8u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7cf4f8: mov esi, dword ptr [0xcfa884] */
  esi = R32((uint32_t)(0xcfa884u));
/* 7cf4fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf500: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf502: mov ecx, eax */
  ecx = eax;
/* 7cf504: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cf506u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cf506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf507: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7cf50c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cf50e: push 0xadb2f0 */
  { uint32_t v = 0xadb2f0u; esp -= 4; W32(esp, v); }
/* 7cf513: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cf514: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cf51au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cf51a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf51d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf51f: jne 0x7cf539 */
  if (!zf) goto L_7cf539;
L_7cf521: /* 7cf521: push 0x93c */
  { uint32_t v = 0x93cu; esp -= 4; W32(esp, v); }
/* 7cf526: push 0xadb340 */
  { uint32_t v = 0xadb340u; esp -= 4; W32(esp, v); }
/* 7cf52b: push 0xadb34c */
  { uint32_t v = 0xadb34cu; esp -= 4; W32(esp, v); }
/* 7cf530: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7cf536u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7cf536: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cf539: /* 7cf539: test dword ptr [edi + 0x84], 0x100000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x84u))); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf543: je 0x7cf6b7 */
  if (zf) goto L_7cf6b7;
L_7cf549: /* 7cf549: mov ecx, edi */
  ecx = edi;
/* 7cf54b: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cf551u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cf551: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf554: mov edi, eax */
  edi = eax;
/* 7cf556: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7cf55cu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7cf55c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf55e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf560: mov ecx, eax */
  ecx = eax;
/* 7cf562: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7cf564u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cf564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf566: push 0xadb354 */
  { uint32_t v = 0xadb354u; esp -= 4; W32(esp, v); }
/* 7cf56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf56c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cf572u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cf572: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf575: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf578: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7cf57eu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7cf57e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf580: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7cf583: je 0x7cf58d */
  if (zf) goto L_7cf58d;
L_7cf585: /* 7cf585: mov edx, dword ptr [eax + 0x3c] */
  edx = R32((uint32_t)(eax + 0x3cu));
/* 7cf588: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7cf58b: jmp 0x7cf594 */
  goto L_7cf594;
L_7cf58d: /* 7cf58d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_7cf594: /* 7cf594: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7cf597: call 0x6c39bd */
  esp -= 4; W32(esp, 0x7cf59cu); SPILL(); f_6c39bd(); if (g_unwind) return; RELOAD();
/* 7cf59c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cf59f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf5a1: je 0x7cf6a8 */
  if (zf) goto L_7cf6a8;
L_7cf5a7: /* 7cf5a7: xor edi, edi */
  edi = 0;
/* 7cf5a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cf5b0: /* 7cf5b0: cmp edi, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf5b3: jge 0x7cf69d */
  if ((sf == of)) goto L_7cf69d;
L_7cf5b9: /* 7cf5b9: test dword ptr [esi + 0x3c], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf5c0: je 0x7cf697 */
  if (zf) goto L_7cf697;
L_7cf5c6: /* 7cf5c6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf5c9: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7cf5cfu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7cf5cf: mov eax, dword ptr [eax + 0x4e8] */
  eax = R32((uint32_t)(eax + 0x4e8u));
/* 7cf5d5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7cf5d8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cf5da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf5dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf5dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cf5de: lea eax, [ebp - 0x820] */
  eax = (uint32_t)(ebp + 0xfffff7e0u);
/* 7cf5e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf5e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf5e6: mov ecx, esi */
  ecx = esi;
/* 7cf5e8: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7cf5eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cf5ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf5f0: je 0x7cf697 */
  if (zf) goto L_7cf697;
L_7cf5f6: /* 7cf5f6: mov ecx, esi */
  ecx = esi;
/* 7cf5f8: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cf5feu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cf5fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf5ff: mov ecx, ebx */
  ecx = ebx;
/* 7cf601: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7cf607u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 7cf607: cmp dword ptr [esi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cf60b: je 0x7cf61d */
  if (zf) goto L_7cf61d;
L_7cf60d: /* 7cf60d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf60e: push 0xadb380 */
  { uint32_t v = 0xadb380u; esp -= 4; W32(esp, v); }
/* 7cf613: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf614: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cf61au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cf61a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cf61d: /* 7cf61d: push 0xadb38c */
  { uint32_t v = 0xadb38cu; esp -= 4; W32(esp, v); }
/* 7cf622: mov ecx, ebx */
  ecx = ebx;
/* 7cf624: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7cf62au); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 7cf62a: call dword ptr [0xcfa8ac] */
  esp -= 4; W32(esp, 0x7cf630u); SPILL(); f_4e36bb(); if (g_unwind) return; /* Core!?StaticClass@UObjectProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7cf630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf631: mov ecx, esi */
  ecx = esi;
/* 7cf633: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cf639u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cf639: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf63b: je 0x7cf681 */
  if (zf) goto L_7cf681;
L_7cf63d: /* 7cf63d: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7cf640: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7cf645: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7cf64bu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7cf64b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf64d: je 0x7cf681 */
  if (zf) goto L_7cf681;
L_7cf64f: /* 7cf64f: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 7cf652: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 7cf655: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 7cf658: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cf65a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cf65d: mov ecx, dword ptr [ecx + edx] */
  ecx = R32((uint32_t)(ecx + edx));
/* 7cf660: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf662: je 0x7cf66c */
  if (zf) goto L_7cf66c;
L_7cf664: /* 7cf664: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cf66au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cf66a: jmp 0x7cf671 */
  goto L_7cf671;
L_7cf66c: /* 7cf66c: mov eax, 0xadb390 */
  eax = 0xadb390u;
L_7cf671: /* 7cf671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf672: push 0xadb39c */
  { uint32_t v = 0xadb39cu; esp -= 4; W32(esp, v); }
/* 7cf677: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf678: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cf67eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cf67e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cf681: /* 7cf681: lea eax, [ebp - 0x820] */
  eax = (uint32_t)(ebp + 0xfffff7e0u);
/* 7cf687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf688: push 0xadb3a8 */
  { uint32_t v = 0xadb3a8u; esp -= 4; W32(esp, v); }
/* 7cf68d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf68e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cf694u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cf694: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cf697: /* 7cf697: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cf698: jmp 0x7cf5b0 */
  goto L_7cf5b0;
L_7cf69d: /* 7cf69d: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7cf6a0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7cf6a3: jmp 0x7cf594 */
  goto L_7cf594;
L_7cf6a8: /* 7cf6a8: push 0xadb3b4 */
  { uint32_t v = 0xadb3b4u; esp -= 4; W32(esp, v); }
/* 7cf6ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf6ae: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cf6b4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cf6b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cf6b7: /* 7cf6b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf6ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf6bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf6bc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf6c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf6c4: mov esp, ebp */
  esp = ebp;
/* 7cf6c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf6c7: ret  */
  esp += 4; SPILL(); return;
}

void f_7cf6c8(void) {
  LOAD_REGS();
L_7cf6c8: /* 7cf6c8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7cf6cb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cf6d0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7cf6d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf6d4: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7cf6d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf6dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cf6dc(); return;
}

void f_7cf6dc(void) {
  LOAD_REGS();
L_7cf6dc: /* 7cf6dc: push 0xa0f09c */
  { uint32_t v = 0xa0f09cu; esp -= 4; W32(esp, v); }
/* 7cf6e1: push 0xadb3bc */
  { uint32_t v = 0xadb3bcu; esp -= 4; W32(esp, v); }
/* 7cf6e6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cf6ecu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cf6ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf6ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf6f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf6f3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf6f8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cf6f8: guest_badaddr(0x7cf6f8); return;
}

void f_7cf790(void) {
  LOAD_REGS();
L_7cf790: /* 7cf790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cf791: mov ebp, esp */
  ebp = esp;
/* 7cf793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cf795: push 0x9cfe60 */
  { uint32_t v = 0x9cfe60u; esp -= 4; W32(esp, v); }
/* 7cf79a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cf7a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf7a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cf7a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cf7ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf7ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cf7ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7cf7b0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf7b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf7b3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cf7b6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cf7bd: jne 0x7cf7d7 */
  if (!zf) goto L_7cf7d7;
L_7cf7bf: /* 7cf7bf: push 0x961 */
  { uint32_t v = 0x961u; esp -= 4; W32(esp, v); }
/* 7cf7c4: push 0xadb3c4 */
  { uint32_t v = 0xadb3c4u; esp -= 4; W32(esp, v); }
/* 7cf7c9: push 0xadb3d0 */
  { uint32_t v = 0xadb3d0u; esp -= 4; W32(esp, v); }
/* 7cf7ce: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7cf7d4u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7cf7d4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cf7d7: /* 7cf7d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cf7d8: call 0x6c7446 */
  esp -= 4; W32(esp, 0x7cf7ddu); SPILL(); f_6c7446(); if (g_unwind) return; RELOAD();
/* 7cf7dd: mov esi, eax */
  esi = eax;
/* 7cf7df: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7cf7e2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf7e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf7e6: lea ecx, [esi + 0x128] */
  ecx = (uint32_t)(esi + 0x128u);
/* 7cf7ec: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7cf7f2u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7cf7f2: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7cf7f5: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7cf7f8: mov dword ptr [esi + 0x124], ecx */
  W32((uint32_t)(esi + 0x124u), ecx);
/* 7cf7fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf801: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf802: mov dword ptr [esi + 0x134], edx */
  W32((uint32_t)(esi + 0x134u), edx);
/* 7cf808: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf809: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf810: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf811: mov esp, ebp */
  esp = ebp;
/* 7cf813: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf814: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7cf817(void) {
  LOAD_REGS();
L_7cf817: /* 7cf817: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cf81a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cf81f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7cf822: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cf823: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cf826: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf82bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cf82b(); return;
}

void f_7cf82b(void) {
  LOAD_REGS();
L_7cf82b: /* 7cf82b: push 0xa0f0bc */
  { uint32_t v = 0xa0f0bcu; esp -= 4; W32(esp, v); }
/* 7cf830: push 0xadb3d8 */
  { uint32_t v = 0xadb3d8u; esp -= 4; W32(esp, v); }
/* 7cf835: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cf83bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cf83b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf83e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf840: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf842: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf847u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cf847: guest_badaddr(0x7cf847); return;
}

void f_7cf880(void) {
  LOAD_REGS();
L_7cf880: /* 7cf880: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cf881: mov ebp, esp */
  ebp = esp;
/* 7cf883: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cf885: push 0x9cfe7e */
  { uint32_t v = 0x9cfe7eu; esp -= 4; W32(esp, v); }
/* 7cf88a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cf890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf891: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cf898: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cf89b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cf89c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cf89d: mov esi, ecx */
  esi = ecx;
/* 7cf89f: mov cl, byte ptr [0xb821e0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb821e0u))) & 0xffu);
/* 7cf8a5: mov eax, 1 */
  eax = 0x1u;
/* 7cf8aa: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf8ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cf8ad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cf8b0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cf8b7: jne 0x7cf911 */
  if (!zf) goto L_7cf911;
L_7cf8b9: /* 7cf8b9: or dword ptr [0xb821e0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb821e0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb821e0u), r);
  }
/* 7cf8bf: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 7cf8c2: call dword ptr [0xcfa810] */
  esp -= 4; W32(esp, 0x7cf8c8u); SPILL(); f_4e2987(); if (g_unwind) return; /* Core!?appCmdLine@@YAPBGXZ */ RELOAD();
/* 7cf8c8: push 0xadb3e0 */
  { uint32_t v = 0xadb3e0u; esp -= 4; W32(esp, v); }
/* 7cf8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cf8ce: call dword ptr [0xcfa80c] */
  esp -= 4; W32(esp, 0x7cf8d4u); SPILL(); f_4e3387(); if (g_unwind) return; /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 7cf8d4: mov edx, eax */
  edx = eax;
/* 7cf8d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf8d9: mov dword ptr [0xb821dc], edx */
  W32((uint32_t)(0xb821dcu), edx);
/* 7cf8df: jmp 0x7cf917 */
  goto L_7cf917;
L_7cf911: /* 7cf911: mov edx, dword ptr [0xb821dc] */
  edx = R32((uint32_t)(0xb821dcu));
L_7cf917: /* 7cf917: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7cf91d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf91f: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cf925: /* 7cf925: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7cf92b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf92d: je 0x7cf997 */
  if (zf) goto L_7cf997;
L_7cf92f: /* 7cf92f: mov esi, dword ptr [ecx + 0x38] */
  esi = R32((uint32_t)(ecx + 0x38u));
/* 7cf932: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf934: jne 0x7cf997 */
  if (!zf) goto L_7cf997;
L_7cf936: /* 7cf936: mov esi, dword ptr [eax + 0x3c] */
  esi = R32((uint32_t)(eax + 0x3cu));
/* 7cf939: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf93b: je 0x7cf997 */
  if (zf) goto L_7cf997;
L_7cf93d: /* 7cf93d: mov esi, dword ptr [0xcfa814] */
  esi = R32((uint32_t)(0xcfa814u));
/* 7cf943: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cf946: jne 0x7cf997 */
  if (!zf) goto L_7cf997;
L_7cf948: /* 7cf948: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf94a: je 0x7cf951 */
  if (zf) goto L_7cf951;
L_7cf94c: /* 7cf94c: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7cf94f: jmp 0x7cf954 */
  goto L_7cf954;
L_7cf951: /* 7cf951: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
L_7cf954: /* 7cf954: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf957: jge 0x7cf974 */
  if ((sf == of)) goto L_7cf974;
L_7cf959: /* 7cf959: mov dword ptr [ebp - 0x14], 0x14 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x14u);
/* 7cf960: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf963: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf966: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf96d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf96e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf96f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf970: mov esp, ebp */
  esp = ebp;
/* 7cf972: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf973: ret  */
  esp += 4; SPILL(); return;
L_7cf974: /* 7cf974: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf977: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cf97a: jl 0x7cf983 */
  if ((sf != of)) goto L_7cf983;
L_7cf97c: /* 7cf97c: mov dword ptr [ebp - 0x14], 0x3c */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3cu);
L_7cf983: /* 7cf983: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf986: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf989: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf990: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf991: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf992: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf993: mov esp, ebp */
  esp = ebp;
/* 7cf995: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf996: ret  */
  esp += 4; SPILL(); return;
L_7cf997: /* 7cf997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf999: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cf99f: /* 7cf99f: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7cf9a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf9a4: je 0x7cfa00 */
  if (zf) goto L_7cfa00;
L_7cf9a6: /* 7cf9a6: mov esi, dword ptr [0xcfa814] */
  esi = R32((uint32_t)(0xcfa814u));
/* 7cf9ac: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cf9af: jne 0x7cfa00 */
  if (!zf) goto L_7cfa00;
L_7cf9b1: /* 7cf9b1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf9b3: je 0x7cf9ba */
  if (zf) goto L_7cf9ba;
L_7cf9b5: /* 7cf9b5: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7cf9b8: jmp 0x7cf9bd */
  goto L_7cf9bd;
L_7cf9ba: /* 7cf9ba: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
L_7cf9bd: /* 7cf9bd: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf9c0: jge 0x7cf9dd */
  if ((sf == of)) goto L_7cf9dd;
L_7cf9c2: /* 7cf9c2: mov dword ptr [ebp - 0x14], 0xa */
  W32((uint32_t)(ebp + 0xffffffecu), 0xau);
/* 7cf9c9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf9cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf9cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf9d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf9d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf9d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf9d9: mov esp, ebp */
  esp = ebp;
/* 7cf9db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf9dc: ret  */
  esp += 4; SPILL(); return;
L_7cf9dd: /* 7cf9dd: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf9e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cf9e3: jl 0x7cf9ec */
  if ((sf != of)) goto L_7cf9ec;
L_7cf9e5: /* 7cf9e5: mov dword ptr [ebp - 0x14], 0x78 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x78u);
L_7cf9ec: /* 7cf9ec: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf9ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf9f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf9f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf9fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf9fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf9fc: mov esp, ebp */
  esp = ebp;
/* 7cf9fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf9ff: ret  */
  esp += 4; SPILL(); return;
L_7cfa00: /* 7cfa00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa02: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa04: /* 7cfa04: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7cfa07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa09: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa0b: /* 7cfa0b: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7cfa0e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa10: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa12: /* 7cfa12: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7cfa15: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7cfa17: test byte ptr [eax + 0x44c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa1e: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa20: /* 7cfa20: fild dword ptr [ecx + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x44u)); FPUSH(v); }
/* 7cfa23: fdiv dword ptr [eax + 0x54c] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x54cu)));
/* 7cfa29: fld dword ptr [0xa0f104] */
  { double v = F32((uint32_t)(0xa0f104u)); FPUSH(v); }
/* 7cfa2f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7cfa31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7cfa33: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7cfa36: jp 0x7cfa57 */
  if (pf) goto L_7cfa57;
L_7cfa38: /* 7cfa38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7cfa3a: fld dword ptr [0xa0f104] */
  { double v = F32((uint32_t)(0xa0f104u)); FPUSH(v); }
/* 7cfa40: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cfa43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cfa4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cfa4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cfa4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cfa4d: mov esp, ebp */
  esp = ebp;
/* 7cfa4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cfa50: ret  */
  esp += 4; SPILL(); return;
L_7cfa51: /* 7cfa51: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_7cfa57: /* 7cfa57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cfa5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cfa5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cfa5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cfa63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cfa64: mov esp, ebp */
  esp = ebp;
/* 7cfa66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cfa67: ret  */
  esp += 4; SPILL(); return;
}

void f_7cf8e1(void) {
  LOAD_REGS();
L_7cf8e1: /* 7cf8e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cf8e4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cf8e9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7cf8ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cf8ed: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7cf8f0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf8f5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cf8f5(); return;
}

void f_7cf8f5(void) {
  LOAD_REGS();
L_7cf8f5: /* 7cf8f5: push 0xa0f108 */
  { uint32_t v = 0xa0f108u; esp -= 4; W32(esp, v); }
/* 7cf8fa: push 0xadb3f0 */
  { uint32_t v = 0xadb3f0u; esp -= 4; W32(esp, v); }
/* 7cf8ff: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cf905u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cf905: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cf908: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf90a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cf90c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cf911u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7cf911: mov edx, dword ptr [0xb821dc] */
  edx = R32((uint32_t)(0xb821dcu));
/* 7cf917: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7cf91d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf91f: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cf925: /* 7cf925: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 7cf92b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf92d: je 0x7cf997 */
  if (zf) goto L_7cf997;
L_7cf92f: /* 7cf92f: mov esi, dword ptr [ecx + 0x38] */
  esi = R32((uint32_t)(ecx + 0x38u));
/* 7cf932: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf934: jne 0x7cf997 */
  if (!zf) goto L_7cf997;
L_7cf936: /* 7cf936: mov esi, dword ptr [eax + 0x3c] */
  esi = R32((uint32_t)(eax + 0x3cu));
/* 7cf939: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf93b: je 0x7cf997 */
  if (zf) goto L_7cf997;
L_7cf93d: /* 7cf93d: mov esi, dword ptr [0xcfa814] */
  esi = R32((uint32_t)(0xcfa814u));
/* 7cf943: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cf946: jne 0x7cf997 */
  if (!zf) goto L_7cf997;
L_7cf948: /* 7cf948: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf94a: je 0x7cf951 */
  if (zf) goto L_7cf951;
L_7cf94c: /* 7cf94c: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7cf94f: jmp 0x7cf954 */
  goto L_7cf954;
L_7cf951: /* 7cf951: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
L_7cf954: /* 7cf954: cmp eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf957: jge 0x7cf974 */
  if ((sf == of)) goto L_7cf974;
L_7cf959: /* 7cf959: mov dword ptr [ebp - 0x14], 0x14 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x14u);
/* 7cf960: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf963: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf966: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf96d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf96e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf96f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf970: mov esp, ebp */
  esp = ebp;
/* 7cf972: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf973: ret  */
  esp += 4; SPILL(); return;
L_7cf974: /* 7cf974: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf977: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cf97a: jl 0x7cf983 */
  if ((sf != of)) goto L_7cf983;
L_7cf97c: /* 7cf97c: mov dword ptr [ebp - 0x14], 0x3c */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3cu);
L_7cf983: /* 7cf983: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf986: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf989: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf990: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf991: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf992: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf993: mov esp, ebp */
  esp = ebp;
/* 7cf995: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf996: ret  */
  esp += 4; SPILL(); return;
L_7cf997: /* 7cf997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf999: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cf99f: /* 7cf99f: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7cf9a2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf9a4: je 0x7cfa00 */
  if (zf) goto L_7cfa00;
L_7cf9a6: /* 7cf9a6: mov esi, dword ptr [0xcfa814] */
  esi = R32((uint32_t)(0xcfa814u));
/* 7cf9ac: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cf9af: jne 0x7cfa00 */
  if (!zf) goto L_7cfa00;
L_7cf9b1: /* 7cf9b1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cf9b3: je 0x7cf9ba */
  if (zf) goto L_7cf9ba;
L_7cf9b5: /* 7cf9b5: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 7cf9b8: jmp 0x7cf9bd */
  goto L_7cf9bd;
L_7cf9ba: /* 7cf9ba: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
L_7cf9bd: /* 7cf9bd: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf9c0: jge 0x7cf9dd */
  if ((sf == of)) goto L_7cf9dd;
L_7cf9c2: /* 7cf9c2: mov dword ptr [ebp - 0x14], 0xa */
  W32((uint32_t)(ebp + 0xffffffecu), 0xau);
/* 7cf9c9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf9cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf9cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf9d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf9d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf9d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf9d9: mov esp, ebp */
  esp = ebp;
/* 7cf9db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf9dc: ret  */
  esp += 4; SPILL(); return;
L_7cf9dd: /* 7cf9dd: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cf9e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cf9e3: jl 0x7cf9ec */
  if ((sf != of)) goto L_7cf9ec;
L_7cf9e5: /* 7cf9e5: mov dword ptr [ebp - 0x14], 0x78 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x78u);
L_7cf9ec: /* 7cf9ec: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7cf9ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cf9f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cf9f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cf9fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cf9fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cf9fc: mov esp, ebp */
  esp = ebp;
/* 7cf9fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cf9ff: ret  */
  esp += 4; SPILL(); return;
L_7cfa00: /* 7cfa00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa02: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa04: /* 7cfa04: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7cfa07: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa09: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa0b: /* 7cfa0b: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7cfa0e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa10: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa12: /* 7cfa12: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 7cfa15: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7cfa17: test byte ptr [eax + 0x44c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x44cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfa1e: je 0x7cfa51 */
  if (zf) goto L_7cfa51;
L_7cfa20: /* 7cfa20: fild dword ptr [ecx + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x44u)); FPUSH(v); }
/* 7cfa23: fdiv dword ptr [eax + 0x54c] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x54cu)));
/* 7cfa29: fld dword ptr [0xa0f104] */
  { double v = F32((uint32_t)(0xa0f104u)); FPUSH(v); }
/* 7cfa2f: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7cfa31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7cfa33: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7cfa36: jp 0x7cfa57 */
  if (pf) goto L_7cfa57;
L_7cfa38: /* 7cfa38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7cfa3a: fld dword ptr [0xa0f104] */
  { double v = F32((uint32_t)(0xa0f104u)); FPUSH(v); }
/* 7cfa40: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cfa43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cfa4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cfa4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cfa4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cfa4d: mov esp, ebp */
  esp = ebp;
/* 7cfa4f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cfa50: ret  */
  esp += 4; SPILL(); return;
L_7cfa51: /* 7cfa51: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_7cfa57: /* 7cfa57: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cfa5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cfa5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cfa5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cfa63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cfa64: mov esp, ebp */
  esp = ebp;
/* 7cfa66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cfa67: ret  */
  esp += 4; SPILL(); return;
}

void f_7cfaf0(void) {
  LOAD_REGS();
L_7cfaf0: /* 7cfaf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cfaf1: mov ebp, esp */
  ebp = esp;
/* 7cfaf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cfaf5: push 0x9cfe98 */
  { uint32_t v = 0x9cfe98u; esp -= 4; W32(esp, v); }
/* 7cfafa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cfb00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfb01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cfb08: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cfb0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cfb0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cfb0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cfb0e: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7cfb11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cfb14: xor edi, edi */
  edi = 0;
/* 7cfb16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfb17: mov esi, ecx */
  esi = ecx;
/* 7cfb19: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7cfb1c: call dword ptr [0xcfa8cc] */
  esp -= 4; W32(esp, 0x7cfb22u); SPILL(); f_4e247d(); if (g_unwind) return; /* Core!?GetLoaderList@UObject@@SA?AV?$TArray@PAVUObject@@@@XZ */ RELOAD();
/* 7cfb22: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cfb25: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7cfb2b: xor ebx, ebx */
  ebx = 0;
/* 7cfb2d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cfb2f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cfb33: je 0x7cfb41 */
  if (zf) goto L_7cfb41;
L_7cfb35: /* 7cfb35: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7cfb38: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 7cfb3b: mov ebx, dword ptr [edx + 0xb4] */
  ebx = R32((uint32_t)(edx + 0xb4u));
L_7cfb41: /* 7cfb41: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7cfb44: xor eax, eax */
  eax = 0;
L_7cfb46: /* 7cfb46: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cfb49: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7cfb4c: jge 0x7cfc1d */
  if ((sf == of)) goto L_7cfc1d;
L_7cfb52: /* 7cfb52: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7cfb55: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 7cfb58: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfb5a: je 0x7cfb7c */
  if (zf) goto L_7cfb7c;
L_7cfb5c: /* 7cfb5c: mov edx, dword ptr [0xcfa8a8] */
  edx = R32((uint32_t)(0xcfa8a8u));
/* 7cfb62: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cfb63: mov ecx, esi */
  ecx = esi;
/* 7cfb65: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cfb6bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cfb6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfb6d: jne 0x7cfba5 */
  if (!zf) goto L_7cfba5;
L_7cfb6f: /* 7cfb6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfb70: mov ecx, esi */
  ecx = esi;
/* 7cfb72: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cfb78u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cfb78: mov edi, eax */
  edi = eax;
/* 7cfb7a: jmp 0x7cfb81 */
  goto L_7cfb81;
L_7cfb7c: /* 7cfb7c: mov edi, 0xadba00 */
  edi = 0xadba00u;
L_7cfb81: /* 7cfb81: mov ecx, dword ptr [0xcfa8a8] */
  ecx = R32((uint32_t)(0xcfa8a8u));
/* 7cfb87: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cfb8du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cfb8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfb8e: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7cfb93: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cfb95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cfb96: push 0xadba0c */
  { uint32_t v = 0xadba0cu; esp -= 4; W32(esp, v); }
/* 7cfb9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cfb9c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cfba2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cfba2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cfba5: /* 7cfba5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7cfba7: mov ecx, esi */
  ecx = esi;
/* 7cfba9: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7cfbacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cfbac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfbae: je 0x7cfc14 */
  if (zf) goto L_7cfc14;
L_7cfbb0: /* 7cfbb0: mov edx, 1 */
  edx = 0x1u;
/* 7cfbb5: xor ecx, ecx */
  ecx = 0;
L_7cfbb7: /* 7cfbb7: cmp ecx, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cfbba: jge 0x7cfbe8 */
  if ((sf == of)) goto L_7cfbe8;
L_7cfbbc: /* 7cfbbc: mov edi, dword ptr [ebx + 0x28] */
  edi = R32((uint32_t)(ebx + 0x28u));
/* 7cfbbf: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 7cfbc2: lea eax, [edi + eax*8 + 0x14] */
  eax = (uint32_t)(edi + eax*8 + 0x14u);
/* 7cfbc6: mov edi, dword ptr [esi + 0x50] */
  edi = R32((uint32_t)(esi + 0x50u));
/* 7cfbc9: cmp edi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cfbcb: jne 0x7cfbe5 */
  if (!zf) goto L_7cfbe5;
L_7cfbcd: /* 7cfbcd: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 7cfbd0: cmp edi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cfbd3: jne 0x7cfbe5 */
  if (!zf) goto L_7cfbe5;
L_7cfbd5: /* 7cfbd5: mov edi, dword ptr [esi + 0x58] */
  edi = R32((uint32_t)(esi + 0x58u));
/* 7cfbd8: cmp edi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cfbdb: jne 0x7cfbe5 */
  if (!zf) goto L_7cfbe5;
L_7cfbdd: /* 7cfbdd: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 7cfbe0: cmp edi, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7cfbe3: je 0x7cfc14 */
  if (zf) goto L_7cfc14;
L_7cfbe5: /* 7cfbe5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7cfbe6: jmp 0x7cfbb7 */
  goto L_7cfbb7;
L_7cfbe8: /* 7cfbe8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfbea: je 0x7cfc14 */
  if (zf) goto L_7cfc14;
L_7cfbec: /* 7cfbec: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7cfbef: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cfbf5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cfbf5: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7cfbfb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cfbfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfbfe: push 0xadb400 */
  { uint32_t v = 0xadb400u; esp -= 4; W32(esp, v); }
/* 7cfc03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cfc04: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cfc0au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cfc0a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cfc0d: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7cfc14: /* 7cfc14: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cfc17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7cfc18: jmp 0x7cfb46 */
  goto L_7cfb46;
L_7cfc1d: /* 7cfc1d: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7cfc20: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cfc24: call 0x6c9dea */
  esp -= 4; W32(esp, 0x7cfc29u); SPILL(); f_6c9dea(); if (g_unwind) return; RELOAD();
/* 7cfc29: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cfc2c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7cfc2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cfc30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cfc31: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cfc38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cfc39: mov esp, ebp */
  esp = ebp;
/* 7cfc3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cfc3c: ret  */
  esp += 4; SPILL(); return;
}

void f_7cfc3d(void) {
  LOAD_REGS();
L_7cfc3d: /* 7cfc3d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7cfc40: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cfc45: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7cfc48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cfc49: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7cfc4c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cfc51u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cfc51(); return;
}

void f_7cfc51(void) {
  LOAD_REGS();
L_7cfc51: /* 7cfc51: push 0xa0f14c */
  { uint32_t v = 0xa0f14cu; esp -= 4; W32(esp, v); }
/* 7cfc56: push 0xadb43c */
  { uint32_t v = 0xadb43cu; esp -= 4; W32(esp, v); }
/* 7cfc5b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cfc61u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cfc61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cfc64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cfc66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cfc68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cfc6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cfc6d: guest_badaddr(0x7cfc6d); return;
}

void f_7cfcd0(void) {
  LOAD_REGS();
L_7cfcd0: /* 7cfcd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cfcd1: mov ebp, esp */
  ebp = esp;
/* 7cfcd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cfcd5: push 0x9cfec1 */
  { uint32_t v = 0x9cfec1u; esp -= 4; W32(esp, v); }
/* 7cfcda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cfce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfce1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cfce8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cfceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7cfcee: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7cfcf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfcf3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cfcf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cfcf5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cfcf6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cfcf9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cfd00: je 0x7cfeb3 */
  if (zf) goto L_7cfeb3;
L_7cfd06: /* 7cfd06: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7cfd09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cfd0a: call dword ptr [0xcfa8cc] */
  esp -= 4; W32(esp, 0x7cfd10u); SPILL(); f_4e247d(); if (g_unwind) return; /* Core!?GetLoaderList@UObject@@SA?AV?$TArray@PAVUObject@@@@XZ */ RELOAD();
/* 7cfd10: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cfd13: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7cfd16: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cfd1a: call dword ptr [0xcfa8d0] */
  esp -= 4; W32(esp, 0x7cfd20u); SPILL(); f_4e2a9f(); if (g_unwind) return; /* Core!??0FGuid@@QAE@XZ */ RELOAD();
/* 7cfd20: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7cfd27: xor ebx, ebx */
  ebx = 0;
/* 7cfd29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7cfd30: /* 7cfd30: cmp ebx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cfd33: jge 0x7cfd99 */
  if ((sf == of)) goto L_7cfd99;
L_7cfd35: /* 7cfd35: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7cfd38: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 7cfd3b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfd3d: je 0x7cfd5e */
  if (zf) goto L_7cfd5e;
L_7cfd3f: /* 7cfd3f: mov eax, dword ptr [0xcfa8a8] */
  eax = R32((uint32_t)(0xcfa8a8u));
/* 7cfd44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfd45: mov ecx, esi */
  ecx = esi;
/* 7cfd47: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cfd4du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cfd4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfd4f: jne 0x7cfd88 */
  if (!zf) goto L_7cfd88;
L_7cfd51: /* 7cfd51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfd52: mov ecx, esi */
  ecx = esi;
/* 7cfd54: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cfd5au); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cfd5a: mov edi, eax */
  edi = eax;
/* 7cfd5c: jmp 0x7cfd63 */
  goto L_7cfd63;
L_7cfd5e: /* 7cfd5e: mov edi, 0xadba00 */
  edi = 0xadba00u;
L_7cfd63: /* 7cfd63: mov ecx, dword ptr [0xcfa8a8] */
  ecx = R32((uint32_t)(0xcfa8a8u));
/* 7cfd69: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cfd6fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cfd6f: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7cfd75: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cfd77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfd78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cfd79: push 0xadba0c */
  { uint32_t v = 0xadba0cu; esp -= 4; W32(esp, v); }
/* 7cfd7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cfd7f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7cfd85u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7cfd85: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cfd88: /* 7cfd88: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7cfd8a: mov ecx, esi */
  ecx = esi;
/* 7cfd8c: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7cfd8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cfd8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfd91: je 0x7cfd96 */
  if (zf) goto L_7cfd96;
L_7cfd93: /* 7cfd93: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_7cfd96: /* 7cfd96: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7cfd97: jmp 0x7cfd30 */
  goto L_7cfd30;
L_7cfd99: /* 7cfd99: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cfd9c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cfd9f: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7cfda2: mov ebx, dword ptr [0xcfa3a4] */
  ebx = R32((uint32_t)(0xcfa3a4u));
/* 7cfda8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cfda9: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7cfdac: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cfdaf: push 0xadb444 */
  { uint32_t v = 0xadb444u; esp -= 4; W32(esp, v); }
/* 7cfdb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cfdb5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cfdb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cfdb7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cfdba: xor edi, edi */
  edi = 0;
L_7cfdbc: /* 7cfdbc: cmp edi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7cfdbf: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7cfdc2: jge 0x7cfea7 */
  if ((sf == of)) goto L_7cfea7;
L_7cfdc8: /* 7cfdc8: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7cfdcb: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7cfdce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfdd0: je 0x7cfdf1 */
  if (zf) goto L_7cfdf1;
L_7cfdd2: /* 7cfdd2: mov eax, dword ptr [0xcfa8a8] */
  eax = R32((uint32_t)(0xcfa8a8u));
/* 7cfdd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfdd8: mov ecx, esi */
  ecx = esi;
/* 7cfdda: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7cfde0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7cfde0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfde2: jne 0x7cfe1a */
  if (!zf) goto L_7cfe1a;
L_7cfde4: /* 7cfde4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfde5: mov ecx, esi */
  ecx = esi;
/* 7cfde7: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7cfdedu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7cfded: mov edi, eax */
  edi = eax;
/* 7cfdef: jmp 0x7cfdf6 */
  goto L_7cfdf6;
L_7cfdf1: /* 7cfdf1: mov edi, 0xadba00 */
  edi = 0xadba00u;
L_7cfdf6: /* 7cfdf6: mov ecx, dword ptr [0xcfa8a8] */
  ecx = R32((uint32_t)(0xcfa8a8u));
/* 7cfdfc: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7cfe02u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7cfe02: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7cfe08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cfe0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfe0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cfe0c: push 0xadba0c */
  { uint32_t v = 0xadba0cu; esp -= 4; W32(esp, v); }
/* 7cfe11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7cfe12: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cfe14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cfe14: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7cfe17: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7cfe1a: /* 7cfe1a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7cfe1c: mov ecx, esi */
  ecx = esi;
/* 7cfe1e: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0x7cfe21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cfe21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7cfe23: je 0x7cfea1 */
  if (zf) goto L_7cfea1;
L_7cfe25: /* 7cfe25: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 7cfe28: mov ecx, eax */
  ecx = eax;
/* 7cfe2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cfe2c: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7cfe2f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7cfe32: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 7cfe35: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 7cfe38: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7cfe3b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 7cfe3e: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 7cfe41: mov edx, dword ptr [esi + 0x58] */
  edx = R32((uint32_t)(esi + 0x58u));
/* 7cfe44: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 7cfe47: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 7cfe4a: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 7cfe4d: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 7cfe50: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cfe53: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7cfe56: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7cfe58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cfe59: mov ecx, esi */
  ecx = esi;
/* 7cfe5b: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7cfe5e: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x7cfe64u); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
/* 7cfe64: mov ecx, eax */
  ecx = eax;
/* 7cfe66: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7cfe6a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cfe70u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cfe70: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7cfe73: mov esi, eax */
  esi = eax;
/* 7cfe75: call dword ptr [0xcfa7f0] */
  esp -= 4; W32(esp, 0x7cfe7bu); SPILL(); f_4e39d6(); if (g_unwind) return; /* Core!?String@FGuid@@QBEPAGXZ */ RELOAD();
/* 7cfe7b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7cfe7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cfe7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfe80: mov eax, dword ptr [edx + 0x3c] */
  eax = R32((uint32_t)(edx + 0x3cu));
/* 7cfe83: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7cfe86: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cfe89: push 0xadb460 */
  { uint32_t v = 0xadb460u; esp -= 4; W32(esp, v); }
/* 7cfe8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7cfe8f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7cfe91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cfe91: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cfe94: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7cfe97: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7cfe9b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7cfea1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7cfea1: /* 7cfea1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7cfea2: jmp 0x7cfdbc */
  goto L_7cfdbc;
L_7cfea7: /* 7cfea7: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7cfeaa: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cfeae: call 0x6c9dea */
  esp -= 4; W32(esp, 0x7cfeb3u); SPILL(); f_6c9dea(); if (g_unwind) return; RELOAD();
L_7cfeb3: /* 7cfeb3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7cfeb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7cfeb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7cfeb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7cfebf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7cfec0: mov esp, ebp */
  esp = ebp;
/* 7cfec2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7cfec3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7cfec6(void) {
  LOAD_REGS();
L_7cfec6: /* 7cfec6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7cfec9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7cfece: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7cfed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfed2: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7cfed5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cfedau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7cfeda(); return;
}

void f_7cfeda(void) {
  LOAD_REGS();
L_7cfeda: /* 7cfeda: push 0xa0f190 */
  { uint32_t v = 0xa0f190u; esp -= 4; W32(esp, v); }
/* 7cfedf: push 0xadb480 */
  { uint32_t v = 0xadb480u; esp -= 4; W32(esp, v); }
/* 7cfee4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7cfeeau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7cfeea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7cfeed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cfeef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cfef1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7cfef6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7cfef6: guest_badaddr(0x7cfef6); return;
}

void f_7cff90(void) {
  LOAD_REGS();
L_7cff90: /* 7cff90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7cff91: mov ebp, esp */
  ebp = esp;
/* 7cff93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7cff95: push 0x9cfee0 */
  { uint32_t v = 0x9cfee0u; esp -= 4; W32(esp, v); }
/* 7cff9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7cffa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cffa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7cffa8: sub esp, 0x61c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x61cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7cffae: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7cffb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cffb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7cffb5: mov esi, ecx */
  esi = ecx;
/* 7cffb7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cffb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7cffba: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cffbd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7cffc0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7cffc3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7cffca: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cffd0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cffd0: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7cffd6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7cffd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7cffda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7cffdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cffdd: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x7cffe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7cffe0: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7cffe5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7cffe7: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7cffea: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7cfff0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7cfff0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7cfff3: mov edi, dword ptr [0xcfa8b4] */
  edi = R32((uint32_t)(0xcfa8b4u));
/* 7cfff9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7cfffa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7cfffb: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0001: push 0xadb630 */
  { uint32_t v = 0xadb630u; esp -= 4; W32(esp, v); }
/* 7d0006: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0007: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d0009u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0009: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 7d000f: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d0012: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d0014: mov byte ptr [eax + 0x4bc], 2 */
  W8((uint32_t)(eax + 0x4bcu), 0x2u);
/* 7d001b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d001d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0020: mov ecx, esi */
  ecx = esi;
/* 7d0022: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7d0028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0028: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d002a: push 0xadb64c */
  { uint32_t v = 0xadb64cu; esp -= 4; W32(esp, v); }
/* 7d002f: push 0xadb65c */
  { uint32_t v = 0xadb65cu; esp -= 4; W32(esp, v); }
/* 7d0034: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7d003au); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7d003a: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d0040: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0042: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0044: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0047: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d004a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d004du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d004d: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d0053: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0057: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d005du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d005d: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d0063: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d0069u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d0069: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d006f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0071: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0073: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0074: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 7d007a: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0080: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0083: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0085: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d008bu); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d008b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d008e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0090: je 0x7d018a */
  if (zf) goto L_7d018a;
L_7d0096: /* 7d0096: xor esi, esi */
  esi = 0;
/* 7d0098: jmp 0x7d00a0 */
  goto L_7d00a0;
L_7d00a0: /* 7d00a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d00a3: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d00a9: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d00ac: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d00ae: cmp esi, dword ptr [eax + 0x4b8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4b8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d00b4: jge 0x7d0130 */
  if ((sf == of)) goto L_7d0130;
L_7d00b6: /* 7d00b6: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7d00bb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d00bd: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d00c0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d00c6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d00c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d00c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00c8: lea ecx, [ebp - 0x628] */
  ecx = (uint32_t)(ebp + 0xfffff9d8u);
/* 7d00ce: push 0xadb66c */
  { uint32_t v = 0xadb66cu; esp -= 4; W32(esp, v); }
/* 7d00d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d00d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d00d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d00d6: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7d00dc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d00de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d00e1: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d00e4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d00eau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d00ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d00eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d00ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00ed: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* 7d00f3: push 0xadb688 */
  { uint32_t v = 0xadb688u; esp -= 4; W32(esp, v); }
/* 7d00f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d00fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d00fb: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7d0101: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0103: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0105: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0108: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0110: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0112: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* 7d0118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0119: lea eax, [ebp - 0x628] */
  eax = (uint32_t)(ebp + 0xfffff9d8u);
/* 7d011f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0120: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7d0123u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0123: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d0124: jmp 0x7d00a0 */
  goto L_7d00a0;
L_7d0130: /* 7d0130: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7d0136: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0138: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d013b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0141u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d0143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0144: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d014a: push 0xadb6a8 */
  { uint32_t v = 0xadb6a8u; esp -= 4; W32(esp, v); }
/* 7d014f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0150: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d0152u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0152: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7d0157: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d0159: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d015b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d015e: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0165: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d0166: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d016b: jle 0x7d0187 */
  if ((zf || sf != of)) goto L_7d0187;
L_7d016d: /* 7d016d: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7d0173: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0175: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d017b: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0182: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0185: jmp 0x7d0130 */
  goto L_7d0130;
L_7d0187: /* 7d0187: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7d018a: /* 7d018a: xor edi, edi */
  edi = 0;
/* 7d018c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d0190: /* 7d0190: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d0196: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d0199: jge 0x7d0209 */
  if ((sf == of)) goto L_7d0209;
L_7d019b: /* 7d019b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d019e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d01a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01a3: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01a5: /* 7d01a5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01aa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01b0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01b2: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01b4: /* 7d01b4: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 7d01ba: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d01bd: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d01c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01c2: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d01c9: mov dword ptr [ebp - 0x1c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xbf800000u);
/* 7d01d0: mov dword ptr [ebp - 0x18], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xbf800000u);
/* 7d01d7: je 0x7d01ea */
  if (zf) goto L_7d01ea;
L_7d01d9: /* 7d01d9: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01de: mov ecx, esi */
  ecx = esi;
/* 7d01e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01e8: jne 0x7d01ec */
  if (!zf) goto L_7d01ec;
L_7d01ea: /* 7d01ea: xor esi, esi */
  esi = 0;
L_7d01ec: /* 7d01ec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d01ef: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d01f2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d01f5: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d01fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7d01fd: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7d0200: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7d0203: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7d0206: /* 7d0206: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0207: jmp 0x7d0190 */
  goto L_7d0190;
L_7d0209: /* 7d0209: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d020f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0211: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0213: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0216: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d021c: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d021f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0221: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0229: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d022e: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0235: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d023bu); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d023b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d023e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d023f: mov dword ptr [esi + 0x1c0], 0xffffffff */
  W32((uint32_t)(esi + 0x1c0u), 0xffffffffu);
/* 7d0249: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d024a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0252: mov esp, ebp */
  esp = ebp;
/* 7d0254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0255: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7d0073(void) {
  LOAD_REGS();
L_7d0073: /* 7d0073: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0074: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 7d007a: lea ecx, [ebp - 0x228] */
  ecx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0080: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0081: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0083: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0085: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d008bu); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d008b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d008e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0090: je 0x7d018a */
  if (zf) goto L_7d018a;
L_7d0096: /* 7d0096: xor esi, esi */
  esi = 0;
/* 7d0098: jmp 0x7d00a0 */
  goto L_7d00a0;
L_7d00a0: /* 7d00a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d00a3: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d00a9: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d00ac: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d00ae: cmp esi, dword ptr [eax + 0x4b8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4b8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d00b4: jge 0x7d0130 */
  if ((sf == of)) goto L_7d0130;
L_7d00b6: /* 7d00b6: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7d00bb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d00bd: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d00c0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d00c6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d00c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d00c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00c8: lea ecx, [ebp - 0x628] */
  ecx = (uint32_t)(ebp + 0xfffff9d8u);
/* 7d00ce: push 0xadb66c */
  { uint32_t v = 0xadb66cu; esp -= 4; W32(esp, v); }
/* 7d00d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d00d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d00d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d00d6: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7d00dc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d00de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d00e1: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d00e4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d00eau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d00ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d00eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d00ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00ed: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* 7d00f3: push 0xadb688 */
  { uint32_t v = 0xadb688u; esp -= 4; W32(esp, v); }
/* 7d00f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d00fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d00fb: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7d0101: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0103: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0105: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0108: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0110: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0112: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* 7d0118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0119: lea eax, [ebp - 0x628] */
  eax = (uint32_t)(ebp + 0xfffff9d8u);
/* 7d011f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0120: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7d0123u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0123: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d0124: jmp 0x7d00a0 */
  goto L_7d00a0;
L_7d0130: /* 7d0130: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7d0136: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0138: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d013b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0141u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d0143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0144: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d014a: push 0xadb6a8 */
  { uint32_t v = 0xadb6a8u; esp -= 4; W32(esp, v); }
/* 7d014f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0150: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d0152u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0152: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7d0157: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d0159: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d015b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d015e: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0165: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d0166: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d016b: jle 0x7d0187 */
  if ((zf || sf != of)) goto L_7d0187;
L_7d016d: /* 7d016d: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7d0173: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0175: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d017b: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0182: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0185: jmp 0x7d0130 */
  goto L_7d0130;
L_7d0187: /* 7d0187: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7d018a: /* 7d018a: xor edi, edi */
  edi = 0;
/* 7d018c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d0190: /* 7d0190: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d0196: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d0199: jge 0x7d0209 */
  if ((sf == of)) goto L_7d0209;
L_7d019b: /* 7d019b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d019e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d01a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01a3: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01a5: /* 7d01a5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01aa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01b0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01b2: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01b4: /* 7d01b4: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 7d01ba: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d01bd: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d01c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01c2: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d01c9: mov dword ptr [ebp - 0x1c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xbf800000u);
/* 7d01d0: mov dword ptr [ebp - 0x18], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xbf800000u);
/* 7d01d7: je 0x7d01ea */
  if (zf) goto L_7d01ea;
L_7d01d9: /* 7d01d9: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01de: mov ecx, esi */
  ecx = esi;
/* 7d01e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01e8: jne 0x7d01ec */
  if (!zf) goto L_7d01ec;
L_7d01ea: /* 7d01ea: xor esi, esi */
  esi = 0;
L_7d01ec: /* 7d01ec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d01ef: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d01f2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d01f5: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d01fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7d01fd: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7d0200: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7d0203: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7d0206: /* 7d0206: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0207: jmp 0x7d0190 */
  goto L_7d0190;
L_7d0209: /* 7d0209: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d020f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0211: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0213: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0216: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d021c: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d021f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0221: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0229: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d022e: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0235: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d023bu); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d023b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d023e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d023f: mov dword ptr [esi + 0x1c0], 0xffffffff */
  W32((uint32_t)(esi + 0x1c0u), 0xffffffffu);
/* 7d0249: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d024a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0252: mov esp, ebp */
  esp = ebp;
/* 7d0254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0255: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7d009a(void) {
  LOAD_REGS();
L_7d009a: /* 7d009a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7d00a0: /* 7d00a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d00a3: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 7d00a9: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d00ac: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d00ae: cmp esi, dword ptr [eax + 0x4b8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4b8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d00b4: jge 0x7d0130 */
  if ((sf == of)) goto L_7d0130;
L_7d00b6: /* 7d00b6: mov eax, dword ptr [0xcfa86c] */
  eax = R32((uint32_t)(0xcfa86cu));
/* 7d00bb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d00bd: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d00c0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d00c6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d00c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d00c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00c8: lea ecx, [ebp - 0x628] */
  ecx = (uint32_t)(ebp + 0xfffff9d8u);
/* 7d00ce: push 0xadb66c */
  { uint32_t v = 0xadb66cu; esp -= 4; W32(esp, v); }
/* 7d00d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d00d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d00d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d00d6: mov edx, dword ptr [0xcfa86c] */
  edx = R32((uint32_t)(0xcfa86cu));
/* 7d00dc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7d00de: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d00e1: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d00e4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d00eau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d00ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d00eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d00ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00ed: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* 7d00f3: push 0xadb688 */
  { uint32_t v = 0xadb688u; esp -= 4; W32(esp, v); }
/* 7d00f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d00f9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d00fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d00fb: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7d0101: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0103: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0105: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0108: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d010e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0110: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0112: lea eax, [ebp - 0x428] */
  eax = (uint32_t)(ebp + 0xfffffbd8u);
/* 7d0118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0119: lea eax, [ebp - 0x628] */
  eax = (uint32_t)(ebp + 0xfffff9d8u);
/* 7d011f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0120: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7d0123u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0123: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d0124: jmp 0x7d00a0 */
  goto L_7d00a0;
L_7d0130: /* 7d0130: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7d0136: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0138: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d013b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0141u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d0143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0144: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d014a: push 0xadb6a8 */
  { uint32_t v = 0xadb6a8u; esp -= 4; W32(esp, v); }
/* 7d014f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0150: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d0152u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0152: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7d0157: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d0159: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d015b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d015e: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0165: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d0166: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d016b: jle 0x7d0187 */
  if ((zf || sf != of)) goto L_7d0187;
L_7d016d: /* 7d016d: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7d0173: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0175: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d017b: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0182: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0185: jmp 0x7d0130 */
  goto L_7d0130;
L_7d0187: /* 7d0187: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d018a: xor edi, edi */
  edi = 0;
/* 7d018c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d0190: /* 7d0190: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d0196: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d0199: jge 0x7d0209 */
  if ((sf == of)) goto L_7d0209;
L_7d019b: /* 7d019b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d019e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d01a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01a3: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01a5: /* 7d01a5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01aa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01b0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01b2: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01b4: /* 7d01b4: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 7d01ba: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d01bd: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d01c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01c2: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d01c9: mov dword ptr [ebp - 0x1c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xbf800000u);
/* 7d01d0: mov dword ptr [ebp - 0x18], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xbf800000u);
/* 7d01d7: je 0x7d01ea */
  if (zf) goto L_7d01ea;
L_7d01d9: /* 7d01d9: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01de: mov ecx, esi */
  ecx = esi;
/* 7d01e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01e8: jne 0x7d01ec */
  if (!zf) goto L_7d01ec;
L_7d01ea: /* 7d01ea: xor esi, esi */
  esi = 0;
L_7d01ec: /* 7d01ec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d01ef: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d01f2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d01f5: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d01fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7d01fd: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7d0200: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7d0203: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7d0206: /* 7d0206: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0207: jmp 0x7d0190 */
  goto L_7d0190;
L_7d0209: /* 7d0209: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d020f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0211: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0213: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0216: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d021c: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d021f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0221: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0229: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d022e: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0235: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d023bu); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d023b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d023e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d023f: mov dword ptr [esi + 0x1c0], 0xffffffff */
  W32((uint32_t)(esi + 0x1c0u), 0xffffffffu);
/* 7d0249: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d024a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0252: mov esp, ebp */
  esp = ebp;
/* 7d0254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0255: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7d0129(void) {
  LOAD_REGS();
L_7d0129: /* 7d0129: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d0130: /* 7d0130: mov ecx, dword ptr [0xcfa86c] */
  ecx = R32((uint32_t)(0xcfa86cu));
/* 7d0136: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0138: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7d013b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0141u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0141: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d0143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0144: lea edx, [ebp - 0x228] */
  edx = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d014a: push 0xadb6a8 */
  { uint32_t v = 0xadb6a8u; esp -= 4; W32(esp, v); }
/* 7d014f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0150: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d0152u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0152: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 7d0157: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d0159: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d015b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d015e: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0165: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7d0166: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d016b: jle 0x7d0187 */
  if ((zf || sf != of)) goto L_7d0187;
L_7d016d: /* 7d016d: mov ecx, dword ptr [0xcfa3b0] */
  ecx = R32((uint32_t)(0xcfa3b0u));
/* 7d0173: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0175: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d017b: lea eax, [ebp - 0x228] */
  eax = (uint32_t)(ebp + 0xfffffdd8u);
/* 7d0181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0182: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0185u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0185: jmp 0x7d0130 */
  goto L_7d0130;
L_7d0187: /* 7d0187: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d018a: xor edi, edi */
  edi = 0;
/* 7d018c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7d0190: /* 7d0190: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d0196: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d0199: jge 0x7d0209 */
  if ((sf == of)) goto L_7d0209;
L_7d019b: /* 7d019b: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d019e: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 7d01a1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01a3: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01a5: /* 7d01a5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01aa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01b0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01b2: je 0x7d0206 */
  if (zf) goto L_7d0206;
L_7d01b4: /* 7d01b4: mov edx, dword ptr [esi + 0x108] */
  edx = R32((uint32_t)(esi + 0x108u));
/* 7d01ba: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d01bd: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 7d01c0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01c2: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d01c9: mov dword ptr [ebp - 0x1c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xbf800000u);
/* 7d01d0: mov dword ptr [ebp - 0x18], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xbf800000u);
/* 7d01d7: je 0x7d01ea */
  if (zf) goto L_7d01ea;
L_7d01d9: /* 7d01d9: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d01de: mov ecx, esi */
  ecx = esi;
/* 7d01e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d01e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d01e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d01e8: jne 0x7d01ec */
  if (!zf) goto L_7d01ec;
L_7d01ea: /* 7d01ea: xor esi, esi */
  esi = 0;
L_7d01ec: /* 7d01ec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d01ef: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d01f2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d01f5: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d01fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7d01fd: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7d0200: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7d0203: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_7d0206: /* 7d0206: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0207: jmp 0x7d0190 */
  goto L_7d0190;
L_7d0209: /* 7d0209: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d020f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d0211: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0213: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0216u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0216: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 7d021c: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d021f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0221: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0225: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0227: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0229: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d022e: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0235: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d023bu); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d023b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d023e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d023f: mov dword ptr [esi + 0x1c0], 0xffffffff */
  W32((uint32_t)(esi + 0x1c0u), 0xffffffffu);
/* 7d0249: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d024a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0251: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0252: mov esp, ebp */
  esp = ebp;
/* 7d0254: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0255: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7d0258(void) {
  LOAD_REGS();
L_7d0258: /* 7d0258: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7d025b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d0260: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7d0263: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0264: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7d0267: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d026cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d026c(); return;
}

void f_7d026c(void) {
  LOAD_REGS();
L_7d026c: /* 7d026c: push 0xa0f1d8 */
  { uint32_t v = 0xa0f1d8u; esp -= 4; W32(esp, v); }
/* 7d0271: push 0xadb6c8 */
  { uint32_t v = 0xadb6c8u; esp -= 4; W32(esp, v); }
/* 7d0276: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d027cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d027c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d027f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0281: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0283: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d0288u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7d0288: guest_badaddr(0x7d0288); return;
}

void f_7d0350(void) {
  LOAD_REGS();
L_7d0350: /* 7d0350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7d0351: mov ebp, esp */
  ebp = esp;
/* 7d0353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0355: push 0x9cfef0 */
  { uint32_t v = 0x9cfef0u; esp -= 4; W32(esp, v); }
/* 7d035a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7d0360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7d0368: sub esp, 0x228 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x228u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d036e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d036f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0370: mov esi, ecx */
  esi = ecx;
/* 7d0372: mov ecx, dword ptr [esi + 0x108] */
  ecx = R32((uint32_t)(esi + 0x108u));
/* 7d0378: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0379: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d037c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7d037f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d0386: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d038cu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d038c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d038e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0391: call dword ptr [0xcfa8e4] */
  esp -= 4; W32(esp, 0x7d0397u); SPILL(); f_4e3d46(); if (g_unwind) return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */ RELOAD();
/* 7d0397: mov eax, dword ptr [esi + 0x1f4] */
  eax = R32((uint32_t)(esi + 0x1f4u));
/* 7d039d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d03a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d03a2: je 0x7d03f6 */
  if (zf) goto L_7d03f6;
L_7d03a4: /* 7d03a4: push 0xadb6d0 */
  { uint32_t v = 0xadb6d0u; esp -= 4; W32(esp, v); }
/* 7d03a9: push 0xadb6d8 */
  { uint32_t v = 0xadb6d8u; esp -= 4; W32(esp, v); }
L_7d03ae: /* 7d03ae: call dword ptr [0xcfaf84] */
  esp -= 4; W32(esp, 0x7d03b4u); SPILL(); f_d5148d(); if (g_unwind) return; /* EngineEx!?ContainerManager_Filter_Containers@@YAXPAD0@Z */ RELOAD();
/* 7d03b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d03b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d03b9: call dword ptr [0xcfaf88] */
  esp -= 4; W32(esp, 0x7d03bfu); SPILL(); f_d513bb(); if (g_unwind) return; /* EngineEx!?ContainerManager_Filtered_To_Real_Index@@YAHH@Z */ RELOAD();
/* 7d03bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d03c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d03c4: jl 0x7d03d0 */
  if ((sf != of)) goto L_7d03d0;
L_7d03c6: /* 7d03c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d03c7: call dword ptr [0xcfaf8c] */
  esp -= 4; W32(esp, 0x7d03cdu); SPILL(); f_d51b77(); if (g_unwind) return; /* EngineEx!?ContainerManager_Delete_Container@@YA_NH@Z */ RELOAD();
/* 7d03cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d03d0: /* 7d03d0: mov ebx, dword ptr [0xcfa8e0] */
  ebx = R32((uint32_t)(0xcfa8e0u));
L_7d03d6: /* 7d03d6: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7d03d9: mov ecx, edi */
  ecx = edi;
/* 7d03db: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d03e1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d03e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d03e2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d03e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d03e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d03e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d03e9: jne 0x7d04a5 */
  if (!zf) goto L_7d04a5;
L_7d03ef: /* 7d03ef: xor esi, esi */
  esi = 0;
/* 7d03f1: jmp 0x7d04c9 */
  goto L_7d04c9;
L_7d03f6: /* 7d03f6: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 7d03fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d03fe: je 0x7d040c */
  if (zf) goto L_7d040c;
L_7d0400: /* 7d0400: push 0xadb6e4 */
  { uint32_t v = 0xadb6e4u; esp -= 4; W32(esp, v); }
/* 7d0405: push 0xadb6ec */
  { uint32_t v = 0xadb6ecu; esp -= 4; W32(esp, v); }
/* 7d040a: jmp 0x7d03ae */
  goto L_7d03ae;
L_7d040c: /* 7d040c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7d040f: mov ecx, edi */
  ecx = edi;
/* 7d0411: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0417u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0417: mov ebx, dword ptr [0xcfa8e0] */
  ebx = R32((uint32_t)(0xcfa8e0u));
/* 7d041d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d041e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0420u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0420: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0425: jne 0x7d042b */
  if (!zf) goto L_7d042b;
L_7d0427: /* 7d0427: xor esi, esi */
  esi = 0;
/* 7d0429: jmp 0x7d044f */
  goto L_7d044f;
L_7d042b: /* 7d042b: mov ecx, edi */
  ecx = edi;
/* 7d042d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0433u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0433: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0434: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0436u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0436: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0439: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d043c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d043f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0442: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0445: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d044au); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d044a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d044d: mov esi, esp */
  esi = esp;
L_7d044f: /* 7d044f: mov ecx, edi */
  ecx = edi;
/* 7d0451: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0457u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0458: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d045au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d045a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d045d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0460: mov edi, eax */
  edi = eax;
/* 7d0462: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0468u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0468: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d046a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d046b: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d0471u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d0471: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0475: push 0xadb6f8 */
  { uint32_t v = 0xadb6f8u; esp -= 4; W32(esp, v); }
/* 7d047a: call dword ptr [0xcfaf84] */
  esp -= 4; W32(esp, 0x7d0480u); SPILL(); f_d5148d(); if (g_unwind) return; /* EngineEx!?ContainerManager_Filter_Containers@@YAXPAD0@Z */ RELOAD();
/* 7d0480: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0483: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0485: call dword ptr [0xcfaf88] */
  esp -= 4; W32(esp, 0x7d048bu); SPILL(); f_d513bb(); if (g_unwind) return; /* EngineEx!?ContainerManager_Filtered_To_Real_Index@@YAHH@Z */ RELOAD();
/* 7d048b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d048e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d0490: jl 0x7d03d6 */
  if ((sf != of)) goto L_7d03d6;
L_7d0496: /* 7d0496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0497: call dword ptr [0xcfaf8c] */
  esp -= 4; W32(esp, 0x7d049du); SPILL(); f_d51b77(); if (g_unwind) return; /* EngineEx!?ContainerManager_Delete_Container@@YA_NH@Z */ RELOAD();
/* 7d049d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d04a0: jmp 0x7d03d6 */
  goto L_7d03d6;
L_7d04a5: /* 7d04a5: mov ecx, edi */
  ecx = edi;
/* 7d04a7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d04adu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d04ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d04ae: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d04b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d04b0: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d04b3: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d04b6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d04b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d04bc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d04bf: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d04c4u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d04c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d04c7: mov esi, esp */
  esi = esp;
L_7d04c9: /* 7d04c9: mov ecx, edi */
  ecx = edi;
/* 7d04cb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d04d1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d04d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d04d2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d04d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d04d4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7d04d7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d04da: mov ecx, ebx */
  ecx = ebx;
/* 7d04dc: mov edi, eax */
  edi = eax;
/* 7d04de: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d04e4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d04e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d04e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d04e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d04e7: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d04edu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d04ed: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d04f0: mov edx, dword ptr [ecx + 0x1f4] */
  edx = R32((uint32_t)(ecx + 0x1f4u));
/* 7d04f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d04f9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d04fb: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7d04fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d04ff: push 0xadb700 */
  { uint32_t v = 0xadb700u; esp -= 4; W32(esp, v); }
/* 7d0504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0505: call dword ptr [0xcfaf90] */
  esp -= 4; W32(esp, 0x7d050bu); SPILL(); f_d5116d(); if (g_unwind) return; /* EngineEx!?ContainerManager_Create_Container@@YAHPAD0_N@Z */ RELOAD();
/* 7d050b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d050e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d0510: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7d0513: jge 0x7d053f */
  if ((sf == of)) goto L_7d053f;
L_7d0515: /* 7d0515: mov ecx, ebx */
  ecx = ebx;
L_7d0517: /* 7d0517: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d051du); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d051d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d0520: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d0526u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d0526: lea esp, [ebp - 0x240] */
  esp = (uint32_t)(ebp + 0xfffffdc0u);
/* 7d052c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d052f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0538: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0539: mov esp, ebp */
  esp = ebp;
/* 7d053b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d053c: ret 8 */
  esp += 12; SPILL(); return;
L_7d053f: /* 7d053f: push 0xadb714 */
  { uint32_t v = 0xadb714u; esp -= 4; W32(esp, v); }
/* 7d0544: push 0xadb71c */
  { uint32_t v = 0xadb71cu; esp -= 4; W32(esp, v); }
/* 7d0549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d054a: call dword ptr [0xcfaf94] */
  esp -= 4; W32(esp, 0x7d0550u); SPILL(); f_d519ec(); if (g_unwind) return; /* EngineEx!?ContainerManager_Set_Container_Meta@@YAXHPAD0@Z */ RELOAD();
/* 7d0550: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0553: add ebx, 0x1e8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1e8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7d0559: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d055c: mov ecx, ebx */
  ecx = ebx;
/* 7d055e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0564u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0564: mov esi, dword ptr [0xcfa8e0] */
  esi = R32((uint32_t)(0xcfa8e0u));
/* 7d056a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d056b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d056du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d056d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0570: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0572: jne 0x7d0578 */
  if (!zf) goto L_7d0578;
L_7d0574: /* 7d0574: xor esi, esi */
  esi = 0;
/* 7d0576: jmp 0x7d059c */
  goto L_7d059c;
L_7d0578: /* 7d0578: mov ecx, ebx */
  ecx = ebx;
/* 7d057a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0580u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0581: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d0583u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0583: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0586: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0589: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d058c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d058f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0592: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d0597u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d0597: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d059a: mov esi, esp */
  esi = esp;
L_7d059c: /* 7d059c: mov ecx, ebx */
  ecx = ebx;
/* 7d059e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05a4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05a5: call dword ptr [0xcfa8e0] */
  esp -= 4; W32(esp, 0x7d05abu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 7d05ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05ae: mov ecx, ebx */
  ecx = ebx;
/* 7d05b0: mov edi, eax */
  edi = eax;
/* 7d05b2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05b8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d05b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d05bb: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d05c1u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d05c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d05c8: push 0xadb728 */
  { uint32_t v = 0xadb728u; esp -= 4; W32(esp, v); }
/* 7d05cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ce: call dword ptr [0xcfaf94] */
  esp -= 4; W32(esp, 0x7d05d4u); SPILL(); f_d519ec(); if (g_unwind) return; /* EngineEx!?ContainerManager_Set_Container_Meta@@YAXHPAD0@Z */ RELOAD();
/* 7d05d4: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d05d7: add ebx, 0x1d0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1d0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7d05dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05e0: mov ecx, ebx */
  ecx = ebx;
/* 7d05e2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05e8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05e8: mov esi, dword ptr [0xcfa8e0] */
  esi = R32((uint32_t)(0xcfa8e0u));
/* 7d05ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ef: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d05f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d05f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d05f6: jne 0x7d05fc */
  if (!zf) goto L_7d05fc;
L_7d05f8: /* 7d05f8: xor esi, esi */
  esi = 0;
/* 7d05fa: jmp 0x7d0620 */
  goto L_7d0620;
L_7d05fc: /* 7d05fc: mov ecx, ebx */
  ecx = ebx;
/* 7d05fe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0604u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0605: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d0607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0607: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d060a: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d060d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0610: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0613: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0616: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d061bu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d061b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d061e: mov esi, esp */
  esi = esp;
L_7d0620: /* 7d0620: mov ecx, ebx */
  ecx = ebx;
/* 7d0622: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0628u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0629: call dword ptr [0xcfa8e0] */
  esp -= 4; W32(esp, 0x7d062fu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 7d062f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0632: mov ecx, ebx */
  ecx = ebx;
/* 7d0634: mov edi, eax */
  edi = eax;
/* 7d0636: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d063cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d063c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d063d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d063e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d063f: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d0645u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d0645: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0648: mov esi, dword ptr [0xcfaf94] */
  esi = R32((uint32_t)(0xcfaf94u));
/* 7d064e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0652: push 0xadb730 */
  { uint32_t v = 0xadb730u; esp -= 4; W32(esp, v); }
/* 7d0657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0658: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d065au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d065a: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d065d: mov eax, dword ptr [ebx + 0x1f4] */
  eax = R32((uint32_t)(ebx + 0x1f4u));
/* 7d0663: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0666: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0668: mov eax, 0xadb738 */
  eax = 0xadb738u;
/* 7d066d: jne 0x7d0674 */
  if (!zf) goto L_7d0674;
L_7d066f: /* 7d066f: mov eax, 0xadb740 */
  eax = 0xadb740u;
L_7d0674: /* 7d0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0675: push 0xadb748 */
  { uint32_t v = 0xadb748u; esp -= 4; W32(esp, v); }
/* 7d067a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d067b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d067du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d067d: mov eax, dword ptr [ebx + 0x204] */
  eax = R32((uint32_t)(ebx + 0x204u));
/* 7d0683: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0686: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0688: mov eax, 0xadb754 */
  eax = 0xadb754u;
/* 7d068d: jne 0x7d0694 */
  if (!zf) goto L_7d0694;
L_7d068f: /* 7d068f: mov eax, 0xadb75c */
  eax = 0xadb75cu;
L_7d0694: /* 7d0694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0695: push 0xadb764 */
  { uint32_t v = 0xadb764u; esp -= 4; W32(esp, v); }
/* 7d069a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d069b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d069du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d069d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06a0: mov ebx, dword ptr [0xcfaf98] */
  ebx = R32((uint32_t)(0xcfaf98u));
/* 7d06a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06aa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ac: mov esi, dword ptr [0xcfa8d8] */
  esi = R32((uint32_t)(0xcfa8d8u));
/* 7d06b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06b6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06b8: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 7d06bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d06c0: jne 0x7d06c6 */
  if (!zf) goto L_7d06c6;
L_7d06c2: /* 7d06c2: xor esi, esi */
  esi = 0;
/* 7d06c4: jmp 0x7d06e9 */
  goto L_7d06e9;
L_7d06c6: /* 7d06c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06cf: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* 7d06d3: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06d6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d06d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06dc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06df: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d06e4u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d06e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d06e7: mov esi, esp */
  esi = esp;
L_7d06e9: /* 7d06e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06ea: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06f0: call dword ptr [0xcfa8d8] */
  esp -= 4; W32(esp, 0x7d06f6u); SPILL(); f_4e3c9c(); if (g_unwind) return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */ RELOAD();
/* 7d06f6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d06fd: mov edi, eax */
  edi = eax;
/* 7d06ff: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0701: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0707: call dword ptr [0xcfa8d4] */
  esp -= 4; W32(esp, 0x7d070du); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* 7d070d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0711: lea eax, [ebp - 0x234] */
  eax = (uint32_t)(ebp + 0xfffffdccu);
/* 7d0717: push 0xadb770 */
  { uint32_t v = 0xadb770u; esp -= 4; W32(esp, v); }
/* 7d071c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d071d: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7d0723u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7d0723: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0726: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0729: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d072b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d072c: call dword ptr [0xcfaf9c] */
  esp -= 4; W32(esp, 0x7d0732u); SPILL(); f_d5140b(); if (g_unwind) return; /* EngineEx!?ContainerManager_Open_Container@@YA_NH_N@Z */ RELOAD();
/* 7d0732: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0735: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d073b: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d073e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d0740: mov byte ptr [eax + 0x4bc], 2 */
  W8((uint32_t)(eax + 0x4bcu), 0x2u);
/* 7d0747: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d0749: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d074c: mov ecx, ebx */
  ecx = ebx;
/* 7d074e: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7d0754u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0756: push 0xadb788 */
  { uint32_t v = 0xadb788u; esp -= 4; W32(esp, v); }
/* 7d075b: push 0xadb798 */
  { uint32_t v = 0xadb798u; esp -= 4; W32(esp, v); }
/* 7d0760: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7d0766u); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7d0766: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d076c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d076e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0770: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0773: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0776: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0779: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d077f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0781: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0783: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d0789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0789: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d078f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d0795u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d0795: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d079a: call dword ptr [0xcfa8e4] */
  esp -= 4; W32(esp, 0x7d07a0u); SPILL(); f_4e3d46(); if (g_unwind) return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */ RELOAD();
/* 7d07a0: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d07a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07a9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d07afu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d07af: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d07b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d07b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ba: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d07c0: lea ecx, [ebp - 0x234] */
  ecx = (uint32_t)(ebp + 0xfffffdccu);
/* 7d07c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d07c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d07cb: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d07d1u); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d07d1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07d4: xor edi, edi */
  edi = 0;
/* 7d07d6: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d07e0: /* 7d07e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d07e6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d07e9: jge 0x7d0856 */
  if ((sf == of)) goto L_7d0856;
L_7d07eb: /* 7d07eb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d07ee: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d07f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d07f3: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d07f5: /* 7d07f5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d07fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0800u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0802: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d0804: /* 7d0804: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d080a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d080d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7d0810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0812: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 7d0819: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 7d0820: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d0827: je 0x7d083a */
  if (zf) goto L_7d083a;
L_7d0829: /* 7d0829: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d082e: mov ecx, esi */
  ecx = esi;
/* 7d0830: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0836u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0838: jne 0x7d083c */
  if (!zf) goto L_7d083c;
L_7d083a: /* 7d083a: xor esi, esi */
  esi = 0;
L_7d083c: /* 7d083c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7d083f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d0842: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d0845: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d084b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7d084d: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7d0850: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7d0853: /* 7d0853: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0854: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d0856: /* 7d0856: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7d085b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d085d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d085f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0862: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d0868: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d086b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d086d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d086f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0875: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d087a: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0881: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d0887u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d0887: call dword ptr [0xcfafa0] */
  esp -= 4; W32(esp, 0x7d088du); SPILL(); f_d51587(); if (g_unwind) return; /* EngineEx!?ContainerManager_Close_Container@@YA_NXZ */ RELOAD();
/* 7d088d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d0890: jmp 0x7d0517 */
  goto L_7d0517;
}

void f_7d053f(void) {
  LOAD_REGS();
  goto L_7d053f;
L_7d0517: /* 7d0517: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d051du); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d051d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d0520: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d0526u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d0526: lea esp, [ebp - 0x240] */
  esp = (uint32_t)(ebp + 0xfffffdc0u);
/* 7d052c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d052f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0538: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0539: mov esp, ebp */
  esp = ebp;
/* 7d053b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d053c: ret 8 */
  esp += 12; SPILL(); return;
L_7d053f: /* 7d053f: push 0xadb714 */
  { uint32_t v = 0xadb714u; esp -= 4; W32(esp, v); }
/* 7d0544: push 0xadb71c */
  { uint32_t v = 0xadb71cu; esp -= 4; W32(esp, v); }
/* 7d0549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d054a: call dword ptr [0xcfaf94] */
  esp -= 4; W32(esp, 0x7d0550u); SPILL(); f_d519ec(); if (g_unwind) return; /* EngineEx!?ContainerManager_Set_Container_Meta@@YAXHPAD0@Z */ RELOAD();
/* 7d0550: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0553: add ebx, 0x1e8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1e8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7d0559: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d055c: mov ecx, ebx */
  ecx = ebx;
/* 7d055e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0564u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0564: mov esi, dword ptr [0xcfa8e0] */
  esi = R32((uint32_t)(0xcfa8e0u));
/* 7d056a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d056b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d056du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d056d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0570: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0572: jne 0x7d0578 */
  if (!zf) goto L_7d0578;
L_7d0574: /* 7d0574: xor esi, esi */
  esi = 0;
/* 7d0576: jmp 0x7d059c */
  goto L_7d059c;
L_7d0578: /* 7d0578: mov ecx, ebx */
  ecx = ebx;
/* 7d057a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0580u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0581: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d0583u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0583: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0586: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0589: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d058c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d058f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0592: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d0597u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d0597: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d059a: mov esi, esp */
  esi = esp;
L_7d059c: /* 7d059c: mov ecx, ebx */
  ecx = ebx;
/* 7d059e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05a4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05a5: call dword ptr [0xcfa8e0] */
  esp -= 4; W32(esp, 0x7d05abu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 7d05ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05ae: mov ecx, ebx */
  ecx = ebx;
/* 7d05b0: mov edi, eax */
  edi = eax;
/* 7d05b2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05b8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d05b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d05bb: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d05c1u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d05c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d05c8: push 0xadb728 */
  { uint32_t v = 0xadb728u; esp -= 4; W32(esp, v); }
/* 7d05cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ce: call dword ptr [0xcfaf94] */
  esp -= 4; W32(esp, 0x7d05d4u); SPILL(); f_d519ec(); if (g_unwind) return; /* EngineEx!?ContainerManager_Set_Container_Meta@@YAXHPAD0@Z */ RELOAD();
/* 7d05d4: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d05d7: add ebx, 0x1d0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1d0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7d05dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05e0: mov ecx, ebx */
  ecx = ebx;
/* 7d05e2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05e8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05e8: mov esi, dword ptr [0xcfa8e0] */
  esi = R32((uint32_t)(0xcfa8e0u));
/* 7d05ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ef: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d05f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d05f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d05f6: jne 0x7d05fc */
  if (!zf) goto L_7d05fc;
L_7d05f8: /* 7d05f8: xor esi, esi */
  esi = 0;
/* 7d05fa: jmp 0x7d0620 */
  goto L_7d0620;
L_7d05fc: /* 7d05fc: mov ecx, ebx */
  ecx = ebx;
/* 7d05fe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0604u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0605: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d0607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0607: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d060a: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d060d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0610: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0613: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0616: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d061bu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d061b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d061e: mov esi, esp */
  esi = esp;
L_7d0620: /* 7d0620: mov ecx, ebx */
  ecx = ebx;
/* 7d0622: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0628u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0629: call dword ptr [0xcfa8e0] */
  esp -= 4; W32(esp, 0x7d062fu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 7d062f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0632: mov ecx, ebx */
  ecx = ebx;
/* 7d0634: mov edi, eax */
  edi = eax;
/* 7d0636: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d063cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d063c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d063d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d063e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d063f: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d0645u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d0645: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0648: mov esi, dword ptr [0xcfaf94] */
  esi = R32((uint32_t)(0xcfaf94u));
/* 7d064e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0652: push 0xadb730 */
  { uint32_t v = 0xadb730u; esp -= 4; W32(esp, v); }
/* 7d0657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0658: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d065au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d065a: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d065d: mov eax, dword ptr [ebx + 0x1f4] */
  eax = R32((uint32_t)(ebx + 0x1f4u));
/* 7d0663: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0666: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0668: mov eax, 0xadb738 */
  eax = 0xadb738u;
/* 7d066d: jne 0x7d0674 */
  if (!zf) goto L_7d0674;
L_7d066f: /* 7d066f: mov eax, 0xadb740 */
  eax = 0xadb740u;
L_7d0674: /* 7d0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0675: push 0xadb748 */
  { uint32_t v = 0xadb748u; esp -= 4; W32(esp, v); }
/* 7d067a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d067b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d067du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d067d: mov eax, dword ptr [ebx + 0x204] */
  eax = R32((uint32_t)(ebx + 0x204u));
/* 7d0683: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0686: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0688: mov eax, 0xadb754 */
  eax = 0xadb754u;
/* 7d068d: jne 0x7d0694 */
  if (!zf) goto L_7d0694;
L_7d068f: /* 7d068f: mov eax, 0xadb75c */
  eax = 0xadb75cu;
L_7d0694: /* 7d0694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0695: push 0xadb764 */
  { uint32_t v = 0xadb764u; esp -= 4; W32(esp, v); }
/* 7d069a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d069b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d069du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d069d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06a0: mov ebx, dword ptr [0xcfaf98] */
  ebx = R32((uint32_t)(0xcfaf98u));
/* 7d06a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06aa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ac: mov esi, dword ptr [0xcfa8d8] */
  esi = R32((uint32_t)(0xcfa8d8u));
/* 7d06b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06b6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06b8: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 7d06bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d06c0: jne 0x7d06c6 */
  if (!zf) goto L_7d06c6;
L_7d06c2: /* 7d06c2: xor esi, esi */
  esi = 0;
/* 7d06c4: jmp 0x7d06e9 */
  goto L_7d06e9;
L_7d06c6: /* 7d06c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06cf: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* 7d06d3: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06d6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d06d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06dc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06df: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d06e4u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d06e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d06e7: mov esi, esp */
  esi = esp;
L_7d06e9: /* 7d06e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06ea: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06f0: call dword ptr [0xcfa8d8] */
  esp -= 4; W32(esp, 0x7d06f6u); SPILL(); f_4e3c9c(); if (g_unwind) return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */ RELOAD();
/* 7d06f6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d06fd: mov edi, eax */
  edi = eax;
/* 7d06ff: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0701: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0707: call dword ptr [0xcfa8d4] */
  esp -= 4; W32(esp, 0x7d070du); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* 7d070d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0711: lea eax, [ebp - 0x234] */
  eax = (uint32_t)(ebp + 0xfffffdccu);
/* 7d0717: push 0xadb770 */
  { uint32_t v = 0xadb770u; esp -= 4; W32(esp, v); }
/* 7d071c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d071d: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7d0723u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7d0723: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0726: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0729: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d072b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d072c: call dword ptr [0xcfaf9c] */
  esp -= 4; W32(esp, 0x7d0732u); SPILL(); f_d5140b(); if (g_unwind) return; /* EngineEx!?ContainerManager_Open_Container@@YA_NH_N@Z */ RELOAD();
/* 7d0732: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0735: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d073b: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d073e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d0740: mov byte ptr [eax + 0x4bc], 2 */
  W8((uint32_t)(eax + 0x4bcu), 0x2u);
/* 7d0747: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d0749: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d074c: mov ecx, ebx */
  ecx = ebx;
/* 7d074e: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7d0754u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0756: push 0xadb788 */
  { uint32_t v = 0xadb788u; esp -= 4; W32(esp, v); }
/* 7d075b: push 0xadb798 */
  { uint32_t v = 0xadb798u; esp -= 4; W32(esp, v); }
/* 7d0760: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7d0766u); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7d0766: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d076c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d076e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0770: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0773: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0776: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0779: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d077f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0781: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0783: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d0789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0789: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d078f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d0795u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d0795: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d079a: call dword ptr [0xcfa8e4] */
  esp -= 4; W32(esp, 0x7d07a0u); SPILL(); f_4e3d46(); if (g_unwind) return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */ RELOAD();
/* 7d07a0: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d07a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07a9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d07afu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d07af: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d07b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d07b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ba: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d07c0: lea ecx, [ebp - 0x234] */
  ecx = (uint32_t)(ebp + 0xfffffdccu);
/* 7d07c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d07c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d07cb: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d07d1u); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d07d1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07d4: xor edi, edi */
  edi = 0;
/* 7d07d6: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d07e0: /* 7d07e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d07e6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d07e9: jge 0x7d0856 */
  if ((sf == of)) goto L_7d0856;
L_7d07eb: /* 7d07eb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d07ee: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d07f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d07f3: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d07f5: /* 7d07f5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d07fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0800u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0802: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d0804: /* 7d0804: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d080a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d080d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7d0810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0812: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 7d0819: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 7d0820: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d0827: je 0x7d083a */
  if (zf) goto L_7d083a;
L_7d0829: /* 7d0829: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d082e: mov ecx, esi */
  ecx = esi;
/* 7d0830: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0836u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0838: jne 0x7d083c */
  if (!zf) goto L_7d083c;
L_7d083a: /* 7d083a: xor esi, esi */
  esi = 0;
L_7d083c: /* 7d083c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7d083f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d0842: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d0845: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d084b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7d084d: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7d0850: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7d0853: /* 7d0853: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0854: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d0856: /* 7d0856: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7d085b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d085d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d085f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0862: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d0868: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d086b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d086d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d086f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0875: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d087a: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0881: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d0887u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d0887: call dword ptr [0xcfafa0] */
  esp -= 4; W32(esp, 0x7d088du); SPILL(); f_d51587(); if (g_unwind) return; /* EngineEx!?ContainerManager_Close_Container@@YA_NXZ */ RELOAD();
/* 7d088d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d0890: jmp 0x7d0517 */
  goto L_7d0517;
}

void f_7d0578(void) {
  LOAD_REGS();
  goto L_7d0578;
L_7d0517: /* 7d0517: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d051du); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d051d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d0520: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d0526u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d0526: lea esp, [ebp - 0x240] */
  esp = (uint32_t)(ebp + 0xfffffdc0u);
/* 7d052c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d052f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0538: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0539: mov esp, ebp */
  esp = ebp;
/* 7d053b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d053c: ret 8 */
  esp += 12; SPILL(); return;
L_7d0578: /* 7d0578: mov ecx, ebx */
  ecx = ebx;
/* 7d057a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0580u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0581: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d0583u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0583: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0586: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0589: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d058c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d058f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0592: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d0597u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d0597: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d059a: mov esi, esp */
  esi = esp;
/* 7d059c: mov ecx, ebx */
  ecx = ebx;
/* 7d059e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05a4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05a5: call dword ptr [0xcfa8e0] */
  esp -= 4; W32(esp, 0x7d05abu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 7d05ab: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05ae: mov ecx, ebx */
  ecx = ebx;
/* 7d05b0: mov edi, eax */
  edi = eax;
/* 7d05b2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05b8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d05b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d05bb: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d05c1u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d05c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05c5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d05c8: push 0xadb728 */
  { uint32_t v = 0xadb728u; esp -= 4; W32(esp, v); }
/* 7d05cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ce: call dword ptr [0xcfaf94] */
  esp -= 4; W32(esp, 0x7d05d4u); SPILL(); f_d519ec(); if (g_unwind) return; /* EngineEx!?ContainerManager_Set_Container_Meta@@YAXHPAD0@Z */ RELOAD();
/* 7d05d4: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d05d7: add ebx, 0x1d0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1d0u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7d05dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05e0: mov ecx, ebx */
  ecx = ebx;
/* 7d05e2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d05e8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d05e8: mov esi, dword ptr [0xcfa8e0] */
  esi = R32((uint32_t)(0xcfa8e0u));
/* 7d05ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d05ef: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d05f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d05f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d05f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d05f6: jne 0x7d05fc */
  if (!zf) goto L_7d05fc;
L_7d05f8: /* 7d05f8: xor esi, esi */
  esi = 0;
/* 7d05fa: jmp 0x7d0620 */
  goto L_7d0620;
L_7d05fc: /* 7d05fc: mov ecx, ebx */
  ecx = ebx;
/* 7d05fe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0604u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0605: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d0607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0607: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d060a: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d060d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0610: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0613: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0616: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d061bu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d061b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d061e: mov esi, esp */
  esi = esp;
L_7d0620: /* 7d0620: mov ecx, ebx */
  ecx = ebx;
/* 7d0622: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0628u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0629: call dword ptr [0xcfa8e0] */
  esp -= 4; W32(esp, 0x7d062fu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 7d062f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0632: mov ecx, ebx */
  ecx = ebx;
/* 7d0634: mov edi, eax */
  edi = eax;
/* 7d0636: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d063cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d063c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d063d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d063e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d063f: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d0645u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d0645: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0648: mov esi, dword ptr [0xcfaf94] */
  esi = R32((uint32_t)(0xcfaf94u));
/* 7d064e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0652: push 0xadb730 */
  { uint32_t v = 0xadb730u; esp -= 4; W32(esp, v); }
/* 7d0657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0658: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d065au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d065a: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d065d: mov eax, dword ptr [ebx + 0x1f4] */
  eax = R32((uint32_t)(ebx + 0x1f4u));
/* 7d0663: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0666: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0668: mov eax, 0xadb738 */
  eax = 0xadb738u;
/* 7d066d: jne 0x7d0674 */
  if (!zf) goto L_7d0674;
L_7d066f: /* 7d066f: mov eax, 0xadb740 */
  eax = 0xadb740u;
L_7d0674: /* 7d0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0675: push 0xadb748 */
  { uint32_t v = 0xadb748u; esp -= 4; W32(esp, v); }
/* 7d067a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d067b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d067du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d067d: mov eax, dword ptr [ebx + 0x204] */
  eax = R32((uint32_t)(ebx + 0x204u));
/* 7d0683: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0686: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0688: mov eax, 0xadb754 */
  eax = 0xadb754u;
/* 7d068d: jne 0x7d0694 */
  if (!zf) goto L_7d0694;
L_7d068f: /* 7d068f: mov eax, 0xadb75c */
  eax = 0xadb75cu;
L_7d0694: /* 7d0694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0695: push 0xadb764 */
  { uint32_t v = 0xadb764u; esp -= 4; W32(esp, v); }
/* 7d069a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d069b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d069du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d069d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06a0: mov ebx, dword ptr [0xcfaf98] */
  ebx = R32((uint32_t)(0xcfaf98u));
/* 7d06a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06aa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ac: mov esi, dword ptr [0xcfa8d8] */
  esi = R32((uint32_t)(0xcfa8d8u));
/* 7d06b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06b6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06b8: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 7d06bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d06c0: jne 0x7d06c6 */
  if (!zf) goto L_7d06c6;
L_7d06c2: /* 7d06c2: xor esi, esi */
  esi = 0;
/* 7d06c4: jmp 0x7d06e9 */
  goto L_7d06e9;
L_7d06c6: /* 7d06c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06cf: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* 7d06d3: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06d6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d06d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06dc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06df: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d06e4u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d06e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d06e7: mov esi, esp */
  esi = esp;
L_7d06e9: /* 7d06e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06ea: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06f0: call dword ptr [0xcfa8d8] */
  esp -= 4; W32(esp, 0x7d06f6u); SPILL(); f_4e3c9c(); if (g_unwind) return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */ RELOAD();
/* 7d06f6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d06fd: mov edi, eax */
  edi = eax;
/* 7d06ff: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0701: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0707: call dword ptr [0xcfa8d4] */
  esp -= 4; W32(esp, 0x7d070du); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* 7d070d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0711: lea eax, [ebp - 0x234] */
  eax = (uint32_t)(ebp + 0xfffffdccu);
/* 7d0717: push 0xadb770 */
  { uint32_t v = 0xadb770u; esp -= 4; W32(esp, v); }
/* 7d071c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d071d: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7d0723u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7d0723: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0726: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0729: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d072b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d072c: call dword ptr [0xcfaf9c] */
  esp -= 4; W32(esp, 0x7d0732u); SPILL(); f_d5140b(); if (g_unwind) return; /* EngineEx!?ContainerManager_Open_Container@@YA_NH_N@Z */ RELOAD();
/* 7d0732: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0735: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d073b: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d073e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d0740: mov byte ptr [eax + 0x4bc], 2 */
  W8((uint32_t)(eax + 0x4bcu), 0x2u);
/* 7d0747: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d0749: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d074c: mov ecx, ebx */
  ecx = ebx;
/* 7d074e: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7d0754u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0756: push 0xadb788 */
  { uint32_t v = 0xadb788u; esp -= 4; W32(esp, v); }
/* 7d075b: push 0xadb798 */
  { uint32_t v = 0xadb798u; esp -= 4; W32(esp, v); }
/* 7d0760: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7d0766u); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7d0766: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d076c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d076e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0770: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0773: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0776: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0779: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d077f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0781: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0783: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d0789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0789: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d078f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d0795u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d0795: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d079a: call dword ptr [0xcfa8e4] */
  esp -= 4; W32(esp, 0x7d07a0u); SPILL(); f_4e3d46(); if (g_unwind) return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */ RELOAD();
/* 7d07a0: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d07a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07a9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d07afu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d07af: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d07b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d07b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ba: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d07c0: lea ecx, [ebp - 0x234] */
  ecx = (uint32_t)(ebp + 0xfffffdccu);
/* 7d07c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d07c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d07cb: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d07d1u); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d07d1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07d4: xor edi, edi */
  edi = 0;
/* 7d07d6: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d07e0: /* 7d07e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d07e6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d07e9: jge 0x7d0856 */
  if ((sf == of)) goto L_7d0856;
L_7d07eb: /* 7d07eb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d07ee: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d07f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d07f3: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d07f5: /* 7d07f5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d07fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0800u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0802: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d0804: /* 7d0804: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d080a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d080d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7d0810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0812: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 7d0819: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 7d0820: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d0827: je 0x7d083a */
  if (zf) goto L_7d083a;
L_7d0829: /* 7d0829: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d082e: mov ecx, esi */
  ecx = esi;
/* 7d0830: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0836u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0838: jne 0x7d083c */
  if (!zf) goto L_7d083c;
L_7d083a: /* 7d083a: xor esi, esi */
  esi = 0;
L_7d083c: /* 7d083c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7d083f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d0842: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d0845: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d084b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7d084d: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7d0850: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7d0853: /* 7d0853: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0854: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d0856: /* 7d0856: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7d085b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d085d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d085f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0862: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d0868: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d086b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d086d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d086f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0875: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d087a: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0881: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d0887u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d0887: call dword ptr [0xcfafa0] */
  esp -= 4; W32(esp, 0x7d088du); SPILL(); f_d51587(); if (g_unwind) return; /* EngineEx!?ContainerManager_Close_Container@@YA_NXZ */ RELOAD();
/* 7d088d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d0890: jmp 0x7d0517 */
  goto L_7d0517;
}

void f_7d05fc(void) {
  LOAD_REGS();
  goto L_7d05fc;
L_7d0517: /* 7d0517: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d051du); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d051d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d0520: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d0526u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d0526: lea esp, [ebp - 0x240] */
  esp = (uint32_t)(ebp + 0xfffffdc0u);
/* 7d052c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d052f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0538: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0539: mov esp, ebp */
  esp = ebp;
/* 7d053b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d053c: ret 8 */
  esp += 12; SPILL(); return;
L_7d05fc: /* 7d05fc: mov ecx, ebx */
  ecx = ebx;
/* 7d05fe: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0604u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0604: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0605: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d0607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0607: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d060a: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d060d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0610: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0613: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0616: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d061bu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d061b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d061e: mov esi, esp */
  esi = esp;
/* 7d0620: mov ecx, ebx */
  ecx = ebx;
/* 7d0622: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0628u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0629: call dword ptr [0xcfa8e0] */
  esp -= 4; W32(esp, 0x7d062fu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 7d062f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0632: mov ecx, ebx */
  ecx = ebx;
/* 7d0634: mov edi, eax */
  edi = eax;
/* 7d0636: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d063cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d063c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d063d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d063e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d063f: call dword ptr [0xcfa8dc] */
  esp -= 4; W32(esp, 0x7d0645u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 7d0645: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0648: mov esi, dword ptr [0xcfaf94] */
  esi = R32((uint32_t)(0xcfaf94u));
/* 7d064e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0652: push 0xadb730 */
  { uint32_t v = 0xadb730u; esp -= 4; W32(esp, v); }
/* 7d0657: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0658: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d065au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d065a: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d065d: mov eax, dword ptr [ebx + 0x1f4] */
  eax = R32((uint32_t)(ebx + 0x1f4u));
/* 7d0663: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0666: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0668: mov eax, 0xadb738 */
  eax = 0xadb738u;
/* 7d066d: jne 0x7d0674 */
  if (!zf) goto L_7d0674;
L_7d066f: /* 7d066f: mov eax, 0xadb740 */
  eax = 0xadb740u;
L_7d0674: /* 7d0674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0675: push 0xadb748 */
  { uint32_t v = 0xadb748u; esp -= 4; W32(esp, v); }
/* 7d067a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d067b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d067du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d067d: mov eax, dword ptr [ebx + 0x204] */
  eax = R32((uint32_t)(ebx + 0x204u));
/* 7d0683: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0686: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0688: mov eax, 0xadb754 */
  eax = 0xadb754u;
/* 7d068d: jne 0x7d0694 */
  if (!zf) goto L_7d0694;
L_7d068f: /* 7d068f: mov eax, 0xadb75c */
  eax = 0xadb75cu;
L_7d0694: /* 7d0694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0695: push 0xadb764 */
  { uint32_t v = 0xadb764u; esp -= 4; W32(esp, v); }
/* 7d069a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d069b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d069du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d069d: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06a0: mov ebx, dword ptr [0xcfaf98] */
  ebx = R32((uint32_t)(0xcfaf98u));
/* 7d06a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06aa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ac: mov esi, dword ptr [0xcfa8d8] */
  esi = R32((uint32_t)(0xcfa8d8u));
/* 7d06b2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06b6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06b8: lea ecx, [eax + eax] */
  ecx = (uint32_t)(eax + eax);
/* 7d06bb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d06c0: jne 0x7d06c6 */
  if (!zf) goto L_7d06c6;
L_7d06c2: /* 7d06c2: xor esi, esi */
  esi = 0;
/* 7d06c4: jmp 0x7d06e9 */
  goto L_7d06e9;
L_7d06c6: /* 7d06c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06cf: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* 7d06d3: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06d6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d06d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06dc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06df: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d06e4u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d06e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d06e7: mov esi, esp */
  esi = esp;
L_7d06e9: /* 7d06e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06ea: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06f0: call dword ptr [0xcfa8d8] */
  esp -= 4; W32(esp, 0x7d06f6u); SPILL(); f_4e3c9c(); if (g_unwind) return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */ RELOAD();
/* 7d06f6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d06fd: mov edi, eax */
  edi = eax;
/* 7d06ff: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0701: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0707: call dword ptr [0xcfa8d4] */
  esp -= 4; W32(esp, 0x7d070du); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* 7d070d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0711: lea eax, [ebp - 0x234] */
  eax = (uint32_t)(ebp + 0xfffffdccu);
/* 7d0717: push 0xadb770 */
  { uint32_t v = 0xadb770u; esp -= 4; W32(esp, v); }
/* 7d071c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d071d: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7d0723u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7d0723: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0726: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0729: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d072b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d072c: call dword ptr [0xcfaf9c] */
  esp -= 4; W32(esp, 0x7d0732u); SPILL(); f_d5140b(); if (g_unwind) return; /* EngineEx!?ContainerManager_Open_Container@@YA_NH_N@Z */ RELOAD();
/* 7d0732: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0735: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d073b: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d073e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d0740: mov byte ptr [eax + 0x4bc], 2 */
  W8((uint32_t)(eax + 0x4bcu), 0x2u);
/* 7d0747: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d0749: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d074c: mov ecx, ebx */
  ecx = ebx;
/* 7d074e: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7d0754u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0756: push 0xadb788 */
  { uint32_t v = 0xadb788u; esp -= 4; W32(esp, v); }
/* 7d075b: push 0xadb798 */
  { uint32_t v = 0xadb798u; esp -= 4; W32(esp, v); }
/* 7d0760: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7d0766u); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7d0766: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d076c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d076e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0770: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0773: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0776: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0779: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d077f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0781: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0783: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d0789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0789: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d078f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d0795u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d0795: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d079a: call dword ptr [0xcfa8e4] */
  esp -= 4; W32(esp, 0x7d07a0u); SPILL(); f_4e3d46(); if (g_unwind) return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */ RELOAD();
/* 7d07a0: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d07a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07a9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d07afu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d07af: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d07b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d07b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ba: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d07c0: lea ecx, [ebp - 0x234] */
  ecx = (uint32_t)(ebp + 0xfffffdccu);
/* 7d07c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d07c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d07cb: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d07d1u); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d07d1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07d4: xor edi, edi */
  edi = 0;
/* 7d07d6: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d07e0: /* 7d07e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d07e6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d07e9: jge 0x7d0856 */
  if ((sf == of)) goto L_7d0856;
L_7d07eb: /* 7d07eb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d07ee: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d07f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d07f3: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d07f5: /* 7d07f5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d07fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0800u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0802: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d0804: /* 7d0804: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d080a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d080d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7d0810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0812: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 7d0819: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 7d0820: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d0827: je 0x7d083a */
  if (zf) goto L_7d083a;
L_7d0829: /* 7d0829: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d082e: mov ecx, esi */
  ecx = esi;
/* 7d0830: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0836u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0838: jne 0x7d083c */
  if (!zf) goto L_7d083c;
L_7d083a: /* 7d083a: xor esi, esi */
  esi = 0;
L_7d083c: /* 7d083c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7d083f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d0842: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d0845: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d084b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7d084d: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7d0850: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7d0853: /* 7d0853: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0854: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d0856: /* 7d0856: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7d085b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d085d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d085f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0862: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d0868: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d086b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d086d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d086f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0875: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d087a: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0881: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d0887u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d0887: call dword ptr [0xcfafa0] */
  esp -= 4; W32(esp, 0x7d088du); SPILL(); f_d51587(); if (g_unwind) return; /* EngineEx!?ContainerManager_Close_Container@@YA_NXZ */ RELOAD();
/* 7d088d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d0890: jmp 0x7d0517 */
  goto L_7d0517;
}

void f_7d06c6(void) {
  LOAD_REGS();
  goto L_7d06c6;
L_7d0517: /* 7d0517: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d051du); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d051d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d0520: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d0526u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d0526: lea esp, [ebp - 0x240] */
  esp = (uint32_t)(ebp + 0xfffffdc0u);
/* 7d052c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d052f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0538: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0539: mov esp, ebp */
  esp = ebp;
/* 7d053b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d053c: ret 8 */
  esp += 12; SPILL(); return;
L_7d06c6: /* 7d06c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06c9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7d06cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06cf: lea eax, [eax + eax + 7] */
  eax = (uint32_t)(eax + eax + 0x7u);
/* 7d06d3: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06d6: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d06d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06dc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d06df: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7d06e4u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7d06e4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d06e7: mov esi, esp */
  esi = esp;
/* 7d06e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d06ea: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d06ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d06ec: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d06f0: call dword ptr [0xcfa8d8] */
  esp -= 4; W32(esp, 0x7d06f6u); SPILL(); f_4e3c9c(); if (g_unwind) return; /* Core!?winGetSizeUNICODE@@YAHPBD@Z */ RELOAD();
/* 7d06f6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d06f9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d06fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d06fd: mov edi, eax */
  edi = eax;
/* 7d06ff: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0701u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0701: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0707: call dword ptr [0xcfa8d4] */
  esp -= 4; W32(esp, 0x7d070du); SPILL(); f_4e2a27(); if (g_unwind) return; /* Core!?winToUNICODE@@YAPAGPAGPBDH@Z */ RELOAD();
/* 7d070d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0711: lea eax, [ebp - 0x234] */
  eax = (uint32_t)(ebp + 0xfffffdccu);
/* 7d0717: push 0xadb770 */
  { uint32_t v = 0xadb770u; esp -= 4; W32(esp, v); }
/* 7d071c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d071d: call dword ptr [0xcfa8b4] */
  esp -= 4; W32(esp, 0x7d0723u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* 7d0723: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d0726: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0729: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d072b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d072c: call dword ptr [0xcfaf9c] */
  esp -= 4; W32(esp, 0x7d0732u); SPILL(); f_d5140b(); if (g_unwind) return; /* EngineEx!?ContainerManager_Open_Container@@YA_NH_N@Z */ RELOAD();
/* 7d0732: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0735: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d073b: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d073e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d0740: mov byte ptr [eax + 0x4bc], 2 */
  W8((uint32_t)(eax + 0x4bcu), 0x2u);
/* 7d0747: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7d0749: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d074c: mov ecx, ebx */
  ecx = ebx;
/* 7d074e: call dword ptr [edx + 0xe0] */
  { uint32_t t = R32((uint32_t)(edx + 0xe0u)); esp -= 4; W32(esp, 0x7d0754u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0754: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0756: push 0xadb788 */
  { uint32_t v = 0xadb788u; esp -= 4; W32(esp, v); }
/* 7d075b: push 0xadb798 */
  { uint32_t v = 0xadb798u; esp -= 4; W32(esp, v); }
/* 7d0760: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7d0766u); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7d0766: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7d076c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7d076e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d0770: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0773: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0776: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7d0779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0779: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d077f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d0781: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0783: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x7d0789u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0789: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d078f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d0795u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d0795: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d079a: call dword ptr [0xcfa8e4] */
  esp -= 4; W32(esp, 0x7d07a0u); SPILL(); f_4e3d46(); if (g_unwind) return; /* Core!?ResetLoaders@UObject@@SAXPAV1@HH@Z */ RELOAD();
/* 7d07a0: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d07a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07a9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7d07afu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7d07af: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d07b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d07b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ba: mov edx, dword ptr [ebx + 0x108] */
  edx = R32((uint32_t)(ebx + 0x108u));
/* 7d07c0: lea ecx, [ebp - 0x234] */
  ecx = (uint32_t)(ebp + 0xfffffdccu);
/* 7d07c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d07c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d07c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d07ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d07cb: call dword ptr [0xcfa830] */
  esp -= 4; W32(esp, 0x7d07d1u); SPILL(); f_4e3bac(); if (g_unwind) return; /* Core!?SavePackage@UObject@@SAHPAV1@0KPBGPAVFOutputDevice@@PAVULinkerLoad@@@Z */ RELOAD();
/* 7d07d1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d07d4: xor edi, edi */
  edi = 0;
/* 7d07d6: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d07e0: /* 7d07e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d07e6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d07e9: jge 0x7d0856 */
  if ((sf == of)) goto L_7d0856;
L_7d07eb: /* 7d07eb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d07ee: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d07f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d07f3: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d07f5: /* 7d07f5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d07fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0800u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0802: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d0804: /* 7d0804: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d080a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d080d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7d0810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0812: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 7d0819: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 7d0820: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d0827: je 0x7d083a */
  if (zf) goto L_7d083a;
L_7d0829: /* 7d0829: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d082e: mov ecx, esi */
  ecx = esi;
/* 7d0830: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0836u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0838: jne 0x7d083c */
  if (!zf) goto L_7d083c;
L_7d083a: /* 7d083a: xor esi, esi */
  esi = 0;
L_7d083c: /* 7d083c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7d083f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d0842: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d0845: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d084b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7d084d: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7d0850: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7d0853: /* 7d0853: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0854: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d0856: /* 7d0856: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7d085b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d085d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d085f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0862: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d0868: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d086b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d086d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d086f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0875: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d087a: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0881: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d0887u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d0887: call dword ptr [0xcfafa0] */
  esp -= 4; W32(esp, 0x7d088du); SPILL(); f_d51587(); if (g_unwind) return; /* EngineEx!?ContainerManager_Close_Container@@YA_NXZ */ RELOAD();
/* 7d088d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d0890: jmp 0x7d0517 */
  goto L_7d0517;
}

void f_7d07d8(void) {
  LOAD_REGS();
  goto L_7d07d8;
L_7d0517: /* 7d0517: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d051du); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d051d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d0520: call dword ptr [0xcfa838] */
  esp -= 4; W32(esp, 0x7d0526u); SPILL(); f_4e1a0f(); if (g_unwind) return; /* Core!?Empty@FString@@QAEXXZ */ RELOAD();
/* 7d0526: lea esp, [ebp - 0x240] */
  esp = (uint32_t)(ebp + 0xfffffdc0u);
/* 7d052c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d052f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0538: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0539: mov esp, ebp */
  esp = ebp;
/* 7d053b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d053c: ret 8 */
  esp += 12; SPILL(); return;
L_7d07d8: /* 7d07d8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7d07df: nop  */
L_7d07e0: /* 7d07e0: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d07e6: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d07e9: jge 0x7d0856 */
  if ((sf == of)) goto L_7d0856;
L_7d07eb: /* 7d07eb: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d07ee: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 7d07f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d07f3: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d07f5: /* 7d07f5: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d07fa: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0800u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0802: je 0x7d0853 */
  if (zf) goto L_7d0853;
L_7d0804: /* 7d0804: mov ecx, dword ptr [ebx + 0x108] */
  ecx = R32((uint32_t)(ebx + 0x108u));
/* 7d080a: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d080d: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 7d0810: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0812: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 7d0819: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 7d0820: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 7d0827: je 0x7d083a */
  if (zf) goto L_7d083a;
L_7d0829: /* 7d0829: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7d082e: mov ecx, esi */
  ecx = esi;
/* 7d0830: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7d0836u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7d0836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0838: jne 0x7d083c */
  if (!zf) goto L_7d083c;
L_7d083a: /* 7d083a: xor esi, esi */
  esi = 0;
L_7d083c: /* 7d083c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7d083f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7d0842: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7d0845: add esi, 0x618 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x618u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d084b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7d084d: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7d0850: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_7d0853: /* 7d0853: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7d0854: jmp 0x7d07e0 */
  goto L_7d07e0;
L_7d0856: /* 7d0856: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7d085b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d085d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d085f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7d0862u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0862: mov eax, dword ptr [ebx + 0x108] */
  eax = R32((uint32_t)(ebx + 0x108u));
/* 7d0868: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d086b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d086d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d086f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0871: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0873: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0875: mov ecx, 0xb08fa0 */
  ecx = 0xb08fa0u;
/* 7d087a: mov byte ptr [eax + 0x4bc], 0 */
  W8((uint32_t)(eax + 0x4bcu), 0x0u);
/* 7d0881: call dword ptr [0xcfa7e8] */
  esp -= 4; W32(esp, 0x7d0887u); SPILL(); f_4e2725(); if (g_unwind) return; /* Core!?Flush@FMemCache@@QAEX_KKH@Z */ RELOAD();
/* 7d0887: call dword ptr [0xcfafa0] */
  esp -= 4; W32(esp, 0x7d088du); SPILL(); f_d51587(); if (g_unwind) return; /* EngineEx!?ContainerManager_Close_Container@@YA_NXZ */ RELOAD();
/* 7d088d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7d0890: jmp 0x7d0517 */
  goto L_7d0517;
}

void f_7d0895(void) {
  LOAD_REGS();
L_7d0895: /* 7d0895: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7d0898: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d089d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7d08a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d08a1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7d08a4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d08a9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d08a9(); return;
}

void f_7d08a9(void) {
  LOAD_REGS();
L_7d08a9: /* 7d08a9: push 0xa0f20c */
  { uint32_t v = 0xa0f20cu; esp -= 4; W32(esp, v); }
/* 7d08ae: push 0xadb7a8 */
  { uint32_t v = 0xadb7a8u; esp -= 4; W32(esp, v); }
/* 7d08b3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d08b9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d08b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d08bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d08be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d08c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d08c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7d08c5: guest_badaddr(0x7d08c5); return;
}

void f_7d0a30(void) {
  LOAD_REGS();
L_7d0a30: /* 7d0a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0a31: mov esi, ecx */
  esi = ecx;
/* 7d0a33: mov dword ptr [esi], 0xb89a10 */
  W32((uint32_t)(esi), 0xb89a10u);
/* 7d0a39: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 7d0a40: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7d0a45u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7d0a45: mov eax, esi */
  eax = esi;
/* 7d0a47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0a48: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0a60(void) {
  LOAD_REGS();
L_7d0a60: /* 7d0a60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0a61: mov esi, ecx */
  esi = ecx;
/* 7d0a63: mov dword ptr [esi], 0xb88550 */
  W32((uint32_t)(esi), 0xb88550u);
/* 7d0a69: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 7d0a70: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7d0a75u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7d0a75: mov eax, esi */
  eax = esi;
/* 7d0a77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0a78: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0a90(void) {
  LOAD_REGS();
L_7d0a90: /* 7d0a90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0a91: mov esi, ecx */
  esi = ecx;
/* 7d0a93: mov dword ptr [esi], 0xb88020 */
  W32((uint32_t)(esi), 0xb88020u);
/* 7d0a99: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 7d0aa0: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7d0aa5u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7d0aa5: mov eax, esi */
  eax = esi;
/* 7d0aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0aa8: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0ac0(void) {
  LOAD_REGS();
L_7d0ac0: /* 7d0ac0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0ac1: mov esi, ecx */
  esi = ecx;
/* 7d0ac3: mov dword ptr [esi], 0xb5bf68 */
  W32((uint32_t)(esi), 0xb5bf68u);
/* 7d0ac9: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 7d0ad0: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x7d0ad5u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 7d0ad5: mov eax, esi */
  eax = esi;
/* 7d0ad7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0ad8: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0af0(void) {
  LOAD_REGS();
L_7d0af0: /* 7d0af0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0af2: push 0x9cff09 */
  { uint32_t v = 0x9cff09u; esp -= 4; W32(esp, v); }
/* 7d0af7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7d0afd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0afe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7d0b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0b06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d0b07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0b08: mov esi, ecx */
  esi = ecx;
/* 7d0b0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0b0b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7d0b0f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 7d0b12: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7d0b14: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 7d0b1a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7d0b22: jge 0x7d0b38 */
  if ((sf == of)) goto L_7d0b38;
L_7d0b24: /* 7d0b24: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7d0b29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7d0b2e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7d0b33: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0b35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0b35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d0b38: /* 7d0b38: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d0b3b: jle 0x7d0b51 */
  if ((zf || sf != of)) goto L_7d0b51;
L_7d0b3d: /* 7d0b3d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7d0b42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7d0b47: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7d0b4c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d0b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d0b4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d0b51: /* 7d0b51: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7d0b53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0b54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0b56: mov ecx, esi */
  ecx = esi;
/* 7d0b58: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7d0b5eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7d0b5e: mov ecx, esi */
  ecx = esi;
/* 7d0b60: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 7d0b68: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7d0b6eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7d0b6e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7d0b72: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0b73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0b74: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0b75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0b7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0b7f: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0bb0(void) {
  LOAD_REGS();
L_7d0bb0: /* 7d0bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0bb1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0bb2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7d0bb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d0bb6: mov esi, ecx */
  esi = ecx;
/* 7d0bb8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7d0bbeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7d0bbe: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 7d0bc1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7d0bc3: je 0x7d0bda */
  if (zf) goto L_7d0bda;
L_7d0bc5: /* 7d0bc5: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7d0bc9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7d0bcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0bcf: mov ecx, eax */
  ecx = eax;
/* 7d0bd1: call 0x6ca538 */
  esp -= 4; W32(esp, 0x7d0bd6u); SPILL(); f_6ca538(); if (g_unwind) return; RELOAD();
/* 7d0bd6: mov edi, eax */
  edi = eax;
/* 7d0bd8: jmp 0x7d0bdc */
  goto L_7d0bdc;
L_7d0bda: /* 7d0bda: xor edi, edi */
  edi = 0;
L_7d0bdc: /* 7d0bdc: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7d0bdf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d0be5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d0be5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0be6: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7d0bebu); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7d0beb: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 7d0bee: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7d0bf1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0bf4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7d0bf5: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0bf7: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 7d0bfa: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7d0bfc: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7d0bff: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 7d0c02: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7d0c03: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7d0c06: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7d0c09: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7d0c0c: lea edx, [eax + eax + 8] */
  edx = (uint32_t)(eax + eax + 0x8u);
/* 7d0c10: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7d0c12: jge 0x7d0c20 */
  if ((sf == of)) goto L_7d0c20;
L_7d0c14: /* 7d0c14: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7d0c16: mov ecx, esi */
  ecx = esi;
/* 7d0c18: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7d0c1b: call 0x6cb398 */
  esp -= 4; W32(esp, 0x7d0c20u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
L_7d0c20: /* 7d0c20: lea eax, [edi + 0x10] */
  eax = (uint32_t)(edi + 0x10u);
/* 7d0c23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0c24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0c25: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7d0c50(void) {
  LOAD_REGS();
L_7d0c50: /* 7d0c50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7d0c51: mov ebp, esp */
  ebp = esp;
/* 7d0c53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0c55: push 0x9cff20 */
  { uint32_t v = 0x9cff20u; esp -= 4; W32(esp, v); }
/* 7d0c5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7d0c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0c61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7d0c68: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d0c6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d0c6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0c70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d0c71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0c72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0c73: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d0c76: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d0c7d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7d0c80: je 0x7d0c8a */
  if (zf) goto L_7d0c8a;
L_7d0c82: /* 7d0c82: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7d0c85: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7d0c88: jmp 0x7d0c91 */
  goto L_7d0c91;
L_7d0c8a: /* 7d0c8a: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_7d0c91: /* 7d0c91: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7d0c94: call 0x6c566e */
  esp -= 4; W32(esp, 0x7d0c99u); SPILL(); f_6c566e(); if (g_unwind) return; RELOAD();
/* 7d0c99: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7d0c9c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0c9e: je 0x7d0cd5 */
  if (zf) goto L_7d0cd5;
L_7d0ca0: /* 7d0ca0: mov ecx, esi */
  ecx = esi;
/* 7d0ca2: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7d0ca8u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7d0ca8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d0cab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0cac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0cad: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x7d0cb3u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 7d0cb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0cb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0cb8: jne 0x7d0ccd */
  if (!zf) goto L_7d0ccd;
L_7d0cba: /* 7d0cba: mov eax, esi */
  eax = esi;
/* 7d0cbc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d0cbf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0cc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0cc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0cc8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0cc9: mov esp, ebp */
  esp = ebp;
/* 7d0ccb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0ccc: ret  */
  esp += 4; SPILL(); return;
L_7d0ccd: /* 7d0ccd: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 7d0cd0: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7d0cd3: jmp 0x7d0c91 */
  goto L_7d0c91;
L_7d0cd5: /* 7d0cd5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d0cd8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0cd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0cda: xor eax, eax */
  eax = 0;
/* 7d0cdc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0ce3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0ce4: mov esp, ebp */
  esp = ebp;
/* 7d0ce6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0ce7: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0ce8(void) {
  LOAD_REGS();
L_7d0ce8: /* 7d0ce8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7d0ceb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7d0cf0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d0cf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0cf4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7d0cf7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d0cfcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7d0cfc(); return;
}

void f_7d0cfc(void) {
  LOAD_REGS();
L_7d0cfc: /* 7d0cfc: push 0xa0f24c */
  { uint32_t v = 0xa0f24cu; esp -= 4; W32(esp, v); }
/* 7d0d01: push 0xadb990 */
  { uint32_t v = 0xadb990u; esp -= 4; W32(esp, v); }
/* 7d0d06: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7d0d0cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7d0d0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0d0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0d13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7d0d18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7d0d18: guest_badaddr(0x7d0d18); return;
}

void f_7d0d60(void) {
  LOAD_REGS();
L_7d0d60: /* 7d0d60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d0d61: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7d0d62: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7d0d66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0d67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d0d68: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7d0d69: mov edi, ecx */
  edi = ecx;
/* 7d0d6b: call 0x6cca40 */
  esp -= 4; W32(esp, 0x7d0d70u); SPILL(); f_6cca40(); if (g_unwind) return; RELOAD();
/* 7d0d70: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 7d0d73: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 7d0d76: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0d79: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7d0d7a: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7d0d7c: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 7d0d7f: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d0d82: je 0x7d0da4 */
  if (zf) goto L_7d0da4;
L_7d0d84: /* 7d0d84: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7d0d86: mov esi, ebx */
  esi = ebx;
/* 7d0d88: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 7d0d8b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7d0d8c: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 7d0d90: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x7d0d96u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 7d0d96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d0d98: jne 0x7d0db8 */
  if (!zf) goto L_7d0db8;
L_7d0d9a: /* 7d0d9a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d0d9c: mov ebx, dword ptr [esi + ecx] */
  ebx = R32((uint32_t)(esi + ecx));
/* 7d0d9f: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d0da2: jne 0x7d0d84 */
  if (!zf) goto L_7d0d84;
L_7d0da4: /* 7d0da4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7d0da8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0da9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7d0daa: mov ecx, edi */
  ecx = edi;
/* 7d0dac: call 0x6c1f14 */
  esp -= 4; W32(esp, 0x7d0db1u); SPILL(); f_6c1f14(); if (g_unwind) return; RELOAD();
/* 7d0db1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0db2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0db3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0db4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0db5: ret 8 */
  esp += 12; SPILL(); return;
L_7d0db8: /* 7d0db8: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7d0dbc: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 7d0dbf: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7d0dc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d0dc2: lea ecx, [ebx + eax + 0x10] */
  ecx = (uint32_t)(ebx + eax + 0x10u);
/* 7d0dc6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7d0dccu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7d0dcc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7d0dce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d0dcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0dd0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d0dd1: lea eax, [ebx + ecx + 0x10] */
  eax = (uint32_t)(ebx + ecx + 0x10u);
/* 7d0dd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d0dd6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7d0e00(void) {
  LOAD_REGS();
L_7d0e00: /* 7d0e00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0e01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0e03: mov esi, ecx */
  esi = ecx;
/* 7d0e05: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7d0e0bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7d0e0b: mov eax, esi */
  eax = esi;
/* 7d0e0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0e0e: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0e20(void) {
  LOAD_REGS();
L_7d0e20: /* 7d0e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0e22: push 0x9d0015 */
  { uint32_t v = 0x9d0015u; esp -= 4; W32(esp, v); }
/* 7d0e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7d0e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7d0e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d0e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d0e37: mov esi, ecx */
  esi = ecx;
/* 7d0e39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7d0e3d: call 0x6ca51a */
  esp -= 4; W32(esp, 0x7d0e42u); SPILL(); f_6ca51a(); if (g_unwind) return; RELOAD();
/* 7d0e42: push 0xb81b04 */
  { uint32_t v = 0xb81b04u; esp -= 4; W32(esp, v); }
/* 7d0e47: lea ecx, [esi + 0x114] */
  ecx = (uint32_t)(esi + 0x114u);
/* 7d0e4d: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7d0e55: mov dword ptr [esi], 0xa05770 */
  W32((uint32_t)(esi), 0xa05770u);
/* 7d0e5b: mov dword ptr [esi + 0x28], 0xa0576c */
  W32((uint32_t)(esi + 0x28u), 0xa0576cu);
/* 7d0e62: call 0x6c321a */
  esp -= 4; W32(esp, 0x7d0e67u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 7d0e67: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 7d0e6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0e6f: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 7d0e74: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7d0e7au); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7d0e7a: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 7d0e80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d0e82: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 7d0e87: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7d0e8du); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7d0e8d: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7d0e93: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 7d0e98: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7d0e9eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7d0e9e: lea ecx, [esi + 0x184] */
  ecx = (uint32_t)(esi + 0x184u);
/* 7d0ea4: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7d0ea9: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0eafu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0eaf: lea ecx, [esi + 0x190] */
  ecx = (uint32_t)(esi + 0x190u);
/* 7d0eb5: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7d0eba: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0ec0u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0ec0: lea ecx, [esi + 0x19c] */
  ecx = (uint32_t)(esi + 0x19cu);
/* 7d0ec6: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 7d0ecb: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0ed1u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0ed1: lea ecx, [esi + 0x1a8] */
  ecx = (uint32_t)(esi + 0x1a8u);
/* 7d0ed7: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 7d0edc: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0ee2u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0ee2: lea ecx, [esi + 0x1b4] */
  ecx = (uint32_t)(esi + 0x1b4u);
/* 7d0ee8: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 7d0eed: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0ef3u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0ef3: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 7d0ef9: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 7d0efe: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0f04u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0f04: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 7d0f0a: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 7d0f0f: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0f15u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0f15: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 7d0f1b: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 7d0f20: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0f26u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0f26: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* 7d0f2c: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 7d0f31: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0f37u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0f37: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 7d0f3d: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 7d0f42: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0f48u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0f48: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* 7d0f4e: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 7d0f53: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0f59u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0f59: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* 7d0f5f: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 7d0f64: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7d0f6au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7d0f6a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7d0f6e: mov eax, esi */
  eax = esi;
/* 7d0f70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d0f71: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d0f78: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d0f7b: ret  */
  esp += 4; SPILL(); return;
}

void f_7d0fe0(void) {
  LOAD_REGS();
L_7d0fe0: /* 7d0fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7d0fe1: mov ebp, esp */
  ebp = esp;
/* 7d0fe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d0fe5: push 0x9d00de */
  { uint32_t v = 0x9d00deu; esp -= 4; W32(esp, v); }
/* 7d0fea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7d0ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d0ff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7d0ff8: sub esp, 0x42c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x42cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d0ffe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d1001: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d1002: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d1003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d1004: mov edi, dword ptr [0xcfa5b8] */
  edi = R32((uint32_t)(0xcfa5b8u));
/* 7d100a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7d100d: mov esi, ecx */
  esi = ecx;
/* 7d100f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d1012: push 0xad4c04 */
  { uint32_t v = 0xad4c04u; esp -= 4; W32(esp, v); }
/* 7d1017: xor ebx, ebx */
  ebx = 0;
/* 7d1019: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d101a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7d101d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7d1020: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1022u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1022: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1025: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1027: je 0x7d10e3 */
  if (zf) goto L_7d10e3;
L_7d102d: /* 7d102d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1030: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d1036u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d1036: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7d1039: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d103b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7d103f: je 0x7d1061 */
  if (zf) goto L_7d1061;
L_7d1041: /* 7d1041: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1044: je 0x7d1061 */
  if (zf) goto L_7d1061;
L_7d1046: /* 7d1046: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_7d1048: /* 7d1048: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d104b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d104d: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d1050: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d1053: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d1056: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d1057: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7d1058: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1059: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7d105fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d105f: jmp 0x7d10be */
  goto L_7d10be;
L_7d1061: /* 7d1061: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d1064: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1067: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1068: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d1069: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d106c: mov ecx, esp */
  ecx = esp;
/* 7d106e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7d1071: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d1073: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1074: lea eax, [esi + 0xec] */
  eax = (uint32_t)(esi + 0xecu);
/* 7d107a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d107b: call 0x6c440d */
  esp -= 4; W32(esp, 0x7d1080u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7d1080: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d1083: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d1086: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x7d108cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d108c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d108e: jne 0x7d10be */
  if (!zf) goto L_7d10be;
L_7d1090: /* 7d1090: push 0xb81b1c */
  { uint32_t v = 0xb81b1cu; esp -= 4; W32(esp, v); }
/* 7d1095: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1098: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7d109eu); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7d109e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d10a0: je 0x7d10be */
  if (zf) goto L_7d10be;
L_7d10a2: /* 7d10a2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d10a5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d10abu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d10ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d10ac: push 0xad4c10 */
  { uint32_t v = 0xad4c10u; esp -= 4; W32(esp, v); }
L_7d10b1: /* 7d10b1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d10b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_7d10b5: /* 7d10b5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d10bbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
L_7d10bb: /* 7d10bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7d10be: /* 7d10be: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
L_7d10c1: /* 7d10c1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d10c5: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d10cbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7d10cb: /* 7d10cb: mov eax, 1 */
  eax = 0x1u;
/* 7d10d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d10d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d10da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d10db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d10dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d10dd: mov esp, ebp */
  esp = ebp;
/* 7d10df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d10e0: ret 8 */
  esp += 12; SPILL(); return;
L_7d10e3: /* 7d10e3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d10e6: push 0xad4c30 */
  { uint32_t v = 0xad4c30u; esp -= 4; W32(esp, v); }
/* 7d10eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d10ec: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d10eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d10ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d10f1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d10f3: je 0x7d1170 */
  if (zf) goto L_7d1170;
L_7d10f5: /* 7d10f5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d10f8: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d10feu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d10fe: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7d1101: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1103: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7d1107: je 0x7d1114 */
  if (zf) goto L_7d1114;
L_7d1109: /* 7d1109: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d110c: je 0x7d1114 */
  if (zf) goto L_7d1114;
L_7d110e: /* 7d110e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d110f: jmp 0x7d1048 */
  goto L_7d1048;
L_7d1114: /* 7d1114: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d1117: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d111a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d111b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d111c: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d111f: mov ecx, esp */
  ecx = esp;
/* 7d1121: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7d1124: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d1125: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1126: lea eax, [esi + 0xec] */
  eax = (uint32_t)(esi + 0xecu);
/* 7d112c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d112d: call 0x6c440d */
  esp -= 4; W32(esp, 0x7d1132u); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7d1132: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d1135: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d1138: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x7d113eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d113e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1140: jne 0x7d10be */
  if (!zf) goto L_7d10be;
L_7d1146: /* 7d1146: push 0xb81b20 */
  { uint32_t v = 0xb81b20u; esp -= 4; W32(esp, v); }
/* 7d114b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d114e: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7d1154u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7d1154: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1156: je 0x7d10be */
  if (zf) goto L_7d10be;
L_7d115c: /* 7d115c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d115f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1165u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1165: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1166: push 0xad4c3c */
  { uint32_t v = 0xad4c3cu; esp -= 4; W32(esp, v); }
/* 7d116b: jmp 0x7d10b1 */
  goto L_7d10b1;
L_7d1170: /* 7d1170: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d1173: push 0xad4c60 */
  { uint32_t v = 0xad4c60u; esp -= 4; W32(esp, v); }
/* 7d1178: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1179: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d117bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d117b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d117e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1180: je 0x7d11c7 */
  if (zf) goto L_7d11c7;
L_7d1182: /* 7d1182: mov edx, dword ptr [0xcfa8f8] */
  edx = R32((uint32_t)(0xcfa8f8u));
/* 7d1188: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d118a: je 0x7d122d */
  if (zf) goto L_7d122d;
L_7d1190: /* 7d1190: mov eax, dword ptr [0xcfa814] */
  eax = R32((uint32_t)(0xcfa814u));
/* 7d1195: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1197: jne 0x7d11c7 */
  if (!zf) goto L_7d11c7;
L_7d1199: /* 7d1199: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d119c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d119d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d11a0: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d11a6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d11a6: mov edx, dword ptr [esi + 0xe0] */
  edx = R32((uint32_t)(esi + 0xe0u));
/* 7d11ac: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 7d11af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d11b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d11b2: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d11b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d11b6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7d11ba: call 0x6c33d2 */
  esp -= 4; W32(esp, 0x7d11bfu); SPILL(); f_6c33d2(); if (g_unwind) return; RELOAD();
/* 7d11bf: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d11c2: jmp 0x7d10c1 */
  goto L_7d10c1;
L_7d11c7: /* 7d11c7: mov eax, dword ptr [0xcfa8f8] */
  eax = R32((uint32_t)(0xcfa8f8u));
/* 7d11cc: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d11ce: je 0x7d122d */
  if (zf) goto L_7d122d;
L_7d11d0: /* 7d11d0: mov ecx, dword ptr [0xcfa814] */
  ecx = R32((uint32_t)(0xcfa814u));
/* 7d11d6: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d11d8: jne 0x7d122d */
  if (!zf) goto L_7d122d;
L_7d11da: /* 7d11da: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7d11dd: push 0xad4c7c */
  { uint32_t v = 0xad4c7cu; esp -= 4; W32(esp, v); }
/* 7d11e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d11e3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d11e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d11e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d11e8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d11ea: je 0x7d122d */
  if (zf) goto L_7d122d;
L_7d11ec: /* 7d11ec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d11ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d11f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d11f3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7d11f9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7d11f9: mov ecx, dword ptr [esi + 0xe0] */
  ecx = R32((uint32_t)(esi + 0xe0u));
/* 7d11ff: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7d1202: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7d1204: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1205: mov ecx, esp */
  ecx = esp;
/* 7d1207: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7d120a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d120b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7d120f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7d1215u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7d1215: mov ecx, dword ptr [esi + 0x508] */
  ecx = R32((uint32_t)(esi + 0x508u));
/* 7d121b: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7d121e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d121f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d1220: call 0x6cb348 */
  esp -= 4; W32(esp, 0x7d1225u); SPILL(); f_6cb348(); if (g_unwind) return; RELOAD();
/* 7d1225: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1228: jmp 0x7d10c1 */
  goto L_7d10c1;
L_7d122d: /* 7d122d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d1230: push 0xad4c84 */
  { uint32_t v = 0xad4c84u; esp -= 4; W32(esp, v); }
/* 7d1235: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1236: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1238: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d123b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d123d: je 0x7d1360 */
  if (zf) goto L_7d1360;
L_7d1243: /* 7d1243: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1246: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d124cu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d124c: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7d124f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1251: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7d1255: je 0x7d12ff */
  if (zf) goto L_7d12ff;
L_7d125b: /* 7d125b: cmp dword ptr [eax + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d125e: je 0x7d12ff */
  if (zf) goto L_7d12ff;
L_7d1264: /* 7d1264: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7d126a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d126c: je 0x7d12a1 */
  if (zf) goto L_7d12a1;
L_7d126e: /* 7d126e: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7d1271: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1273: je 0x7d12a1 */
  if (zf) goto L_7d12a1;
L_7d1275: /* 7d1275: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7d1278: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d127a: je 0x7d12a1 */
  if (zf) goto L_7d12a1;
L_7d127c: /* 7d127c: mov eax, dword ptr [eax + 0xeb4] */
  eax = R32((uint32_t)(eax + 0xeb4u));
/* 7d1282: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1284: je 0x7d12a1 */
  if (zf) goto L_7d12a1;
L_7d1286: /* 7d1286: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d1288: mov ecx, eax */
  ecx = eax;
/* 7d128a: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d128du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d128d: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7d1293: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d1296: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7d1299: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d129b: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7d12a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d12a1: /* 7d12a1: mov eax, dword ptr [esi + 0xe8] */
  eax = R32((uint32_t)(esi + 0xe8u));
/* 7d12a7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d12a9: je 0x7d12de */
  if (zf) goto L_7d12de;
L_7d12ab: /* 7d12ab: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7d12ae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d12b0: je 0x7d12de */
  if (zf) goto L_7d12de;
L_7d12b2: /* 7d12b2: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7d12b5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d12b7: je 0x7d12de */
  if (zf) goto L_7d12de;
L_7d12b9: /* 7d12b9: mov eax, dword ptr [eax + 0xeb4] */
  eax = R32((uint32_t)(eax + 0xeb4u));
/* 7d12bf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d12c1: je 0x7d12de */
  if (zf) goto L_7d12de;
L_7d12c3: /* 7d12c3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d12c5: mov ecx, eax */
  ecx = eax;
/* 7d12c7: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d12cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d12ca: mov eax, dword ptr [esi + 0xe8] */
  eax = R32((uint32_t)(esi + 0xe8u));
/* 7d12d0: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d12d3: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7d12d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d12d8: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7d12deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d12de: /* 7d12de: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 7d12e1: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 7d12e4: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7d12e6: mov eax, dword ptr [esi - 0x28] */
  eax = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d12e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d12ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d12eb: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d12ee: push 0xad4c9c */
  { uint32_t v = 0xad4c9cu; esp -= 4; W32(esp, v); }
/* 7d12f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d12f4: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x7d12fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d12fa: jmp 0x7d10be */
  goto L_7d10be;
L_7d12ff: /* 7d12ff: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1302: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1303: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d1304: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d1307: mov ecx, esp */
  ecx = esp;
/* 7d1309: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7d130c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d130d: push 0xad4cac */
  { uint32_t v = 0xad4cacu; esp -= 4; W32(esp, v); }
/* 7d1312: lea edx, [esi + 0xec] */
  edx = (uint32_t)(esi + 0xecu);
/* 7d1318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1319: call 0x6c440d */
  esp -= 4; W32(esp, 0x7d131eu); SPILL(); f_6c440d(); if (g_unwind) return; RELOAD();
/* 7d131e: mov eax, dword ptr [esi - 0x28] */
  eax = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d1321: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d1324: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7d132au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d132a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d132c: jne 0x7d10be */
  if (!zf) goto L_7d10be;
L_7d1332: /* 7d1332: push 0xb81b24 */
  { uint32_t v = 0xb81b24u; esp -= 4; W32(esp, v); }
/* 7d1337: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d133a: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7d1340u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7d1340: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1342: je 0x7d10be */
  if (zf) goto L_7d10be;
L_7d1348: /* 7d1348: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d134b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1351u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1351: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d1354: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1355: push 0xad4cbc */
  { uint32_t v = 0xad4cbcu; esp -= 4; W32(esp, v); }
/* 7d135a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d135b: jmp 0x7d10b5 */
  goto L_7d10b5;
L_7d1360: /* 7d1360: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7d1363: push 0xad4ce8 */
  { uint32_t v = 0xad4ce8u; esp -= 4; W32(esp, v); }
/* 7d1368: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1369: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d136bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d136b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d136e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1370: je 0x7d1436 */
  if (zf) goto L_7d1436;
L_7d1376: /* 7d1376: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1379: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d137fu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d137f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7d1382: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1384: mov bl, 6 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
/* 7d1386: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d1389: je 0x7d13da */
  if (zf) goto L_7d13da;
L_7d138b: /* 7d138b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7d138e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1390: je 0x7d13da */
  if (zf) goto L_7d13da;
L_7d1392: /* 7d1392: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d1394: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d1397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1398: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 7d139e: call 0x6c7b3f */
  esp -= 4; W32(esp, 0x7d13a3u); SPILL(); f_6c7b3f(); if (g_unwind) return; RELOAD();
/* 7d13a3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7d13a6: mov edi, dword ptr [ecx + 0x2c] */
  edi = R32((uint32_t)(ecx + 0x2cu));
/* 7d13a9: mov ecx, eax */
  ecx = eax;
/* 7d13ab: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7d13af: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d13b5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d13b5: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d13b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d13ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d13bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d13bd: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7d13bf: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d13c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d13c3: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x7d13c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d13c9: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d13cc: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7d13cf: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d13d5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d13d5: jmp 0x7d10be */
  goto L_7d10be;
L_7d13da: /* 7d13da: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d13dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d13de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d13e0: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d13e3: lea edx, [esi + 0xec] */
  edx = (uint32_t)(esi + 0xecu);
/* 7d13e9: mov ecx, esp */
  ecx = esp;
/* 7d13eb: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7d13ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d13ef: call 0x6c1870 */
  esp -= 4; W32(esp, 0x7d13f4u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 7d13f4: mov eax, dword ptr [esi - 0x28] */
  eax = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d13f7: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d13fa: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x7d1400u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1400: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1402: jne 0x7d10be */
  if (!zf) goto L_7d10be;
L_7d1408: /* 7d1408: push 0xb81b28 */
  { uint32_t v = 0xb81b28u; esp -= 4; W32(esp, v); }
/* 7d140d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1410: call dword ptr [0xcfa8fc] */
  esp -= 4; W32(esp, 0x7d1416u); SPILL(); f_4e3530(); if (g_unwind) return; /* Core!??9FString@@QBEHPBG@Z */ RELOAD();
/* 7d1416: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1418: je 0x7d10be */
  if (zf) goto L_7d10be;
L_7d141e: /* 7d141e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d1421: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1427u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1427: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d142a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d142b: push 0xad4cfc */
  { uint32_t v = 0xad4cfcu; esp -= 4; W32(esp, v); }
/* 7d1430: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1431: jmp 0x7d10b5 */
  goto L_7d10b5;
L_7d1436: /* 7d1436: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7d1439: push 0xad4d28 */
  { uint32_t v = 0xad4d28u; esp -= 4; W32(esp, v); }
/* 7d143e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d143f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1441u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1441: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1444: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1446: jne 0x7d1a6c */
  if (!zf) goto L_7d1a6c;
L_7d144c: /* 7d144c: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7d144f: push 0xad4d34 */
  { uint32_t v = 0xad4d34u; esp -= 4; W32(esp, v); }
/* 7d1454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1455: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1457u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1457: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d145a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d145c: jne 0x7d1a6c */
  if (!zf) goto L_7d1a6c;
L_7d1462: /* 7d1462: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d1465: push 0xad4d68 */
  { uint32_t v = 0xad4d68u; esp -= 4; W32(esp, v); }
/* 7d146a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d146b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d146du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d146d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1470: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1472: je 0x7d1494 */
  if (zf) goto L_7d1494;
L_7d1474: /* 7d1474: fld dword ptr [esi + 0x54] */
  { double v = F32((uint32_t)(esi + 0x54u)); FPUSH(v); }
/* 7d1477: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7d147a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d147d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7d1480: push 0xad4d90 */
  { uint32_t v = 0xad4d90u; esp -= 4; W32(esp, v); }
/* 7d1485: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1486: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d148cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d148c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d148f: jmp 0x7d10cb */
  goto L_7d10cb;
L_7d1494: /* 7d1494: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7d1497: push 0xad4d98 */
  { uint32_t v = 0xad4d98u; esp -= 4; W32(esp, v); }
/* 7d149c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d149d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d149fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d149f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d14a2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d14a4: je 0x7d14d2 */
  if (zf) goto L_7d14d2;
L_7d14a6: /* 7d14a6: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d14a9: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d14ac: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d14b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d14b2: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7d14b5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d14b8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7d14bb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7d14be: push 0xad4db8 */
  { uint32_t v = 0xad4db8u; esp -= 4; W32(esp, v); }
/* 7d14c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d14c4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d14cau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d14ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d14cd: jmp 0x7d10cb */
  goto L_7d10cb;
L_7d14d2: /* 7d14d2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d14d5: push 0xad4dc0 */
  { uint32_t v = 0xad4dc0u; esp -= 4; W32(esp, v); }
/* 7d14da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d14db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d14ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d14dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d14e0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d14e2: je 0x7d150a */
  if (zf) goto L_7d150a;
L_7d14e4: /* 7d14e4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d14e7: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7d14edu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7d14ed: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7d14f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d14f1: push 0xb81b2c */
  { uint32_t v = 0xb81b2cu; esp -= 4; W32(esp, v); }
/* 7d14f6: push 0xad4dd4 */
  { uint32_t v = 0xad4dd4u; esp -= 4; W32(esp, v); }
/* 7d14fb: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 7d14ff: call dword ptr [0xcfa8f4] */
  esp -= 4; W32(esp, 0x7d1505u); SPILL(); f_4e31b6(); if (g_unwind) return; /* Core!?appLaunchURL@@YAXPBG0PAVFString@@@Z */ RELOAD();
/* 7d1505: jmp 0x7d10bb */
  goto L_7d10bb;
L_7d150a: /* 7d150a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7d150d: push 0xad4df0 */
  { uint32_t v = 0xad4df0u; esp -= 4; W32(esp, v); }
/* 7d1512: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1513: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1515u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1515: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1518: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d151a: je 0x7d154a */
  if (zf) goto L_7d154a;
L_7d151c: /* 7d151c: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7d151f: xor ecx, ecx */
  ecx = 0;
/* 7d1521: mov cx, word ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 7d1524: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1525: call 0x6cc761 */
  esp -= 4; W32(esp, 0x7d152au); SPILL(); f_6cc761(); if (g_unwind) return; RELOAD();
/* 7d152a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d152d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d152f: je 0x7d10cb */
  if (zf) goto L_7d10cb;
L_7d1535: /* 7d1535: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d1536: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7d153cu); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7d153c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d153f: mov dword ptr [esi + 0x198], eax */
  W32((uint32_t)(esi + 0x198u), eax);
/* 7d1545: jmp 0x7d10cb */
  goto L_7d10cb;
L_7d154a: /* 7d154a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7d154d: push 0xad4e04 */
  { uint32_t v = 0xad4e04u; esp -= 4; W32(esp, v); }
/* 7d1552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1553: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1555: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1558: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d155a: je 0x7d17ab */
  if (zf) goto L_7d17ab;
L_7d1560: /* 7d1560: mov ebx, dword ptr [0xcfa8f0] */
  ebx = R32((uint32_t)(0xcfa8f0u));
/* 7d1566: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d1568: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7d156b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d156c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d156f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1570: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d1572u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1572: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1575: mov ecx, eax */
  ecx = eax;
/* 7d1577: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7d157b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1581u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1581: lea ecx, [esi + 0x19c] */
  ecx = (uint32_t)(esi + 0x19cu);
/* 7d1587: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1588: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7d158eu); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7d158e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d1591: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d1595: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d159bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d159b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d159d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7d15a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d15a1: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d15a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d15a5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d15a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d15a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d15aa: mov ecx, eax */
  ecx = eax;
/* 7d15ac: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7d15b0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d15b6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d15b6: lea ecx, [esi + 0x1a8] */
  ecx = (uint32_t)(esi + 0x1a8u);
/* 7d15bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d15bd: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7d15c3u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7d15c3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d15c6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d15ca: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d15d0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d15d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d15d2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7d15d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d15d6: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d15d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d15da: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d15dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d15dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d15df: mov ecx, eax */
  ecx = eax;
/* 7d15e1: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 7d15e5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d15ebu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d15eb: lea ecx, [esi + 0x1b4] */
  ecx = (uint32_t)(esi + 0x1b4u);
/* 7d15f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d15f2: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7d15f8u); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7d15f8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d15fb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d15ff: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d1605u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d1605: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d1607: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7d160a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d160b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d160e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d160f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d1611u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1611: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1614: mov ecx, eax */
  ecx = eax;
/* 7d1616: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 7d161a: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1620u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1620: lea ecx, [esi + 0x1c0] */
  ecx = (uint32_t)(esi + 0x1c0u);
/* 7d1626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1627: call dword ptr [0xcfa32c] */
  esp -= 4; W32(esp, 0x7d162du); SPILL(); f_4e3e59(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@PBG@Z */ RELOAD();
/* 7d162d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d1630: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d1634: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d163au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d163a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d163c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7d163f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1640: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d1643: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1644: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d1646u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1646: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1649: mov ecx, eax */
  ecx = eax;
/* 7d164b: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7d164f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1655u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1655: push 0xad4e20 */
  { uint32_t v = 0xad4e20u; esp -= 4; W32(esp, v); }
/* 7d165a: mov edi, dword ptr [0xcfa834] */
  edi = R32((uint32_t)(0xcfa834u));
/* 7d1660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1661: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1663u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1663: xor ecx, ecx */
  ecx = 0;
/* 7d1665: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1668: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d166a: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7d166d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d1671: mov dword ptr [esi + 0x1cc], ecx */
  W32((uint32_t)(esi + 0x1ccu), ecx);
/* 7d1677: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d167a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d1680u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d1680: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d1682: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7d1685: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1686: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7d1689: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d168a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d168cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d168c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d168f: mov ecx, eax */
  ecx = eax;
/* 7d1691: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 7d1695: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d169bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d169b: push 0xad4e2c */
  { uint32_t v = 0xad4e2cu; esp -= 4; W32(esp, v); }
/* 7d16a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d16a1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d16a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d16a3: xor ecx, ecx */
  ecx = 0;
/* 7d16a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d16a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d16aa: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7d16ad: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7d16b1: mov dword ptr [esi + 0x1dc], ecx */
  W32((uint32_t)(esi + 0x1dcu), ecx);
/* 7d16b7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7d16ba: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7d16c0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7d16c0: lea ecx, [esi + 0x19c] */
  ecx = (uint32_t)(esi + 0x19cu);
/* 7d16c6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d16ccu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d16cc: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d16d2: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 7d16d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d16d9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d16db: push 0xad4e38 */
  { uint32_t v = 0xad4e38u; esp -= 4; W32(esp, v); }
/* 7d16e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d16e1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d16e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d16e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d16e6: lea ecx, [esi + 0x1a8] */
  ecx = (uint32_t)(esi + 0x1a8u);
/* 7d16ec: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d16f2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d16f2: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d16f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d16fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d16fb: push 0xad4e5c */
  { uint32_t v = 0xad4e5cu; esp -= 4; W32(esp, v); }
/* 7d1700: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1701: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1703: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1706: lea ecx, [esi + 0x1b4] */
  ecx = (uint32_t)(esi + 0x1b4u);
/* 7d170c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1712u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1713: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d1718: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d171a: push 0xad4e80 */
  { uint32_t v = 0xad4e80u; esp -= 4; W32(esp, v); }
/* 7d171f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1720: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1722u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1722: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1725: lea ecx, [esi + 0x1c0] */
  ecx = (uint32_t)(esi + 0x1c0u);
/* 7d172b: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7d1731u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7d1731: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d1737: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1738: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d173a: push 0xad4ea4 */
  { uint32_t v = 0xad4ea4u; esp -= 4; W32(esp, v); }
/* 7d173f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1740: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1742u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1742: mov eax, dword ptr [esi + 0x1cc] */
  eax = R32((uint32_t)(esi + 0x1ccu));
/* 7d1748: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d174b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d174d: je 0x7d175f */
  if (zf) goto L_7d175f;
L_7d174f: /* 7d174f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d1755: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d1757: push 0xad4ec8 */
  { uint32_t v = 0xad4ec8u; esp -= 4; W32(esp, v); }
/* 7d175c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d175d: jmp 0x7d176c */
  goto L_7d176c;
L_7d175f: /* 7d175f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d1764: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d1766: push 0xad4ee8 */
  { uint32_t v = 0xad4ee8u; esp -= 4; W32(esp, v); }
/* 7d176b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_7d176c: /* 7d176c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d176eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d176e: mov eax, dword ptr [esi + 0x1dc] */
  eax = R32((uint32_t)(esi + 0x1dcu));
/* 7d1774: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1779: je 0x7d1793 */
  if (zf) goto L_7d1793;
L_7d177b: /* 7d177b: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7d1781: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7d1783: push 0xad4f0c */
  { uint32_t v = 0xad4f0cu; esp -= 4; W32(esp, v); }
/* 7d1788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1789: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d178bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d178b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d178e: jmp 0x7d10cb */
  goto L_7d10cb;
L_7d1793: /* 7d1793: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7d1799: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d179b: push 0xad4f30 */
  { uint32_t v = 0xad4f30u; esp -= 4; W32(esp, v); }
/* 7d17a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d17a1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d17a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d17a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d17a6: jmp 0x7d10cb */
  goto L_7d10cb;
L_7d17ab: /* 7d17ab: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7d17ae: push 0xad4f54 */
  { uint32_t v = 0xad4f54u; esp -= 4; W32(esp, v); }
/* 7d17b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d17b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d17b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d17b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d17b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d17bb: je 0x7d1847 */
  if (zf) goto L_7d1847;
L_7d17c1: /* 7d17c1: cmp dword ptr [0xb821e4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb821e4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d17c7: jne 0x7d10cb */
  if (!zf) goto L_7d10cb;
L_7d17cd: /* 7d17cd: mov ecx, dword ptr [esi + 0xe8] */
  ecx = R32((uint32_t)(esi + 0xe8u));
/* 7d17d3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d17d5: mov dword ptr [0xb821e4], 1 */
  W32((uint32_t)(0xb821e4u), 0x1u);
/* 7d17df: je 0x7d1819 */
  if (zf) goto L_7d1819;
L_7d17e1: /* 7d17e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d17e3: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x7d17e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d17e6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d17e8: jne 0x7d183c */
  if (!zf) goto L_7d183c;
L_7d17ea: /* 7d17ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d17eb: push 0xad4f64 */
  { uint32_t v = 0xad4f64u; esp -= 4; W32(esp, v); }
/* 7d17f0: push 0xad4f74 */
  { uint32_t v = 0xad4f74u; esp -= 4; W32(esp, v); }
/* 7d17f5: call dword ptr [0xcfa8b0] */
  esp -= 4; W32(esp, 0x7d17fbu); SPILL(); f_4e1b04(); if (g_unwind) return; /* Core!?LocalizeProgress@@YAPBGPBG00@Z */ RELOAD();
/* 7d17fb: mov edx, dword ptr [esi - 0x28] */
  edx = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d17fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1801: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 7d1806: add esi, -0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d1809: push 0xb81b30 */
  { uint32_t v = 0xb81b30u; esp -= 4; W32(esp, v); }
/* 7d180e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d180f: mov ecx, esi */
  ecx = esi;
/* 7d1811: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x7d1817u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1817: jmp 0x7d1832 */
  goto L_7d1832;
L_7d1819: /* 7d1819: mov eax, dword ptr [esi - 0x28] */
  eax = R32((uint32_t)(esi + 0xffffffd8u));
/* 7d181c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d181d: add esi, -0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffd8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7d1820: push 0xb81b34 */
  { uint32_t v = 0xb81b34u; esp -= 4; W32(esp, v); }
/* 7d1825: push 0xb81b38 */
  { uint32_t v = 0xb81b38u; esp -= 4; W32(esp, v); }
/* 7d182a: mov ecx, esi */
  ecx = esi;
/* 7d182c: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x7d1832u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d1832: /* 7d1832: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7d1834: mov ecx, esi */
  ecx = esi;
/* 7d1836: call dword ptr [edx + 0xdc] */
  { uint32_t t = R32((uint32_t)(edx + 0xdcu)); esp -= 4; W32(esp, 0x7d183cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d183c: /* 7d183c: mov dword ptr [0xb821e4], ebx */
  W32((uint32_t)(0xb821e4u), ebx);
/* 7d1842: jmp 0x7d10cb */
  goto L_7d10cb;
L_7d1847: /* 7d1847: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7d184a: push 0xad4f98 */
  { uint32_t v = 0xad4f98u; esp -= 4; W32(esp, v); }
/* 7d184f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1850: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1852u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1852: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1855: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1857: jne 0x7d10cb */
  if (!zf) goto L_7d10cb;
L_7d185d: /* 7d185d: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7d1860: push 0xad4fa4 */
  { uint32_t v = 0xad4fa4u; esp -= 4; W32(esp, v); }
/* 7d1865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1866: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1868u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1868: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d186b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d186d: je 0x7d18b0 */
  if (zf) goto L_7d18b0;
L_7d186f: /* 7d186f: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 7d1872: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1874: je 0x7d10cb */
  if (zf) goto L_7d10cb;
L_7d187a: /* 7d187a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d187c: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7d1882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1882: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 7d1885: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1887: mov edi, eax */
  edi = eax;
/* 7d1889: je 0x7d1892 */
  if (zf) goto L_7d1892;
L_7d188b: /* 7d188b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d188d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d188f: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x7d1892u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d1892: /* 7d1892: lea ecx, [esi - 0x28] */
  ecx = (uint32_t)(esi + 0xffffffd8u);
/* 7d1895: call 0x6cc757 */
  esp -= 4; W32(esp, 0x7d189au); SPILL(); f_6cc757(); if (g_unwind) return; RELOAD();
/* 7d189a: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 7d189d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d189f: je 0x7d10cb */
  if (zf) goto L_7d10cb;
L_7d18a5: /* 7d18a5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d18a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d18a8: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d18abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d18ab: jmp 0x7d10cb */
  goto L_7d10cb;
L_7d18b0: /* 7d18b0: mov ecx, dword ptr [esi + 0xe0] */
  ecx = R32((uint32_t)(esi + 0xe0u));
/* 7d18b6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d18b8: je 0x7d18d2 */
  if (zf) goto L_7d18d2;
L_7d18ba: /* 7d18ba: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7d18bd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d18bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d18c0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7d18c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d18c4: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x7d18cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d18ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d18cc: jne 0x7d10cb */
  if (!zf) goto L_7d10cb;
L_7d18d2: /* 7d18d2: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7d18d8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d18da: je 0x7d1901 */
  if (zf) goto L_7d1901;
L_7d18dc: /* 7d18dc: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7d18df: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7d18e1: mov ecx, dword ptr [eax + 0x508] */
  ecx = R32((uint32_t)(eax + 0x508u));
/* 7d18e7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d18e9: je 0x7d1901 */
  if (zf) goto L_7d1901;
L_7d18eb: /* 7d18eb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7d18ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d18f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d18f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d18f2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d18f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d18f6: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7d18f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d18f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d18fb: jne 0x7d10cb */
  if (!zf) goto L_7d10cb;
L_7d1901: /* 7d1901: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7d1907: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1909: je 0x7d1a42 */
  if (zf) goto L_7d1a42;
L_7d190f: /* 7d190f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7d1912: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7d1914: cmp byte ptr [eax + 0x4c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7d191b: jne 0x7d1a42 */
  if (!zf) goto L_7d1a42;
L_7d1921: /* 7d1921: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7d1924: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7d1927: push 0xad4fc0 */
  { uint32_t v = 0xad4fc0u; esp -= 4; W32(esp, v); }
/* 7d192c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d192d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7d1930: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7d1932u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1932: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1935: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1937: je 0x7d1a42 */
  if (zf) goto L_7d1a42;
L_7d193d: /* 7d193d: mov ebx, dword ptr [0xcfa7a8] */
  ebx = R32((uint32_t)(0xcfa7a8u));
/* 7d1943: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d1945: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d194a: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 7d1950: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1951: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7d1954: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1955: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d1957u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1957: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d195a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d195c: je 0x7d1a42 */
  if (zf) goto L_7d1a42;
L_7d1962: /* 7d1962: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7d1964: lea eax, [ebp - 0x238] */
  eax = (uint32_t)(ebp + 0xfffffdc8u);
/* 7d196a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d196b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7d196d: call 0x6cce00 */
  esp -= 4; W32(esp, 0x7d1972u); SPILL(); f_6cce00(); if (g_unwind) return; RELOAD();
/* 7d1972: mov edi, eax */
  edi = eax;
/* 7d1974: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1977: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1979: je 0x7d1a42 */
  if (zf) goto L_7d1a42;
L_7d197f: /* 7d197f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7d1981: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7d1986: lea ecx, [ebp - 0x438] */
  ecx = (uint32_t)(ebp + 0xfffffbc8u);
/* 7d198c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d198d: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7d1990: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1991: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7d1993u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1993: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1996: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1998: je 0x7d1a42 */
  if (zf) goto L_7d1a42;
L_7d199e: /* 7d199e: lea eax, [ebp - 0x438] */
  eax = (uint32_t)(ebp + 0xfffffbc8u);
/* 7d19a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d19a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7d19a6: call 0x6c4ef3 */
  esp -= 4; W32(esp, 0x7d19abu); SPILL(); f_6c4ef3(); if (g_unwind) return; RELOAD();
/* 7d19ab: mov ebx, eax */
  ebx = eax;
/* 7d19ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d19b0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d19b2: je 0x7d1a42 */
  if (zf) goto L_7d1a42;
L_7d19b8: /* 7d19b8: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7d19bd: mov ecx, edi */
  ecx = edi;
/* 7d19bf: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7d19c5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7d19c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d19c7: je 0x7d1a42 */
  if (zf) goto L_7d1a42;
L_7d19c9: /* 7d19c9: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d19ce: mov ecx, edi */
  ecx = edi;
/* 7d19d0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7d19d6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7d19d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d19d8: jne 0x7d1a42 */
  if (!zf) goto L_7d1a42;
L_7d19da: /* 7d19da: test dword ptr [ebx + 0x3c], 0x44000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3cu))); uint32_t b = (uint32_t)(0x44000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d19e1: jne 0x7d1a42 */
  if (!zf) goto L_7d1a42;
L_7d19e3: /* 7d19e3: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 7d19e8: mov ecx, edi */
  ecx = edi;
/* 7d19ea: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7d19f0u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7d19f0: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 7d19f5: mov ecx, edi */
  ecx = edi;
/* 7d19f7: mov esi, eax */
  esi = eax;
/* 7d19f9: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7d19ffu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7d19ff: mov ecx, dword ptr [ebx + 0x3c] */
  ecx = R32((uint32_t)(ebx + 0x3cu));
/* 7d1a02: and ecx, 0x44000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7d1a08: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 7d1a0a: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 7d1a0c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7d1a0d: xor edx, edx */
  edx = 0;
/* 7d1a0f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1a11: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7d1a14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1a15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1a16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1a17: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7d1a1c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7d1a1e: push 0xad4fc8 */
  { uint32_t v = 0xad4fc8u; esp -= 4; W32(esp, v); }
/* 7d1a23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7d1a24: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7d1a2au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7d1a2a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1a2d: xor eax, eax */
  eax = 0;
/* 7d1a2f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d1a32: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d1a39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d1a3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d1a3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d1a3c: mov esp, ebp */
  esp = ebp;
/* 7d1a3e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d1a3f: ret 8 */
  esp += 12; SPILL(); return;
L_7d1a42: /* 7d1a42: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7d1a45: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7d1a48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7d1a49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7d1a4a: mov ecx, esi */
  ecx = esi;
/* 7d1a4c: call 0x6c21c6 */
  esp -= 4; W32(esp, 0x7d1a51u); SPILL(); f_6c21c6(); if (g_unwind) return; RELOAD();
/* 7d1a51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7d1a53: jne 0x7d10cb */
  if (!zf) goto L_7d10cb;
L_7d1a59: /* 7d1a59: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7d1a5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7d1a5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7d1a5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7d1a65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7d1a66: mov esp, ebp */
  esp = ebp;
/* 7d1a68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7d1a69: ret 8 */
  esp += 12; SPILL(); return;
L_7d1a6c: /* 7d1a6c: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7d1a72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1a74: je 0x7d1aa9 */
  if (zf) goto L_7d1aa9;
L_7d1a76: /* 7d1a76: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7d1a79: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1a7b: je 0x7d1aa9 */
  if (zf) goto L_7d1aa9;
L_7d1a7d: /* 7d1a7d: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7d1a80: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1a82: je 0x7d1aa9 */
  if (zf) goto L_7d1aa9;
L_7d1a84: /* 7d1a84: mov eax, dword ptr [eax + 0xeb4] */
  eax = R32((uint32_t)(eax + 0xeb4u));
/* 7d1a8a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1a8c: je 0x7d1aa9 */
  if (zf) goto L_7d1aa9;
L_7d1a8e: /* 7d1a8e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d1a90: mov ecx, eax */
  ecx = eax;
/* 7d1a92: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d1a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1a95: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 7d1a9b: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d1a9e: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7d1aa1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d1aa3: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7d1aa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d1aa9: /* 7d1aa9: mov eax, dword ptr [esi + 0xe8] */
  eax = R32((uint32_t)(esi + 0xe8u));
/* 7d1aaf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1ab1: je 0x7d1ae6 */
  if (zf) goto L_7d1ae6;
L_7d1ab3: /* 7d1ab3: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7d1ab6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1ab8: je 0x7d1ae6 */
  if (zf) goto L_7d1ae6;
L_7d1aba: /* 7d1aba: mov eax, dword ptr [eax + 0x38] */
  eax = R32((uint32_t)(eax + 0x38u));
/* 7d1abd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1abf: je 0x7d1ae6 */
  if (zf) goto L_7d1ae6;
L_7d1ac1: /* 7d1ac1: mov eax, dword ptr [eax + 0xeb4] */
  eax = R32((uint32_t)(eax + 0xeb4u));
/* 7d1ac7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7d1ac9: je 0x7d1ae6 */
  if (zf) goto L_7d1ae6;
L_7d1acb: /* 7d1acb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7d1acd: mov ecx, eax */
  ecx = eax;
/* 7d1acf: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7d1ad2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7d1ad2: mov eax, dword ptr [esi + 0xe8] */
  eax = R32((uint32_t)(esi + 0xe8u));
/* 7d1ad8: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 7d1adb: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 7d1ade: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7d1ae0: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x7d1ae6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7d1ae6: /* 7d1ae6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7d1ae9: push 0xad4d40 */
  { uint32_t v = 0xad4d40u; esp -= 4; W32(esp, v); }
/* 7d1aee: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x7d1af4u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 7d1af4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7d1af5: call dword ptr [0xcfa8ec] */
  esp -= 4; W32(esp, 0x7d1afbu); SPILL(); f_4e3201(); if (g_unwind) return; /* Core!?appRequestExit@@YAXH@Z */ RELOAD();
/* 7d1afb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7d1afe: jmp 0x7d10cb */
  goto L_7d10cb;
}
