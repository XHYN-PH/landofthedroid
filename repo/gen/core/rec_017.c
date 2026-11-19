#include "recomp.h"
#include "rec_mod.h"

void f_544a9a(void) {
  LOAD_REGS();
  goto L_544a9a;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544a9a: /* 544a9a: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544a9d: push 0x5ab0c0 */
  { uint32_t v = 0x5ab0c0u; esp -= 4; W32(esp, v); }
/* 544aa2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544aa3: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544aa8u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544aa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544aab: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544aad: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544ab0: je 0x544bc4 */
  if (zf) goto L_544bc4;
L_544ab6: /* 544ab6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544ab8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544abd: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544ac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544ac5: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544acau); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544aca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544acd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544acf: je 0x544ba2 */
  if (zf) goto L_544ba2;
L_544ad5: /* 544ad5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ad6: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544adc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544add: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544adf: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 544ae4: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544ae9u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544ae9: mov esi, eax */
  esi = eax;
/* 544aeb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544aee: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544af0: je 0x544ba2 */
  if (zf) goto L_544ba2;
L_544af6: /* 544af6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544af8: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544afd: lea eax, [ebp - 0x4c0] */
  eax = (uint32_t)(ebp + 0xfffffb40u);
/* 544b03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b04: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544b07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b08: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544b0du); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544b0d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b10: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b12: je 0x544b80 */
  if (zf) goto L_544b80;
L_544b14: /* 544b14: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544b1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544b1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544b1c: call 0x4e12ee */
  esp -= 4; W32(esp, 0x544b21u); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 544b21: mov edx, eax */
  edx = eax;
/* 544b23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b26: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b28: je 0x544b80 */
  if (zf) goto L_544b80;
L_544b2a: /* 544b2a: mov ax, word ptr [0x69f4b0] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x69f4b0u))) & 0xffffu);
/* 544b30: mov word ptr [ebp - 0x6c0], ax */
  W16((uint32_t)(ebp + 0xfffff940u), (eax & 0xffffu));
/* 544b37: xor eax, eax */
  eax = 0;
/* 544b39: mov ecx, 0x7f */
  ecx = 0x7fu;
/* 544b3e: lea edi, [ebp - 0x6be] */
  edi = (uint32_t)(ebp + 0xfffff942u);
/* 544b44: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 544b46: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 544b48: cmp dword ptr [esi + 0x4ec], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4ecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544b4e: je 0x544b6c */
  if (zf) goto L_544b6c;
L_544b50: /* 544b50: mov eax, dword ptr [esi + 0x4e8] */
  eax = R32((uint32_t)(esi + 0x4e8u));
/* 544b56: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 544b58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544b5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b5c: lea ecx, [ebp - 0x6c0] */
  ecx = (uint32_t)(ebp + 0xfffff940u);
/* 544b62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544b64: mov ecx, edx */
  ecx = edx;
/* 544b66: call dword ptr [esi + 0xa0] */
  { uint32_t t = R32((uint32_t)(esi + 0xa0u)); esp -= 4; W32(esp, 0x544b6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_544b6c: /* 544b6c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544b6f: lea edx, [ebp - 0x6c0] */
  edx = (uint32_t)(ebp + 0xfffff940u);
/* 544b75: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544b76: call 0x4e35da */
  esp -= 4; W32(esp, 0x544b7bu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 544b7b: jmp 0x544a3f */
  goto L_544a3f;
L_544b80: /* 544b80: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544b83: lea eax, [ebp - 0x4c0] */
  eax = (uint32_t)(ebp + 0xfffffb40u);
/* 544b89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b8a: push 0x5ab0c8 */
  { uint32_t v = 0x5ab0c8u; esp -= 4; W32(esp, v); }
/* 544b8f: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544b94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b95: call 0x4e30df */
  esp -= 4; W32(esp, 0x544b9au); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544b9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b9d: jmp 0x544a3f */
  goto L_544a3f;
L_544ba2: /* 544ba2: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544ba8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544ba9: push 0x5ab0fc */
  { uint32_t v = 0x5ab0fcu; esp -= 4; W32(esp, v); }
L_544bae: /* 544bae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544bb1: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bb7: call 0x4e30df */
  esp -= 4; W32(esp, 0x544bbcu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544bbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bbf: jmp 0x544a3f */
  goto L_544a3f;
L_544bc4: /* 544bc4: push 0x5ab128 */
  { uint32_t v = 0x5ab128u; esp -= 4; W32(esp, v); }
/* 544bc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544bca: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544bcfu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bd2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bd4: je 0x544ca7 */
  if (zf) goto L_544ca7;
L_544bda: /* 544bda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544bdc: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544be1: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544be7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544be8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bec: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544bf1u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bf4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bf6: je 0x544c96 */
  if (zf) goto L_544c96;
L_544bfc: /* 544bfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544bfd: lea ecx, [ebp - 0x4c0] */
  ecx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c04: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544c06: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 544c0b: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544c10u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544c10: mov esi, eax */
  esi = eax;
/* 544c12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c15: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c17: je 0x544c96 */
  if (zf) goto L_544c96;
L_544c19: /* 544c19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c1b: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544c20: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c27: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c2b: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544c30u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544c30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c33: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c35: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c37: /* 544c37: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c3f: call 0x4e12ee */
  esp -= 4; W32(esp, 0x544c44u); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 544c44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c47: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c49: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c4b: /* 544c4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 544c4e: mov edi, edi */
  edi = edi;
L_544c50: /* 544c50: cmp word ptr [ecx], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 544c54: jne 0x544c5e */
  if (!zf) goto L_544c5e;
L_544c56: /* 544c56: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 544c59: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 544c5c: jmp 0x544c50 */
  goto L_544c50;
L_544c5e: /* 544c5e: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 544c61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c67: call 0x4e3661 */
  esp -= 4; W32(esp, 0x544c6cu); SPILL(); f_4e3661(); if (g_unwind) return; RELOAD();
/* 544c6c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c6f: jmp 0x544a3f */
  goto L_544a3f;
L_544c74: /* 544c74: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544c77: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c7e: push 0x5ab130 */
  { uint32_t v = 0x5ab130u; esp -= 4; W32(esp, v); }
/* 544c83: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c89: call 0x4e30df */
  esp -= 4; W32(esp, 0x544c8eu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544c8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c91: jmp 0x544a3f */
  goto L_544a3f;
L_544c96: /* 544c96: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c9d: push 0x5ab164 */
  { uint32_t v = 0x5ab164u; esp -= 4; W32(esp, v); }
/* 544ca2: jmp 0x544bae */
  goto L_544bae;
L_544ca7: /* 544ca7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544caa: push 0x5ab190 */
  { uint32_t v = 0x5ab190u; esp -= 4; W32(esp, v); }
/* 544caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544cb0: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cb5u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cb8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cba: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544cbd: je 0x5456ec */
  if (zf) goto L_5456ec;
L_544cc3: /* 544cc3: push 0x5ab198 */
  { uint32_t v = 0x5ab198u; esp -= 4; W32(esp, v); }
/* 544cc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544cc9: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cceu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cd1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cd3: je 0x544d08 */
  if (zf) goto L_544d08;
L_544cd5: /* 544cd5: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 544cda: mov esi, dword ptr [0x5b318c] */
  esi = R32((uint32_t)(0x5b318cu));
/* 544ce0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 544ce2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 544ce4: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 544ce9: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 544cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544cef: mov dword ptr [0x5b318c], ebx */
  W32((uint32_t)(0x5b318cu), ebx);
/* 544cf5: call 0x4e3fa8 */
  esp -= 4; W32(esp, 0x544cfau); SPILL(); f_4e3fa8(); if (g_unwind) return; RELOAD();
/* 544cfa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cfd: mov dword ptr [0x5b318c], esi */
  W32((uint32_t)(0x5b318cu), esi);
/* 544d03: jmp 0x544a3f */
  goto L_544a3f;
L_544d08: /* 544d08: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544d0b: push 0x5ab1a8 */
  { uint32_t v = 0x5ab1a8u; esp -= 4; W32(esp, v); }
/* 544d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544d11: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d16u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d1b: je 0x544d69 */
  if (zf) goto L_544d69;
L_544d1d: /* 544d1d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544d23: push 0x5ab1b4 */
  { uint32_t v = 0x5ab1b4u; esp -= 4; W32(esp, v); }
/* 544d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d29: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d2eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d31: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d36: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d39: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d3eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d3e: mov edi, edi */
  edi = edi;
L_544d40: /* 544d40: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544d43: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544d49: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544d4f: /* 544d4f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544d55: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 544d58: or dword ptr [eax + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 544d5f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d62: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544d67u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544d67: jmp 0x544d40 */
  goto L_544d40;
L_544d69: /* 544d69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544d6c: push 0x5ab1d4 */
  { uint32_t v = 0x5ab1d4u; esp -= 4; W32(esp, v); }
/* 544d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d72: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d77u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d7c: je 0x544de6 */
  if (zf) goto L_544de6;
L_544d7e: /* 544d7e: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 544d83: push 0x5ab1e8 */
  { uint32_t v = 0x5ab1e8u; esp -= 4; W32(esp, v); }
/* 544d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544d89: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d8eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d91: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d96: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d99: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d9eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d9e: mov edi, edi */
  edi = edi;
L_544da0: /* 544da0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544da3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544da9: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544daf: /* 544daf: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544db5: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 544db8: test dword ptr [ecx + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544dbf: jne 0x544ddc */
  if (!zf) goto L_544ddc;
L_544dc1: /* 544dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544dc2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544dc7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544dc7: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544dce: push 0x5ab20c */
  { uint32_t v = 0x5ab20cu; esp -= 4; W32(esp, v); }
/* 544dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544dd4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544dd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ddc: /* 544ddc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ddf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544de4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544de4: jmp 0x544da0 */
  goto L_544da0;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
L_5456ec: /* 5456ec: push 0x5ab68c */
  { uint32_t v = 0x5ab68cu; esp -= 4; W32(esp, v); }
/* 5456f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456f2: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5456f7u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5456f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456fa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5456fc: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5456fe: /* 5456fe: mov eax, dword ptr [0x5b210c] */
  eax = R32((uint32_t)(0x5b210cu));
/* 545703: mov ecx, dword ptr [0x5b2108] */
  ecx = R32((uint32_t)(0x5b2108u));
/* 545709: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54570f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545711: push 0x5ab698 */
  { uint32_t v = 0x5ab698u; esp -= 4; W32(esp, v); }
/* 545716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545717: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54571cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54571c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54571f: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544b80(void) {
  LOAD_REGS();
  goto L_544b80;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544b80: /* 544b80: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544b83: lea eax, [ebp - 0x4c0] */
  eax = (uint32_t)(ebp + 0xfffffb40u);
/* 544b89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544b8a: push 0x5ab0c8 */
  { uint32_t v = 0x5ab0c8u; esp -= 4; W32(esp, v); }
/* 544b8f: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544b94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544b95: call 0x4e30df */
  esp -= 4; W32(esp, 0x544b9au); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544b9a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544b9d: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544ba2(void) {
  LOAD_REGS();
  goto L_544ba2;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544ba2: /* 544ba2: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544ba8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544ba9: push 0x5ab0fc */
  { uint32_t v = 0x5ab0fcu; esp -= 4; W32(esp, v); }
/* 544bae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544bb1: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bb7: call 0x4e30df */
  esp -= 4; W32(esp, 0x544bbcu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544bbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bbf: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544bc4(void) {
  LOAD_REGS();
  goto L_544bc4;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544bae: /* 544bae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544bb1: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bb7: call 0x4e30df */
  esp -= 4; W32(esp, 0x544bbcu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544bbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bbf: jmp 0x544a3f */
  goto L_544a3f;
L_544bc4: /* 544bc4: push 0x5ab128 */
  { uint32_t v = 0x5ab128u; esp -= 4; W32(esp, v); }
/* 544bc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544bca: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544bcfu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bd2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bd4: je 0x544ca7 */
  if (zf) goto L_544ca7;
L_544bda: /* 544bda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544bdc: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544be1: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544be7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544be8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544beb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bec: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544bf1u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bf4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544bf6: je 0x544c96 */
  if (zf) goto L_544c96;
L_544bfc: /* 544bfc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544bfd: lea ecx, [ebp - 0x4c0] */
  ecx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c04: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544c06: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 544c0b: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x544c10u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 544c10: mov esi, eax */
  esi = eax;
/* 544c12: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c15: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c17: je 0x544c96 */
  if (zf) goto L_544c96;
L_544c19: /* 544c19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c1b: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 544c20: lea edx, [ebp - 0x2c0] */
  edx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c27: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544c2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c2b: call 0x4e3256 */
  esp -= 4; W32(esp, 0x544c30u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 544c30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c33: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c35: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c37: /* 544c37: lea ecx, [ebp - 0x2c0] */
  ecx = (uint32_t)(ebp + 0xfffffd40u);
/* 544c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c3f: call 0x4e12ee */
  esp -= 4; W32(esp, 0x544c44u); SPILL(); f_4e12ee(); if (g_unwind) return; RELOAD();
/* 544c44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c47: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544c49: je 0x544c74 */
  if (zf) goto L_544c74;
L_544c4b: /* 544c4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 544c4e: mov edi, edi */
  edi = edi;
L_544c50: /* 544c50: cmp word ptr [ecx], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 544c54: jne 0x544c5e */
  if (!zf) goto L_544c5e;
L_544c56: /* 544c56: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 544c59: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 544c5c: jmp 0x544c50 */
  goto L_544c50;
L_544c5e: /* 544c5e: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 544c61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c67: call 0x4e3661 */
  esp -= 4; W32(esp, 0x544c6cu); SPILL(); f_4e3661(); if (g_unwind) return; RELOAD();
/* 544c6c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c6f: jmp 0x544a3f */
  goto L_544a3f;
L_544c74: /* 544c74: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544c77: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c7e: push 0x5ab130 */
  { uint32_t v = 0x5ab130u; esp -= 4; W32(esp, v); }
/* 544c83: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c89: call 0x4e30df */
  esp -= 4; W32(esp, 0x544c8eu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544c8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c91: jmp 0x544a3f */
  goto L_544a3f;
L_544c96: /* 544c96: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c9d: push 0x5ab164 */
  { uint32_t v = 0x5ab164u; esp -= 4; W32(esp, v); }
/* 544ca2: jmp 0x544bae */
  goto L_544bae;
L_544ca7: /* 544ca7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544caa: push 0x5ab190 */
  { uint32_t v = 0x5ab190u; esp -= 4; W32(esp, v); }
/* 544caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544cb0: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cb5u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cb8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cba: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544cbd: je 0x5456ec */
  if (zf) goto L_5456ec;
L_544cc3: /* 544cc3: push 0x5ab198 */
  { uint32_t v = 0x5ab198u; esp -= 4; W32(esp, v); }
/* 544cc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544cc9: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cceu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cd1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cd3: je 0x544d08 */
  if (zf) goto L_544d08;
L_544cd5: /* 544cd5: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 544cda: mov esi, dword ptr [0x5b318c] */
  esi = R32((uint32_t)(0x5b318cu));
/* 544ce0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 544ce2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 544ce4: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 544ce9: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 544cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544cef: mov dword ptr [0x5b318c], ebx */
  W32((uint32_t)(0x5b318cu), ebx);
/* 544cf5: call 0x4e3fa8 */
  esp -= 4; W32(esp, 0x544cfau); SPILL(); f_4e3fa8(); if (g_unwind) return; RELOAD();
/* 544cfa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cfd: mov dword ptr [0x5b318c], esi */
  W32((uint32_t)(0x5b318cu), esi);
/* 544d03: jmp 0x544a3f */
  goto L_544a3f;
L_544d08: /* 544d08: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544d0b: push 0x5ab1a8 */
  { uint32_t v = 0x5ab1a8u; esp -= 4; W32(esp, v); }
/* 544d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544d11: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d16u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d1b: je 0x544d69 */
  if (zf) goto L_544d69;
L_544d1d: /* 544d1d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544d23: push 0x5ab1b4 */
  { uint32_t v = 0x5ab1b4u; esp -= 4; W32(esp, v); }
/* 544d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d29: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d2eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d31: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d36: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d39: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d3eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d3e: mov edi, edi */
  edi = edi;
L_544d40: /* 544d40: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544d43: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544d49: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544d4f: /* 544d4f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544d55: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 544d58: or dword ptr [eax + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 544d5f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d62: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544d67u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544d67: jmp 0x544d40 */
  goto L_544d40;
L_544d69: /* 544d69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544d6c: push 0x5ab1d4 */
  { uint32_t v = 0x5ab1d4u; esp -= 4; W32(esp, v); }
/* 544d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d72: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d77u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d7c: je 0x544de6 */
  if (zf) goto L_544de6;
L_544d7e: /* 544d7e: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 544d83: push 0x5ab1e8 */
  { uint32_t v = 0x5ab1e8u; esp -= 4; W32(esp, v); }
/* 544d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544d89: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d8eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d91: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d96: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d99: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d9eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d9e: mov edi, edi */
  edi = edi;
L_544da0: /* 544da0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544da3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544da9: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544daf: /* 544daf: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544db5: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 544db8: test dword ptr [ecx + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544dbf: jne 0x544ddc */
  if (!zf) goto L_544ddc;
L_544dc1: /* 544dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544dc2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544dc7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544dc7: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544dce: push 0x5ab20c */
  { uint32_t v = 0x5ab20cu; esp -= 4; W32(esp, v); }
/* 544dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544dd4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544dd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ddc: /* 544ddc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ddf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544de4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544de4: jmp 0x544da0 */
  goto L_544da0;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
L_5456ec: /* 5456ec: push 0x5ab68c */
  { uint32_t v = 0x5ab68cu; esp -= 4; W32(esp, v); }
/* 5456f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456f2: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5456f7u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5456f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456fa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5456fc: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5456fe: /* 5456fe: mov eax, dword ptr [0x5b210c] */
  eax = R32((uint32_t)(0x5b210cu));
/* 545703: mov ecx, dword ptr [0x5b2108] */
  ecx = R32((uint32_t)(0x5b2108u));
/* 545709: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54570f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545711: push 0x5ab698 */
  { uint32_t v = 0x5ab698u; esp -= 4; W32(esp, v); }
/* 545716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545717: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54571cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54571c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54571f: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544c5e(void) {
  LOAD_REGS();
  goto L_544c5e;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544c5e: /* 544c5e: mov edx, dword ptr [eax + 0x48] */
  edx = R32((uint32_t)(eax + 0x48u));
/* 544c61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 544c63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544c66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c67: call 0x4e3661 */
  esp -= 4; W32(esp, 0x544c6cu); SPILL(); f_4e3661(); if (g_unwind) return; RELOAD();
/* 544c6c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c6f: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544c74(void) {
  LOAD_REGS();
  goto L_544c74;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544c74: /* 544c74: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 544c77: lea eax, [ebp - 0x2c0] */
  eax = (uint32_t)(ebp + 0xfffffd40u);
/* 544c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544c7e: push 0x5ab130 */
  { uint32_t v = 0x5ab130u; esp -= 4; W32(esp, v); }
/* 544c83: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544c88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544c89: call 0x4e30df */
  esp -= 4; W32(esp, 0x544c8eu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544c8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544c91: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544c96(void) {
  LOAD_REGS();
  goto L_544c96;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544bae: /* 544bae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544bb1: push 0x300 */
  { uint32_t v = 0x300u; esp -= 4; W32(esp, v); }
/* 544bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544bb7: call 0x4e30df */
  esp -= 4; W32(esp, 0x544bbcu); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 544bbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544bbf: jmp 0x544a3f */
  goto L_544a3f;
L_544c96: /* 544c96: lea edx, [ebp - 0x4c0] */
  edx = (uint32_t)(ebp + 0xfffffb40u);
/* 544c9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544c9d: push 0x5ab164 */
  { uint32_t v = 0x5ab164u; esp -= 4; W32(esp, v); }
/* 544ca2: jmp 0x544bae */
  goto L_544bae;
}

void f_544ca7(void) {
  LOAD_REGS();
  goto L_544ca7;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544ca7: /* 544ca7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544caa: push 0x5ab190 */
  { uint32_t v = 0x5ab190u; esp -= 4; W32(esp, v); }
/* 544caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544cb0: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cb5u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cb8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cba: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544cbd: je 0x5456ec */
  if (zf) goto L_5456ec;
L_544cc3: /* 544cc3: push 0x5ab198 */
  { uint32_t v = 0x5ab198u; esp -= 4; W32(esp, v); }
/* 544cc8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544cc9: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544cceu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544cce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cd1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544cd3: je 0x544d08 */
  if (zf) goto L_544d08;
L_544cd5: /* 544cd5: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 544cda: mov esi, dword ptr [0x5b318c] */
  esi = R32((uint32_t)(0x5b318cu));
/* 544ce0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 544ce2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 544ce4: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 544ce9: or eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 544cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544cef: mov dword ptr [0x5b318c], ebx */
  W32((uint32_t)(0x5b318cu), ebx);
/* 544cf5: call 0x4e3fa8 */
  esp -= 4; W32(esp, 0x544cfau); SPILL(); f_4e3fa8(); if (g_unwind) return; RELOAD();
/* 544cfa: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544cfd: mov dword ptr [0x5b318c], esi */
  W32((uint32_t)(0x5b318cu), esi);
/* 544d03: jmp 0x544a3f */
  goto L_544a3f;
L_544d08: /* 544d08: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544d0b: push 0x5ab1a8 */
  { uint32_t v = 0x5ab1a8u; esp -= 4; W32(esp, v); }
/* 544d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544d11: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d16u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d1b: je 0x544d69 */
  if (zf) goto L_544d69;
L_544d1d: /* 544d1d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544d23: push 0x5ab1b4 */
  { uint32_t v = 0x5ab1b4u; esp -= 4; W32(esp, v); }
/* 544d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d29: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d2eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d31: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d36: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d39: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d3eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d3e: mov edi, edi */
  edi = edi;
L_544d40: /* 544d40: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544d43: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544d49: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544d4f: /* 544d4f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544d55: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 544d58: or dword ptr [eax + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 544d5f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d62: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544d67u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544d67: jmp 0x544d40 */
  goto L_544d40;
L_544d69: /* 544d69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544d6c: push 0x5ab1d4 */
  { uint32_t v = 0x5ab1d4u; esp -= 4; W32(esp, v); }
/* 544d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d72: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d77u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d7c: je 0x544de6 */
  if (zf) goto L_544de6;
L_544d7e: /* 544d7e: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 544d83: push 0x5ab1e8 */
  { uint32_t v = 0x5ab1e8u; esp -= 4; W32(esp, v); }
/* 544d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544d89: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d8eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d91: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d96: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d99: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d9eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d9e: mov edi, edi */
  edi = edi;
L_544da0: /* 544da0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544da3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544da9: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544daf: /* 544daf: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544db5: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 544db8: test dword ptr [ecx + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544dbf: jne 0x544ddc */
  if (!zf) goto L_544ddc;
L_544dc1: /* 544dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544dc2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544dc7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544dc7: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544dce: push 0x5ab20c */
  { uint32_t v = 0x5ab20cu; esp -= 4; W32(esp, v); }
/* 544dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544dd4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544dd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ddc: /* 544ddc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ddf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544de4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544de4: jmp 0x544da0 */
  goto L_544da0;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
L_5456ec: /* 5456ec: push 0x5ab68c */
  { uint32_t v = 0x5ab68cu; esp -= 4; W32(esp, v); }
/* 5456f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456f2: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5456f7u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5456f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456fa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5456fc: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5456fe: /* 5456fe: mov eax, dword ptr [0x5b210c] */
  eax = R32((uint32_t)(0x5b210cu));
/* 545703: mov ecx, dword ptr [0x5b2108] */
  ecx = R32((uint32_t)(0x5b2108u));
/* 545709: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 54570f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545711: push 0x5ab698 */
  { uint32_t v = 0x5ab698u; esp -= 4; W32(esp, v); }
/* 545716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545717: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54571cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54571c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54571f: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544d08(void) {
  LOAD_REGS();
  goto L_544d08;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544d08: /* 544d08: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 544d0b: push 0x5ab1a8 */
  { uint32_t v = 0x5ab1a8u; esp -= 4; W32(esp, v); }
/* 544d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544d11: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d16u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d19: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d1b: je 0x544d69 */
  if (zf) goto L_544d69;
L_544d1d: /* 544d1d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544d23: push 0x5ab1b4 */
  { uint32_t v = 0x5ab1b4u; esp -= 4; W32(esp, v); }
/* 544d28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d29: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d2eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d2e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d31: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d36: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d39: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d3eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d3e: mov edi, edi */
  edi = edi;
L_544d40: /* 544d40: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544d43: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544d49: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544d4f: /* 544d4f: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544d55: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 544d58: or dword ptr [eax + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 544d5f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d62: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544d67u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544d67: jmp 0x544d40 */
  goto L_544d40;
L_544d69: /* 544d69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544d6c: push 0x5ab1d4 */
  { uint32_t v = 0x5ab1d4u; esp -= 4; W32(esp, v); }
/* 544d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d72: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d77u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d7c: je 0x544de6 */
  if (zf) goto L_544de6;
L_544d7e: /* 544d7e: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 544d83: push 0x5ab1e8 */
  { uint32_t v = 0x5ab1e8u; esp -= 4; W32(esp, v); }
/* 544d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544d89: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d8eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d91: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d96: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d99: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d9eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d9e: mov edi, edi */
  edi = edi;
L_544da0: /* 544da0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544da3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544da9: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544daf: /* 544daf: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544db5: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 544db8: test dword ptr [ecx + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544dbf: jne 0x544ddc */
  if (!zf) goto L_544ddc;
L_544dc1: /* 544dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544dc2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544dc7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544dc7: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544dce: push 0x5ab20c */
  { uint32_t v = 0x5ab20cu; esp -= 4; W32(esp, v); }
/* 544dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544dd4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544dd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ddc: /* 544ddc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ddf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544de4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544de4: jmp 0x544da0 */
  goto L_544da0;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
}

void f_544d69(void) {
  LOAD_REGS();
  goto L_544d69;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544d69: /* 544d69: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544d6c: push 0x5ab1d4 */
  { uint32_t v = 0x5ab1d4u; esp -= 4; W32(esp, v); }
/* 544d71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544d72: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544d77u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544d77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d7a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544d7c: je 0x544de6 */
  if (zf) goto L_544de6;
L_544d7e: /* 544d7e: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 544d83: push 0x5ab1e8 */
  { uint32_t v = 0x5ab1e8u; esp -= 4; W32(esp, v); }
/* 544d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544d89: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544d8eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544d8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544d91: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544d96: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544d99: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544d9eu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544d9e: mov edi, edi */
  edi = edi;
L_544da0: /* 544da0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544da3: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544da9: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_544daf: /* 544daf: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 544db5: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 544db8: test dword ptr [ecx + 0x1c], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544dbf: jne 0x544ddc */
  if (!zf) goto L_544ddc;
L_544dc1: /* 544dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544dc2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544dc7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544dc7: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 544dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544dce: push 0x5ab20c */
  { uint32_t v = 0x5ab20cu; esp -= 4; W32(esp, v); }
/* 544dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544dd4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544dd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544dd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ddc: /* 544ddc: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ddf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544de4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544de4: jmp 0x544da0 */
  goto L_544da0;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
}

void f_544de6(void) {
  LOAD_REGS();
  goto L_544de6;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544de6: /* 544de6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 544de9: push 0x5ab214 */
  { uint32_t v = 0x5ab214u; esp -= 4; W32(esp, v); }
/* 544dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544def: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544df4u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544df4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544df7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544df9: je 0x544f9d */
  if (zf) goto L_544f9d;
L_544dff: /* 544dff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e02: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 544e07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e08: push 0x5ab220 */
  { uint32_t v = 0x5ab220u; esp -= 4; W32(esp, v); }
/* 544e0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e0e: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x544e13u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 544e13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e16: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e18: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e1e: /* 544e1e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 544e21: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 544e24: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 544e26: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 544e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e2b: push 0x5ab230 */
  { uint32_t v = 0x5ab230u; esp -= 4; W32(esp, v); }
/* 544e30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544e31: call 0x4e194c */
  esp -= 4; W32(esp, 0x544e36u); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 544e36: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544e3b: je 0x544a3f */
  if (zf) goto L_544a3f;
L_544e41: /* 544e41: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 544e44: push 0x69f4b4 */
  { uint32_t v = 0x69f4b4u; esp -= 4; W32(esp, v); }
/* 544e49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e4a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e4fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e4f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e5d: push 0x5ab23c */
  { uint32_t v = 0x5ab23cu; esp -= 4; W32(esp, v); }
/* 544e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544e63: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544e68u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544e68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544e6b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544e70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544e73: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544e78u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544e78: jmp 0x544e80 */
  goto L_544e80;
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
}

void f_544e7a(void) {
  LOAD_REGS();
  goto L_544e7a;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544e7a: /* 544e7a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_544e80: /* 544e80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544e83: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544e89: jge 0x544ee5 */
  if ((sf == of)) goto L_544ee5;
L_544e8b: /* 544e8b: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 544e90: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 544e93: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544e97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544e98: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 544e9e: call 0x4e1087 */
  esp -= 4; W32(esp, 0x544ea3u); SPILL(); f_4e1087(); if (g_unwind) return; RELOAD();
/* 544ea3: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 544ea6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544ea8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 544eac: je 0x544ecd */
  if (zf) goto L_544ecd;
L_544eae: /* 544eae: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 544eb4: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 544eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544eb9: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544ebeu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544ebf: push 0x5ab264 */
  { uint32_t v = 0x5ab264u; esp -= 4; W32(esp, v); }
/* 544ec4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544ec5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ecau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544eca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544ecd: /* 544ecd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544ed0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544ed4: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
/* 544ede: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544ee3u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544ee3: jmp 0x544e80 */
  goto L_544e80;
L_544ee5: /* 544ee5: push 0x69f4b8 */
  { uint32_t v = 0x69f4b8u; esp -= 4; W32(esp, v); }
/* 544eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544eeb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544ef0u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 544ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544ef6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544ef8: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544efdu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544efe: push 0x5ab270 */
  { uint32_t v = 0x5ab270u; esp -= 4; W32(esp, v); }
/* 544f03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f04: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f09u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f09: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 544f0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f10: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 544f14: call 0x4e44e4 */
  esp -= 4; W32(esp, 0x544f19u); SPILL(); f_4e44e4(); if (g_unwind) return; RELOAD();
/* 544f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f1c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 544f20: xor edi, edi */
  edi = 0;
L_544f22: /* 544f22: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 544f25: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544f27: jge 0x544f6c */
  if ((sf == of)) goto L_544f6c;
L_544f29: /* 544f29: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f2b: je 0x544f34 */
  if (zf) goto L_544f34;
L_544f2d: /* 544f2d: mov esi, 0x69f4bc */
  esi = 0x69f4bcu;
/* 544f32: jmp 0x544f4c */
  goto L_544f4c;
L_544f34: /* 544f34: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f37: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 544f39: test dword ptr [eax + 0x1c], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f40: mov esi, 0x5ab2c0 */
  esi = 0x5ab2c0u;
/* 544f45: jne 0x544f4c */
  if (!zf) goto L_544f4c;
L_544f47: /* 544f47: mov esi, 0x5ab2d4 */
  esi = 0x5ab2d4u;
L_544f4c: /* 544f4c: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 544f4f: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 544f52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 544f54: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x544f59u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 544f59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 544f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544f5b: push 0x5ab2e4 */
  { uint32_t v = 0x5ab2e4u; esp -= 4; W32(esp, v); }
/* 544f60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f61: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f66u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f69: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 544f6a: jmp 0x544f22 */
  goto L_544f22;
L_544f6c: /* 544f6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 544f6e: jne 0x544f7e */
  if (!zf) goto L_544f7e;
L_544f70: /* 544f70: push 0x5ab2f8 */
  { uint32_t v = 0x5ab2f8u; esp -= 4; W32(esp, v); }
/* 544f75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f76: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f7bu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f7b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_544f7e: /* 544f7e: push 0x69f4c0 */
  { uint32_t v = 0x69f4c0u; esp -= 4; W32(esp, v); }
/* 544f83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 544f84: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x544f89u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 544f89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
}

void f_544f9d(void) {
  LOAD_REGS();
  goto L_544f9d;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_544f9d: /* 544f9d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 544fa0: push 0x5ab340 */
  { uint32_t v = 0x5ab340u; esp -= 4; W32(esp, v); }
/* 544fa5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 544fa6: call 0x4e32ec */
  esp -= 4; W32(esp, 0x544fabu); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 544fab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 544fb0: je 0x545017 */
  if (zf) goto L_545017;
L_544fb2: /* 544fb2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 544fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 544fb6: call 0x4e31de */
  esp -= 4; W32(esp, 0x544fbbu); SPILL(); f_4e31de(); if (g_unwind) return; RELOAD();
/* 544fbb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 544fbe: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 544fc3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fc6: xor esi, esi */
  esi = 0;
/* 544fc8: xor edi, edi */
  edi = 0;
/* 544fca: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x544fcfu); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 544fcf: nop  */
L_544fd0: /* 544fd0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 544fd3: cmp ecx, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 544fd9: jge 0x544fe6 */
  if ((sf == of)) goto L_544fe6;
L_544fdb: /* 544fdb: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 544fde: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 544fdf: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x544fe4u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 544fe4: jmp 0x544fd0 */
  goto L_544fd0;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
L_545017: /* 545017: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54501a: push 0x5ab34c */
  { uint32_t v = 0x5ab34cu; esp -= 4; W32(esp, v); }
/* 54501f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545020: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545025u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545025: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545028: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54502a: je 0x545043 */
  if (zf) goto L_545043;
L_54502c: /* 54502c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 54502f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545031: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545036: call 0x53fd30 */
  esp -= 4; W32(esp, 0x54503bu); SPILL(); f_53fd30(); if (g_unwind) return; RELOAD();
/* 54503b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54503e: jmp 0x544a3f */
  goto L_544a3f;
L_545043: /* 545043: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 545046: push 0x5ab35c */
  { uint32_t v = 0x5ab35cu; esp -= 4; W32(esp, v); }
/* 54504b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54504c: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545051u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545051: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545054: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545056: je 0x545168 */
  if (zf) goto L_545168;
L_54505c: /* 54505c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 54505f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545060: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 545063: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545064: push 0x5ab378 */
  { uint32_t v = 0x5ab378u; esp -= 4; W32(esp, v); }
/* 545069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54506a: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x54506fu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 54506f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545072: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545074: je 0x544a3f */
  if (zf) goto L_544a3f;
L_54507a: /* 54507a: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 54507d: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 545080: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 545083: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 545087: xor esi, esi */
  esi = 0;
/* 545089: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_545090: /* 545090: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545093: jge 0x5450ef */
  if ((sf == of)) goto L_5450ef;
L_545095: /* 545095: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545096: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 54509c: push 0x5ab38c */
  { uint32_t v = 0x5ab38cu; esp -= 4; W32(esp, v); }
/* 5450a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450a2: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5450a7u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 5450a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 5450aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5450b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450b1: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 5450b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450b9: call 0x4e3f67 */
  esp -= 4; W32(esp, 0x5450beu); SPILL(); f_4e3f67(); if (g_unwind) return; RELOAD();
/* 5450be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5450c3: je 0x5450ec */
  if (zf) goto L_5450ec;
L_5450c5: /* 5450c5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 5450c8: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5450cd: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 5450d0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5450d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5450d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450d5: call 0x4e1cb2 */
  esp -= 4; W32(esp, 0x5450dau); SPILL(); f_4e1cb2(); if (g_unwind) return; RELOAD();
/* 5450da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5450dd: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5450e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5450e1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5450e4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 5450e7: call 0x4e17e9 */
  esp -= 4; W32(esp, 0x5450ecu); SPILL(); f_4e17e9(); if (g_unwind) return; RELOAD();
L_5450ec: /* 5450ec: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5450ed: jmp 0x545090 */
  goto L_545090;
L_5450ef: /* 5450ef: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5450f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5450f4: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5450f9u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5450f9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5450fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5450fd: push 0x5ab3a4 */
  { uint32_t v = 0x5ab3a4u; esp -= 4; W32(esp, v); }
/* 545102: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545103: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545108u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545108: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54510b: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 545110: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545113: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545118u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545118: jmp 0x545120 */
  goto L_545120;
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
L_545168: /* 545168: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 54516b: push 0x5ab3cc */
  { uint32_t v = 0x5ab3ccu; esp -= 4; W32(esp, v); }
/* 545170: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545171: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545176u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545176: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545179: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54517b: je 0x5454fb */
  if (zf) goto L_5454fb;
L_545181: /* 545181: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 545184: push 0x5ab3d8 */
  { uint32_t v = 0x5ab3d8u; esp -= 4; W32(esp, v); }
/* 545189: mov ecx, esi */
  ecx = esi;
/* 54518b: call 0x4e35da */
  esp -= 4; W32(esp, 0x545190u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545190: push 0x69f4c4 */
  { uint32_t v = 0x69f4c4u; esp -= 4; W32(esp, v); }
/* 545195: mov ecx, esi */
  ecx = esi;
/* 545197: call 0x4e35da */
  esp -= 4; W32(esp, 0x54519cu); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 54519c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 54519f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5451a1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 5451a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451a5: push 0x5ab3ec */
  { uint32_t v = 0x5ab3ecu; esp -= 4; W32(esp, v); }
/* 5451aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451ab: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 5451ae: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 5451b1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 5451b4: call 0x4e23a1 */
  esp -= 4; W32(esp, 0x5451b9u); SPILL(); f_4e23a1(); if (g_unwind) return; RELOAD();
/* 5451b9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 5451bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451bf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451c0: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 5451c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451c4: push 0x5ab3fc */
  { uint32_t v = 0x5ab3fcu; esp -= 4; W32(esp, v); }
/* 5451c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5451ca: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451cfu); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451cf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 5451d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5451d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5451d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5451da: push 0x5ab410 */
  { uint32_t v = 0x5ab410u; esp -= 4; W32(esp, v); }
/* 5451df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5451e0: call 0x4e3b61 */
  esp -= 4; W32(esp, 0x5451e5u); SPILL(); f_4e3b61(); if (g_unwind) return; RELOAD();
/* 5451e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5451e8: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 5451eb: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 5451ee: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 5451f1: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 5451f4: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 5451f7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 5451fa: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 5451ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545202: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 545206: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 545209: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 54520c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 54520f: call 0x4e38b9 */
  esp -= 4; W32(esp, 0x545214u); SPILL(); f_4e38b9(); if (g_unwind) return; RELOAD();
/* 545214: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545217: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 54521d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545220: /* 545220: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545223: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545229: jge 0x545373 */
  if ((sf == of)) goto L_545373;
L_54522f: /* 54522f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545232: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545234: je 0x545243 */
  if (zf) goto L_545243;
L_545236: /* 545236: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54523a: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x54523fu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 54523f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545241: jne 0x545283 */
  if (!zf) goto L_545283;
L_545243: /* 545243: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545245: je 0x54524f */
  if (zf) goto L_54524f;
L_545247: /* 545247: mov eax, dword ptr [esi + edi*4] */
  eax = R32((uint32_t)(esi + edi*4));
/* 54524a: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54524d: je 0x545283 */
  if (zf) goto L_545283;
L_54524f: /* 54524f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 545252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545254: je 0x545265 */
  if (zf) goto L_545265;
L_545256: /* 545256: mov ecx, dword ptr [esi + edi*4] */
  ecx = R32((uint32_t)(esi + edi*4));
/* 545259: mov edx, eax */
  edx = eax;
/* 54525b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54525c: call 0x4e33cd */
  esp -= 4; W32(esp, 0x545261u); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 545261: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545263: jne 0x545283 */
  if (!zf) goto L_545283;
L_545265: /* 545265: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 545268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54526a: jne 0x545366 */
  if (!zf) goto L_545366;
L_545270: /* 545270: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545272: jne 0x545366 */
  if (!zf) goto L_545366;
L_545278: /* 545278: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54527b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 54527d: jne 0x545366 */
  if (!zf) goto L_545366;
L_545283: /* 545283: mov esi, dword ptr [esi + edi*4] */
  esi = R32((uint32_t)(esi + edi*4));
/* 545286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545287: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 54528d: call 0x4e186b */
  esp -= 4; W32(esp, 0x545292u); SPILL(); f_4e186b(); if (g_unwind) return; RELOAD();
/* 545292: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 545298: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 54529c: xor esi, esi */
  esi = 0;
/* 54529e: mov edi, edi */
  edi = edi;
L_5452a0: /* 5452a0: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5452a3: jge 0x5452bb */
  if ((sf == of)) goto L_5452bb;
L_5452a5: /* 5452a5: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 5452a8: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 5452ab: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 5452ae: mov edx, esi */
  edx = esi;
/* 5452b0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 5452b3: cmp dword ptr [edx + ebx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452b6: je 0x5452bb */
  if (zf) goto L_5452bb;
L_5452b8: /* 5452b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5452b9: jmp 0x5452a0 */
  goto L_5452a0;
L_5452bb: /* 5452bb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5452be: xor ebx, ebx */
  ebx = 0;
/* 5452c0: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452c2: jne 0x5452e4 */
  if (!zf) goto L_5452e4;
L_5452c4: /* 5452c4: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 5452c7: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 5452ca: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 5452cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5452ce: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5452d1: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 5452d4: mov dword ptr [ebp - 0x64], ebx */
  W32((uint32_t)(ebp + 0xffffff9cu), ebx);
/* 5452d7: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 5452da: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 5452dd: call 0x4e290a */
  esp -= 4; W32(esp, 0x5452e2u); SPILL(); f_4e290a(); if (g_unwind) return; RELOAD();
/* 5452e2: mov esi, eax */
  esi = eax;
L_5452e4: /* 5452e4: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452e7: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452e9: /* 5452e9: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452ec: jne 0x5452f3 */
  if (!zf) goto L_5452f3;
L_5452ee: /* 5452ee: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5452f1: je 0x54531c */
  if (zf) goto L_54531c;
L_5452f3: /* 5452f3: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 5452f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5452f7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5452f9: call 0x4e1186 */
  esp -= 4; W32(esp, 0x5452feu); SPILL(); f_4e1186(); if (g_unwind) return; RELOAD();
/* 5452fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545301: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545303: je 0x54531c */
  if (zf) goto L_54531c;
L_545305: /* 545305: mov ebx, dword ptr [0x6a0f04] */
  ebx = R32((uint32_t)(0x6a0f04u));
/* 54530b: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54530e: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545311: mov edi, dword ptr [ebx + edi*4] */
  edi = R32((uint32_t)(ebx + edi*4));
/* 545314: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 545316: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 545319: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_54531c: /* 54531c: mov edi, dword ptr [ebp - 0x3c] */
  edi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 54531f: mov ecx, esi */
  ecx = esi;
/* 545321: lea eax, [ebp - 0xb4] */
  eax = (uint32_t)(ebp + 0xffffff4cu);
/* 545327: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 54532a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54532b: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 54532d: call 0x4e18c0 */
  esp -= 4; W32(esp, 0x545332u); SPILL(); f_4e18c0(); if (g_unwind) return; RELOAD();
/* 545332: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 545335: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 545338: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 54533b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 54533e: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 545341: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545343: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545344: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 545347: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 54534a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 54534c: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 54534f: mov esi, dword ptr [0x6a0f04] */
  esi = R32((uint32_t)(0x6a0f04u));
/* 545355: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 545358: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 54535c: mov dword ptr [ebp - 0xb4], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x569110u);
L_545366: /* 545366: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545369: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x54536eu); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 54536e: jmp 0x545220 */
  goto L_545220;
L_545373: /* 545373: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 545376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545378: je 0x5453f7 */
  if (zf) goto L_5453f7;
L_54537e: /* 54537e: push 0x536b20 */
  { uint32_t v = 0x536b20u; esp -= 4; W32(esp, v); }
/* 545383: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 545385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545386: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 545389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54538a: call 0x4e1785 */
  esp -= 4; W32(esp, 0x54538fu); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 54538f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545392: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545395: push 0x5ab420 */
  { uint32_t v = 0x5ab420u; esp -= 4; W32(esp, v); }
/* 54539a: push 0x5ab434 */
  { uint32_t v = 0x5ab434u; esp -= 4; W32(esp, v); }
/* 54539f: push 0x5ab448 */
  { uint32_t v = 0x5ab448u; esp -= 4; W32(esp, v); }
/* 5453a4: push 0x5ab458 */
  { uint32_t v = 0x5ab458u; esp -= 4; W32(esp, v); }
/* 5453a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453aa: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453afu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453b2: xor edi, edi */
  edi = 0;
L_5453b4: /* 5453b4: cmp edi, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5453b7: jge 0x5453eb */
  if ((sf == of)) goto L_5453eb;
L_5453b9: /* 5453b9: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453bc: lea esi, [edi + edi*2] */
  esi = (uint32_t)(edi + edi*2);
/* 5453bf: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5453c2: mov ecx, dword ptr [esi + ecx] */
  ecx = R32((uint32_t)(esi + ecx));
/* 5453c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5453c7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x5453ccu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 5453cc: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 5453cf: mov edx, dword ptr [esi + ecx + 8] */
  edx = R32((uint32_t)(esi + ecx + 0x8u));
/* 5453d3: mov ecx, dword ptr [esi + ecx + 4] */
  ecx = R32((uint32_t)(esi + ecx + 0x4u));
/* 5453d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5453d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5453d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5453da: push 0x5ab47c */
  { uint32_t v = 0x5ab47cu; esp -= 4; W32(esp, v); }
/* 5453df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5453e0: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5453e5u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5453e5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5453e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 5453e9: jmp 0x5453b4 */
  goto L_5453b4;
L_5453eb: /* 5453eb: push 0x69f4c8 */
  { uint32_t v = 0x69f4c8u; esp -= 4; W32(esp, v); }
/* 5453f0: mov ecx, ebx */
  ecx = ebx;
/* 5453f2: call 0x4e35da */
  esp -= 4; W32(esp, 0x5453f7u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
L_5453f7: /* 5453f7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 5453fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5453fc: je 0x545493 */
  if (zf) goto L_545493;
L_545402: /* 545402: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545405: push 0x536b40 */
  { uint32_t v = 0x536b40u; esp -= 4; W32(esp, v); }
/* 54540a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 54540c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 54540d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54540e: call 0x4e1785 */
  esp -= 4; W32(esp, 0x545413u); SPILL(); f_4e1785(); if (g_unwind) return; RELOAD();
/* 545413: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 545416: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545419: push 0x5ab4a0 */
  { uint32_t v = 0x5ab4a0u; esp -= 4; W32(esp, v); }
/* 54541e: push 0x5ab4b4 */
  { uint32_t v = 0x5ab4b4u; esp -= 4; W32(esp, v); }
/* 545423: push 0x5ab4c8 */
  { uint32_t v = 0x5ab4c8u; esp -= 4; W32(esp, v); }
/* 545428: push 0x5ab4d4 */
  { uint32_t v = 0x5ab4d4u; esp -= 4; W32(esp, v); }
/* 54542d: push 0x5ab4e0 */
  { uint32_t v = 0x5ab4e0u; esp -= 4; W32(esp, v); }
/* 545432: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545433: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545438u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545438: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54543b: xor esi, esi */
  esi = 0;
/* 54543d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545440: /* 545440: cmp esi, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545443: jge 0x545485 */
  if ((sf == of)) goto L_545485;
L_545445: /* 545445: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 545448: mov eax, esi */
  eax = esi;
/* 54544a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 54544d: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 545451: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545453: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 545456: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545459: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54545a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 54545d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 54545f: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 545462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545463: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 545466: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545467: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 54546d: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 545470: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 545473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545474: push 0x5ab514 */
  { uint32_t v = 0x5ab514u; esp -= 4; W32(esp, v); }
/* 545479: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 54547a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x54547fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 54547f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545482: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 545483: jmp 0x545440 */
  goto L_545440;
L_545485: /* 545485: push 0x69f4cc */
  { uint32_t v = 0x69f4ccu; esp -= 4; W32(esp, v); }
/* 54548a: mov ecx, edi */
  ecx = edi;
/* 54548c: call 0x4e35da */
  esp -= 4; W32(esp, 0x545491u); SPILL(); f_4e35da(); if (g_unwind) return; RELOAD();
/* 545491: jmp 0x545496 */
  goto L_545496;
L_545493: /* 545493: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_545496: /* 545496: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 545499: fild dword ptr [ebp - 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 54549c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 54549e: jge 0x5454a6 */
  if ((sf == of)) goto L_5454a6;
L_5454a0: /* 5454a0: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454a6: /* 5454a6: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454ac: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 5454af: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5454b2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5454b4: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 5454b8: fild dword ptr [ebp - 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 5454bb: jge 0x5454c3 */
  if ((sf == of)) goto L_5454c3;
L_5454bd: /* 5454bd: fadd dword ptr [0x56ec14] */
  ST0 = ST0 + (F32((uint32_t)(0x56ec14u)));
L_5454c3: /* 5454c3: fmul qword ptr [0x56ec08] */
  ST0 = ST0 * (F64((uint32_t)(0x56ec08u)));
/* 5454c9: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 5454cc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 5454cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5454d0: push 0x5ab548 */
  { uint32_t v = 0x5ab548u; esp -= 4; W32(esp, v); }
/* 5454d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5454d6: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5454dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5454db: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5454de: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 5454e1: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 5454e5: call 0x4e1b45 */
  esp -= 4; W32(esp, 0x5454eau); SPILL(); f_4e1b45(); if (g_unwind) return; RELOAD();
/* 5454ea: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 5454ed: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5454f1: call 0x4e37b5 */
  esp -= 4; W32(esp, 0x5454f6u); SPILL(); f_4e37b5(); if (g_unwind) return; RELOAD();
/* 5454f6: jmp 0x544a3f */
  goto L_544a3f;
L_5454fb: /* 5454fb: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5454fe: push 0x5ab580 */
  { uint32_t v = 0x5ab580u; esp -= 4; W32(esp, v); }
/* 545503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545504: call 0x4e32ec */
  esp -= 4; W32(esp, 0x545509u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 545509: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54550c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54550e: je 0x5455a8 */
  if (zf) goto L_5455a8;
L_545514: /* 545514: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 545517: push 0x5ab590 */
  { uint32_t v = 0x5ab590u; esp -= 4; W32(esp, v); }
/* 54551c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54551d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545522u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545522: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545525: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545528: call 0x4e2874 */
  esp -= 4; W32(esp, 0x54552du); SPILL(); f_4e2874(); if (g_unwind) return; RELOAD();
/* 54552d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_545530: /* 545530: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545533: cmp edi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545539: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_54553f: /* 54553f: mov edx, dword ptr [0x6a0f04] */
  edx = R32((uint32_t)(0x6a0f04u));
/* 545545: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 545548: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 54554b: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 545551: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 545554: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545557: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545558: push 0x5ab5b0 */
  { uint32_t v = 0x5ab5b0u; esp -= 4; W32(esp, v); }
/* 54555d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 54555e: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545563u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545563: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545566: xor esi, esi */
  esi = 0;
L_545568: /* 545568: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54556e: jge 0x54559e */
  if ((sf == of)) goto L_54559e;
L_545570: /* 545570: mov eax, dword ptr [0x6a0f04] */
  eax = R32((uint32_t)(0x6a0f04u));
/* 545575: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545578: mov eax, dword ptr [eax + esi*4 + 0x98] */
  eax = R32((uint32_t)(eax + esi*4 + 0x98u));
/* 54557f: xor ecx, ecx */
  ecx = 0;
L_545581: /* 545581: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545583: je 0x54558b */
  if (zf) goto L_54558b;
L_545585: /* 545585: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 545588: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 545589: jmp 0x545581 */
  goto L_545581;
L_54558b: /* 54558b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 54558c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 54558d: push 0x5ab5b8 */
  { uint32_t v = 0x5ab5b8u; esp -= 4; W32(esp, v); }
/* 545592: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 545593: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x545598u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 545598: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54559b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 54559c: jmp 0x545568 */
  goto L_545568;
L_54559e: /* 54559e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 5455a1: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x5455a6u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 5455a6: jmp 0x545530 */
  goto L_545530;
L_5455a8: /* 5455a8: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 5455ab: push 0x5ab5cc */
  { uint32_t v = 0x5ab5ccu; esp -= 4; W32(esp, v); }
/* 5455b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5455b1: call 0x4e32ec */
  esp -= 4; W32(esp, 0x5455b6u); SPILL(); f_4e32ec(); if (g_unwind) return; RELOAD();
/* 5455b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5455bb: je 0x5456d9 */
  if (zf) goto L_5456d9;
L_5455c1: /* 5455c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 5455c4: push 0x5ab5dc */
  { uint32_t v = 0x5ab5dcu; esp -= 4; W32(esp, v); }
/* 5455c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455ca: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5455cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5455cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5455d2: xor eax, eax */
  eax = 0;
/* 5455d4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5455d7: jmp 0x5455e0 */
  goto L_5455e0;
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
L_5456d9: /* 5456d9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5456dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5456dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5456de: xor eax, eax */
  eax = 0;
/* 5456e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5456e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5456e8: mov esp, ebp */
  esp = ebp;
/* 5456ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5456eb: ret  */
  esp += 4; SPILL(); return;
}

void f_544fe6(void) {
  LOAD_REGS();
  goto L_544fe6;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544fe6: /* 544fe6: xor edx, edx */
  edx = 0;
/* 544fe8: jmp 0x544ff0 */
  goto L_544ff0;
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
}

void f_544fea(void) {
  LOAD_REGS();
  goto L_544fea;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544fea: /* 544fea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_544ff0: /* 544ff0: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 544ff6: jae 0x544a3f */
  if (!cf) goto L_544a3f;
L_544ffc: /* 544ffc: mov eax, dword ptr [edx*4 + 0x69b440] */
  eax = R32((uint32_t)(edx*4 + 0x69b440u));
/* 545003: xor ecx, ecx */
  ecx = 0;
L_545005: /* 545005: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545007: je 0x54500f */
  if (zf) goto L_54500f;
L_545009: /* 545009: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 54500c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 54500d: jmp 0x545005 */
  goto L_545005;
L_54500f: /* 54500f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 545011: je 0x545014 */
  if (zf) goto L_545014;
L_545013: /* 545013: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_545014: /* 545014: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 545015: jmp 0x544ff0 */
  goto L_544ff0;
}

void f_54511a(void) {
  LOAD_REGS();
  goto L_54511a;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_544f8c: /* 544f8c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 544f8f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 544f93: call 0x4e326a */
  esp -= 4; W32(esp, 0x544f98u); SPILL(); f_4e326a(); if (g_unwind) return; RELOAD();
/* 544f98: jmp 0x544a3f */
  goto L_544a3f;
L_54511a: /* 54511a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_545120: /* 545120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 545123: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 545129: jge 0x544f8c */
  if ((sf == of)) goto L_544f8c;
L_54512f: /* 54512f: mov edi, dword ptr [0x6a0f04] */
  edi = R32((uint32_t)(0x6a0f04u));
/* 545135: mov ecx, dword ptr [edi + eax*4] */
  ecx = R32((uint32_t)(edi + eax*4));
/* 545138: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 54513b: cmp dword ptr [ecx + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 54513e: jne 0x54515e */
  if (!zf) goto L_54515e;
L_545140: /* 545140: mov eax, ecx */
  eax = ecx;
/* 545142: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 545145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 545146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 545149: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 54514f: call 0x4e3bf7 */
  esp -= 4; W32(esp, 0x545154u); SPILL(); f_4e3bf7(); if (g_unwind) return; RELOAD();
/* 545154: mov dword ptr [ebp - 0xc0], 0x569110 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x569110u);
L_54515e: /* 54515e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 545161: call 0x4e2e28 */
  esp -= 4; W32(esp, 0x545166u); SPILL(); f_4e2e28(); if (g_unwind) return; RELOAD();
/* 545166: jmp 0x545120 */
  goto L_545120;
}

void f_5455d9(void) {
  LOAD_REGS();
  goto L_5455d9;
L_544a3f: /* 544a3f: mov eax, 1 */
  eax = 0x1u;
/* 544a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 544a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 544a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 544a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 544a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 544a51: mov esp, ebp */
  esp = ebp;
/* 544a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 544a54: ret  */
  esp += 4; SPILL(); return;
L_5455d9: /* 5455d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_5455e0: /* 5455e0: cmp eax, dword ptr [0x69ff64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x69ff64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5455e6: jge 0x544a3f */
  if ((sf == of)) goto L_544a3f;
L_5455ec: /* 5455ec: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 5455f2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5455f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5455f6: call 0x4e2e50 */
  esp -= 4; W32(esp, 0x5455fbu); SPILL(); f_4e2e50(); if (g_unwind) return; RELOAD();
/* 5455fb: xor ebx, ebx */
  ebx = 0;
/* 5455fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 545600: mov esi, eax */
  esi = eax;
/* 545602: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 545605: xor edi, edi */
  edi = 0;
L_545607: /* 545607: cmp edi, dword ptr [esi + 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x70u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 54560a: jge 0x545635 */
  if ((sf == of)) goto L_545635;
L_54560c: /* 54560c: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 54560f: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 545612: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545614: je 0x545632 */
  if (zf) goto L_545632;
L_545616: /* 545616: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 54561c: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 54561f: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 545622: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545623: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x545628u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 545628: lea ebx, [ebx + eax*2 + 0xe] */
  ebx = (uint32_t)(ebx + eax*2 + 0xeu);
/* 54562c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 54562f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_545632: /* 545632: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 545633: jmp 0x545607 */
  goto L_545607;
L_545635: /* 545635: mov eax, dword ptr [esi + 0x500] */
  eax = R32((uint32_t)(esi + 0x500u));
/* 54563b: mov ecx, dword ptr [esi + 0x64] */
  ecx = R32((uint32_t)(esi + 0x64u));
/* 54563e: mov edx, dword ptr [esi + 0x70] */
  edx = R32((uint32_t)(esi + 0x70u));
/* 545641: mov edi, dword ptr [esi + 0x88] */
  edi = R32((uint32_t)(esi + 0x88u));
/* 545647: mov ebx, dword ptr [esi + 0x7c] */
  ebx = R32((uint32_t)(esi + 0x7cu));
/* 54564a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 54564d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 545653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 545655: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 545658: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 54565b: je 0x545668 */
  if (zf) goto L_545668;
L_54565d: /* 54565d: mov eax, dword ptr [esi + 0x94] */
  eax = R32((uint32_t)(esi + 0x94u));
/* 545663: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 545666: jmp 0x54566f */
  goto L_54566f;
L_545668: /* 545668: mov dword ptr [ebp - 0x24], 0x5ed66c */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5ed66cu);
L_54566f: /* 54566f: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 545672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 545674: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x545679u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 545679: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 54567c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 54567d: mov ecx, eax */
  ecx = eax;
/* 54567f: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 545682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545683: mov eax, ebx */
  eax = ebx;
/* 545685: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 545688: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* 54568b: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 54568e: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 545691: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 545692: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 545693: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 545696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 545697: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 54569a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 54569b: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5456a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5456a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5456a4: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5456a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456a8: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5456ab: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 5456b2: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 5456b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5456b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456b7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 5456ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 5456be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5456bf: push 0x5ab5f0 */
  { uint32_t v = 0x5ab5f0u; esp -= 4; W32(esp, v); }
/* 5456c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5456c5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x5456cau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 5456ca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5456cd: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5456d0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5456d1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5456d4: jmp 0x5455e0 */
  goto L_5455e0;
}
