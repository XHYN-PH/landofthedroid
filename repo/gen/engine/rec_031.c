#include "recomp.h"
#include "rec_mod.h"

void f_788ba0(void) {
  LOAD_REGS();
L_788ba0: /* 788ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 788ba1: mov ebp, esp */
  ebp = esp;
/* 788ba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 788ba5: push 0x9ccb00 */
  { uint32_t v = 0x9ccb00u; esp -= 4; W32(esp, v); }
/* 788baa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 788bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788bb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 788bb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 788bbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 788bbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 788bbd: mov esi, dword ptr [0xcfa5b8] */
  esi = R32((uint32_t)(0xcfa5b8u));
/* 788bc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 788bc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 788bc7: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 788bca: push 0xac7fd0 */
  { uint32_t v = 0xac7fd0u; esp -= 4; W32(esp, v); }
/* 788bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788bd0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 788bd7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788bd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788bd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788bdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788bde: je 0x788d8e */
  if (zf) goto L_788d8e;
L_788be4: /* 788be4: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788be9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788beb: jne 0x788c10 */
  if (!zf) goto L_788c10;
L_788bed: /* 788bed: push 0xac7fe0 */
  { uint32_t v = 0xac7fe0u; esp -= 4; W32(esp, v); }
L_788bf2: /* 788bf2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 788bf5: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x788bfbu); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
L_788bfb: /* 788bfb: xor eax, eax */
  eax = 0;
/* 788bfd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 788c00: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 788c07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788c08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788c09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 788c0a: mov esp, ebp */
  esp = ebp;
/* 788c0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 788c0d: ret 8 */
  esp += 12; SPILL(); return;
L_788c10: /* 788c10: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 788c13: push 0xac8048 */
  { uint32_t v = 0xac8048u; esp -= 4; W32(esp, v); }
/* 788c18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788c19: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788c1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788c1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788c1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788c20: je 0x788c35 */
  if (zf) goto L_788c35;
L_788c22: /* 788c22: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788c27: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788c2d: xor ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788c30: jmp 0x788d62 */
  goto L_788d62;
L_788c35: /* 788c35: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 788c38: push 0xac805c */
  { uint32_t v = 0xac805cu; esp -= 4; W32(esp, v); }
/* 788c3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 788c3e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788c40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788c40: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788c43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788c45: je 0x788c5d */
  if (zf) goto L_788c5d;
L_788c47: /* 788c47: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788c4c: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788c52: xor ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788c58: jmp 0x788d62 */
  goto L_788d62;
L_788c5d: /* 788c5d: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 788c60: push 0xac8070 */
  { uint32_t v = 0xac8070u; esp -= 4; W32(esp, v); }
/* 788c65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788c66: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788c68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788c68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788c6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788c6d: je 0x788c82 */
  if (zf) goto L_788c82;
L_788c6f: /* 788c6f: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788c74: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788c7a: xor ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788c7d: jmp 0x788d62 */
  goto L_788d62;
L_788c82: /* 788c82: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 788c85: push 0xac8080 */
  { uint32_t v = 0xac8080u; esp -= 4; W32(esp, v); }
/* 788c8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788c8b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788c8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788c8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788c90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788c92: je 0x788caa */
  if (zf) goto L_788caa;
L_788c94: /* 788c94: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788c99: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788c9f: xor ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788ca5: jmp 0x788d62 */
  goto L_788d62;
L_788caa: /* 788caa: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 788cad: push 0xac8094 */
  { uint32_t v = 0xac8094u; esp -= 4; W32(esp, v); }
/* 788cb2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 788cb3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788cb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788cb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788cb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788cba: je 0x788ccf */
  if (zf) goto L_788ccf;
L_788cbc: /* 788cbc: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788cc1: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788cc7: xor ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788cca: jmp 0x788d62 */
  goto L_788d62;
L_788ccf: /* 788ccf: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 788cd2: push 0xac809c */
  { uint32_t v = 0xac809cu; esp -= 4; W32(esp, v); }
/* 788cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788cd8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788cdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788cda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788cdd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788cdf: je 0x788cf1 */
  if (zf) goto L_788cf1;
L_788ce1: /* 788ce1: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788ce6: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788cec: xor ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788cef: jmp 0x788d62 */
  goto L_788d62;
L_788cf1: /* 788cf1: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 788cf4: push 0xac80ac */
  { uint32_t v = 0xac80acu; esp -= 4; W32(esp, v); }
/* 788cf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788cfa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788cfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788cfc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788cff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788d01: je 0x788d16 */
  if (zf) goto L_788d16;
L_788d03: /* 788d03: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788d08: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788d0e: xor ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788d14: jmp 0x788d62 */
  goto L_788d62;
L_788d16: /* 788d16: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 788d19: push 0xac80b8 */
  { uint32_t v = 0xac80b8u; esp -= 4; W32(esp, v); }
/* 788d1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 788d1f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788d21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788d21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788d24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788d26: je 0x788d3b */
  if (zf) goto L_788d3b;
L_788d28: /* 788d28: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788d2d: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788d33: xor ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 788d39: jmp 0x788d62 */
  goto L_788d62;
L_788d3b: /* 788d3b: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 788d3e: push 0xac80cc */
  { uint32_t v = 0xac80ccu; esp -= 4; W32(esp, v); }
/* 788d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788d44: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788d46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788d46: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788d49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788d4b: je 0x788bfb */
  if (zf) goto L_788bfb;
L_788d51: /* 788d51: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788d56: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 788d5c: xor ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_788d62: /* 788d62: mov dword ptr [eax + 0x15220], ecx */
  W32((uint32_t)(eax + 0x15220u), ecx);
/* 788d68: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 788d6b: push 0xac80e0 */
  { uint32_t v = 0xac80e0u; esp -= 4; W32(esp, v); }
/* 788d70: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x788d76u); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 788d76: mov eax, 1 */
  eax = 0x1u;
/* 788d7b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 788d7e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 788d85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788d86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788d87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 788d88: mov esp, ebp */
  esp = ebp;
/* 788d8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 788d8b: ret 8 */
  esp += 12; SPILL(); return;
L_788d8e: /* 788d8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 788d91: push 0xac8124 */
  { uint32_t v = 0xac8124u; esp -= 4; W32(esp, v); }
/* 788d96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788d97: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788d99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788d99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788d9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788d9e: je 0x788dde */
  if (zf) goto L_788dde;
L_788da0: /* 788da0: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788da5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788da7: jne 0x788db3 */
  if (!zf) goto L_788db3;
L_788da9: /* 788da9: push 0xac8130 */
  { uint32_t v = 0xac8130u; esp -= 4; W32(esp, v); }
/* 788dae: jmp 0x788bf2 */
  goto L_788bf2;
L_788db3: /* 788db3: mov ecx, dword ptr [eax + 0x15224] */
  ecx = R32((uint32_t)(eax + 0x15224u));
/* 788db9: xor edx, edx */
  edx = 0;
/* 788dbb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788dbd: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 788dc0: mov dword ptr [eax + 0x15224], edx */
  W32((uint32_t)(eax + 0x15224u), edx);
/* 788dc6: mov eax, 1 */
  eax = 0x1u;
/* 788dcb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 788dce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 788dd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788dd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788dd7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 788dd8: mov esp, ebp */
  esp = ebp;
/* 788dda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 788ddb: ret 8 */
  esp += 12; SPILL(); return;
L_788dde: /* 788dde: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 788de1: push 0xac8198 */
  { uint32_t v = 0xac8198u; esp -= 4; W32(esp, v); }
/* 788de6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788de7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788de9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788de9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788dec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788dee: je 0x788e2e */
  if (zf) goto L_788e2e;
L_788df0: /* 788df0: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788df5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788df7: jne 0x788e03 */
  if (!zf) goto L_788e03;
L_788df9: /* 788df9: push 0xac81a8 */
  { uint32_t v = 0xac81a8u; esp -= 4; W32(esp, v); }
/* 788dfe: jmp 0x788bf2 */
  goto L_788bf2;
L_788e03: /* 788e03: mov edx, dword ptr [eax + 0x15228] */
  edx = R32((uint32_t)(eax + 0x15228u));
/* 788e09: xor ecx, ecx */
  ecx = 0;
/* 788e0b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788e0d: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 788e10: mov dword ptr [eax + 0x15228], ecx */
  W32((uint32_t)(eax + 0x15228u), ecx);
/* 788e16: mov eax, 1 */
  eax = 0x1u;
/* 788e1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 788e1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 788e25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788e26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788e27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 788e28: mov esp, ebp */
  esp = ebp;
/* 788e2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 788e2b: ret 8 */
  esp += 12; SPILL(); return;
L_788e2e: /* 788e2e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 788e31: push 0xac8210 */
  { uint32_t v = 0xac8210u; esp -= 4; W32(esp, v); }
/* 788e36: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 788e37: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788e39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788e39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788e3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788e3e: je 0x788bfb */
  if (zf) goto L_788bfb;
L_788e44: /* 788e44: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788e49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788e4b: jne 0x788e57 */
  if (!zf) goto L_788e57;
L_788e4d: /* 788e4d: push 0xac8228 */
  { uint32_t v = 0xac8228u; esp -= 4; W32(esp, v); }
/* 788e52: jmp 0x788bf2 */
  goto L_788bf2;
L_788e57: /* 788e57: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 788e5a: push 0xac8290 */
  { uint32_t v = 0xac8290u; esp -= 4; W32(esp, v); }
/* 788e5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788e60: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788e62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788e62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788e65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788e67: je 0x788e7b */
  if (zf) goto L_788e7b;
L_788e69: /* 788e69: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 788e6f: mov dword ptr [ecx + 0x1522c], 0 */
  W32((uint32_t)(ecx + 0x1522cu), 0x0u);
/* 788e79: jmp 0x788e9c */
  goto L_788e9c;
L_788e7b: /* 788e7b: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 788e7e: push 0xac8294 */
  { uint32_t v = 0xac8294u; esp -= 4; W32(esp, v); }
/* 788e83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 788e84: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x788e86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788e86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788e89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788e8b: je 0x788e9c */
  if (zf) goto L_788e9c;
L_788e8d: /* 788e8d: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 788e92: mov dword ptr [eax + 0x1522c], 1 */
  W32((uint32_t)(eax + 0x1522cu), 0x1u);
L_788e9c: /* 788e9c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 788ea2: mov eax, dword ptr [ecx + 0x1522c] */
  eax = R32((uint32_t)(ecx + 0x1522cu));
/* 788ea8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788eaa: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 788ead: je 0x788ed2 */
  if (zf) goto L_788ed2;
L_788eaf: /* 788eaf: push 0xac8298 */
  { uint32_t v = 0xac8298u; esp -= 4; W32(esp, v); }
/* 788eb4: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x788ebau); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 788eba: mov eax, 1 */
  eax = 0x1u;
/* 788ebf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 788ec2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 788ec9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788eca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788ecb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 788ecc: mov esp, ebp */
  esp = ebp;
/* 788ece: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 788ecf: ret 8 */
  esp += 12; SPILL(); return;
L_788ed2: /* 788ed2: push 0xac82cc */
  { uint32_t v = 0xac82ccu; esp -= 4; W32(esp, v); }
/* 788ed7: call dword ptr [0xcfa5b4] */
  esp -= 4; W32(esp, 0x788eddu); SPILL(); f_4e35da(); if (g_unwind) return; /* Core!?Log@FOutputDevice@@QAEXPBG@Z */ RELOAD();
/* 788edd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 788ee0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788ee1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788ee2: mov eax, 1 */
  eax = 0x1u;
/* 788ee7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 788eee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 788eef: mov esp, ebp */
  esp = ebp;
/* 788ef1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 788ef2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_788ef5(void) {
  LOAD_REGS();
L_788ef5: /* 788ef5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 788ef8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 788efd: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 788f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788f01: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 788f04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x788f09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_788f09(); return;
}

void f_788f09(void) {
  LOAD_REGS();
L_788f09: /* 788f09: push 0xa09a78 */
  { uint32_t v = 0xa09a78u; esp -= 4; W32(esp, v); }
/* 788f0e: push 0xac8300 */
  { uint32_t v = 0xac8300u; esp -= 4; W32(esp, v); }
/* 788f13: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x788f19u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 788f19: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788f1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 788f1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 788f20: call 0x99caf8 */
  esp -= 4; W32(esp, 0x788f25u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_788f25: guest_badaddr(0x788f25); return;
}

void f_789020(void) {
  LOAD_REGS();
L_789020: /* 789020: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 789024: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789026: jne 0x78902b */
  if (!zf) goto L_78902b;
L_789028: /* 789028: ret 4 */
  esp += 8; SPILL(); return;
L_78902b: /* 78902b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78902c: call 0x9287a0 */
  esp -= 4; W32(esp, 0x789031u); SPILL(); f_9287a0(); if (g_unwind) return; RELOAD();
/* 789031: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 789033: ret 4 */
  esp += 8; SPILL(); return;
}

void f_789050(void) {
  LOAD_REGS();
L_789050: /* 789050: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 789054: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 789057: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 78905a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 78905e: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 789061: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 789064: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 789068: fmul dword ptr [eax + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x38u)));
/* 78906b: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 78906e: ret  */
  esp += 4; SPILL(); return;
}

void f_789080(void) {
  LOAD_REGS();
L_789080: /* 789080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 789081: mov ebp, esp */
  ebp = esp;
/* 789083: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 789086: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 789088: push 0x9ccb58 */
  { uint32_t v = 0x9ccb58u; esp -= 4; W32(esp, v); }
/* 78908d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 789093: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789094: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78909b: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78909e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78909f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7890a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7890a1: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7890a5: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7890abu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7890ab: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7890ae: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 7890b1: mov edi, dword ptr [0xcfa540] */
  edi = R32((uint32_t)(0xcfa540u));
/* 7890b7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7890ba: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7890bd: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 7890c1: push 0xac85b4 */
  { uint32_t v = 0xac85b4u; esp -= 4; W32(esp, v); }
/* 7890c6: xor ebx, ebx */
  ebx = 0;
/* 7890c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7890c9: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* 7890cd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7890cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7890cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7890d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7890d3: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7890d7: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* 7890dc: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7890e2u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7890e2: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7890e6: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 7890ea: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7890f0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7890f0: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 7890f3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7890f6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7890f9: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 7890fd: push 0xac85e4 */
  { uint32_t v = 0xac85e4u; esp -= 4; W32(esp, v); }
/* 789102: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789103: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x789105u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 789105: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789109: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 78910d: mov byte ptr [esp + 0x38], 2 */
  W8((uint32_t)(esp + 0x38u), 0x2u);
/* 789112: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x789118u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 789118: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 78911c: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 789120: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x789126u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 789126: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 789129: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78912c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 78912f: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 789133: push 0xac8614 */
  { uint32_t v = 0xac8614u; esp -= 4; W32(esp, v); }
/* 789138: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789139: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78913bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78913b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78913e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78913f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 789143: mov byte ptr [esp + 0x38], 3 */
  W8((uint32_t)(esp + 0x38u), 0x3u);
/* 789148: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x78914eu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 78914e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 789152: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 789156: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x78915cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 78915c: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 78915f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 789162: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 789165: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 789169: push 0xac8644 */
  { uint32_t v = 0xac8644u; esp -= 4; W32(esp, v); }
/* 78916e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78916f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x789171u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 789171: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789175: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 789179: mov byte ptr [esp + 0x38], 4 */
  W8((uint32_t)(esp + 0x38u), 0x4u);
/* 78917e: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x789184u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 789184: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 789188: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 78918c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x789192u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 789192: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 789195: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 789198: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 78919b: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 78919f: push 0xac8674 */
  { uint32_t v = 0xac8674u; esp -= 4; W32(esp, v); }
/* 7891a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7891a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7891a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7891a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7891aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7891ab: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7891af: mov byte ptr [esp + 0x38], 5 */
  W8((uint32_t)(esp + 0x38u), 0x5u);
/* 7891b4: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7891bau); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7891ba: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7891be: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 7891c2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7891c8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7891c8: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 7891cb: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7891ce: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7891d1: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 7891d5: push 0xac86a4 */
  { uint32_t v = 0xac86a4u; esp -= 4; W32(esp, v); }
/* 7891da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7891db: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7891ddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7891dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7891e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7891e1: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 7891e5: mov byte ptr [esp + 0x38], 6 */
  W8((uint32_t)(esp + 0x38u), 0x6u);
/* 7891ea: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x7891f0u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7891f0: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7891f4: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 7891f8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7891feu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7891fe: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 789201: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 789204: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 789208: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 78920c: fld dword ptr [esi + 0x44] */
  { double v = F32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 78920f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 789213: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 789216: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 789219: push 0xac86d4 */
  { uint32_t v = 0xac86d4u; esp -= 4; W32(esp, v); }
/* 78921e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78921f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x789221u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 789221: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789225: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 789229: mov byte ptr [esp + 0x38], 7 */
  W8((uint32_t)(esp + 0x38u), 0x7u);
/* 78922e: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x789234u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 789234: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 789238: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* 78923c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x789242u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 789242: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 789246: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x78924cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 78924c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78924d: call dword ptr [0xcfa5bc] */
  esp -= 4; W32(esp, 0x789253u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 789253: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789256: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 78925a: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* 789262: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x789268u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 789268: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 78926c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78926d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78926e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 789275: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 789276: mov esp, ebp */
  esp = ebp;
/* 789278: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 789279: ret  */
  esp += 4; SPILL(); return;
}

void f_789300(void) {
  LOAD_REGS();
L_789300: /* 789300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 789301: mov ebp, esp */
  ebp = esp;
/* 789303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 789305: push 0x9ccb80 */
  { uint32_t v = 0x9ccb80u; esp -= 4; W32(esp, v); }
/* 78930a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 789310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 789318: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78931b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78931c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78931d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78931e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 789321: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 789323: mov edi, ecx */
  edi = ecx;
/* 789325: mov ebx, edx */
  ebx = edx;
/* 789327: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78932e: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x789334u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 789334: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 789337: mov esi, eax */
  esi = eax;
/* 789339: mov eax, 0xb21bae */
  eax = 0xb21baeu;
/* 78933e: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 789345: ja 0x789368 */
  if ((!cf && !zf)) goto L_789368;
L_789347: /* 789347: jmp dword ptr [edi*4 + 0x7893dc] */
  switch (R32((uint32_t)(edi*4 + 0x7893dcu))) {
    case 0x78934eu: goto L_78934e;
    case 0x789355u: goto L_789355;
    case 0x78935cu: goto L_78935c;
    case 0x789363u: goto L_789363;
    default: guest_badjump(0x789347, R32((uint32_t)(edi*4 + 0x7893dcu))); return;
  }
L_78934e: /* 78934e: mov eax, 0xac8710 */
  eax = 0xac8710u;
/* 789353: jmp 0x789368 */
  goto L_789368;
L_789355: /* 789355: mov eax, 0xac8714 */
  eax = 0xac8714u;
/* 78935a: jmp 0x789368 */
  goto L_789368;
L_78935c: /* 78935c: mov eax, 0xac8718 */
  eax = 0xac8718u;
/* 789361: jmp 0x789368 */
  goto L_789368;
L_789363: /* 789363: mov eax, 0xac871c */
  eax = 0xac871cu;
L_789368: /* 789368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789369: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78936a: call dword ptr [0xcfb060] */
  esp -= 4; W32(esp, 0x789370u); SPILL(); f_42ae09(); if (g_unwind) return; /* MSVCR70!fopen */ RELOAD();
/* 789370: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789373: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789375: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 789378: jne 0x789394 */
  if (!zf) goto L_789394;
L_78937a: /* 78937a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78937b: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x789381u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 789381: xor eax, eax */
  eax = 0;
/* 789383: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 789386: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78938d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78938e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78938f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 789390: mov esp, ebp */
  esp = ebp;
/* 789392: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 789393: ret  */
  esp += 4; SPILL(); return;
L_789394: /* 789394: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 789397: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 789399: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78939a: mov eax, esi */
  eax = esi;
/* 78939c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78939d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7893a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7893a5: mov esp, ebp */
  esp = ebp;
/* 7893a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7893a8: ret  */
  esp += 4; SPILL(); return;
}

void f_7893a9(void) {
  LOAD_REGS();
L_7893a9: /* 7893a9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7893ac: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7893b1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7893b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7893b5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7893b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7893bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7893bd(); return;
}

void f_7893bd(void) {
  LOAD_REGS();
L_7893bd: /* 7893bd: push 0xa09a98 */
  { uint32_t v = 0xa09a98u; esp -= 4; W32(esp, v); }
/* 7893c2: push 0xac8720 */
  { uint32_t v = 0xac8720u; esp -= 4; W32(esp, v); }
/* 7893c7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7893cdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7893cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7893d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7893d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7893d4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7893d9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7893d9: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* 7893dc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 7893dd: xchg ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  ebx = b;
  eax = a;
  }
/* 7893de: js 0x7893e0 */
  if (sf) goto L_7893e0;
L_7893e0: /* 7893e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7893e1: xchg ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  ebx = b;
  eax = a;
  }
/* 7893e2: js 0x7893e4 */
  if (sf) goto L_7893e4;
L_7893e4: /* 7893e4: pop esp */
  esp = R32(esp);
/* 7893e5: xchg ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  ebx = b;
  eax = a;
  }
/* 7893e6: js 0x7893e8 */
  if (sf) goto L_7893e8;
L_7893e8: /* 7893e8: arpl word ptr [ebx - 0x6f6fff88], dx */
  guest_unsupported(0x7893e8); /* arpl word ptr [ebx - 0x6f6fff88], dx */
/* 7893ee: nop  */
/* 7893ef: nop  */
L_7893f0: guest_badaddr(0x7893f0); return;
}

void f_789430(void) {
  LOAD_REGS();
L_789430: /* 789430: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 789433: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 789436: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 789439: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 78943c: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 78943f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 789441: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 789444: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 789447: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 78944a: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 78944d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78944f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 789453: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 789456: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 789459: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 78945d: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* 789460: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 789462: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 789464: fsubr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) - ST0;
/* 789468: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 78946a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78946e: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 789471: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 789473: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 789475: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 789478: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78947a: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 789480: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 789484: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 789486: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 78948a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78948e: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 789492: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 789495: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* 789498: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 78949a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78949c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78949e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7894a0: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 7894a4: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7894a8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7894aa: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 7894ad: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 7894b0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7894b2: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 7894b5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7894b7: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 7894bb: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7894bf: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 7894c2: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 7894c5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7894c7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7894c9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7894cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7894cd: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 7894d1: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7894d5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7894d7: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 7894da: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 7894dd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7894e1: fsubr dword ptr [esp + 8] */
  ST0 = (F32((uint32_t)(esp + 0x8u))) - ST0;
/* 7894e5: fmul dword ptr [esp] */
  ST0 = ST0 * (F32((uint32_t)(esp)));
/* 7894e9: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7894eb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7894ed: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 7894f0: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 7894f3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7894f6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7894fa: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7894fd: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 789501: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 789504: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 789507: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 789509: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 78950c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 78950e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 789511: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 789514: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789517: ret  */
  esp += 4; SPILL(); return;
}

void f_789560(void) {
  LOAD_REGS();
L_789560: /* 789560: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 789564: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 789568: mov edx, dword ptr [ecx + 0x1a4] */
  edx = R32((uint32_t)(ecx + 0x1a4u));
/* 78956e: mov dword ptr [ecx + 0x1f0], eax */
  W32((uint32_t)(ecx + 0x1f0u), eax);
/* 789574: fld dword ptr [edx + 0x180] */
  { double v = F32((uint32_t)(edx + 0x180u)); FPUSH(v); }
/* 78957a: fmul dword ptr [0xa09ac8] */
  ST0 = ST0 * (F32((uint32_t)(0xa09ac8u)));
/* 789580: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 789584: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 789586: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 789588: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78958b: jp 0x789593 */
  if (pf) goto L_789593;
L_78958d: /* 78958d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 789591: jmp 0x789595 */
  goto L_789595;
L_789593: /* 789593: fld st(0) */
  { double v = STI(0); FPUSH(v); }
L_789595: /* 789595: fld dword ptr [edx + 0x180] */
  { double v = F32((uint32_t)(edx + 0x180u)); FPUSH(v); }
/* 78959b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 7895a1: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7895a5: fcomp dword ptr [esp + 4] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x4u)));
  FPOP();
/* 7895a9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7895ab: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7895ae: jp 0x7895ca */
  if (pf) goto L_7895ca;
L_7895b0: /* 7895b0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7895b2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7895b6: fst dword ptr [ecx + 0x1f0] */
  WF32((uint32_t)(ecx + 0x1f0u), ST0);
/* 7895bc: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7895c2: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7895c4: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 7895c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7895c9: ret  */
  esp += 4; SPILL(); return;
L_7895ca: /* 7895ca: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7895ce: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7895d0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7895d2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7895d5: jp 0x7895dd */
  if (pf) goto L_7895dd;
L_7895d7: /* 7895d7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7895d9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_7895dd: /* 7895dd: fst dword ptr [ecx + 0x1f0] */
  WF32((uint32_t)(ecx + 0x1f0u), ST0);
/* 7895e3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7895e9: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7895eb: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 7895ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7895f0: ret  */
  esp += 4; SPILL(); return;
}

void f_789630(void) {
  LOAD_REGS();
L_789630: /* 789630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789631: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789632: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 789636: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789637: call 0x92a7d0 */
  esp -= 4; W32(esp, 0x78963cu); SPILL(); f_92a7d0(); if (g_unwind) return; RELOAD();
/* 78963c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78963e: jg 0x7896cc */
  if ((!zf && sf == of)) goto L_7896cc;
L_789644: /* 789644: cmp byte ptr [esi], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 789647: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 789648: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 78964c: jne 0x789689 */
  if (!zf) goto L_789689;
L_78964e: /* 78964e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78964f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789650: call 0x926e80 */
  esp -= 4; W32(esp, 0x789655u); SPILL(); f_926e80(); if (g_unwind) return; RELOAD();
/* 789655: xor edi, edi */
  edi = 0;
/* 789657: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 789659: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 78965d: jle 0x789688 */
  if ((zf || sf != of)) goto L_789688;
L_78965f: /* 78965f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_789660: /* 789660: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 789661: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789662: call 0x926ea0 */
  esp -= 4; W32(esp, 0x789667u); SPILL(); f_926ea0(); if (g_unwind) return; RELOAD();
/* 789667: mov ebx, eax */
  ebx = eax;
/* 789669: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78966b: je 0x78967e */
  if (zf) goto L_78967e;
L_78966d: /* 78966d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78966e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78966f: call 0x926e50 */
  esp -= 4; W32(esp, 0x789674u); SPILL(); f_926e50(); if (g_unwind) return; RELOAD();
/* 789674: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 789675: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 789676: call 0x6c165e */
  esp -= 4; W32(esp, 0x78967bu); SPILL(); f_6c165e(); if (g_unwind) return; RELOAD();
/* 78967b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78967e: /* 78967e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 789682: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 789683: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 789685: jl 0x789660 */
  if ((sf != of)) goto L_789660;
L_789687: /* 789687: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_789688: /* 789688: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_789689: /* 789689: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78968c: je 0x7896cb */
  if (zf) goto L_7896cb;
L_78968e: /* 78968e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 789691: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789692: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789693: call 0x974fe0 */
  esp -= 4; W32(esp, 0x789698u); SPILL(); f_974fe0(); if (g_unwind) return; RELOAD();
/* 789698: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78969a: je 0x7896ba */
  if (zf) goto L_7896ba;
L_78969c: /* 78969c: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 78969f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7896a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7896a1: call 0x975020 */
  esp -= 4; W32(esp, 0x7896a6u); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 7896a6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7896a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7896aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7896ab: call 0x975020 */
  esp -= 4; W32(esp, 0x7896b0u); SPILL(); f_975020(); if (g_unwind) return; RELOAD();
/* 7896b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7896b1: call 0x92a810 */
  esp -= 4; W32(esp, 0x7896b6u); SPILL(); f_92a810(); if (g_unwind) return; RELOAD();
/* 7896b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7896b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7896b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7896b9: ret  */
  esp += 4; SPILL(); return;
L_7896ba: /* 7896ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7896bb: call 0x92a810 */
  esp -= 4; W32(esp, 0x7896c0u); SPILL(); f_92a810(); if (g_unwind) return; RELOAD();
/* 7896c0: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7896c5: dec dword ptr [eax + 0x15234] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15234u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15234u), r);
  }
L_7896cb: /* 7896cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7896cc: /* 7896cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7896cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7896ce: ret  */
  esp += 4; SPILL(); return;
}

void f_789700(void) {
  LOAD_REGS();
L_789700: /* 789700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 789704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789705: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 789707: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x78970du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 78970d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_789720(void) {
  LOAD_REGS();
L_789720: /* 789720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 789724: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 789726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789727: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78972du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78972d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_789740(void) {
  LOAD_REGS();
L_789740: /* 789740: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 789742: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 789744: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 789746: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 789749: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78974c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 78974f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 789752: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 789755: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 789758: ret  */
  esp += 4; SPILL(); return;
}

void f_789770(void) {
  LOAD_REGS();
L_789770: /* 789770: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 789773: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 789775: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 789778: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78977a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78977c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 78977e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 789780: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 789782: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 789784: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 789786: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 789788: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 78978a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78978c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78978e: ret  */
  esp += 4; SPILL(); return;
}

void f_7897a0(void) {
  LOAD_REGS();
L_7897a0: /* 7897a0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7897a3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7897a5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7897a8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7897aa: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7897ac: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 7897ae: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 7897b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7897b2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7897b4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7897b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7897b8: fsqrt  */
  ST0 = sqrt(ST0);
/* 7897ba: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 7897bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7897be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7897c0: ret  */
  esp += 4; SPILL(); return;
}

void f_7897e0(void) {
  LOAD_REGS();
L_7897e0: /* 7897e0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7897e2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7897e4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7897e7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7897ea: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7897ed: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7897f0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7897f3: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 7897f6: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 7897f9: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 7897fc: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 7897ff: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 789802: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 789805: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 789808: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 78980b: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 78980e: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 789811: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 789814: ret  */
  esp += 4; SPILL(); return;
}

void f_789830(void) {
  LOAD_REGS();
L_789830: /* 789830: mov al, byte ptr [ecx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x56u))) & 0xffu);
/* 789833: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 789835: jbe 0x78984c */
  if ((cf | zf)) goto L_78984c;
L_789837: /* 789837: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 78983b: mov dl, byte ptr [ecx + 0x57] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x57u))) & 0xffu);
/* 78983e: or al, 0x21 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 789840: test al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 789842: jne 0x78984c */
  if (!zf) goto L_78984c;
L_789844: /* 789844: mov eax, 1 */
  eax = 0x1u;
/* 789849: ret 4 */
  esp += 8; SPILL(); return;
L_78984c: /* 78984c: xor eax, eax */
  eax = 0;
/* 78984e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_789870(void) {
  LOAD_REGS();
L_789870: /* 789870: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 789874: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789876: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 78987a: je 0x78989c */
  if (zf) goto L_78989c;
L_78987c: /* 78987c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78987e: jne 0x789894 */
  if (!zf) goto L_789894;
L_789880: /* 789880: mov al, byte ptr [ecx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x56u))) & 0xffu);
/* 789883: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 789885: jbe 0x7898b5 */
  if ((cf | zf)) goto L_7898b5;
L_789887: /* 789887: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 78988b: mov dl, byte ptr [ecx + 0x57] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x57u))) & 0xffu);
/* 78988e: or al, 0x21 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 789890: test al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 789892: jne 0x7898b5 */
  if (!zf) goto L_7898b5;
L_789894: /* 789894: mov eax, 1 */
  eax = 0x1u;
/* 789899: ret 0xc */
  esp += 16; SPILL(); return;
L_78989c: /* 78989c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78989e: je 0x7898b5 */
  if (zf) goto L_7898b5;
L_7898a0: /* 7898a0: mov al, byte ptr [ecx + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x56u))) & 0xffu);
/* 7898a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 7898a5: jbe 0x789894 */
  if ((cf | zf)) goto L_789894;
L_7898a7: /* 7898a7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7898ab: mov al, byte ptr [ecx + 0x57] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x57u))) & 0xffu);
/* 7898ae: or dl, 0x21 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 7898b1: test dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7898b3: jne 0x789894 */
  if (!zf) goto L_789894;
L_7898b5: /* 7898b5: xor eax, eax */
  eax = 0;
/* 7898b7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7898e0(void) {
  LOAD_REGS();
L_7898e0: /* 7898e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7898e1: mov ebp, esp */
  ebp = esp;
/* 7898e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7898e5: push 0x9ccb90 */
  { uint32_t v = 0x9ccb90u; esp -= 4; W32(esp, v); }
/* 7898ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7898f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7898f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7898f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7898fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7898fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 789901: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789902: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 789903: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 789906: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78990d: jne 0x789922 */
  if (!zf) goto L_789922;
L_78990f: /* 78990f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 789912: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 789919: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78991a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78991b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78991c: mov esp, ebp */
  esp = ebp;
/* 78991e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78991f: ret 4 */
  esp += 8; SPILL(); return;
L_789922: /* 789922: mov eax, dword ptr [eax + 0x234] */
  eax = R32((uint32_t)(eax + 0x234u));
/* 789928: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789929: call 0x6c78e7 */
  esp -= 4; W32(esp, 0x78992eu); SPILL(); f_6c78e7(); if (g_unwind) return; RELOAD();
/* 78992e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 789931: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 789932: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 789933: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78993a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78993b: mov esp, ebp */
  esp = ebp;
/* 78993d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78993e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_789941(void) {
  LOAD_REGS();
L_789941: /* 789941: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 789944: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 789949: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 78994c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78994d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 789950: call 0x99caf8 */
  esp -= 4; W32(esp, 0x789955u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_789955(); return;
}

void f_789955(void) {
  LOAD_REGS();
L_789955: /* 789955: push 0xa09acc */
  { uint32_t v = 0xa09accu; esp -= 4; W32(esp, v); }
/* 78995a: push 0xac8308 */
  { uint32_t v = 0xac8308u; esp -= 4; W32(esp, v); }
/* 78995f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x789965u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 789965: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789968: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78996a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78996c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x789971u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_789971: guest_badaddr(0x789971); return;
}

void f_7899b0(void) {
  LOAD_REGS();
L_7899b0: /* 7899b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7899b1: mov ebp, esp */
  ebp = esp;
/* 7899b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7899b5: push 0x9ccba0 */
  { uint32_t v = 0x9ccba0u; esp -= 4; W32(esp, v); }
/* 7899ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7899c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7899c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7899c8: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7899cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7899cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7899cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7899ce: xor ebx, ebx */
  ebx = 0;
/* 7899d0: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7899d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7899d6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7899d9: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x7899dfu); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 7899df: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7899e2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7899e4: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7899e7: je 0x7899f8 */
  if (zf) goto L_7899f8;
L_7899e9: /* 7899e9: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 7899ec: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 7899ef: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7899f2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7899f4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7899f6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_7899f8: /* 7899f8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7899fa: jne 0x789a5b */
  if (!zf) goto L_789a5b;
L_7899fc: /* 7899fc: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7899ff: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x789a05u); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 789a05: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 789a07: jne 0x789a2a */
  if (!zf) goto L_789a2a;
L_789a09: /* 789a09: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 789a0c: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 789a0f: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 789a12: mov edi, dword ptr [edi + 0x28] */
  edi = R32((uint32_t)(edi + 0x28u));
/* 789a15: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 789a17: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 789a19: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 789a1b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 789a1d: jle 0x789a2a */
  if ((zf || sf != of)) goto L_789a2a;
L_789a1f: /* 789a1f: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 789a22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789a23: push 0xac8320 */
  { uint32_t v = 0xac8320u; esp -= 4; W32(esp, v); }
/* 789a28: jmp 0x789a33 */
  goto L_789a33;
L_789a2a: /* 789a2a: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 789a2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789a2e: push 0xac83e0 */
  { uint32_t v = 0xac83e0u; esp -= 4; W32(esp, v); }
L_789a33: /* 789a33: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 789a39: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 789a3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789a3c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x789a42u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 789a42: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_789a45: /* 789a45: xor eax, eax */
  eax = 0;
/* 789a47: lea esp, [ebp - 0x78] */
  esp = (uint32_t)(ebp + 0xffffff88u);
/* 789a4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 789a4d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 789a54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 789a55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 789a56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 789a57: mov esp, ebp */
  esp = ebp;
/* 789a59: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 789a5a: ret  */
  esp += 4; SPILL(); return;
L_789a5b: /* 789a5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789a5c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 789a5f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 789a61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789a62: call 0x926d30 */
  esp -= 4; W32(esp, 0x789a67u); SPILL(); f_926d30(); if (g_unwind) return; RELOAD();
/* 789a67: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 789a6a: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 789a6f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 789a71: je 0x789a79 */
  if (zf) goto L_789a79;
L_789a73: /* 789a73: inc dword ptr [eax + 0x15234] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15234u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x15234u), r);
  }
L_789a79: /* 789a79: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 789a7c: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x789a82u); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 789a82: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 789a84: je 0x789cb5 */
  if (zf) goto L_789cb5;
L_789a8a: /* 789a8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_789a90: /* 789a90: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 789a93: jge 0x789b02 */
  if ((sf == of)) goto L_789b02;
L_789a95: /* 789a95: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 789a97: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 789a9a: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 789a9d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 789a9f: mov esi, ebx */
  esi = ebx;
/* 789aa1: imul esi, esi, 0x44 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x44u);
  esi = (uint32_t)r;
  }
/* 789aa4: fmul dword ptr [esi + ecx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esi + ecx + 0x40u)));
/* 789aa8: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 789aaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789aab: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 789aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789aaf: call 0x92d530 */
  esp -= 4; W32(esp, 0x789ab4u); SPILL(); f_92d530(); if (g_unwind) return; RELOAD();
/* 789ab4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 789ab7: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 789abc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789abe: je 0x789ac6 */
  if (zf) goto L_789ac6;
L_789ac0: /* 789ac0: inc dword ptr [eax + 0x15234] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15234u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x15234u), r);
  }
L_789ac6: /* 789ac6: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 789ac9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789aca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789acb: call 0x6c86f7 */
  esp -= 4; W32(esp, 0x789ad0u); SPILL(); f_6c86f7(); if (g_unwind) return; RELOAD();
/* 789ad0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 789ad3: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 789ad6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 789ad9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 789adc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789adf: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 789ae2: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 789ae5: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 789ae8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789ae9: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 789aec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789aed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789aee: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 789af1: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 789af4: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 789af7: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 789afa: call 0x926d90 */
  esp -= 4; W32(esp, 0x789affu); SPILL(); f_926d90(); if (g_unwind) return; RELOAD();
/* 789aff: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 789b00: jmp 0x789a90 */
  goto L_789a90;
L_789b02: /* 789b02: xor ebx, ebx */
  ebx = 0;
L_789b04: /* 789b04: cmp ebx, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 789b07: jge 0x789be1 */
  if ((sf == of)) goto L_789be1;
L_789b0d: /* 789b0d: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 789b10: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 789b13: mov esi, ebx */
  esi = ebx;
/* 789b15: imul esi, esi, 0x4c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x4cu);
  esi = (uint32_t)r;
  }
/* 789b18: fmul dword ptr [esi + edx + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esi + edx + 0x48u)));
/* 789b1c: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 789b1e: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 789b21: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 789b23: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 789b26: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 789b2a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 789b2d: fmul dword ptr [esi + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x44u)));
/* 789b30: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 789b34: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 789b37: fmul dword ptr [esi + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x40u)));
/* 789b3a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 789b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789b3e: call 0x92dda0 */
  esp -= 4; W32(esp, 0x789b43u); SPILL(); f_92dda0(); if (g_unwind) return; RELOAD();
/* 789b43: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 789b49: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789b4b: je 0x789b53 */
  if (zf) goto L_789b53;
L_789b4d: /* 789b4d: inc dword ptr [ecx + 0x15234] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x15234u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x15234u), r);
  }
L_789b53: /* 789b53: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 789b55: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 789b58: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 789b5b: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 789b5e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 789b61: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 789b64: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 789b67: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 789b6a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 789b6d: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 789b70: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 789b73: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 789b76: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 789b79: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 789b7c: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 789b7f: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 789b82: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 789b85: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 789b88: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 789b8b: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 789b8e: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 789b91: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 789b94: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 789b97: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 789b9a: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 789b9d: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 789ba0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 789ba3: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 789ba6: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 789ba9: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 789bac: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 789baf: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 789bb2: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 789bb5: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 789bb8: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 789bbb: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 789bbe: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 789bc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789bc2: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 789bc5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 789bc8: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 789bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789bcc: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 789bcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789bd0: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 789bd3: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 789bd6: call 0x926d90 */
  esp -= 4; W32(esp, 0x789bdbu); SPILL(); f_926d90(); if (g_unwind) return; RELOAD();
/* 789bdb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 789bdc: jmp 0x789b04 */
  goto L_789b04;
L_789be1: /* 789be1: xor ebx, ebx */
  ebx = 0;
L_789be3: /* 789be3: cmp ebx, dword ptr [edi + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 789be6: jge 0x789cb5 */
  if ((sf == of)) goto L_789cb5;
L_789bec: /* 789bec: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 789bef: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 789bf2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 789bf5: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 789bf8: fmul dword ptr [ecx + eax*8 + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*8 + 0x44u)));
/* 789bfc: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 789bff: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 789c01: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 789c04: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 789c08: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 789c0b: fmul dword ptr [esi + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x40u)));
/* 789c0e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 789c11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789c12: call 0x92e5c0 */
  esp -= 4; W32(esp, 0x789c17u); SPILL(); f_92e5c0(); if (g_unwind) return; RELOAD();
/* 789c17: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 789c1d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789c1f: je 0x789c27 */
  if (zf) goto L_789c27;
L_789c21: /* 789c21: inc dword ptr [ecx + 0x15234] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x15234u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x15234u), r);
  }
L_789c27: /* 789c27: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 789c29: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 789c2c: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 789c2f: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 789c32: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 789c35: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 789c38: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 789c3b: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 789c3e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 789c41: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 789c44: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 789c47: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 789c4a: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 789c4d: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 789c50: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 789c53: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 789c56: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 789c59: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 789c5c: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 789c5f: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 789c62: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 789c65: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 789c68: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 789c6b: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 789c6e: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 789c71: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 789c74: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 789c77: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 789c7a: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 789c7d: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 789c80: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 789c83: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 789c86: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 789c89: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 789c8c: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 789c8f: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 789c92: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 789c95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789c96: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 789c99: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 789c9c: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 789c9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789ca0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 789ca3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789ca4: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 789ca7: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 789caa: call 0x926d90 */
  esp -= 4; W32(esp, 0x789cafu); SPILL(); f_926d90(); if (g_unwind) return; RELOAD();
/* 789caf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 789cb0: jmp 0x789be3 */
  goto L_789be3;
L_789cb5: /* 789cb5: xor esi, esi */
  esi = 0;
L_789cb7: /* 789cb7: cmp esi, dword ptr [edi + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 789cba: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 789cbd: jge 0x789e09 */
  if ((sf == of)) goto L_789e09;
L_789cc3: /* 789cc3: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 789cc6: imul esi, esi, 0x58 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x58u);
  esi = (uint32_t)r;
  }
/* 789cc9: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 789ccb: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 789cce: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 789cd1: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 789cd4: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 789cd7: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 789cda: call 0x99cc00 */
  esp -= 4; W32(esp, 0x789cdfu); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 789cdf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 789ce2: mov edx, esp */
  edx = esp;
/* 789ce4: xor ecx, ecx */
  ecx = 0;
L_789ce6: /* 789ce6: cmp ecx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 789ce9: jge 0x789d2a */
  if ((sf == of)) goto L_789d2a;
L_789ceb: /* 789ceb: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 789cee: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 789cf1: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 789cf4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 789cf6: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 789cf8: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 789cfb: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 789cfe: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 789d01: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 789d04: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 789d07: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 789d0a: fstp dword ptr [eax + edx] */
  WF32((uint32_t)(eax + edx), ST0); FPOP();
/* 789d0d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 789d10: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 789d13: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 789d16: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 789d19: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 789d1a: fstp dword ptr [eax + edx + 4] */
  WF32((uint32_t)(eax + edx + 0x4u), ST0); FPOP();
/* 789d1e: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 789d21: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 789d24: fstp dword ptr [eax + edx + 8] */
  WF32((uint32_t)(eax + edx + 0x8u), ST0); FPOP();
/* 789d28: jmp 0x789ce6 */
  goto L_789ce6;
L_789d2a: /* 789d2a: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 789d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 789d2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789d30: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 789d33: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 789d35: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789d36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789d37: call 0x9454e0 */
  esp -= 4; W32(esp, 0x789d3cu); SPILL(); f_9454e0(); if (g_unwind) return; RELOAD();
/* 789d3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789d3e: je 0x789de5 */
  if (zf) goto L_789de5;
L_789d44: /* 789d44: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 789d4a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789d4c: je 0x789d54 */
  if (zf) goto L_789d54;
L_789d4e: /* 789d4e: inc dword ptr [ecx + 0x15234] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x15234u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x15234u), r);
  }
L_789d54: /* 789d54: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 789d56: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 789d59: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 789d5c: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 789d5f: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 789d62: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 789d65: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 789d68: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 789d6b: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* 789d6e: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 789d71: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 789d74: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 789d77: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 789d7a: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 789d7d: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 789d80: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 789d83: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 789d86: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 789d89: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 789d8c: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 789d8f: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 789d92: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 789d95: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 789d98: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 789d9b: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 789d9e: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 789da1: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 789da4: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 789da7: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 789daa: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 789dad: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 789db0: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 789db3: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 789db6: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 789db9: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 789dbc: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 789dbf: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 789dc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789dc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789dc4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 789dc7: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 789dca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789dcb: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 789dce: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 789dd1: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 789dd4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 789dd7: call 0x926d90 */
  esp -= 4; W32(esp, 0x789ddcu); SPILL(); f_926d90(); if (g_unwind) return; RELOAD();
/* 789ddc: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 789ddf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 789de0: jmp 0x789cb7 */
  goto L_789cb7;
L_789de5: /* 789de5: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 789de8: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 789dee: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 789df0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 789df1: push 0xac8470 */
  { uint32_t v = 0xac8470u; esp -= 4; W32(esp, v); }
/* 789df6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789df7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x789dfdu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 789dfd: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 789e00: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789e03: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 789e04: jmp 0x789cb7 */
  goto L_789cb7;
L_789e09: /* 789e09: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 789e0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789e0d: call 0x926e80 */
  esp -= 4; W32(esp, 0x789e12u); SPILL(); f_926e80(); if (g_unwind) return; RELOAD();
/* 789e12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 789e14: jle 0x789e2c */
  if ((zf || sf != of)) goto L_789e2c;
L_789e16: /* 789e16: mov eax, esi */
  eax = esi;
/* 789e18: lea esp, [ebp - 0x78] */
  esp = (uint32_t)(ebp + 0xffffff88u);
/* 789e1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 789e1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 789e25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 789e26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 789e27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 789e28: mov esp, ebp */
  esp = ebp;
/* 789e2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 789e2b: ret  */
  esp += 4; SPILL(); return;
L_789e2c: /* 789e2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789e2d: call 0x92a810 */
  esp -= 4; W32(esp, 0x789e32u); SPILL(); f_92a810(); if (g_unwind) return; RELOAD();
/* 789e32: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 789e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 789e39: je 0x789a45 */
  if (zf) goto L_789a45;
L_789e3f: /* 789e3f: dec dword ptr [eax + 0x15234] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15234u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax + 0x15234u), r);
  }
/* 789e45: jmp 0x789a45 */
  goto L_789a45;
}

void f_789e4a(void) {
  LOAD_REGS();
L_789e4a: /* 789e4a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 789e4d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 789e52: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 789e55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 789e56: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 789e59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x789e5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_789e5e(); return;
}

void f_789e5e(void) {
  LOAD_REGS();
L_789e5e: /* 789e5e: push 0xa09af0 */
  { uint32_t v = 0xa09af0u; esp -= 4; W32(esp, v); }
/* 789e63: push 0xac84e0 */
  { uint32_t v = 0xac84e0u; esp -= 4; W32(esp, v); }
/* 789e68: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x789e6eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 789e6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 789e71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 789e73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 789e75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x789e7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_789e7a: guest_badaddr(0x789e7a); return;
}

void f_789fc0(void) {
  LOAD_REGS();
L_789fc0: /* 789fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 789fc1: mov ebp, esp */
  ebp = esp;
/* 789fc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 789fc5: push 0x9ccbb0 */
  { uint32_t v = 0x9ccbb0u; esp -= 4; W32(esp, v); }
/* 789fca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 789fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 789fd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 789fd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 789fdb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 789fde: mov edx, dword ptr [ecx + 0x314] */
  edx = R32((uint32_t)(ecx + 0x314u));
/* 789fe4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 789fe7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 789fe9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 789fea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 789feb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 789fec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 789fef: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 789ff6: jge 0x78a01a */
  if ((sf == of)) goto L_78a01a;
L_789ff8: /* 789ff8: mov ecx, dword ptr [ecx + 0x310] */
  ecx = R32((uint32_t)(ecx + 0x310u));
/* 789ffe: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 78a001: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 78a004: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78a007: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78a009: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a00c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a013: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a014: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a015: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a016: mov esp, ebp */
  esp = ebp;
/* 78a018: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a019: ret  */
  esp += 4; SPILL(); return;
L_78a01a: /* 78a01a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78a01c: mov esi, eax */
  esi = eax;
/* 78a01e: cmp esi, dword ptr [ecx + 0x320] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78a024: jge 0x78a048 */
  if ((sf == of)) goto L_78a048;
L_78a026: /* 78a026: mov eax, dword ptr [ecx + 0x31c] */
  eax = R32((uint32_t)(ecx + 0x31cu));
/* 78a02c: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 78a02f: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 78a032: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78a035: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78a037: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a03a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a041: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a042: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a043: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a044: mov esp, ebp */
  esp = ebp;
/* 78a046: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a047: ret  */
  esp += 4; SPILL(); return;
L_78a048: /* 78a048: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x78a04eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 78a04e: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 78a054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a055: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78a057: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a058: push 0xac84e8 */
  { uint32_t v = 0xac84e8u; esp -= 4; W32(esp, v); }
/* 78a05d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a05e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78a064u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78a064: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78a067: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a06a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a06c: mov ecx, esi */
  ecx = esi;
/* 78a06e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x78a074u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 78a074: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a077: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a078: mov eax, esi */
  eax = esi;
/* 78a07a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a07b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a082: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a083: mov esp, ebp */
  esp = ebp;
/* 78a085: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a086: ret  */
  esp += 4; SPILL(); return;
}

void f_78a087(void) {
  LOAD_REGS();
L_78a087: /* 78a087: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78a08a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78a08f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 78a092: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78a093: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78a096: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a09bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78a09b(); return;
}

void f_78a09b(void) {
  LOAD_REGS();
L_78a09b: /* 78a09b: push 0xa09b28 */
  { uint32_t v = 0xa09b28u; esp -= 4; W32(esp, v); }
/* 78a0a0: push 0xac8564 */
  { uint32_t v = 0xac8564u; esp -= 4; W32(esp, v); }
/* 78a0a5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78a0abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78a0ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a0ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a0b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a0b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a0b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78a0b7: guest_badaddr(0x78a0b7); return;
}

void f_78a100(void) {
  LOAD_REGS();
L_78a100: /* 78a100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78a101: mov ebp, esp */
  ebp = esp;
/* 78a103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78a105: push 0x9ccbc0 */
  { uint32_t v = 0x9ccbc0u; esp -= 4; W32(esp, v); }
/* 78a10a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78a110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78a118: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78a11e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a11f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a120: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78a121: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78a124: mov edx, dword ptr [edi + 0x5c] */
  edx = R32((uint32_t)(edi + 0x5cu));
/* 78a127: mov esi, dword ptr [edi + 0x74] */
  esi = R32((uint32_t)(edi + 0x74u));
/* 78a12a: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 78a12d: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 78a130: lea ebx, [edi + 0x4c] */
  ebx = (uint32_t)(edi + 0x4cu);
/* 78a133: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78a135: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78a137: lea eax, [esi + eax + 1] */
  eax = (uint32_t)(esi + eax + 0x1u);
/* 78a13b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a13e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78a141: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78a148: je 0x78a256 */
  if (zf) goto L_78a256;
L_78a14e: /* 78a14e: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 78a153: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a154: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78a156: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a158: call 0x929990 */
  esp -= 4; W32(esp, 0x78a15du); SPILL(); f_929990(); if (g_unwind) return; RELOAD();
/* 78a15d: mov esi, eax */
  esi = eax;
/* 78a15f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a160: call 0x977f80 */
  esp -= 4; W32(esp, 0x78a165u); SPILL(); f_977f80(); if (g_unwind) return; RELOAD();
/* 78a165: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a166: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78a169: call 0x92f570 */
  esp -= 4; W32(esp, 0x78a16eu); SPILL(); f_92f570(); if (g_unwind) return; RELOAD();
/* 78a16e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a16f: call 0x92f4f0 */
  esp -= 4; W32(esp, 0x78a174u); SPILL(); f_92f4f0(); if (g_unwind) return; RELOAD();
/* 78a174: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a175: call 0x926cf0 */
  esp -= 4; W32(esp, 0x78a17au); SPILL(); f_926cf0(); if (g_unwind) return; RELOAD();
/* 78a17a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a17b: call 0x928470 */
  esp -= 4; W32(esp, 0x78a180u); SPILL(); f_928470(); if (g_unwind) return; RELOAD();
/* 78a180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a181: call 0x945230 */
  esp -= 4; W32(esp, 0x78a186u); SPILL(); f_945230(); if (g_unwind) return; RELOAD();
/* 78a186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a187: call 0x945ac0 */
  esp -= 4; W32(esp, 0x78a18cu); SPILL(); f_945ac0(); if (g_unwind) return; RELOAD();
/* 78a18c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a18d: call 0x9458e0 */
  esp -= 4; W32(esp, 0x78a192u); SPILL(); f_9458e0(); if (g_unwind) return; RELOAD();
/* 78a192: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a193: call 0x92a980 */
  esp -= 4; W32(esp, 0x78a198u); SPILL(); f_92a980(); if (g_unwind) return; RELOAD();
/* 78a198: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78a19b: push 0xac858c */
  { uint32_t v = 0xac858cu; esp -= 4; W32(esp, v); }
/* 78a1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a1a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78a1a4: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 78a1ab: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78a1ae: mov ecx, esp */
  ecx = esp;
/* 78a1b0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78a1b2: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 78a1b9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78a1bc: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 78a1c3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78a1c6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78a1c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a1ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 78a1cd: call 0x6ca4f2 */
  esp -= 4; W32(esp, 0x78a1d2u); SPILL(); f_6ca4f2(); if (g_unwind) return; RELOAD();
/* 78a1d2: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a1d5: mov ebx, eax */
  ebx = eax;
/* 78a1d7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 78a1da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a1db: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 78a1de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78a1df: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 78a1e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78a1e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a1e7: call 0x92a920 */
  esp -= 4; W32(esp, 0x78a1ecu); SPILL(); f_92a920(); if (g_unwind) return; RELOAD();
/* 78a1ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a1ed: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78a1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a1f1: call 0x978410 */
  esp -= 4; W32(esp, 0x78a1f6u); SPILL(); f_978410(); if (g_unwind) return; RELOAD();
/* 78a1f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a1f7: call 0x977fe0 */
  esp -= 4; W32(esp, 0x78a1fcu); SPILL(); f_977fe0(); if (g_unwind) return; RELOAD();
/* 78a1fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a1fd: call 0x929b30 */
  esp -= 4; W32(esp, 0x78a202u); SPILL(); f_929b30(); if (g_unwind) return; RELOAD();
/* 78a202: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78a205: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78a208: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78a20b: mov dword ptr [edi + 0x2c], ecx */
  W32((uint32_t)(edi + 0x2cu), ecx);
/* 78a20e: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 78a211: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* 78a214: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 78a217: mov dword ptr [edi + 0x30], edx */
  W32((uint32_t)(edi + 0x30u), edx);
/* 78a21a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 78a21d: mov dword ptr [edi + 0x38], ecx */
  W32((uint32_t)(edi + 0x38u), ecx);
/* 78a220: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 78a223: mov dword ptr [edi + 0x3c], edx */
  W32((uint32_t)(edi + 0x3cu), edx);
/* 78a226: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 78a229: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a22b: mov ecx, edi */
  ecx = edi;
/* 78a22d: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x78a233u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 78a233: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 78a236: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78a238: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78a23a: mov ecx, edi */
  ecx = edi;
/* 78a23c: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x78a242u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 78a242: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 78a245: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 78a247: mov ecx, edi */
  ecx = edi;
/* 78a249: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78a24b: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x78a251u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 78a251: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 78a254: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_78a256: /* 78a256: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a259: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a25a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a25b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a262: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a263: mov esp, ebp */
  esp = ebp;
/* 78a265: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a266: ret  */
  esp += 4; SPILL(); return;
}

void f_78a267(void) {
  LOAD_REGS();
L_78a267: /* 78a267: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78a26a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78a26f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78a272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a273: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78a276: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a27bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78a27b(); return;
}

void f_78a27b(void) {
  LOAD_REGS();
L_78a27b: /* 78a27b: push 0xa09b68 */
  { uint32_t v = 0xa09b68u; esp -= 4; W32(esp, v); }
/* 78a280: push 0xac85ac */
  { uint32_t v = 0xac85acu; esp -= 4; W32(esp, v); }
/* 78a285: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78a28bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78a28b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a28e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a290: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a292: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a297u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78a297: guest_badaddr(0x78a297); return;
}

void f_78a310(void) {
  LOAD_REGS();
L_78a310: /* 78a310: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78a313: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 78a317: mov eax, dword ptr [ecx + 0x1a4] */
  eax = R32((uint32_t)(ecx + 0x1a4u));
/* 78a31d: fld dword ptr [eax + 0x180] */
  { double v = F32((uint32_t)(eax + 0x180u)); FPUSH(v); }
/* 78a323: fmul dword ptr [eax + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x17cu)));
/* 78a329: fmul dword ptr [eax + 0x17c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x17cu)));
/* 78a32f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 78a333: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78a335: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
/* 78a33b: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 78a33f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78a342: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78a344: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 78a348: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 78a34b: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* 78a34f: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 78a353: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 78a356: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 78a35a: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 78a35e: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 78a362: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 78a365: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 78a369: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 78a36c: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 78a370: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 78a373: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 78a377: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 78a37a: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 78a37d: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 78a381: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a383: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 78a387: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a38a: jp 0x78a392 */
  if (pf) goto L_78a392;
L_78a38c: /* 78a38c: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 78a390: jmp 0x78a396 */
  goto L_78a396;
L_78a392: /* 78a392: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_78a396: /* 78a396: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78a398: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 78a39e: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 78a3a2: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 78a3a6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a3a8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a3ab: jp 0x78a3b7 */
  if (pf) goto L_78a3b7;
L_78a3ad: /* 78a3ad: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 78a3b1: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 78a3b5: jmp 0x78a3ce */
  goto L_78a3ce;
L_78a3b7: /* 78a3b7: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 78a3bb: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 78a3bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a3c1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a3c4: jnp 0x78a3ce */
  if (!pf) goto L_78a3ce;
L_78a3c6: /* 78a3c6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 78a3ca: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
L_78a3ce: /* 78a3ce: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 78a3d2: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 78a3d6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a3d8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a3db: jp 0x78a3e3 */
  if (pf) goto L_78a3e3;
L_78a3dd: /* 78a3dd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 78a3e1: jmp 0x78a3e7 */
  goto L_78a3e7;
L_78a3e3: /* 78a3e3: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_78a3e7: /* 78a3e7: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 78a3eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a3ed: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a3f0: jp 0x78a3fc */
  if (pf) goto L_78a3fc;
L_78a3f2: /* 78a3f2: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 78a3f6: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 78a3fa: jmp 0x78a413 */
  goto L_78a413;
L_78a3fc: /* 78a3fc: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 78a400: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 78a404: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a406: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a409: jnp 0x78a413 */
  if (!pf) goto L_78a413;
L_78a40b: /* 78a40b: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 78a40f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_78a413: /* 78a413: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 78a417: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 78a41b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a41d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a420: jp 0x78a428 */
  if (pf) goto L_78a428;
L_78a422: /* 78a422: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 78a426: jmp 0x78a42c */
  goto L_78a42c;
L_78a428: /* 78a428: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_78a42c: /* 78a42c: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 78a430: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a432: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a435: jp 0x78a441 */
  if (pf) goto L_78a441;
L_78a437: /* 78a437: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 78a43b: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 78a43f: jmp 0x78a458 */
  goto L_78a458;
L_78a441: /* 78a441: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 78a445: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* 78a449: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a44b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a44e: jnp 0x78a458 */
  if (!pf) goto L_78a458;
L_78a450: /* 78a450: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 78a454: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_78a458: /* 78a458: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 78a45c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 78a460: mov dword ptr [ecx + 0x60], edx */
  W32((uint32_t)(ecx + 0x60u), edx);
/* 78a463: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 78a467: mov dword ptr [ecx + 0x80], edx */
  W32((uint32_t)(ecx + 0x80u), edx);
/* 78a46d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 78a471: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* 78a474: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 78a478: mov dword ptr [ecx + 0x74], edx */
  W32((uint32_t)(ecx + 0x74u), edx);
/* 78a47b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 78a47f: mov dword ptr [ecx + 0x64], eax */
  W32((uint32_t)(ecx + 0x64u), eax);
/* 78a482: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 78a486: mov dword ptr [ecx + 0x68], edx */
  W32((uint32_t)(ecx + 0x68u), edx);
/* 78a489: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 78a48d: mov dword ptr [ecx + 0x84], eax */
  W32((uint32_t)(ecx + 0x84u), eax);
/* 78a493: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 78a497: mov dword ptr [ecx + 0x88], edx */
  W32((uint32_t)(ecx + 0x88u), edx);
/* 78a49d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a49e: mov dword ptr [ecx + 0x78], eax */
  W32((uint32_t)(ecx + 0x78u), eax);
/* 78a4a1: lea esi, [ecx + 0x50] */
  esi = (uint32_t)(ecx + 0x50u);
/* 78a4a4: lea edx, [ecx + 0x40] */
  edx = (uint32_t)(ecx + 0x40u);
/* 78a4a7: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78a4aa: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 78a4ae: call 0x789430 */
  esp -= 4; W32(esp, 0x78a4b3u); SPILL(); f_789430(); if (g_unwind) return; RELOAD();
/* 78a4b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a4b4: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a4b7: ret  */
  esp += 4; SPILL(); return;
}

void f_78a530(void) {
  LOAD_REGS();
L_78a530: /* 78a530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a531: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78a533: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78a535: mov esi, ecx */
  esi = ecx;
/* 78a537: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78a53du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78a53d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78a53f: mov ecx, eax */
  ecx = eax;
/* 78a541: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 78a544: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78a546: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 78a54a: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 78a54c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 78a54e: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 78a551: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 78a554: mov esi, dword ptr [edx + 8] */
  esi = R32((uint32_t)(edx + 0x8u));
/* 78a557: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 78a55a: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 78a55d: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 78a560: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a561: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78a580(void) {
  LOAD_REGS();
L_78a580: /* 78a580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a581: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 78a585: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a587: je 0x78a59e */
  if (zf) goto L_78a59e;
L_78a589: /* 78a589: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 78a58e: mov ecx, esi */
  ecx = esi;
/* 78a590: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78a596u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78a596: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a598: je 0x78a59e */
  if (zf) goto L_78a59e;
L_78a59a: /* 78a59a: mov eax, esi */
  eax = esi;
/* 78a59c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a59d: ret  */
  esp += 4; SPILL(); return;
L_78a59e: /* 78a59e: xor eax, eax */
  eax = 0;
/* 78a5a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a5a1: ret  */
  esp += 4; SPILL(); return;
}

void f_78a5c0(void) {
  LOAD_REGS();
L_78a5c0: /* 78a5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78a5c1: mov ebp, esp */
  ebp = esp;
/* 78a5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78a5c5: push 0x9ccbd0 */
  { uint32_t v = 0x9ccbd0u; esp -= 4; W32(esp, v); }
/* 78a5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78a5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78a5d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78a5db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78a5de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a5e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a5e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a5e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78a5e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78a5e6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78a5ed: je 0x78a5f5 */
  if (zf) goto L_78a5f5;
L_78a5ef: /* 78a5ef: inc dword ptr [0xb21bb0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb21bb0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xb21bb0u), r);
  }
L_78a5f5: /* 78a5f5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78a5f8: mov eax, dword ptr [0xb21bb0] */
  eax = R32((uint32_t)(0xb21bb0u));
/* 78a5fd: cmp dword ptr [ecx + 0x168], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x168u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a603: je 0x78a730 */
  if (zf) goto L_78a730;
L_78a609: /* 78a609: mov dword ptr [ecx + 0x168], eax */
  W32((uint32_t)(ecx + 0x168u), eax);
/* 78a60f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78a611: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x78a617u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78a617: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a619: je 0x78a730 */
  if (zf) goto L_78a730;
L_78a61f: /* 78a61f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a620: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78a625u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78a625: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a627: je 0x78a730 */
  if (zf) goto L_78a730;
L_78a62d: /* 78a62d: lea ebx, [eax + 0x1fc] */
  ebx = (uint32_t)(eax + 0x1fcu);
/* 78a633: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a634: call 0x972710 */
  esp -= 4; W32(esp, 0x78a639u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 78a639: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a63c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_78a640: /* 78a640: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a642: je 0x78a730 */
  if (zf) goto L_78a730;
L_78a648: /* 78a648: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 78a64b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a64c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a64d: call 0x972770 */
  esp -= 4; W32(esp, 0x78a652u); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 78a652: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a655: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a656: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 78a659: call 0x90f8c0 */
  esp -= 4; W32(esp, 0x78a65eu); SPILL(); f_90f8c0(); if (g_unwind) return; RELOAD();
/* 78a65e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a660: jne 0x78a6f8 */
  if (!zf) goto L_78a6f8;
L_78a666: /* 78a666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a667: call 0x90fe00 */
  esp -= 4; W32(esp, 0x78a66cu); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 78a66c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a66e: jne 0x78a6f8 */
  if (!zf) goto L_78a6f8;
L_78a674: /* 78a674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a675: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a676: call 0x90bda0 */
  esp -= 4; W32(esp, 0x78a67bu); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 78a67b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a67c: call 0x6cafbf */
  esp -= 4; W32(esp, 0x78a681u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 78a681: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78a683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a684: mov edi, eax */
  edi = eax;
/* 78a686: call 0x90bda0 */
  esp -= 4; W32(esp, 0x78a68bu); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 78a68b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a68c: call 0x6cafbf */
  esp -= 4; W32(esp, 0x78a691u); SPILL(); f_6cafbf(); if (g_unwind) return; RELOAD();
/* 78a691: mov esi, eax */
  esi = eax;
/* 78a693: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78a696: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a698: je 0x78a6b9 */
  if (zf) goto L_78a6b9;
L_78a69a: /* 78a69a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a69c: je 0x78a6b9 */
  if (zf) goto L_78a6b9;
L_78a69e: /* 78a69e: push 0x1c0 */
  { uint32_t v = 0x1c0u; esp -= 4; W32(esp, v); }
/* 78a6a3: push 0xac7f90 */
  { uint32_t v = 0xac7f90u; esp -= 4; W32(esp, v); }
/* 78a6a8: push 0xac7f9c */
  { uint32_t v = 0xac7f9cu; esp -= 4; W32(esp, v); }
/* 78a6ad: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78a6b3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78a6b3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78a6b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78a6b9: /* 78a6b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a6bb: je 0x78a6dc */
  if (zf) goto L_78a6dc;
L_78a6bd: /* 78a6bd: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a6bf: je 0x78a6dc */
  if (zf) goto L_78a6dc;
L_78a6c1: /* 78a6c1: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 78a6c7: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78a6ca: jne 0x78a6dc */
  if (!zf) goto L_78a6dc;
L_78a6cc: /* 78a6cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a6ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78a6cf: call 0x6c5001 */
  esp -= 4; W32(esp, 0x78a6d4u); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 78a6d4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78a6d7: jmp 0x78a640 */
  goto L_78a640;
L_78a6dc: /* 78a6dc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a6de: je 0x78a6f8 */
  if (zf) goto L_78a6f8;
L_78a6e0: /* 78a6e0: cmp esi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a6e3: je 0x78a6f8 */
  if (zf) goto L_78a6f8;
L_78a6e5: /* 78a6e5: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 78a6eb: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78a6ee: jne 0x78a6f8 */
  if (!zf) goto L_78a6f8;
L_78a6f0: /* 78a6f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a6f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a6f3: call 0x6c5001 */
  esp -= 4; W32(esp, 0x78a6f8u); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
L_78a6f8: /* 78a6f8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78a6fb: jmp 0x78a640 */
  goto L_78a640;
L_78a730: /* 78a730: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a733: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a734: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a735: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a73c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a73d: mov esp, ebp */
  esp = ebp;
/* 78a73f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a740: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78a700(void) {
  LOAD_REGS();
L_78a700: /* 78a700: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78a703: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78a708: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 78a70b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78a70c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78a70f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a714u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78a714(); return;
}

void f_78a714(void) {
  LOAD_REGS();
L_78a714: /* 78a714: push 0xa09b90 */
  { uint32_t v = 0xa09b90u; esp -= 4; W32(esp, v); }
/* 78a719: push 0xac7fb8 */
  { uint32_t v = 0xac7fb8u; esp -= 4; W32(esp, v); }
/* 78a71e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78a724u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78a724: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a727: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a729: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a72b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a730u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78a730: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a733: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a734: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a735: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a73c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a73d: mov esp, ebp */
  esp = ebp;
/* 78a73f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a740: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78a7c0(void) {
  LOAD_REGS();
L_78a7c0: /* 78a7c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78a7c1: mov ebp, esp */
  ebp = esp;
/* 78a7c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78a7c5: push 0x9ccbe0 */
  { uint32_t v = 0x9ccbe0u; esp -= 4; W32(esp, v); }
/* 78a7ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78a7d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a7d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78a7d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78a7db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a7dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a7dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78a7e0: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 78a7e3: xor ebx, ebx */
  ebx = 0;
/* 78a7e5: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78a7e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78a7e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78a7eb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78a7ee: jne 0x78a96e */
  if (!zf) goto L_78a96e;
L_78a7f4: /* 78a7f4: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 78a7fa: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a7fc: je 0x78a96e */
  if (zf) goto L_78a96e;
L_78a802: /* 78a802: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 78a807: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78a80du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78a80d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a80f: je 0x78a96e */
  if (zf) goto L_78a96e;
L_78a815: /* 78a815: mov edi, dword ptr [esi + 0xd0] */
  edi = R32((uint32_t)(esi + 0xd0u));
/* 78a81b: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a81d: je 0x78a834 */
  if (zf) goto L_78a834;
L_78a81f: /* 78a81f: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 78a824: mov ecx, edi */
  ecx = edi;
/* 78a826: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78a82cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78a82c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a82e: je 0x78a834 */
  if (zf) goto L_78a834;
L_78a830: /* 78a830: mov ecx, edi */
  ecx = edi;
/* 78a832: jmp 0x78a836 */
  goto L_78a836;
L_78a834: /* 78a834: xor ecx, ecx */
  ecx = 0;
L_78a836: /* 78a836: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78a838: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78a839: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x78a83fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78a83f: mov edi, eax */
  edi = eax;
/* 78a841: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a843: je 0x78a856 */
  if (zf) goto L_78a856;
L_78a845: /* 78a845: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 78a84a: mov ecx, edi */
  ecx = edi;
/* 78a84c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78a852u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78a852: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a854: jne 0x78a858 */
  if (!zf) goto L_78a858;
L_78a856: /* 78a856: xor edi, edi */
  edi = 0;
L_78a858: /* 78a858: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78a859: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 78a85c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x78a862u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 78a862: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 78a865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78a866: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 78a869: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x78a86fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 78a86f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a871: je 0x78a8c8 */
  if (zf) goto L_78a8c8;
L_78a873: /* 78a873: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 78a876: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78a877: mov ecx, edi */
  ecx = edi;
/* 78a879: call 0x6cceaa */
  esp -= 4; W32(esp, 0x78a87eu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 78a87e: mov ecx, dword ptr [edi + 0x2dc] */
  ecx = R32((uint32_t)(edi + 0x2dcu));
/* 78a884: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 78a887: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a889: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 78a88c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 78a88e: jne 0x78a8aa */
  if (!zf) goto L_78a8aa;
L_78a890: /* 78a890: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78a893: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 78a895: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 78a897: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a89a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a8a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a8a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a8a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a8a4: mov esp, ebp */
  esp = ebp;
/* 78a8a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a8a7: ret 0x14 */
  esp += 24; SPILL(); return;
L_78a8aa: /* 78a8aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a8ab: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78a8b0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78a8b0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 78a8b3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 78a8b5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a8b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a8bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a8c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a8c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a8c2: mov esp, ebp */
  esp = ebp;
/* 78a8c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a8c5: ret 0x14 */
  esp += 24; SPILL(); return;
L_78a8c8: /* 78a8c8: xor esi, esi */
  esi = 0;
/* 78a8ca: mov dword ptr [ebp - 0x14], 0x7f7fffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0x7f7fffffu);
/* 78a8d1: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_78a8d4: /* 78a8d4: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78a8da: jge 0x78a94e */
  if ((sf == of)) goto L_78a94e;
L_78a8dc: /* 78a8dc: mov edx, dword ptr [edi + 0x2dc] */
  edx = R32((uint32_t)(edi + 0x2dcu));
/* 78a8e2: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 78a8e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78a8e7: je 0x78a94b */
  if (zf) goto L_78a94b;
L_78a8e9: /* 78a8e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a8ea: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78a8efu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78a8ef: mov ecx, eax */
  ecx = eax;
/* 78a8f1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78a8f4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78a8f6: fsub dword ptr [ecx + 0x120] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x120u)));
/* 78a8fc: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78a8ff: fsub dword ptr [ecx + 0x124] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x124u)));
/* 78a905: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78a908: fsub dword ptr [ecx + 0x128] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x128u)));
/* 78a90e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78a910: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 78a913: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78a915: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 78a917: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 78a91a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 78a91d: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 78a91f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78a921: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78a923: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 78a925: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78a927: fsqrt  */
  ST0 = sqrt(ST0);
/* 78a929: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 78a92b: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 78a92e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78a930: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78a933: jp 0x78a949 */
  if (pf) goto L_78a949;
L_78a935: /* 78a935: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78a93b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78a93e: mov ebx, ecx */
  ebx = ecx;
/* 78a940: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 78a943: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 78a946: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78a947: jmp 0x78a8d4 */
  goto L_78a8d4;
L_78a949: /* 78a949: fstp st(0) */
  STI(0) = ST0; FPOP();
L_78a94b: /* 78a94b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78a94c: jmp 0x78a8d4 */
  goto L_78a8d4;
L_78a94e: /* 78a94e: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 78a951: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78a954: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
L_78a956: /* 78a956: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 78a959: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 78a95b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a95e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a965: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a966: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a967: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a968: mov esp, ebp */
  esp = ebp;
/* 78a96a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a96b: ret 0x14 */
  esp += 24; SPILL(); return;
L_78a96e: /* 78a96e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78a970: mov ecx, esi */
  ecx = esi;
/* 78a972: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x78a978u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78a978: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78a97a: je 0x78a9a9 */
  if (zf) goto L_78a9a9;
L_78a97c: /* 78a97c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 78a97e: mov ecx, esi */
  ecx = esi;
/* 78a980: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x78a986u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78a986: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 78a989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a98a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 78a98c: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78a991u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78a991: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78a994: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78a997: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78a998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78a999: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78a99b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78a9a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78a9a3: mov esp, ebp */
  esp = ebp;
/* 78a9a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78a9a6: ret 0x14 */
  esp += 24; SPILL(); return;
L_78a9a9: /* 78a9a9: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 78a9ac: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 78a9ae: jmp 0x78a956 */
  goto L_78a956;
}

void f_78a9b0(void) {
  LOAD_REGS();
L_78a9b0: /* 78a9b0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78a9b3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78a9b8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 78a9bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78a9bc: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 78a9bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a9c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78a9c4(); return;
}

void f_78a9c4(void) {
  LOAD_REGS();
L_78a9c4: /* 78a9c4: push 0xa09bb4 */
  { uint32_t v = 0xa09bb4u; esp -= 4; W32(esp, v); }
/* 78a9c9: push 0xac7fc8 */
  { uint32_t v = 0xac7fc8u; esp -= 4; W32(esp, v); }
/* 78a9ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78a9d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78a9d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78a9d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a9d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78a9db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78a9e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78a9e0: guest_badaddr(0x78a9e0); return;
}

void f_78aa80(void) {
  LOAD_REGS();
L_78aa80: /* 78aa80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78aa81: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 78aa85: add ebx, 0x1fc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 78aa8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78aa8c: call 0x972710 */
  esp -= 4; W32(esp, 0x78aa91u); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 78aa91: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78aa94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78aa96: je 0x78aad5 */
  if (zf) goto L_78aad5;
L_78aa98: /* 78aa98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78aa99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78aa9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_78aaa0: /* 78aaa0: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 78aaa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78aaa4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78aaa5: call 0x972770 */
  esp -= 4; W32(esp, 0x78aaaau); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 78aaaa: mov esi, dword ptr [esi + 0x50] */
  esi = R32((uint32_t)(esi + 0x50u));
/* 78aaad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78aab0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78aab2: mov edi, eax */
  edi = eax;
/* 78aab4: je 0x78aacd */
  if (zf) goto L_78aacd;
L_78aab6: /* 78aab6: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 78aabb: mov ecx, esi */
  ecx = esi;
/* 78aabd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78aac3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78aac3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78aac5: je 0x78aacd */
  if (zf) goto L_78aacd;
L_78aac7: /* 78aac7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78aac8: call 0x6c9417 */
  esp -= 4; W32(esp, 0x78aacdu); SPILL(); f_6c9417(); if (g_unwind) return; RELOAD();
L_78aacd: /* 78aacd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78aacf: mov eax, edi */
  eax = edi;
/* 78aad1: jne 0x78aaa0 */
  if (!zf) goto L_78aaa0;
L_78aad3: /* 78aad3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78aad4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_78aad5: /* 78aad5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78aad6: ret  */
  esp += 4; SPILL(); return;
}

void f_78ab00(void) {
  LOAD_REGS();
L_78ab00: /* 78ab00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78ab01: mov ebp, esp */
  ebp = esp;
/* 78ab03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78ab05: push 0x9ccbf0 */
  { uint32_t v = 0x9ccbf0u; esp -= 4; W32(esp, v); }
/* 78ab0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78ab10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ab11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78ab18: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78ab1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ab1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ab1d: xor esi, esi */
  esi = 0;
/* 78ab1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ab20: xor eax, eax */
  eax = 0;
/* 78ab22: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78ab25: mov edi, ecx */
  edi = ecx;
/* 78ab27: mov ebx, edx */
  ebx = edx;
/* 78ab29: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78ab2c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78ab2f: nop  */
L_78ab30: /* 78ab30: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78ab33: jge 0x78ab81 */
  if ((sf == of)) goto L_78ab81;
L_78ab35: /* 78ab35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ab37: jne 0x78aba9 */
  if (!zf) goto L_78aba9;
L_78ab39: /* 78ab39: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 78ab3b: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 78ab3e: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 78ab41: fsub dword ptr [ecx + eax*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + eax*4 + 0x8u)));
/* 78ab45: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 78ab48: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 78ab4b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78ab4e: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78ab51: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 78ab53: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78ab55: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78ab58: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78ab5b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78ab5e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x78ab64u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 78ab64: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 78ab67: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 78ab6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78ab6f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78ab72: jp 0x78ab7b */
  if (pf) goto L_78ab7b;
L_78ab74: /* 78ab74: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_78ab7b: /* 78ab7b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78ab7e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78ab7f: jmp 0x78ab30 */
  goto L_78ab30;
L_78ab81: /* 78ab81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ab83: jne 0x78aba9 */
  if (!zf) goto L_78aba9;
L_78ab85: /* 78ab85: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 78ab87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78ab89: mov ecx, ebx */
  ecx = ebx;
/* 78ab8b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78ab91u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78ab91: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 78ab94: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 78ab96: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 78ab99: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 78ab9b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78ab9d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 78aba0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78aba3: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 78aba6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_78aba9: /* 78aba9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78abac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78abad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78abae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78abb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78abb6: mov esp, ebp */
  esp = ebp;
/* 78abb8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78abb9: ret  */
  esp += 4; SPILL(); return;
}

void f_78abba(void) {
  LOAD_REGS();
L_78abba: /* 78abba: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78abbd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78abc2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 78abc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78abc6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78abc9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78abceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78abce(); return;
}

void f_78abce(void) {
  LOAD_REGS();
L_78abce: /* 78abce: push 0xa09be8 */
  { uint32_t v = 0xa09be8u; esp -= 4; W32(esp, v); }
/* 78abd3: push 0xac856c */
  { uint32_t v = 0xac856cu; esp -= 4; W32(esp, v); }
/* 78abd8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78abdeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78abde: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78abe1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78abe3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78abe5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78abeau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78abea: guest_badaddr(0x78abea); return;
}

void f_78ac30(void) {
  LOAD_REGS();
L_78ac30: /* 78ac30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78ac31: mov ebp, esp */
  ebp = esp;
/* 78ac33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78ac35: push 0x9ccc00 */
  { uint32_t v = 0x9ccc00u; esp -= 4; W32(esp, v); }
/* 78ac3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78ac40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ac41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78ac48: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78ac4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ac4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ac4d: mov esi, dword ptr [0xcd8a5c] */
  esi = R32((uint32_t)(0xcd8a5cu));
/* 78ac53: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ac55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ac56: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78ac59: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78ac60: je 0x78ad38 */
  if (zf) goto L_78ad38;
L_78ac66: /* 78ac66: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 78ac69: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 78ac6f: call 0x99c958 */
  esp -= 4; W32(esp, 0x78ac74u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 78ac74: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 78ac77: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 78ac7d: mov byte ptr [ebp + 0x18], al */
  W8((uint32_t)(ebp + 0x18u), (eax & 0xffu));
/* 78ac80: call 0x99c958 */
  esp -= 4; W32(esp, 0x78ac85u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 78ac85: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78ac88: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 78ac8e: mov byte ptr [ebp + 0x19], al */
  W8((uint32_t)(ebp + 0x19u), (eax & 0xffu));
/* 78ac91: call 0x99c958 */
  esp -= 4; W32(esp, 0x78ac96u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 78ac96: mov byte ptr [ebp + 0x1a], al */
  W8((uint32_t)(ebp + 0x1au), (eax & 0xffu));
/* 78ac99: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78ac9c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78ac9f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 78aca2: fmul dword ptr [0xa099e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e8u)));
/* 78aca8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78acaa: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 78acb0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78acb3: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 78acb6: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 78acb9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 78acbc: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 78acc2: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 78acc5: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78acc8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78acca: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 78accd: mov byte ptr [ebp + 0x1b], 0xff */
  W8((uint32_t)(ebp + 0x1bu), 0xffu);
/* 78acd1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78acd4: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 78acd7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78acda: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78acdd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78ace0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78ace3: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 78ace6: fmul dword ptr [0xa099e8] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e8u)));
/* 78acec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78aced: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 78acf3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78acf6: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 78acf9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78acfc: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 78ad02: mov ecx, esp */
  ecx = esp;
/* 78ad04: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78ad07: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78ad09: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78ad0c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78ad0f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 78ad12: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 78ad15: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 78ad18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78ad1b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78ad1e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 78ad21: mov eax, esp */
  eax = esp;
/* 78ad23: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78ad26: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78ad28: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78ad2b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78ad2e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78ad31: mov ecx, esi */
  ecx = esi;
/* 78ad33: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x78ad38u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
L_78ad38: /* 78ad38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78ad3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78ad3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ad3d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78ad44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78ad45: mov esp, ebp */
  esp = ebp;
/* 78ad47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78ad48: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_78ad4b(void) {
  LOAD_REGS();
L_78ad4b: /* 78ad4b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78ad4e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78ad53: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78ad56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ad57: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78ad5a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ad5fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ad5f(); return;
}

void f_78ad5f(void) {
  LOAD_REGS();
L_78ad5f: /* 78ad5f: push 0xa09c1c */
  { uint32_t v = 0xa09c1cu; esp -= 4; W32(esp, v); }
/* 78ad64: push 0xac7fc0 */
  { uint32_t v = 0xac7fc0u; esp -= 4; W32(esp, v); }
/* 78ad69: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ad6fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ad6f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ad72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ad74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ad76: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ad7bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78ad7b: guest_badaddr(0x78ad7b); return;
}

void f_78ade0(void) {
  LOAD_REGS();
L_78ade0: /* 78ade0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78ade1: mov ebp, esp */
  ebp = esp;
/* 78ade3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78ade5: push 0x9ccc10 */
  { uint32_t v = 0x9ccc10u; esp -= 4; W32(esp, v); }
/* 78adea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78adf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78adf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78adf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78adfb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78adfe: mov eax, dword ptr [eax + 0x115c] */
  eax = R32((uint32_t)(eax + 0x115cu));
/* 78ae04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ae06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ae07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ae08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ae09: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78ae0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78ae13: je 0x78ae81 */
  if (zf) goto L_78ae81;
L_78ae15: /* 78ae15: lea edi, [eax + 0x34] */
  edi = (uint32_t)(eax + 0x34u);
/* 78ae18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ae19: call 0x972710 */
  esp -= 4; W32(esp, 0x78ae1eu); SPILL(); f_972710(); if (g_unwind) return; RELOAD();
/* 78ae1e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78ae21: /* 78ae21: mov esi, eax */
  esi = eax;
/* 78ae23: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ae25: je 0x78ae81 */
  if (zf) goto L_78ae81;
L_78ae27: /* 78ae27: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78ae2d: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 78ae33: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 78ae36: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 78ae3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ae3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ae3d: call 0x6cac77 */
  esp -= 4; W32(esp, 0x78ae42u); SPILL(); f_6cac77(); if (g_unwind) return; RELOAD();
/* 78ae42: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ae45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ae46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ae47: call 0x972770 */
  esp -= 4; W32(esp, 0x78ae4cu); SPILL(); f_972770(); if (g_unwind) return; RELOAD();
/* 78ae4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ae4f: jmp 0x78ae21 */
  goto L_78ae21;
L_78ae81: /* 78ae81: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78ae84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78ae85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ae86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78ae8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78ae8e: mov esp, ebp */
  esp = ebp;
/* 78ae90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78ae91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78ae51(void) {
  LOAD_REGS();
L_78ae51: /* 78ae51: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78ae54: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78ae59: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 78ae5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ae5d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78ae60: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ae65u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ae65(); return;
}

void f_78ae65(void) {
  LOAD_REGS();
L_78ae65: /* 78ae65: push 0xa09c34 */
  { uint32_t v = 0xa09c34u; esp -= 4; W32(esp, v); }
/* 78ae6a: push 0xac8318 */
  { uint32_t v = 0xac8318u; esp -= 4; W32(esp, v); }
/* 78ae6f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ae75u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ae75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ae78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ae7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ae7c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ae81u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78ae81: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78ae84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78ae85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ae86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78ae8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78ae8e: mov esp, ebp */
  esp = ebp;
/* 78ae90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78ae91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78aed0(void) {
  LOAD_REGS();
L_78aed0: /* 78aed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78aed1: mov ebp, esp */
  ebp = esp;
/* 78aed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78aed5: push 0x9ccc43 */
  { uint32_t v = 0x9ccc43u; esp -= 4; W32(esp, v); }
/* 78aeda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78aee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78aee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78aee8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78aeeb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78aef0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78aef2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78aef3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78aef4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78aef5: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 78aefb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78aefe: push 0xac8728 */
  { uint32_t v = 0xac8728u; esp -= 4; W32(esp, v); }
/* 78af03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78af04: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78af0b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78af0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78af0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78af10: push 0xac8764 */
  { uint32_t v = 0xac8764u; esp -= 4; W32(esp, v); }
/* 78af15: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78af1au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78af1a: call 0x97d690 */
  esp -= 4; W32(esp, 0x78af1fu); SPILL(); f_97d690(); if (g_unwind) return; RELOAD();
/* 78af1f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78af22: push 0xac8784 */
  { uint32_t v = 0xac8784u; esp -= 4; W32(esp, v); }
/* 78af27: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 78af29: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78af2eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78af2e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78af30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78af32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78af33: call 0x97df20 */
  esp -= 4; W32(esp, 0x78af38u); SPILL(); f_97df20(); if (g_unwind) return; RELOAD();
/* 78af38: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 78af3b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78af3e: je 0x78b141 */
  if (zf) goto L_78b141;
L_78af44: /* 78af44: push 0xac87b4 */
  { uint32_t v = 0xac87b4u; esp -= 4; W32(esp, v); }
/* 78af49: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78af4eu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78af4e: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78af53: mov ecx, dword ptr [eax + 0x1500c] */
  ecx = R32((uint32_t)(eax + 0x1500cu));
/* 78af59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78af5a: call 0x977f80 */
  esp -= 4; W32(esp, 0x78af5fu); SPILL(); f_977f80(); if (g_unwind) return; RELOAD();
/* 78af5f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 78af62: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78af64: mov eax, dword ptr [0xcfa3b0] */
  eax = R32((uint32_t)(0xcfa3b0u));
/* 78af69: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78af6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78af6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78af6f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78af71: push 0xac87d4 */
  { uint32_t v = 0xac87d4u; esp -= 4; W32(esp, v); }
/* 78af76: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 78af79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78af7a: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x78af7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78af7d: xor eax, eax */
  eax = 0;
/* 78af7f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78af83: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 78af86: jmp 0x78af90 */
  goto L_78af90;
L_78af90: /* 78af90: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78af93: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78af95: jge 0x78b125 */
  if ((sf == of)) goto L_78b125;
L_78af9b: /* 78af9b: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 78af9e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 78afa1: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 78afa4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x78afaau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 78afaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78afab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78afae: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x78afb4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 78afb4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78afb7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 78afbb: call dword ptr [0xcfa548] */
  esp -= 4; W32(esp, 0x78afc1u); SPILL(); f_4e35e9(); if (g_unwind) return; /* Core!?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */ RELOAD();
/* 78afc1: mov ecx, eax */
  ecx = eax;
/* 78afc3: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x78afc9u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 78afc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78afca: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78afcf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78afd1: push 0xac87f8 */
  { uint32_t v = 0xac87f8u; esp -= 4; W32(esp, v); }
/* 78afd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78afd7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78afd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78afd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78afdc: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78afdf: call dword ptr [0xcfa548] */
  esp -= 4; W32(esp, 0x78afe5u); SPILL(); f_4e35e9(); if (g_unwind) return; /* Core!?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */ RELOAD();
/* 78afe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78afe6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 78afe9: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x78afefu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 78afef: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 78aff2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 78aff6: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x78affcu); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 78affc: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 78b001: mov edi, eax */
  edi = eax;
/* 78b003: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78b009u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b009: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 78b00e: mov esi, eax */
  esi = eax;
/* 78b010: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78b011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78b012: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 78b015: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x78b01bu); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 78b01b: mov eax, esi */
  eax = esi;
/* 78b01d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78b020: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_78b023: /* 78b023: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 78b025: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b026: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b028: jne 0x78b023 */
  if (!zf) goto L_78b023;
L_78b02a: /* 78b02a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78b02c: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78b02f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b030: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78b036u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b036: mov ecx, 0xac8824 */
  ecx = 0xac8824u;
/* 78b03b: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 78b03e: mov esi, ecx */
  esi = ecx;
L_78b040: /* 78b040: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 78b042: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78b043: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b045: jne 0x78b040 */
  if (!zf) goto L_78b040;
L_78b047: /* 78b047: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 78b049: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 78b04a: mov edi, eax */
  edi = eax;
/* 78b04c: mov ebx, ecx */
  ebx = ecx;
/* 78b04e: lea edx, [edi + 1] */
  edx = (uint32_t)(edi + 0x1u);
L_78b051: /* 78b051: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 78b054: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b055: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b057: jne 0x78b051 */
  if (!zf) goto L_78b051;
L_78b059: /* 78b059: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78b05c: mov ecx, ebx */
  ecx = ebx;
/* 78b05e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 78b061: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 78b063: mov ecx, ebx */
  ecx = ebx;
/* 78b065: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78b068: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 78b06a: mov esi, eax */
  esi = eax;
/* 78b06c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_78b070: /* 78b070: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 78b072: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b073: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b075: jne 0x78b070 */
  if (!zf) goto L_78b070;
L_78b077: /* 78b077: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78b079: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 78b07a: mov edi, edx */
  edi = edx;
/* 78b07c: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 78b07f: nop  */
L_78b080: /* 78b080: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 78b083: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b084: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b086: jne 0x78b080 */
  if (!zf) goto L_78b080;
L_78b088: /* 78b088: mov ecx, eax */
  ecx = eax;
/* 78b08a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 78b08d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 78b08f: mov ecx, eax */
  ecx = eax;
/* 78b091: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78b094: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 78b096: xor ecx, ecx */
  ecx = 0;
/* 78b098: mov edx, ebx */
  edx = ebx;
/* 78b09a: call 0x789300 */
  esp -= 4; W32(esp, 0x78b09fu); SPILL(); f_789300(); if (g_unwind) return; RELOAD();
/* 78b09f: mov esi, eax */
  esi = eax;
/* 78b0a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b0a3: je 0x78b0e5 */
  if (zf) goto L_78b0e5;
L_78b0a5: /* 78b0a5: push 0xac8834 */
  { uint32_t v = 0xac8834u; esp -= 4; W32(esp, v); }
/* 78b0aa: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78b0afu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78b0af: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b0b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78b0b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b0b4: call 0x97df50 */
  esp -= 4; W32(esp, 0x78b0b9u); SPILL(); f_97df50(); if (g_unwind) return; RELOAD();
/* 78b0b9: push 0xac8858 */
  { uint32_t v = 0xac8858u; esp -= 4; W32(esp, v); }
/* 78b0be: mov edi, eax */
  edi = eax;
/* 78b0c0: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78b0c5u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78b0c5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b0c7: jne 0x78b0df */
  if (!zf) goto L_78b0df;
L_78b0c9: /* 78b0c9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78b0ce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b0d0: push 0xac8888 */
  { uint32_t v = 0xac8888u; esp -= 4; W32(esp, v); }
/* 78b0d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b0d6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78b0dcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78b0dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78b0df: /* 78b0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78b0e0: call 0x975490 */
  esp -= 4; W32(esp, 0x78b0e5u); SPILL(); f_975490(); if (g_unwind) return; RELOAD();
L_78b0e5: /* 78b0e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78b0e6: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x78b0ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b0ec: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78b0ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b0f0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x78b0f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b0f6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 78b0f9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 78b0fd: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x78b103u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 78b103: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78b106: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78b10a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x78b110u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 78b110: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78b113: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 78b119: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78b11c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b11d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 78b120: jmp 0x78af90 */
  goto L_78af90;
L_78b125: /* 78b125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78b128: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78b12b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 78b12f: call 0x6cd00d */
  esp -= 4; W32(esp, 0x78b134u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 78b134: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78b137: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78b13b: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x78b141u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_78b141: /* 78b141: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b144: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b145: call 0x97df40 */
  esp -= 4; W32(esp, 0x78b14au); SPILL(); f_97df40(); if (g_unwind) return; RELOAD();
/* 78b14a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 78b14c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b14e: je 0x78b16a */
  if (zf) goto L_78b16a;
L_78b150: /* 78b150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b151: call 0x97d7f0 */
  esp -= 4; W32(esp, 0x78b156u); SPILL(); f_97d7f0(); if (g_unwind) return; RELOAD();
/* 78b156: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78b15c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78b15e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b15f: push 0xac88d8 */
  { uint32_t v = 0xac88d8u; esp -= 4; W32(esp, v); }
/* 78b164: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b165: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78b167u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b167: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78b16a: /* 78b16a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78b16d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78b16e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78b16f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78b176: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78b177: mov esp, ebp */
  esp = ebp;
/* 78b179: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78b17a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78af88(void) {
  LOAD_REGS();
L_78af88: /* 78af88: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 78af8f: nop  */
L_78af90: /* 78af90: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78af93: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78af95: jge 0x78b125 */
  if ((sf == of)) goto L_78b125;
L_78af9b: /* 78af9b: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 78af9e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 78afa1: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 78afa4: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x78afaau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 78afaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78afab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78afae: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x78afb4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 78afb4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78afb7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 78afbb: call dword ptr [0xcfa548] */
  esp -= 4; W32(esp, 0x78afc1u); SPILL(); f_4e35e9(); if (g_unwind) return; /* Core!?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */ RELOAD();
/* 78afc1: mov ecx, eax */
  ecx = eax;
/* 78afc3: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x78afc9u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 78afc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78afca: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78afcf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78afd1: push 0xac87f8 */
  { uint32_t v = 0xac87f8u; esp -= 4; W32(esp, v); }
/* 78afd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78afd7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78afd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78afd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78afdc: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78afdf: call dword ptr [0xcfa548] */
  esp -= 4; W32(esp, 0x78afe5u); SPILL(); f_4e35e9(); if (g_unwind) return; /* Core!?GetCharArray@FString@@QAEAAV?$TArray@G@@XZ */ RELOAD();
/* 78afe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78afe6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 78afe9: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x78afefu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 78afef: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 78aff2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 78aff6: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x78affcu); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 78affc: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 78b001: mov edi, eax */
  edi = eax;
/* 78b003: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78b009u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b009: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 78b00e: mov esi, eax */
  esi = eax;
/* 78b010: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78b011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78b012: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 78b015: call dword ptr [0xcfb050] */
  esp -= 4; W32(esp, 0x78b01bu); SPILL(); f_417e01(); if (g_unwind) return; /* MSVCR70!wcstombs */ RELOAD();
/* 78b01b: mov eax, esi */
  eax = esi;
/* 78b01d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78b020: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_78b023: /* 78b023: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 78b025: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b026: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b028: jne 0x78b023 */
  if (!zf) goto L_78b023;
L_78b02a: /* 78b02a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78b02c: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78b02f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b030: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78b036u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b036: mov ecx, 0xac8824 */
  ecx = 0xac8824u;
/* 78b03b: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
/* 78b03e: mov esi, ecx */
  esi = ecx;
L_78b040: /* 78b040: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 78b042: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78b043: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b045: jne 0x78b040 */
  if (!zf) goto L_78b040;
L_78b047: /* 78b047: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 78b049: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 78b04a: mov edi, eax */
  edi = eax;
/* 78b04c: mov ebx, ecx */
  ebx = ecx;
/* 78b04e: lea edx, [edi + 1] */
  edx = (uint32_t)(edi + 0x1u);
L_78b051: /* 78b051: mov al, byte ptr [edi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 78b054: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b055: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b057: jne 0x78b051 */
  if (!zf) goto L_78b051;
L_78b059: /* 78b059: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78b05c: mov ecx, ebx */
  ecx = ebx;
/* 78b05e: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 78b061: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 78b063: mov ecx, ebx */
  ecx = ebx;
/* 78b065: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78b068: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 78b06a: mov esi, eax */
  esi = eax;
/* 78b06c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_78b070: /* 78b070: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 78b072: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b073: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b075: jne 0x78b070 */
  if (!zf) goto L_78b070;
L_78b077: /* 78b077: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78b079: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 78b07a: mov edi, edx */
  edi = edx;
/* 78b07c: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 78b07f: nop  */
L_78b080: /* 78b080: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 78b083: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b084: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78b086: jne 0x78b080 */
  if (!zf) goto L_78b080;
L_78b088: /* 78b088: mov ecx, eax */
  ecx = eax;
/* 78b08a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 78b08d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 78b08f: mov ecx, eax */
  ecx = eax;
/* 78b091: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78b094: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* 78b096: xor ecx, ecx */
  ecx = 0;
/* 78b098: mov edx, ebx */
  edx = ebx;
/* 78b09a: call 0x789300 */
  esp -= 4; W32(esp, 0x78b09fu); SPILL(); f_789300(); if (g_unwind) return; RELOAD();
/* 78b09f: mov esi, eax */
  esi = eax;
/* 78b0a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b0a3: je 0x78b0e5 */
  if (zf) goto L_78b0e5;
L_78b0a5: /* 78b0a5: push 0xac8834 */
  { uint32_t v = 0xac8834u; esp -= 4; W32(esp, v); }
/* 78b0aa: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78b0afu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78b0af: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b0b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78b0b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b0b4: call 0x97df50 */
  esp -= 4; W32(esp, 0x78b0b9u); SPILL(); f_97df50(); if (g_unwind) return; RELOAD();
/* 78b0b9: push 0xac8858 */
  { uint32_t v = 0xac8858u; esp -= 4; W32(esp, v); }
/* 78b0be: mov edi, eax */
  edi = eax;
/* 78b0c0: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78b0c5u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78b0c5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b0c7: jne 0x78b0df */
  if (!zf) goto L_78b0df;
L_78b0c9: /* 78b0c9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78b0ce: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b0d0: push 0xac8888 */
  { uint32_t v = 0xac8888u; esp -= 4; W32(esp, v); }
/* 78b0d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b0d6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78b0dcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78b0dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78b0df: /* 78b0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78b0e0: call 0x975490 */
  esp -= 4; W32(esp, 0x78b0e5u); SPILL(); f_975490(); if (g_unwind) return; RELOAD();
L_78b0e5: /* 78b0e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78b0e6: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x78b0ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b0ec: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78b0ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b0f0: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x78b0f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b0f6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 78b0f9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 78b0fd: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x78b103u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 78b103: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78b106: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78b10a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x78b110u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 78b110: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78b113: mov edi, dword ptr [0xcfa3a4] */
  edi = R32((uint32_t)(0xcfa3a4u));
/* 78b119: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78b11c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b11d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 78b120: jmp 0x78af90 */
  goto L_78af90;
L_78b125: /* 78b125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78b128: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78b12b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 78b12f: call 0x6cd00d */
  esp -= 4; W32(esp, 0x78b134u); SPILL(); f_6cd00d(); if (g_unwind) return; RELOAD();
/* 78b134: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78b137: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78b13b: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x78b141u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 78b141: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b144: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b145: call 0x97df40 */
  esp -= 4; W32(esp, 0x78b14au); SPILL(); f_97df40(); if (g_unwind) return; RELOAD();
/* 78b14a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 78b14c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b14e: je 0x78b16a */
  if (zf) goto L_78b16a;
L_78b150: /* 78b150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b151: call 0x97d7f0 */
  esp -= 4; W32(esp, 0x78b156u); SPILL(); f_97d7f0(); if (g_unwind) return; RELOAD();
/* 78b156: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78b15c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78b15e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b15f: push 0xac88d8 */
  { uint32_t v = 0xac88d8u; esp -= 4; W32(esp, v); }
/* 78b164: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b165: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78b167u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b167: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78b16a: /* 78b16a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78b16d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78b16e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78b16f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78b176: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78b177: mov esp, ebp */
  esp = ebp;
/* 78b179: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78b17a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78b17d(void) {
  LOAD_REGS();
L_78b17d: /* 78b17d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78b180: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78b185: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 78b188: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b189: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78b18c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78b191u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78b191(); return;
}

void f_78b191(void) {
  LOAD_REGS();
L_78b191: /* 78b191: push 0xa09c5c */
  { uint32_t v = 0xa09c5cu; esp -= 4; W32(esp, v); }
/* 78b196: push 0xac893c */
  { uint32_t v = 0xac893cu; esp -= 4; W32(esp, v); }
/* 78b19b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78b1a1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78b1a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78b1a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78b1a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78b1a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78b1adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78b1ad: guest_badaddr(0x78b1ad); return;
}

void f_78b270(void) {
  LOAD_REGS();
L_78b270: /* 78b270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78b271: mov ebp, esp */
  ebp = esp;
/* 78b273: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78b275: push 0x9ccc60 */
  { uint32_t v = 0x9ccc60u; esp -= 4; W32(esp, v); }
/* 78b27a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78b280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b281: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78b288: sub esp, 0x304 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x304u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78b28e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78b28f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78b290: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78b291: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 78b294: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78b297: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78b299: mov ebx, ecx */
  ebx = ecx;
/* 78b29b: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 78b29e: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 78b2a0: mov ecx, edi */
  ecx = edi;
/* 78b2a2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78b2a9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x78b2afu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 78b2af: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 78b2b1: mov esi, eax */
  esi = eax;
/* 78b2b3: imul esi, esi, 0x58 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x58u);
  esi = (uint32_t)r;
  }
/* 78b2b6: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 78b2b9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78b2bc: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78b2be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b2bf: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 78b2c2: mov dword ptr [ebp - 0x64], esi */
  W32((uint32_t)(ebp + 0xffffff9cu), esi);
/* 78b2c5: call 0x6c2f04 */
  esp -= 4; W32(esp, 0x78b2cau); SPILL(); f_6c2f04(); if (g_unwind) return; RELOAD();
/* 78b2ca: mov ecx, esi */
  ecx = esi;
/* 78b2cc: call dword ptr [0xcfa5cc] */
  esp -= 4; W32(esp, 0x78b2d2u); SPILL(); f_4e2a04(); if (g_unwind) return; /* Core!?SetIdentity@FMatrix@@QAEXXZ */ RELOAD();
/* 78b2d2: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 78b2d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_78b2e0: /* 78b2e0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 78b2e3: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 78b2e6: cmp ecx, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b2e9: jge 0x78b87c */
  if ((sf == of)) goto L_78b87c;
L_78b2ef: /* 78b2ef: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 78b2f5: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* 78b2fc: lea esi, [ebp - 0x2c0] */
  esi = (uint32_t)(ebp + 0xfffffd40u);
L_78b302: /* 78b302: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 78b305: js 0x78b314 */
  if (sf) goto L_78b314;
L_78b307: /* 78b307: mov ecx, esi */
  ecx = esi;
/* 78b309: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78b30bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b30b: mov eax, 0xc */
  eax = 0xcu;
/* 78b310: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78b312: jmp 0x78b302 */
  goto L_78b302;
L_78b314: /* 78b314: lea ecx, [ebp - 0x1f4] */
  ecx = (uint32_t)(ebp + 0xfffffe0cu);
/* 78b31a: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x78b320u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 78b320: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 78b326: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 78b32d: mov dword ptr [ebp - 0x30], 0xc */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xcu);
/* 78b334: lea esi, [ebp - 0x1d4] */
  esi = (uint32_t)(ebp + 0xfffffe2cu);
/* 78b33a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_78b340: /* 78b340: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 78b343: js 0x78b34e */
  if (sf) goto L_78b34e;
L_78b345: /* 78b345: mov ecx, esi */
  ecx = esi;
/* 78b347: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78b349u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b349: add esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78b34c: jmp 0x78b340 */
  goto L_78b340;
L_78b34e: /* 78b34e: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 78b351: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78b354: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78b356: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 78b359: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78b35b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b35d: mov dword ptr [ebp - 0x2e4], ecx */
  W32((uint32_t)(ebp + 0xfffffd1cu), ecx);
/* 78b363: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78b366: mov dword ptr [ebp - 0x2e0], edx */
  W32((uint32_t)(ebp + 0xfffffd20u), edx);
/* 78b36c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b36f: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 78b375: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b376: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 78b37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b37d: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 78b383: mov dword ptr [ebp - 0x2dc], eax */
  W32((uint32_t)(ebp + 0xfffffd24u), eax);
/* 78b389: mov dword ptr [ebp - 0x1f0], 4 */
  W32((uint32_t)(ebp + 0xfffffe10u), 0x4u);
/* 78b393: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x78b399u); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 78b399: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78b39b: mov edx, dword ptr [esi + eax + 0xc] */
  edx = R32((uint32_t)(esi + eax + 0xcu));
/* 78b39f: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 78b3a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b3a3: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 78b3a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b3aa: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x78b3b0u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 78b3b0: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 78b3b6: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b3bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b3be: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78b3c1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b3c4: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 78b3c7: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 78b3ca: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 78b3d0: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 78b3d3: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b3d9: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 78b3dc: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 78b3df: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 78b3e5: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b3eb: fst dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0);
/* 78b3ee: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 78b3f4: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 78b3fa: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b400: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 78b403: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 78b409: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b40f: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 78b412: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 78b418: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b41e: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 78b421: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 78b427: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b42a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 78b42c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 78b42f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b432: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 78b434: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b437: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b439: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b43b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 78b441: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 78b444: fstp dword ptr [ebp - 0x184] */
  WF32((uint32_t)(ebp + 0xfffffe7cu), ST0); FPOP();
/* 78b44a: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 78b44d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78b450: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78b453: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78b456: fld dword ptr [ebp - 0x184] */
  { double v = F32((uint32_t)(ebp + 0xfffffe7cu)); FPUSH(v); }
/* 78b45c: fadd dword ptr [ebp - 0x130] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed0u)));
/* 78b462: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 78b468: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 78b46e: mov dword ptr [ebp - 0x2c0], ecx */
  W32((uint32_t)(ebp + 0xfffffd40u), ecx);
/* 78b474: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 78b477: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 78b47d: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 78b483: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 78b489: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 78b48f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b491: mov dword ptr [ebp - 0x2bc], edx */
  W32((uint32_t)(ebp + 0xfffffd44u), edx);
/* 78b497: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b499: mov dword ptr [ebp - 0x2b8], eax */
  W32((uint32_t)(ebp + 0xfffffd48u), eax);
/* 78b49f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78b4a2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 78b4a5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b4a8: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78b4ab: mov dword ptr [ebp - 0x1a8], edx */
  W32((uint32_t)(ebp + 0xfffffe58u), edx);
/* 78b4b1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b4b4: mov dword ptr [ebp - 0x118], ecx */
  W32((uint32_t)(ebp + 0xfffffee8u), ecx);
/* 78b4ba: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 78b4bc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b4bf: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b4c2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 78b4c4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b4c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b4c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b4cb: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 78b4ce: fsub dword ptr [ebp - 0x1a8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe58u)));
/* 78b4d4: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 78b4da: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78b4dd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78b4e0: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78b4e3: fld dword ptr [ebp - 0x148] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb8u)); FPUSH(v); }
/* 78b4e9: fadd dword ptr [ebp - 0x118] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffee8u)));
/* 78b4ef: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 78b4f5: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 78b4fb: mov dword ptr [ebp - 0x2b4], eax */
  W32((uint32_t)(ebp + 0xfffffd4cu), eax);
/* 78b501: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 78b507: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 78b50d: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 78b510: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 78b516: mov dword ptr [ebp - 0x2b0], ecx */
  W32((uint32_t)(ebp + 0xfffffd50u), ecx);
/* 78b51c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b51f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b521: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b523: mov dword ptr [ebp - 0x160], ecx */
  W32((uint32_t)(ebp + 0xfffffea0u), ecx);
/* 78b529: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78b52c: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 78b532: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 78b535: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 78b53b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78b53e: mov dword ptr [ebp - 0x2ac], edx */
  W32((uint32_t)(ebp + 0xfffffd54u), edx);
/* 78b544: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b547: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 78b549: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b54c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b54f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 78b551: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b554: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b556: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b558: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 78b55b: fsub dword ptr [ebp - 0x160] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffea0u)));
/* 78b561: fstp dword ptr [ebp - 0x19c] */
  WF32((uint32_t)(ebp + 0xfffffe64u), ST0); FPOP();
/* 78b567: fsubr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) - ST0;
/* 78b56a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78b56d: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78b570: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 78b576: fsub dword ptr [ebp - 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe88u)));
/* 78b57c: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 78b582: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 78b588: mov dword ptr [ebp - 0x2a8], edx */
  W32((uint32_t)(ebp + 0xfffffd58u), edx);
/* 78b58e: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 78b594: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 78b59a: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 78b59d: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 78b5a3: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 78b5a9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78b5ab: mov dword ptr [ebp - 0x2a4], eax */
  W32((uint32_t)(ebp + 0xfffffd5cu), eax);
/* 78b5b1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b5b4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b5b7: mov dword ptr [ebp - 0x2a0], ecx */
  W32((uint32_t)(ebp + 0xfffffd60u), ecx);
/* 78b5bd: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 78b5c0: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 78b5c6: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 78b5c9: mov dword ptr [ebp - 0x124], eax */
  W32((uint32_t)(ebp + 0xfffffedcu), eax);
/* 78b5cf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78b5d2: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b5d5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 78b5d7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b5da: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b5dd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 78b5df: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78b5e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b5e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b5e6: fld dword ptr [ebp - 0x124] */
  { double v = F32((uint32_t)(ebp + 0xfffffedcu)); FPUSH(v); }
/* 78b5ec: xor esi, esi */
  esi = 0;
/* 78b5ee: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 78b5f1: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 78b5f7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78b5fa: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78b5fd: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 78b600: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 78b603: fld dword ptr [ebp - 0x13c] */
  { double v = F32((uint32_t)(ebp + 0xfffffec4u)); FPUSH(v); }
/* 78b609: fsub dword ptr [ebp - 0x154] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeacu)));
/* 78b60f: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 78b615: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 78b61b: mov dword ptr [ebp - 0x29c], ecx */
  W32((uint32_t)(ebp + 0xfffffd64u), ecx);
/* 78b621: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 78b627: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 78b62d: mov dword ptr [ebp - 0x298], edx */
  W32((uint32_t)(ebp + 0xfffffd68u), edx);
/* 78b633: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 78b639: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 78b63f: mov dword ptr [ebp - 0x294], eax */
  W32((uint32_t)(ebp + 0xfffffd6cu), eax);
L_78b645: /* 78b645: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b648: jge 0x78b6c4 */
  if ((sf == of)) goto L_78b6c4;
L_78b64a: /* 78b64a: cmp dword ptr [ebp - 0x34], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78b64d: je 0x78b765 */
  if (zf) goto L_78b765;
L_78b653: /* 78b653: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 78b655: mov ecx, esi */
  ecx = esi;
/* 78b657: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 78b65a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78b65c: mov eax, ecx */
  eax = ecx;
/* 78b65e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78b660: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 78b663: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78b666: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b669: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78b66c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 78b66f: fchs  */
  ST0 = -ST0;
/* 78b671: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 78b674: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78b677: lea eax, [ebp - 0x310] */
  eax = (uint32_t)(ebp + 0xfffffcf0u);
/* 78b67d: fchs  */
  ST0 = -ST0;
/* 78b67f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78b682: fchs  */
  ST0 = -ST0;
/* 78b684: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 78b68a: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 78b690: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 78b696: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 78b699: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b69a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b69b: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x78b6a1u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 78b6a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78b6a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b6a4: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 78b6aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b6ab: lea ecx, [ebp - 0x2f0] */
  ecx = (uint32_t)(ebp + 0xfffffd10u);
/* 78b6b1: call 0x6cb096 */
  esp -= 4; W32(esp, 0x78b6b6u); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 78b6b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b6b8: jne 0x78b765 */
  if (!zf) goto L_78b765;
L_78b6be: /* 78b6be: mov dword ptr [ebp - 0x1f0], eax */
  W32((uint32_t)(ebp + 0xfffffe10u), eax);
L_78b6c4: /* 78b6c4: xor edi, edi */
  edi = 0;
/* 78b6c6: jmp 0x78b6d0 */
  goto L_78b6d0;
L_78b6d0: /* 78b6d0: cmp edi, dword ptr [ebp - 0x1f0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b6d6: jge 0x78b86d */
  if ((sf == of)) goto L_78b86d;
L_78b6dc: /* 78b6dc: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 78b6e3: mov dword ptr [ebp - 0x68], 0x7f7fffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0x7f7fffffu);
/* 78b6ea: xor esi, esi */
  esi = 0;
/* 78b6ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_78b6f0: /* 78b6f0: cmp esi, dword ptr [ebx + 0x6c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b6f3: jge 0x78b770 */
  if ((sf == of)) goto L_78b770;
L_78b6f5: /* 78b6f5: mov edx, dword ptr [ebx + 0x68] */
  edx = R32((uint32_t)(ebx + 0x68u));
/* 78b6f8: mov eax, dword ptr [edx + esi*8] */
  eax = R32((uint32_t)(edx + esi*8));
/* 78b6fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78b6fd: jl 0x78b76d */
  if ((sf != of)) goto L_78b76d;
L_78b6ff: /* 78b6ff: cmp eax, dword ptr [ebx + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b705: jge 0x78b76d */
  if ((sf == of)) goto L_78b76d;
L_78b707: /* 78b707: mov ecx, dword ptr [ebx + 0x88] */
  ecx = R32((uint32_t)(ebx + 0x88u));
/* 78b70d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78b710: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 78b713: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 78b716: fld dword ptr [ebp + ecx*4 - 0x2b8] */
  { double v = F32((uint32_t)(ebp + ecx*4 + 0xfffffd48u)); FPUSH(v); }
/* 78b71d: lea ecx, [ebp + ecx*4 - 0x2c0] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffd40u);
/* 78b724: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 78b727: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78b72a: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78b72d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78b72f: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 78b735: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78b737: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 78b73d: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 78b743: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 78b749: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x78b74fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 78b74f: fcom dword ptr [ebp - 0x68] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff98u)));
/* 78b752: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 78b755: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78b757: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78b75a: jp 0x78b76b */
  if (pf) goto L_78b76b;
L_78b75c: /* 78b75c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 78b75f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 78b762: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78b763: jmp 0x78b6f0 */
  goto L_78b6f0;
L_78b765: /* 78b765: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78b766: jmp 0x78b645 */
  goto L_78b645;
L_78b76b: /* 78b76b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_78b76d: /* 78b76d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78b76e: jmp 0x78b6f0 */
  goto L_78b6f0;
L_78b770: /* 78b770: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b773: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78b776: je 0x78b7ff */
  if (zf) goto L_78b7ff;
L_78b77c: /* 78b77c: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 78b77f: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 78b785: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78b787: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78b78a: jp 0x78b7ff */
  if (pf) goto L_78b7ff;
L_78b78c: /* 78b78c: mov edx, dword ptr [ebx + 0x68] */
  edx = R32((uint32_t)(ebx + 0x68u));
/* 78b78f: mov eax, dword ptr [edx + ecx*8] */
  eax = R32((uint32_t)(edx + ecx*8));
/* 78b792: mov ecx, dword ptr [ebx + 0x88] */
  ecx = R32((uint32_t)(ebx + 0x88u));
/* 78b798: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78b79b: fld dword ptr [ecx + eax*4 + 8] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8u)); FPUSH(v); }
/* 78b79f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 78b7a2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78b7a5: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 78b7a8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78b7ab: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78b7ae: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78b7b1: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78b7b4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b7b7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78b7b9: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 78b7bb: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 78b7c1: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 78b7c7: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b7cd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78b7d0: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b7d6: fld dword ptr [ebp - 0x16c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe94u)); FPUSH(v); }
/* 78b7dc: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b7e2: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 78b7e8: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 78b7ee: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 78b7f4: call 0x78ab00 */
  esp -= 4; W32(esp, 0x78b7f9u); SPILL(); f_78ab00(); if (g_unwind) return; RELOAD();
/* 78b7f9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b7fa: jmp 0x78b6d0 */
  goto L_78b6d0;
L_78b7ff: /* 78b7ff: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78b802: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 78b805: fld dword ptr [ebp + eax*4 - 0x2b8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffd48u)); FPUSH(v); }
/* 78b80c: lea eax, [ebp + eax*4 - 0x2c0] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffd40u);
/* 78b813: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 78b816: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78b819: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78b81c: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78b81f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78b822: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b825: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78b827: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 78b829: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 78b82f: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 78b835: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b83b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78b83e: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b844: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 78b84a: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b850: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 78b856: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 78b85c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 78b862: call 0x78ab00 */
  esp -= 4; W32(esp, 0x78b867u); SPILL(); f_78ab00(); if (g_unwind) return; RELOAD();
/* 78b867: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b868: jmp 0x78b6d0 */
  goto L_78b6d0;
L_78b86d: /* 78b86d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 78b870: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78b873: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b874: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 78b877: jmp 0x78b2e0 */
  goto L_78b2e0;
L_78b87c: /* 78b87c: cmp dword ptr [esi + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b880: jl 0x78b93f */
  if ((sf != of)) goto L_78b93f;
L_78b886: /* 78b886: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 78b889: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 78b88c: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 78b88f: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 78b892: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78b895: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 78b898: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78b89a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78b89d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78b8a0: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 78b8a3: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78b8a6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78b8a9: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 78b8ac: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78b8af: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78b8b2: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 78b8b5: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 78b8b8: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x78b8beu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 78b8be: xor edi, edi */
  edi = 0;
/* 78b8c0: mov ebx, 2 */
  ebx = 0x2u;
L_78b8c5: /* 78b8c5: cmp ebx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b8c8: jge 0x78b93b */
  if ((sf == of)) goto L_78b93b;
L_78b8ca: /* 78b8ca: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b8cc: jne 0x78b961 */
  if (!zf) goto L_78b961;
L_78b8d2: /* 78b8d2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 78b8d5: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 78b8d8: fld dword ptr [eax + ecx*4 + 8] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x8u)); FPUSH(v); }
/* 78b8dc: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 78b8df: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 78b8e2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78b8e5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78b8e8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78b8ea: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78b8ec: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78b8ef: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78b8f2: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 78b8f5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78b8f8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78b8fb: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 78b8fe: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78b901: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78b904: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 78b907: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 78b90a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x78b910u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 78b910: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78b913: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 78b916: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78b919: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 78b91c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b91e: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 78b921: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78b924: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b926: fcomp dword ptr [0xa09ca4] */
  fpu_com(ST0, F32((uint32_t)(0xa09ca4u)));
  FPOP();
/* 78b92c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78b92e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78b931: jp 0x78b938 */
  if (pf) goto L_78b938;
L_78b933: /* 78b933: mov edi, 1 */
  edi = 0x1u;
L_78b938: /* 78b938: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78b939: jmp 0x78b8c5 */
  goto L_78b8c5;
L_78b93b: /* 78b93b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b93d: jne 0x78b961 */
  if (!zf) goto L_78b961;
L_78b93f: /* 78b93f: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 78b942: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78b944: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78b945: /* 78b945: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78b948: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78b94b: call 0x6c2b6c */
  esp -= 4; W32(esp, 0x78b950u); SPILL(); f_6c2b6c(); if (g_unwind) return; RELOAD();
L_78b950: /* 78b950: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78b953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78b954: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78b955: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78b95c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78b95d: mov esp, ebp */
  esp = ebp;
/* 78b95f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78b960: ret  */
  esp += 4; SPILL(); return;
L_78b961: /* 78b961: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78b964: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 78b967: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78b96a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 78b96d: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 78b970: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78b972: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 78b975: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 78b978: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78b97b: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78b97e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78b980: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78b983: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 78b986: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 78b989: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78b98c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78b98e: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 78b991: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 78b994: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 78b997: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x78b99du); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 78b99d: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 78b9a0: mov eax, edx */
  eax = edx;
/* 78b9a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b9a4: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 78b9a7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 78b9aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b9ad: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78b9b0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 78b9b3: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 78b9b6: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 78b9b9: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78b9bc: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78b9bf: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 78b9c2: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 78b9c5: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 78b9cb: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78b9ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b9d0: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 78b9d6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78b9d9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 78b9df: fmul dword ptr [ebp - 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff84u)));
/* 78b9e2: xor edi, edi */
  edi = 0;
/* 78b9e4: mov ecx, 2 */
  ecx = 0x2u;
/* 78b9e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b9eb: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 78b9ee: mov edi, edi */
  edi = edi;
L_78b9f0: /* 78b9f0: cmp ecx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b9f3: jge 0x78ba3a */
  if ((sf == of)) goto L_78ba3a;
L_78b9f5: /* 78b9f5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b9f7: jne 0x78b950 */
  if (!zf) goto L_78b950;
L_78b9fd: /* 78b9fd: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 78ba03: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 78ba06: fmul dword ptr [edx + eax*4 + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax*4 + 0x4u)));
/* 78ba0a: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 78ba0d: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 78ba13: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 78ba16: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78ba18: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 78ba1e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 78ba20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78ba22: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 78ba25: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 78ba2b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78ba2d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78ba30: jne 0x78ba37 */
  if (!zf) goto L_78ba37;
L_78ba32: /* 78ba32: mov edi, 1 */
  edi = 0x1u;
L_78ba37: /* 78ba37: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78ba38: jmp 0x78b9f0 */
  goto L_78b9f0;
L_78ba3a: /* 78ba3a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ba3c: jne 0x78b950 */
  if (!zf) goto L_78b950;
L_78ba42: /* 78ba42: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 78ba45: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78ba47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ba48: jmp 0x78b945 */
  goto L_78b945;
}

void f_78b6c8(void) {
  LOAD_REGS();
  goto L_78b6c8;
L_78b2e0: /* 78b2e0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 78b2e3: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 78b2e6: cmp ecx, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b2e9: jge 0x78b87c */
  if ((sf == of)) goto L_78b87c;
L_78b2ef: /* 78b2ef: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 78b2f5: mov dword ptr [ebp - 0x18], 0x10 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x10u);
/* 78b2fc: lea esi, [ebp - 0x2c0] */
  esi = (uint32_t)(ebp + 0xfffffd40u);
L_78b302: /* 78b302: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 78b305: js 0x78b314 */
  if (sf) goto L_78b314;
L_78b307: /* 78b307: mov ecx, esi */
  ecx = esi;
/* 78b309: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78b30bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b30b: mov eax, 0xc */
  eax = 0xcu;
/* 78b310: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78b312: jmp 0x78b302 */
  goto L_78b302;
L_78b314: /* 78b314: lea ecx, [ebp - 0x1f4] */
  ecx = (uint32_t)(ebp + 0xfffffe0cu);
/* 78b31a: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x78b320u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 78b320: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 78b326: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 78b32d: mov dword ptr [ebp - 0x30], 0xc */
  W32((uint32_t)(ebp + 0xffffffd0u), 0xcu);
/* 78b334: lea esi, [ebp - 0x1d4] */
  esi = (uint32_t)(ebp + 0xfffffe2cu);
/* 78b33a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_78b340: /* 78b340: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 78b343: js 0x78b34e */
  if (sf) goto L_78b34e;
L_78b345: /* 78b345: mov ecx, esi */
  ecx = esi;
/* 78b347: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x78b349u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78b349: add esi, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78b34c: jmp 0x78b340 */
  goto L_78b340;
L_78b34e: /* 78b34e: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 78b351: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78b354: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78b356: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 78b359: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78b35b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b35d: mov dword ptr [ebp - 0x2e4], ecx */
  W32((uint32_t)(ebp + 0xfffffd1cu), ecx);
/* 78b363: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78b366: mov dword ptr [ebp - 0x2e0], edx */
  W32((uint32_t)(ebp + 0xfffffd20u), edx);
/* 78b36c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b36f: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 78b375: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b376: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 78b37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b37d: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 78b383: mov dword ptr [ebp - 0x2dc], eax */
  W32((uint32_t)(ebp + 0xfffffd24u), eax);
/* 78b389: mov dword ptr [ebp - 0x1f0], 4 */
  W32((uint32_t)(ebp + 0xfffffe10u), 0x4u);
/* 78b393: call dword ptr [0xcfa524] */
  esp -= 4; W32(esp, 0x78b399u); SPILL(); f_4e2757(); if (g_unwind) return; /* Core!?FindBestAxisVectors@FVector@@QAEXAAV1@0@Z */ RELOAD();
/* 78b399: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78b39b: mov edx, dword ptr [esi + eax + 0xc] */
  edx = R32((uint32_t)(esi + eax + 0xcu));
/* 78b39f: lea ecx, [esi + eax] */
  ecx = (uint32_t)(esi + eax);
/* 78b3a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b3a3: lea eax, [ebp - 0x300] */
  eax = (uint32_t)(ebp + 0xfffffd00u);
/* 78b3a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b3aa: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x78b3b0u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 78b3b0: fld dword ptr [ebp - 0x100] */
  { double v = F32((uint32_t)(ebp + 0xffffff00u)); FPUSH(v); }
/* 78b3b6: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b3bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b3be: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78b3c1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b3c4: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 78b3c7: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 78b3ca: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 78b3d0: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 78b3d3: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b3d9: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 78b3dc: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 78b3df: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 78b3e5: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b3eb: fst dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0);
/* 78b3ee: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 78b3f4: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 78b3fa: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b400: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 78b403: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 78b409: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b40f: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 78b412: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 78b418: fmul dword ptr [0xa07fe0] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fe0u)));
/* 78b41e: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 78b421: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 78b427: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b42a: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 78b42c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 78b42f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b432: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 78b434: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b437: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b439: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b43b: fld dword ptr [ebp - 0x190] */
  { double v = F32((uint32_t)(ebp + 0xfffffe70u)); FPUSH(v); }
/* 78b441: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 78b444: fstp dword ptr [ebp - 0x184] */
  WF32((uint32_t)(ebp + 0xfffffe7cu), ST0); FPOP();
/* 78b44a: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 78b44d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78b450: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78b453: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78b456: fld dword ptr [ebp - 0x184] */
  { double v = F32((uint32_t)(ebp + 0xfffffe7cu)); FPUSH(v); }
/* 78b45c: fadd dword ptr [ebp - 0x130] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed0u)));
/* 78b462: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 78b468: mov ecx, dword ptr [ebp - 0xa8] */
  ecx = R32((uint32_t)(ebp + 0xffffff58u));
/* 78b46e: mov dword ptr [ebp - 0x2c0], ecx */
  W32((uint32_t)(ebp + 0xfffffd40u), ecx);
/* 78b474: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 78b477: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 78b47d: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 78b483: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 78b489: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 78b48f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b491: mov dword ptr [ebp - 0x2bc], edx */
  W32((uint32_t)(ebp + 0xfffffd44u), edx);
/* 78b497: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b499: mov dword ptr [ebp - 0x2b8], eax */
  W32((uint32_t)(ebp + 0xfffffd48u), eax);
/* 78b49f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78b4a2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 78b4a5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b4a8: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78b4ab: mov dword ptr [ebp - 0x1a8], edx */
  W32((uint32_t)(ebp + 0xfffffe58u), edx);
/* 78b4b1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b4b4: mov dword ptr [ebp - 0x118], ecx */
  W32((uint32_t)(ebp + 0xfffffee8u), ecx);
/* 78b4ba: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 78b4bc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b4bf: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b4c2: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 78b4c4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b4c7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b4c9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b4cb: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 78b4ce: fsub dword ptr [ebp - 0x1a8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe58u)));
/* 78b4d4: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 78b4da: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 78b4dd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78b4e0: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78b4e3: fld dword ptr [ebp - 0x148] */
  { double v = F32((uint32_t)(ebp + 0xfffffeb8u)); FPUSH(v); }
/* 78b4e9: fadd dword ptr [ebp - 0x118] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffee8u)));
/* 78b4ef: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 78b4f5: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 78b4fb: mov dword ptr [ebp - 0x2b4], eax */
  W32((uint32_t)(ebp + 0xfffffd4cu), eax);
/* 78b501: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 78b507: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 78b50d: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 78b510: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 78b516: mov dword ptr [ebp - 0x2b0], ecx */
  W32((uint32_t)(ebp + 0xfffffd50u), ecx);
/* 78b51c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b51f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b521: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78b523: mov dword ptr [ebp - 0x160], ecx */
  W32((uint32_t)(ebp + 0xfffffea0u), ecx);
/* 78b529: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78b52c: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 78b532: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 78b535: mov dword ptr [ebp - 0x178], eax */
  W32((uint32_t)(ebp + 0xfffffe88u), eax);
/* 78b53b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78b53e: mov dword ptr [ebp - 0x2ac], edx */
  W32((uint32_t)(ebp + 0xfffffd54u), edx);
/* 78b544: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b547: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 78b549: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b54c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b54f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 78b551: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b554: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b556: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b558: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 78b55b: fsub dword ptr [ebp - 0x160] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffea0u)));
/* 78b561: fstp dword ptr [ebp - 0x19c] */
  WF32((uint32_t)(ebp + 0xfffffe64u), ST0); FPOP();
/* 78b567: fsubr dword ptr [ebp - 0x14] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffecu))) - ST0;
/* 78b56a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78b56d: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78b570: fld dword ptr [ebp - 0x19c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe64u)); FPUSH(v); }
/* 78b576: fsub dword ptr [ebp - 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffe88u)));
/* 78b57c: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 78b582: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 78b588: mov dword ptr [ebp - 0x2a8], edx */
  W32((uint32_t)(ebp + 0xfffffd58u), edx);
/* 78b58e: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 78b594: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 78b59a: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 78b59d: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 78b5a3: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 78b5a9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78b5ab: mov dword ptr [ebp - 0x2a4], eax */
  W32((uint32_t)(ebp + 0xfffffd5cu), eax);
/* 78b5b1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78b5b4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b5b7: mov dword ptr [ebp - 0x2a0], ecx */
  W32((uint32_t)(ebp + 0xfffffd60u), ecx);
/* 78b5bd: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 78b5c0: mov dword ptr [ebp - 0x154], edx */
  W32((uint32_t)(ebp + 0xfffffeacu), edx);
/* 78b5c6: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 78b5c9: mov dword ptr [ebp - 0x124], eax */
  W32((uint32_t)(ebp + 0xfffffedcu), eax);
/* 78b5cf: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78b5d2: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78b5d5: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 78b5d7: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b5da: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 78b5dd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 78b5df: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78b5e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b5e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78b5e6: fld dword ptr [ebp - 0x124] */
  { double v = F32((uint32_t)(ebp + 0xfffffedcu)); FPUSH(v); }
/* 78b5ec: xor esi, esi */
  esi = 0;
/* 78b5ee: fadd dword ptr [ebp - 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 78b5f1: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 78b5f7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78b5fa: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78b5fd: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 78b600: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 78b603: fld dword ptr [ebp - 0x13c] */
  { double v = F32((uint32_t)(ebp + 0xfffffec4u)); FPUSH(v); }
/* 78b609: fsub dword ptr [ebp - 0x154] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffeacu)));
/* 78b60f: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 78b615: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 78b61b: mov dword ptr [ebp - 0x29c], ecx */
  W32((uint32_t)(ebp + 0xfffffd64u), ecx);
/* 78b621: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 78b627: mov edx, dword ptr [ebp - 0x98] */
  edx = R32((uint32_t)(ebp + 0xffffff68u));
/* 78b62d: mov dword ptr [ebp - 0x298], edx */
  W32((uint32_t)(ebp + 0xfffffd68u), edx);
/* 78b633: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 78b639: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 78b63f: mov dword ptr [ebp - 0x294], eax */
  W32((uint32_t)(ebp + 0xfffffd6cu), eax);
L_78b645: /* 78b645: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b648: jge 0x78b6c4 */
  if ((sf == of)) goto L_78b6c4;
L_78b64a: /* 78b64a: cmp dword ptr [ebp - 0x34], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78b64d: je 0x78b765 */
  if (zf) goto L_78b765;
L_78b653: /* 78b653: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 78b655: mov ecx, esi */
  ecx = esi;
/* 78b657: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 78b65a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78b65c: mov eax, ecx */
  eax = ecx;
/* 78b65e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78b660: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 78b663: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78b666: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b669: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78b66c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 78b66f: fchs  */
  ST0 = -ST0;
/* 78b671: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 78b674: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78b677: lea eax, [ebp - 0x310] */
  eax = (uint32_t)(ebp + 0xfffffcf0u);
/* 78b67d: fchs  */
  ST0 = -ST0;
/* 78b67f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78b682: fchs  */
  ST0 = -ST0;
/* 78b684: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 78b68a: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 78b690: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 78b696: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 78b699: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78b69a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b69b: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x78b6a1u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 78b6a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78b6a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78b6a4: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 78b6aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78b6ab: lea ecx, [ebp - 0x2f0] */
  ecx = (uint32_t)(ebp + 0xfffffd10u);
/* 78b6b1: call 0x6cb096 */
  esp -= 4; W32(esp, 0x78b6b6u); SPILL(); f_6cb096(); if (g_unwind) return; RELOAD();
/* 78b6b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b6b8: jne 0x78b765 */
  if (!zf) goto L_78b765;
L_78b6be: /* 78b6be: mov dword ptr [ebp - 0x1f0], eax */
  W32((uint32_t)(ebp + 0xfffffe10u), eax);
L_78b6c4: /* 78b6c4: xor edi, edi */
  edi = 0;
/* 78b6c6: jmp 0x78b6d0 */
  goto L_78b6d0;
L_78b6c8: /* 78b6c8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 78b6cf: nop  */
L_78b6d0: /* 78b6d0: cmp edi, dword ptr [ebp - 0x1f0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffe10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b6d6: jge 0x78b86d */
  if ((sf == of)) goto L_78b86d;
L_78b6dc: /* 78b6dc: mov dword ptr [ebp - 0x18], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xffffffffu);
/* 78b6e3: mov dword ptr [ebp - 0x68], 0x7f7fffff */
  W32((uint32_t)(ebp + 0xffffff98u), 0x7f7fffffu);
/* 78b6ea: xor esi, esi */
  esi = 0;
/* 78b6ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_78b6f0: /* 78b6f0: cmp esi, dword ptr [ebx + 0x6c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x6cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b6f3: jge 0x78b770 */
  if ((sf == of)) goto L_78b770;
L_78b6f5: /* 78b6f5: mov edx, dword ptr [ebx + 0x68] */
  edx = R32((uint32_t)(ebx + 0x68u));
/* 78b6f8: mov eax, dword ptr [edx + esi*8] */
  eax = R32((uint32_t)(edx + esi*8));
/* 78b6fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78b6fd: jl 0x78b76d */
  if ((sf != of)) goto L_78b76d;
L_78b6ff: /* 78b6ff: cmp eax, dword ptr [ebx + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b705: jge 0x78b76d */
  if ((sf == of)) goto L_78b76d;
L_78b707: /* 78b707: mov ecx, dword ptr [ebx + 0x88] */
  ecx = R32((uint32_t)(ebx + 0x88u));
/* 78b70d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78b710: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 78b713: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 78b716: fld dword ptr [ebp + ecx*4 - 0x2b8] */
  { double v = F32((uint32_t)(ebp + ecx*4 + 0xfffffd48u)); FPUSH(v); }
/* 78b71d: lea ecx, [ebp + ecx*4 - 0x2c0] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xfffffd40u);
/* 78b724: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 78b727: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78b72a: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78b72d: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78b72f: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 78b735: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78b737: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 78b73d: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 78b743: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 78b749: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x78b74fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 78b74f: fcom dword ptr [ebp - 0x68] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff98u)));
/* 78b752: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 78b755: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78b757: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78b75a: jp 0x78b76b */
  if (pf) goto L_78b76b;
L_78b75c: /* 78b75c: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 78b75f: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 78b762: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78b763: jmp 0x78b6f0 */
  goto L_78b6f0;
L_78b765: /* 78b765: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78b766: jmp 0x78b645 */
  goto L_78b645;
L_78b76b: /* 78b76b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_78b76d: /* 78b76d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78b76e: jmp 0x78b6f0 */
  goto L_78b6f0;
L_78b770: /* 78b770: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78b773: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78b776: je 0x78b7ff */
  if (zf) goto L_78b7ff;
L_78b77c: /* 78b77c: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 78b77f: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 78b785: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78b787: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78b78a: jp 0x78b7ff */
  if (pf) goto L_78b7ff;
L_78b78c: /* 78b78c: mov edx, dword ptr [ebx + 0x68] */
  edx = R32((uint32_t)(ebx + 0x68u));
/* 78b78f: mov eax, dword ptr [edx + ecx*8] */
  eax = R32((uint32_t)(edx + ecx*8));
/* 78b792: mov ecx, dword ptr [ebx + 0x88] */
  ecx = R32((uint32_t)(ebx + 0x88u));
/* 78b798: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78b79b: fld dword ptr [ecx + eax*4 + 8] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x8u)); FPUSH(v); }
/* 78b79f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 78b7a2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78b7a5: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 78b7a8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78b7ab: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78b7ae: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78b7b1: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78b7b4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b7b7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78b7b9: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 78b7bb: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 78b7c1: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 78b7c7: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b7cd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78b7d0: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b7d6: fld dword ptr [ebp - 0x16c] */
  { double v = F32((uint32_t)(ebp + 0xfffffe94u)); FPUSH(v); }
/* 78b7dc: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b7e2: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 78b7e8: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 78b7ee: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 78b7f4: call 0x78ab00 */
  esp -= 4; W32(esp, 0x78b7f9u); SPILL(); f_78ab00(); if (g_unwind) return; RELOAD();
/* 78b7f9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b7fa: jmp 0x78b6d0 */
  goto L_78b6d0;
L_78b7ff: /* 78b7ff: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78b802: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 78b805: fld dword ptr [ebp + eax*4 - 0x2b8] */
  { double v = F32((uint32_t)(ebp + eax*4 + 0xfffffd48u)); FPUSH(v); }
/* 78b80c: lea eax, [ebp + eax*4 - 0x2c0] */
  eax = (uint32_t)(ebp + eax*4 + 0xfffffd40u);
/* 78b813: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 78b816: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78b819: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78b81c: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 78b81f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78b822: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78b825: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78b827: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 78b829: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 78b82f: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 78b835: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b83b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78b83e: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b844: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 78b84a: fmul dword ptr [0xa099e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa099e4u)));
/* 78b850: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 78b856: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 78b85c: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 78b862: call 0x78ab00 */
  esp -= 4; W32(esp, 0x78b867u); SPILL(); f_78ab00(); if (g_unwind) return; RELOAD();
/* 78b867: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78b868: jmp 0x78b6d0 */
  goto L_78b6d0;
L_78b86d: /* 78b86d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 78b870: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78b873: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78b874: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 78b877: jmp 0x78b2e0 */
  goto L_78b2e0;
L_78b87c: /* 78b87c: cmp dword ptr [esi + 0x44], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b880: jl 0x78b93f */
  if ((sf != of)) goto L_78b93f;
L_78b886: /* 78b886: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 78b889: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 78b88c: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 78b88f: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 78b892: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78b895: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 78b898: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78b89a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78b89d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78b8a0: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 78b8a3: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78b8a6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78b8a9: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 78b8ac: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78b8af: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78b8b2: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 78b8b5: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 78b8b8: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x78b8beu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 78b8be: xor edi, edi */
  edi = 0;
/* 78b8c0: mov ebx, 2 */
  ebx = 0x2u;
L_78b8c5: /* 78b8c5: cmp ebx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b8c8: jge 0x78b93b */
  if ((sf == of)) goto L_78b93b;
L_78b8ca: /* 78b8ca: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b8cc: jne 0x78b961 */
  if (!zf) goto L_78b961;
L_78b8d2: /* 78b8d2: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 78b8d5: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 78b8d8: fld dword ptr [eax + ecx*4 + 8] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x8u)); FPUSH(v); }
/* 78b8dc: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 78b8df: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 78b8e2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78b8e5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78b8e8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78b8ea: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78b8ec: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78b8ef: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78b8f2: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 78b8f5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78b8f8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78b8fb: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 78b8fe: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78b901: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78b904: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 78b907: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 78b90a: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x78b910u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 78b910: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78b913: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 78b916: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78b919: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 78b91c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b91e: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 78b921: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78b924: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b926: fcomp dword ptr [0xa09ca4] */
  fpu_com(ST0, F32((uint32_t)(0xa09ca4u)));
  FPOP();
/* 78b92c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78b92e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78b931: jp 0x78b938 */
  if (pf) goto L_78b938;
L_78b933: /* 78b933: mov edi, 1 */
  edi = 0x1u;
L_78b938: /* 78b938: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78b939: jmp 0x78b8c5 */
  goto L_78b8c5;
L_78b93b: /* 78b93b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b93d: jne 0x78b961 */
  if (!zf) goto L_78b961;
L_78b93f: /* 78b93f: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 78b942: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78b944: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78b945: /* 78b945: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78b948: add ecx, 0x24 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78b94b: call 0x6c2b6c */
  esp -= 4; W32(esp, 0x78b950u); SPILL(); f_6c2b6c(); if (g_unwind) return; RELOAD();
L_78b950: /* 78b950: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78b953: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78b954: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78b955: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78b95c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78b95d: mov esp, ebp */
  esp = ebp;
/* 78b95f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78b960: ret  */
  esp += 4; SPILL(); return;
L_78b961: /* 78b961: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78b964: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 78b967: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78b96a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 78b96d: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 78b970: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78b972: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 78b975: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 78b978: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78b97b: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78b97e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78b980: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78b983: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 78b986: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 78b989: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78b98c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78b98e: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 78b991: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 78b994: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 78b997: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x78b99du); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 78b99d: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 78b9a0: mov eax, edx */
  eax = edx;
/* 78b9a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78b9a4: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 78b9a7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 78b9aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78b9ad: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78b9b0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 78b9b3: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 78b9b6: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 78b9b9: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78b9bc: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78b9bf: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 78b9c2: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 78b9c5: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 78b9cb: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78b9ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b9d0: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 78b9d6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78b9d9: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 78b9df: fmul dword ptr [ebp - 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff84u)));
/* 78b9e2: xor edi, edi */
  edi = 0;
/* 78b9e4: mov ecx, 2 */
  ecx = 0x2u;
/* 78b9e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78b9eb: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 78b9ee: mov edi, edi */
  edi = edi;
L_78b9f0: /* 78b9f0: cmp ecx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78b9f3: jge 0x78ba3a */
  if ((sf == of)) goto L_78ba3a;
L_78b9f5: /* 78b9f5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78b9f7: jne 0x78b950 */
  if (!zf) goto L_78b950;
L_78b9fd: /* 78b9fd: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 78ba03: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 78ba06: fmul dword ptr [edx + eax*4 + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + eax*4 + 0x4u)));
/* 78ba0a: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 78ba0d: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 78ba13: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 78ba16: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78ba18: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 78ba1e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 78ba20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78ba22: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 78ba25: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 78ba2b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78ba2d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78ba30: jne 0x78ba37 */
  if (!zf) goto L_78ba37;
L_78ba32: /* 78ba32: mov edi, 1 */
  edi = 0x1u;
L_78ba37: /* 78ba37: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78ba38: jmp 0x78b9f0 */
  goto L_78b9f0;
L_78ba3a: /* 78ba3a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78ba3c: jne 0x78b950 */
  if (!zf) goto L_78b950;
L_78ba42: /* 78ba42: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 78ba45: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78ba47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ba48: jmp 0x78b945 */
  goto L_78b945;
}

void f_78ba4d(void) {
  LOAD_REGS();
L_78ba4d: /* 78ba4d: mov edx, dword ptr [ebp - 0x10c] */
  edx = R32((uint32_t)(ebp + 0xfffffef4u));
/* 78ba53: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78ba58: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 78ba5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ba5f: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 78ba65: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ba6au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ba6a(); return;
}

void f_78ba6a(void) {
  LOAD_REGS();
L_78ba6a: /* 78ba6a: push 0xa09c80 */
  { uint32_t v = 0xa09c80u; esp -= 4; W32(esp, v); }
/* 78ba6f: push 0xac8574 */
  { uint32_t v = 0xac8574u; esp -= 4; W32(esp, v); }
/* 78ba74: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ba7au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ba7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ba7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ba7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ba81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ba86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78ba86: guest_badaddr(0x78ba86); return;
}

void f_78bca0(void) {
  LOAD_REGS();
L_78bca0: /* 78bca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78bca1: mov ebp, esp */
  ebp = esp;
/* 78bca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78bca5: push 0x9ccc70 */
  { uint32_t v = 0x9ccc70u; esp -= 4; W32(esp, v); }
/* 78bcaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78bcb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bcb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78bcb8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78bcbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78bcbc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 78bcbf: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 78bcc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78bcc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78bcc4: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 78bcc7: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 78bcca: mov eax, dword ptr [edi + ecx + 0x20] */
  eax = R32((uint32_t)(edi + ecx + 0x20u));
/* 78bcce: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 78bcd0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78bcd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78bcd6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78bcdd: je 0x78bd67 */
  if (zf) goto L_78bd67;
L_78bce3: /* 78bce3: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 78bce6: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78bce8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78bcea: mov ecx, esi */
  ecx = esi;
/* 78bcec: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78bcf2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78bcf2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 78bcf4: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 78bcf7: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78bcf9: mov ecx, edi */
  ecx = edi;
/* 78bcfb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78bcfd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78bcff: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 78bd02: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78bd05: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 78bd08: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 78bd0b: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 78bd0e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 78bd11: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 78bd14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78bd16: je 0x78bd2c */
  if (zf) goto L_78bd2c;
L_78bd18: /* 78bd18: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 78bd1b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 78bd1d: jbe 0x78bd25 */
  if ((cf | zf)) goto L_78bd25;
L_78bd1f: /* 78bd1f: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78bd23: je 0x78bd2c */
  if (zf) goto L_78bd2c;
L_78bd25: /* 78bd25: mov eax, 1 */
  eax = 0x1u;
/* 78bd2a: jmp 0x78bd2e */
  goto L_78bd2e;
L_78bd2c: /* 78bd2c: xor eax, eax */
  eax = 0;
L_78bd2e: /* 78bd2e: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 78bd31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78bd34: mov edx, esp */
  edx = esp;
/* 78bd36: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 78bd38: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 78bd3b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78bd3e: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 78bd41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78bd42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bd43: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78bd46: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78bd49: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 78bd4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78bd4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78bd4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bd4f: call 0x78bca0 */
  esp -= 4; W32(esp, 0x78bd54u); SPILL(); f_78bca0(); if (g_unwind) return; RELOAD();
/* 78bd54: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 78bd57: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78bd5a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78bd5c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 78bd5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bd5e: mov ecx, esi */
  ecx = esi;
/* 78bd60: call 0x6c37c4 */
  esp -= 4; W32(esp, 0x78bd65u); SPILL(); f_6c37c4(); if (g_unwind) return; RELOAD();
/* 78bd65: jmp 0x78bdcf */
  goto L_78bdcf;
L_78bd67: /* 78bd67: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 78bd6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78bd6c: je 0x78bd7b */
  if (zf) goto L_78bd7b;
L_78bd6e: /* 78bd6e: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 78bd71: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 78bd73: jbe 0x78bdcc */
  if ((cf | zf)) goto L_78bdcc;
L_78bd75: /* 78bd75: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78bd79: jne 0x78bdcc */
  if (!zf) goto L_78bdcc;
L_78bd7b: /* 78bd7b: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 78bd7e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78bd80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78bd82: mov ecx, esi */
  ecx = esi;
/* 78bd84: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78bd8au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78bd8a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 78bd8c: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 78bd8f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78bd91: mov ecx, edi */
  ecx = edi;
/* 78bd93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78bd95: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78bd97: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 78bd9a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78bd9d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 78bda0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 78bda3: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 78bda6: lea edx, [ebp + 0x1c] */
  edx = (uint32_t)(ebp + 0x1cu);
/* 78bda9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78bdaa: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 78bdad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78bdb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78bdb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bdb2: mov ecx, ebx */
  ecx = ebx;
/* 78bdb4: call 0x78b270 */
  esp -= 4; W32(esp, 0x78bdb9u); SPILL(); f_78b270(); if (g_unwind) return; RELOAD();
/* 78bdb9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 78bdbc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78bdbf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78bdc1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 78bdc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bdc3: mov ecx, esi */
  ecx = esi;
/* 78bdc5: call 0x6c37c4 */
  esp -= 4; W32(esp, 0x78bdcau); SPILL(); f_6c37c4(); if (g_unwind) return; RELOAD();
/* 78bdca: jmp 0x78bdcf */
  goto L_78bdcf;
L_78bdcc: /* 78bdcc: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
L_78bdcf: /* 78bdcf: cmp dword ptr [edi + 0x24], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x24u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78bdd3: je 0x78be78 */
  if (zf) goto L_78be78;
L_78bdd9: /* 78bdd9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 78bddc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78bddd: mov ecx, edi */
  ecx = edi;
/* 78bddf: call dword ptr [0xcfa5d0] */
  esp -= 4; W32(esp, 0x78bde5u); SPILL(); f_4e1ba4(); if (g_unwind) return; /* Core!?Flip@FPlane@@QBE?AV1@XZ */ RELOAD();
/* 78bde5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78bde7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78bde9: mov ecx, esi */
  ecx = esi;
/* 78bdeb: mov ebx, eax */
  ebx = eax;
/* 78bded: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78bdf3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78bdf3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 78bdf5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 78bdf7: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 78bdfa: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78bdfc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78bdfe: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 78be01: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 78be04: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 78be07: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 78be0a: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 78be0d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 78be10: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 78be13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78be15: jne 0x78be28 */
  if (!zf) goto L_78be28;
L_78be17: /* 78be17: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 78be1a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 78be1c: jbe 0x78be24 */
  if ((cf | zf)) goto L_78be24;
L_78be1e: /* 78be1e: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78be22: je 0x78be28 */
  if (zf) goto L_78be28;
L_78be24: /* 78be24: xor eax, eax */
  eax = 0;
/* 78be26: jmp 0x78be2d */
  goto L_78be2d;
L_78be28: /* 78be28: mov eax, 1 */
  eax = 0x1u;
L_78be2d: /* 78be2d: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 78be30: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78be33: mov edx, esp */
  edx = esp;
/* 78be35: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 78be37: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 78be3a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78be3d: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 78be40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78be41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78be42: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78be45: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 78be48: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 78be4b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78be4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78be4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78be50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78be51: call 0x78bca0 */
  esp -= 4; W32(esp, 0x78be56u); SPILL(); f_78bca0(); if (g_unwind) return; RELOAD();
/* 78be56: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78be59: /* 78be59: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 78be5c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78be5e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 78be5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78be60: mov ecx, esi */
  ecx = esi;
/* 78be62: call 0x6c37c4 */
  esp -= 4; W32(esp, 0x78be67u); SPILL(); f_6c37c4(); if (g_unwind) return; RELOAD();
L_78be67: /* 78be67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78be6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78be6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78be6c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78be73: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78be74: mov esp, ebp */
  esp = ebp;
/* 78be76: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78be77: ret  */
  esp += 4; SPILL(); return;
L_78be78: /* 78be78: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 78be7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78be7d: jne 0x78be67 */
  if (!zf) goto L_78be67;
L_78be7f: /* 78be7f: mov al, byte ptr [edi + 0x56] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x56u))) & 0xffu);
/* 78be82: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 78be84: jbe 0x78be8c */
  if ((cf | zf)) goto L_78be8c;
L_78be86: /* 78be86: test byte ptr [edi + 0x57], 0x21 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x57u))); uint8_t b = (uint8_t)(0x21u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78be8a: je 0x78be67 */
  if (zf) goto L_78be67;
L_78be8c: /* 78be8c: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 78be8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78be90: mov ecx, edi */
  ecx = edi;
/* 78be92: call dword ptr [0xcfa5d0] */
  esp -= 4; W32(esp, 0x78be98u); SPILL(); f_4e1ba4(); if (g_unwind) return; /* Core!?Flip@FPlane@@QBE?AV1@XZ */ RELOAD();
/* 78be98: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78be9a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78be9c: mov ecx, esi */
  ecx = esi;
/* 78be9e: mov edi, eax */
  edi = eax;
/* 78bea0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78bea6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78bea6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78bea8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 78beaa: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 78bead: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78beaf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78beb1: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 78beb4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78beb7: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 78beba: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78bebd: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 78bec0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78bec3: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 78bec6: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 78bec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78beca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78becb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78becc: mov ecx, ebx */
  ecx = ebx;
/* 78bece: call 0x78b270 */
  esp -= 4; W32(esp, 0x78bed3u); SPILL(); f_78b270(); if (g_unwind) return; RELOAD();
/* 78bed3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78bed6: jmp 0x78be59 */
  goto L_78be59;
}

void f_78bed8(void) {
  LOAD_REGS();
L_78bed8: /* 78bed8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78bedb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78bee0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78bee3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bee4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78bee7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78beecu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78beec(); return;
}

void f_78beec(void) {
  LOAD_REGS();
L_78beec: /* 78beec: push 0xa09ca8 */
  { uint32_t v = 0xa09ca8u; esp -= 4; W32(esp, v); }
/* 78bef1: push 0xac857c */
  { uint32_t v = 0xac857cu; esp -= 4; W32(esp, v); }
/* 78bef6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78befcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78befc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78beff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78bf01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78bf03: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78bf08u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78bf08: guest_badaddr(0x78bf08); return;
}

void f_78bfb0(void) {
  LOAD_REGS();
L_78bfb0: /* 78bfb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78bfb1: mov ebp, esp */
  ebp = esp;
/* 78bfb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78bfb5: push 0x9ccc88 */
  { uint32_t v = 0x9ccc88u; esp -= 4; W32(esp, v); }
/* 78bfba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78bfc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78bfc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78bfc8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78bfcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78bfcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78bfcd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78bfd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78bfd1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78bfd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78bfd6: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 78bfd9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78bfe0: call 0x6c1e01 */
  esp -= 4; W32(esp, 0x78bfe5u); SPILL(); f_6c1e01(); if (g_unwind) return; RELOAD();
/* 78bfe5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 78bfe8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x78bfeeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 78bfee: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78bff1: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78bff4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78bff7: mov eax, esp */
  eax = esp;
/* 78bff9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78bffb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 78bffe: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78c001: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78c004: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78c007: mov ecx, dword ptr [eax + 0x108] */
  ecx = R32((uint32_t)(eax + 0x108u));
/* 78c00d: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 78c010: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c011: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c012: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78c014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c015: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c016: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78c01a: call 0x78bca0 */
  esp -= 4; W32(esp, 0x78c01fu); SPILL(); f_78bca0(); if (g_unwind) return; RELOAD();
/* 78c01f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c022: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 78c025: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78c029: call 0x6c33f0 */
  esp -= 4; W32(esp, 0x78c02eu); SPILL(); f_6c33f0(); if (g_unwind) return; RELOAD();
/* 78c02e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78c031: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78c032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c033: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78c03a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78c03b: mov esp, ebp */
  esp = ebp;
/* 78c03d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78c03e: ret  */
  esp += 4; SPILL(); return;
}

void f_78c03f(void) {
  LOAD_REGS();
L_78c03f: /* 78c03f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78c042: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78c047: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78c04a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c04b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78c04e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c053u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c053(); return;
}

void f_78c053(void) {
  LOAD_REGS();
L_78c053: /* 78c053: push 0xa09cd8 */
  { uint32_t v = 0xa09cd8u; esp -= 4; W32(esp, v); }
/* 78c058: push 0xac8584 */
  { uint32_t v = 0xac8584u; esp -= 4; W32(esp, v); }
/* 78c05d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78c063u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78c063: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c066: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78c068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78c06a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c06fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78c06f: guest_badaddr(0x78c06f); return;
}

void f_78c0a0(void) {
  LOAD_REGS();
L_78c0a0: /* 78c0a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 78c0a4: mov eax, dword ptr [eax + 0x174] */
  eax = R32((uint32_t)(eax + 0x174u));
/* 78c0aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78c0ac: je 0x78c0b5 */
  if (zf) goto L_78c0b5;
L_78c0ae: /* 78c0ae: mov dword ptr [eax + 0x18], 0 */
  W32((uint32_t)(eax + 0x18u), 0x0u);
L_78c0b5: /* 78c0b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78c0d0(void) {
  LOAD_REGS();
L_78c0d0: /* 78c0d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78c0d1: mov ebp, esp */
  ebp = esp;
/* 78c0d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78c0d5: push 0x9ccca0 */
  { uint32_t v = 0x9ccca0u; esp -= 4; W32(esp, v); }
/* 78c0da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78c0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c0e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78c0e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78c0eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78c0ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c0ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78c0ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78c0f1: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 78c0f3: mov edi, ecx */
  edi = ecx;
/* 78c0f5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78c0fc: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c102u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c102: mov esi, eax */
  esi = eax;
/* 78c104: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 78c107: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 78c109: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 78c10b: push 0xfa00 */
  { uint32_t v = 0xfa00u; esp -= 4; W32(esp, v); }
/* 78c110: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 78c113: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x78c119u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c119: push 0xfa0 */
  { uint32_t v = 0xfa0u; esp -= 4; W32(esp, v); }
/* 78c11e: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 78c121: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c127u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c127: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 78c12a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 78c12d: mov ecx, eax */
  ecx = eax;
/* 78c12f: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 78c132: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 78c135: mov edi, 0x3e8 */
  edi = 0x3e8u;
/* 78c13a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c13b: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 78c13e: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c144u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c144: push 0x17700 */
  { uint32_t v = 0x17700u; esp -= 4; W32(esp, v); }
/* 78c149: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 78c14c: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c152u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c152: push 0x4e20 */
  { uint32_t v = 0x4e20u; esp -= 4; W32(esp, v); }
/* 78c157: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 78c15a: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 78c15d: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c163: push 0xcc */
  { uint32_t v = 0xccu; esp -= 4; W32(esp, v); }
/* 78c168: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 78c16b: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 78c16e: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c174u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c174: push 0xa000 */
  { uint32_t v = 0xa000u; esp -= 4; W32(esp, v); }
/* 78c179: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 78c17c: mov dword ptr [esi + 0x40], 0x11 */
  W32((uint32_t)(esi + 0x40u), 0x11u);
/* 78c183: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c189u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c189: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 78c18c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78c18e: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 78c191: mov dword ptr [eax + 8], 0x400 */
  W32((uint32_t)(eax + 0x8u), 0x400u);
/* 78c198: mov edi, 1 */
  edi = 0x1u;
/* 78c19d: mov ebx, 0x320 */
  ebx = 0x320u;
L_78c1a2: /* 78c1a2: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78c1a5: jg 0x78c1c8 */
  if ((!zf && sf == of)) goto L_78c1c8;
L_78c1a7: /* 78c1a7: push 0x7d00 */
  { uint32_t v = 0x7d00u; esp -= 4; W32(esp, v); }
/* 78c1ac: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78c1b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c1b2: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 78c1b5: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 78c1b8: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 78c1bb: mov dword ptr [ecx + edx], eax */
  W32((uint32_t)(ecx + edx), eax);
/* 78c1be: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 78c1c1: mov dword ptr [eax + ecx + 8], ebx */
  W32((uint32_t)(eax + ecx + 0x8u), ebx);
/* 78c1c5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 78c1c6: jmp 0x78c1a2 */
  goto L_78c1a2;
L_78c1c8: /* 78c1c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78c1cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78c1cc: mov eax, esi */
  eax = esi;
/* 78c1ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c1cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78c1d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78c1d7: mov esp, ebp */
  esp = ebp;
/* 78c1d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78c1da: ret  */
  esp += 4; SPILL(); return;
}

void f_78c1db(void) {
  LOAD_REGS();
L_78c1db: /* 78c1db: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78c1de: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78c1e3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 78c1e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c1e7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78c1ea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c1efu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c1ef(); return;
}

void f_78c1ef(void) {
  LOAD_REGS();
L_78c1ef: /* 78c1ef: push 0xa09d08 */
  { uint32_t v = 0xa09d08u; esp -= 4; W32(esp, v); }
/* 78c1f4: push 0xac8c60 */
  { uint32_t v = 0xac8c60u; esp -= 4; W32(esp, v); }
/* 78c1f9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78c1ffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78c1ff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c202: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78c204: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78c206: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c20bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78c20b: guest_badaddr(0x78c20b); return;
}

void f_78c260(void) {
  LOAD_REGS();
L_78c260: /* 78c260: mov eax, 1 */
  eax = 0x1u;
/* 78c265: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78c280(void) {
  LOAD_REGS();
L_78c280: /* 78c280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c281: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 78c285: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c286: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x78c28bu); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 78c28b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78c28d: je 0x78c2a9 */
  if (zf) goto L_78c2a9;
L_78c28f: /* 78c28f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78c294: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78c296: push 0xac9b5c */
  { uint32_t v = 0xac9b5cu; esp -= 4; W32(esp, v); }
/* 78c29b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c29c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c2a2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c2a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c2a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c2a6: ret 8 */
  esp += 12; SPILL(); return;
L_78c2a9: /* 78c2a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c2aa: call 0x912440 */
  esp -= 4; W32(esp, 0x78c2afu); SPILL(); f_912440(); if (g_unwind) return; RELOAD();
/* 78c2af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78c2b1: je 0x78c2ba */
  if (zf) goto L_78c2ba;
L_78c2b3: /* 78c2b3: push 0xac9b7c */
  { uint32_t v = 0xac9b7cu; esp -= 4; W32(esp, v); }
/* 78c2b8: jmp 0x78c308 */
  goto L_78c308;
L_78c2ba: /* 78c2ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c2bb: call 0x90fe00 */
  esp -= 4; W32(esp, 0x78c2c0u); SPILL(); f_90fe00(); if (g_unwind) return; RELOAD();
/* 78c2c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78c2c2: je 0x78c2df */
  if (zf) goto L_78c2df;
L_78c2c4: /* 78c2c4: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78c2ca: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78c2cc: push 0xac9ba0 */
  { uint32_t v = 0xac9ba0u; esp -= 4; W32(esp, v); }
/* 78c2d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c2d2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c2d8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c2d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c2db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c2dc: ret 8 */
  esp += 12; SPILL(); return;
L_78c2df: /* 78c2df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c2e0: call 0x90f7a0 */
  esp -= 4; W32(esp, 0x78c2e5u); SPILL(); f_90f7a0(); if (g_unwind) return; RELOAD();
/* 78c2e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78c2e7: je 0x78c303 */
  if (zf) goto L_78c303;
L_78c2e9: /* 78c2e9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78c2ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78c2f0: push 0xac9bd0 */
  { uint32_t v = 0xac9bd0u; esp -= 4; W32(esp, v); }
/* 78c2f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c2f6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c2fcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c2fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c2ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c300: ret 8 */
  esp += 12; SPILL(); return;
L_78c303: /* 78c303: push 0xac9c04 */
  { uint32_t v = 0xac9c04u; esp -= 4; W32(esp, v); }
L_78c308: /* 78c308: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78c30e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78c310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c311: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c317u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c31a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c31b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_78c350(void) {
  LOAD_REGS();
L_78c350: /* 78c350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78c351: mov ebp, esp */
  ebp = esp;
/* 78c353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78c355: push 0x9cccb0 */
  { uint32_t v = 0x9cccb0u; esp -= 4; W32(esp, v); }
/* 78c35a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78c360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78c368: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78c36b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 78c370: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78c372: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78c373: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c374: xor esi, esi */
  esi = 0;
/* 78c376: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78c378: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78c379: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78c37c: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78c37f: je 0x78c3a9 */
  if (zf) goto L_78c3a9;
L_78c381: /* 78c381: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78c387: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78c389: push 0xaca0a8 */
  { uint32_t v = 0xaca0a8u; esp -= 4; W32(esp, v); }
/* 78c38e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c38f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c395u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c395: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c398: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78c39b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78c3a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78c3a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c3a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78c3a5: mov esp, ebp */
  esp = ebp;
/* 78c3a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78c3a8: ret  */
  esp += 4; SPILL(); return;
L_78c3a9: /* 78c3a9: cmp dword ptr [0xb21bb4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb21bb4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78c3af: jne 0x78c6ab */
  if (!zf) goto L_78c6ab;
L_78c3b5: /* 78c3b5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78c3ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78c3bc: push 0xaca100 */
  { uint32_t v = 0xaca100u; esp -= 4; W32(esp, v); }
/* 78c3c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c3c2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c3c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c3c8: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 78c3ce: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 78c3d0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78c3d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c3d5: push 0xaca148 */
  { uint32_t v = 0xaca148u; esp -= 4; W32(esp, v); }
/* 78c3da: push 0x15248 */
  { uint32_t v = 0x15248u; esp -= 4; W32(esp, v); }
/* 78c3df: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x78c3e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78c3e1: push 0x15248 */
  { uint32_t v = 0x15248u; esp -= 4; W32(esp, v); }
/* 78c3e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c3e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c3e8: mov dword ptr [0xb21bb4], eax */
  W32((uint32_t)(0xb21bb4u), eax);
/* 78c3ed: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x78c3f3u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 78c3f3: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78c3f9: mov ebx, 1 */
  ebx = 0x1u;
/* 78c3fe: mov dword ptr [ecx + 0x15228], ebx */
  W32((uint32_t)(ecx + 0x15228u), ebx);
/* 78c404: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78c40a: mov dword ptr [edx + 0x15224], ebx */
  W32((uint32_t)(edx + 0x15224u), ebx);
/* 78c410: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78c415: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c418: push 0xaca164 */
  { uint32_t v = 0xaca164u; esp -= 4; W32(esp, v); }
/* 78c41d: mov dword ptr [eax + 0x1522c], ebx */
  W32((uint32_t)(eax + 0x1522cu), ebx);
/* 78c423: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 78c426: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c42bu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c42b: push 0x6c4a1b */
  { uint32_t v = 0x6c4a1bu; esp -= 4; W32(esp, v); }
/* 78c430: mov dword ptr [0xb02198], 0x6c4269 */
  W32((uint32_t)(0xb02198u), 0x6c4269u);
/* 78c43a: mov dword ptr [0xb021a4], 0x6c6762 */
  W32((uint32_t)(0xb021a4u), 0x6c6762u);
/* 78c444: mov dword ptr [0xb021ac], 0x6c3382 */
  W32((uint32_t)(0xb021acu), 0x6c3382u);
/* 78c44e: mov dword ptr [0xb0219c], 0x6c1339 */
  W32((uint32_t)(0xb0219cu), 0x6c1339u);
/* 78c458: mov dword ptr [0xb02208], 0x6c1032 */
  W32((uint32_t)(0xb02208u), 0x6c1032u);
/* 78c462: mov dword ptr [0xb0220c], 0x6c833c */
  W32((uint32_t)(0xb0220cu), 0x6c833cu);
/* 78c46c: mov dword ptr [0xb02210], 0x6c29d2 */
  W32((uint32_t)(0xb02210u), 0x6c29d2u);
/* 78c476: mov dword ptr [0xb02214], 0x6c2324 */
  W32((uint32_t)(0xb02214u), 0x6c2324u);
/* 78c480: mov dword ptr [0xb02218], 0x6c4c46 */
  W32((uint32_t)(0xb02218u), 0x6c4c46u);
/* 78c48a: mov dword ptr [0xb0221c], 0x6ca696 */
  W32((uint32_t)(0xb0221cu), 0x6ca696u);
/* 78c494: mov dword ptr [0xb02220], 0x6c9395 */
  W32((uint32_t)(0xb02220u), 0x6c9395u);
/* 78c49e: call 0x971ca0 */
  esp -= 4; W32(esp, 0x78c4a3u); SPILL(); f_971ca0(); if (g_unwind) return; RELOAD();
/* 78c4a3: push 0x6c4a1b */
  { uint32_t v = 0x6c4a1bu; esp -= 4; W32(esp, v); }
/* 78c4a8: call 0x971ce0 */
  esp -= 4; W32(esp, 0x78c4adu); SPILL(); f_971ce0(); if (g_unwind) return; RELOAD();
/* 78c4ad: push 0x6c4a1b */
  { uint32_t v = 0x6c4a1bu; esp -= 4; W32(esp, v); }
/* 78c4b2: call 0x971d00 */
  esp -= 4; W32(esp, 0x78c4b7u); SPILL(); f_971d00(); if (g_unwind) return; RELOAD();
/* 78c4b7: push 0x6c4a1b */
  { uint32_t v = 0x6c4a1bu; esp -= 4; W32(esp, v); }
/* 78c4bc: call 0x971d20 */
  esp -= 4; W32(esp, 0x78c4c1u); SPILL(); f_971d20(); if (g_unwind) return; RELOAD();
/* 78c4c1: push 0x6c6d34 */
  { uint32_t v = 0x6c6d34u; esp -= 4; W32(esp, v); }
/* 78c4c6: call 0x971d40 */
  esp -= 4; W32(esp, 0x78c4cbu); SPILL(); f_971d40(); if (g_unwind) return; RELOAD();
/* 78c4cb: push 0x6c6d34 */
  { uint32_t v = 0x6c6d34u; esp -= 4; W32(esp, v); }
/* 78c4d0: call 0x971d80 */
  esp -= 4; W32(esp, 0x78c4d5u); SPILL(); f_971d80(); if (g_unwind) return; RELOAD();
/* 78c4d5: push 0x6c876a */
  { uint32_t v = 0x6c876au; esp -= 4; W32(esp, v); }
/* 78c4da: call 0x971da0 */
  esp -= 4; W32(esp, 0x78c4dfu); SPILL(); f_971da0(); if (g_unwind) return; RELOAD();
/* 78c4df: push 0x6c6d34 */
  { uint32_t v = 0x6c6d34u; esp -= 4; W32(esp, v); }
/* 78c4e4: call 0x971dc0 */
  esp -= 4; W32(esp, 0x78c4e9u); SPILL(); f_971dc0(); if (g_unwind) return; RELOAD();
/* 78c4e9: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78c4ec: push 0xaca194 */
  { uint32_t v = 0xaca194u; esp -= 4; W32(esp, v); }
/* 78c4f1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 78c4f5: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c4fau); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c4fa: push 0x3f733333 */
  { uint32_t v = 0x3f733333u; esp -= 4; W32(esp, v); }
/* 78c4ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78c500: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 78c505: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 78c507: call 0x929990 */
  esp -= 4; W32(esp, 0x78c50cu); SPILL(); f_929990(); if (g_unwind) return; RELOAD();
/* 78c50c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78c512: push 0xaca1b4 */
  { uint32_t v = 0xaca1b4u; esp -= 4; W32(esp, v); }
/* 78c517: mov dword ptr [ecx + 0x1500c], eax */
  W32((uint32_t)(ecx + 0x1500cu), eax);
/* 78c51d: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c522u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c522: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78c528: mov eax, dword ptr [edx + 0x1500c] */
  eax = R32((uint32_t)(edx + 0x1500cu));
/* 78c52e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c52f: call 0x92f570 */
  esp -= 4; W32(esp, 0x78c534u); SPILL(); f_92f570(); if (g_unwind) return; RELOAD();
/* 78c534: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78c53a: mov edx, dword ptr [ecx + 0x1500c] */
  edx = R32((uint32_t)(ecx + 0x1500cu));
/* 78c540: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c541: call 0x945230 */
  esp -= 4; W32(esp, 0x78c546u); SPILL(); f_945230(); if (g_unwind) return; RELOAD();
/* 78c546: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78c54b: mov ecx, dword ptr [eax + 0x1500c] */
  ecx = R32((uint32_t)(eax + 0x1500cu));
/* 78c551: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c552: call 0x926cf0 */
  esp -= 4; W32(esp, 0x78c557u); SPILL(); f_926cf0(); if (g_unwind) return; RELOAD();
/* 78c557: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78c55d: mov eax, dword ptr [edx + 0x1500c] */
  eax = R32((uint32_t)(edx + 0x1500cu));
/* 78c563: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c564: call 0x92a980 */
  esp -= 4; W32(esp, 0x78c569u); SPILL(); f_92a980(); if (g_unwind) return; RELOAD();
/* 78c569: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78c56f: mov edx, dword ptr [ecx + 0x1500c] */
  edx = R32((uint32_t)(ecx + 0x1500cu));
/* 78c575: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c576: call 0x92f4f0 */
  esp -= 4; W32(esp, 0x78c57bu); SPILL(); f_92f4f0(); if (g_unwind) return; RELOAD();
/* 78c57b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78c580: mov ecx, dword ptr [eax + 0x1500c] */
  ecx = R32((uint32_t)(eax + 0x1500cu));
/* 78c586: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c587: call 0x945ac0 */
  esp -= 4; W32(esp, 0x78c58cu); SPILL(); f_945ac0(); if (g_unwind) return; RELOAD();
/* 78c58c: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78c592: mov eax, dword ptr [edx + 0x1500c] */
  eax = R32((uint32_t)(edx + 0x1500cu));
/* 78c598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c599: call 0x928470 */
  esp -= 4; W32(esp, 0x78c59eu); SPILL(); f_928470(); if (g_unwind) return; RELOAD();
/* 78c59e: push 0xaca1e8 */
  { uint32_t v = 0xaca1e8u; esp -= 4; W32(esp, v); }
/* 78c5a3: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c5a8u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c5a8: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 78c5ad: call 0x92a4b0 */
  esp -= 4; W32(esp, 0x78c5b2u); SPILL(); f_92a4b0(); if (g_unwind) return; RELOAD();
/* 78c5b2: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 78c5b8: mov dword ptr [ecx + 0x15238], eax */
  W32((uint32_t)(ecx + 0x15238u), eax);
/* 78c5be: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 78c5c4: mov dword ptr [edx + 0x15230], esi */
  W32((uint32_t)(edx + 0x15230u), esi);
/* 78c5ca: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78c5cf: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78c5d2: push 0xaca238 */
  { uint32_t v = 0xaca238u; esp -= 4; W32(esp, v); }
/* 78c5d7: mov dword ptr [eax + 0x15234], esi */
  W32((uint32_t)(eax + 0x15234u), esi);
/* 78c5dd: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78c5e1: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c5e6u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c5e6: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78c5eb: lea ecx, [eax + 0x15014] */
  ecx = (uint32_t)(eax + 0x15014u);
/* 78c5f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c5f2: add eax, 0x15010 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15010u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78c5f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c5f8: call 0x6c5bc8 */
  esp -= 4; W32(esp, 0x78c5fdu); SPILL(); f_6c5bc8(); if (g_unwind) return; RELOAD();
/* 78c5fd: push 0xaca2bc */
  { uint32_t v = 0xaca2bcu; esp -= 4; W32(esp, v); }
/* 78c602: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 78c605: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c60au); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c60a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78c60d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78c614: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78c615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c616: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78c617: mov esp, ebp */
  esp = ebp;
/* 78c619: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78c61a: ret  */
  esp += 4; SPILL(); return;
L_78c6ab: /* 78c6ab: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78c6b1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78c6b3: push 0xaca260 */
  { uint32_t v = 0xaca260u; esp -= 4; W32(esp, v); }
/* 78c6b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c6b9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c6bfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c6bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c6c2: push 0xaca2bc */
  { uint32_t v = 0xaca2bcu; esp -= 4; W32(esp, v); }
/* 78c6c7: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c6ccu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c6cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78c6cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78c6d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c6d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78c6d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78c6d9: mov esp, ebp */
  esp = ebp;
/* 78c6db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78c6dc: ret  */
  esp += 4; SPILL(); return;
}

void f_78c61b(void) {
  LOAD_REGS();
L_78c61b: /* 78c61b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78c61e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78c623: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78c626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c627: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78c62a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c62fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c62f(); return;
}

void f_78c62f(void) {
  LOAD_REGS();
L_78c62f: /* 78c62f: push 0xa09d90 */
  { uint32_t v = 0xa09d90u; esp -= 4; W32(esp, v); }
/* 78c634: push 0xaca254 */
  { uint32_t v = 0xaca254u; esp -= 4; W32(esp, v); }
/* 78c639: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78c63fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78c63f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c642: xor esi, esi */
  esi = 0;
/* 78c644: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c645: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c646: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c64bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c64b(); return;
}

void f_78c64b(void) {
  LOAD_REGS();
L_78c64b: /* 78c64b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78c64e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78c653: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 78c656: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c657: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 78c65a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c65fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c65f(); return;
}

void f_78c65f(void) {
  LOAD_REGS();
L_78c65f: /* 78c65f: push 0xa09d78 */
  { uint32_t v = 0xa09d78u; esp -= 4; W32(esp, v); }
/* 78c664: push 0xaca230 */
  { uint32_t v = 0xaca230u; esp -= 4; W32(esp, v); }
/* 78c669: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78c66fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78c66f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c672: xor esi, esi */
  esi = 0;
/* 78c674: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c675: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c676: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c67bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c67b(); return;
}

void f_78c67b(void) {
  LOAD_REGS();
L_78c67b: /* 78c67b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78c67e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78c683: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 78c686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78c687: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78c68a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c68fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c68f(); return;
}

void f_78c68f(void) {
  LOAD_REGS();
L_78c68f: /* 78c68f: push 0xa09d5c */
  { uint32_t v = 0xa09d5cu; esp -= 4; W32(esp, v); }
/* 78c694: push 0xaca18c */
  { uint32_t v = 0xaca18cu; esp -= 4; W32(esp, v); }
/* 78c699: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78c69fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78c69f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c6a2: xor esi, esi */
  esi = 0;
/* 78c6a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c6a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c6a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c6abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 78c6ab: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78c6b1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78c6b3: push 0xaca260 */
  { uint32_t v = 0xaca260u; esp -= 4; W32(esp, v); }
/* 78c6b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78c6b9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78c6bfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78c6bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c6c2: push 0xaca2bc */
  { uint32_t v = 0xaca2bcu; esp -= 4; W32(esp, v); }
/* 78c6c7: call 0x6c7405 */
  esp -= 4; W32(esp, 0x78c6ccu); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 78c6cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78c6cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78c6d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78c6d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78c6d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78c6d9: mov esp, ebp */
  esp = ebp;
/* 78c6db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78c6dc: ret  */
  esp += 4; SPILL(); return;
}

void f_78c6dd(void) {
  LOAD_REGS();
L_78c6dd: /* 78c6dd: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78c6e0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78c6e5: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 78c6e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78c6e9: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78c6ec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c6f1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78c6f1(); return;
}

void f_78c6f1(void) {
  LOAD_REGS();
L_78c6f1: /* 78c6f1: push 0xa09d38 */
  { uint32_t v = 0xa09d38u; esp -= 4; W32(esp, v); }
/* 78c6f6: push 0xaca2e8 */
  { uint32_t v = 0xaca2e8u; esp -= 4; W32(esp, v); }
/* 78c6fb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78c701u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78c701: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78c704: xor esi, esi */
  esi = 0;
/* 78c706: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c707: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78c708: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78c70du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78c70d: guest_badaddr(0x78c70d); return;
}

void f_78c800(void) {
  LOAD_REGS();
L_78c800: /* 78c800: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 78c803: ret  */
  esp += 4; SPILL(); return;
}

void f_78c820(void) {
  LOAD_REGS();
L_78c820: /* 78c820: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78c822: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78c824: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78c827: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 78c82a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78c82d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78c830: ret  */
  esp += 4; SPILL(); return;
}

void f_78c850(void) {
  LOAD_REGS();
L_78c850: /* 78c850: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78c852: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78c854: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 78c856: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78c859: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78c85c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 78c85f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78c862: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 78c865: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78c868: ret  */
  esp += 4; SPILL(); return;
}

void f_78c880(void) {
  LOAD_REGS();
L_78c880: /* 78c880: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78c883: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 78c886: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78c889: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 78c88c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78c88e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78c890: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 78c892: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78c894: ret  */
  esp += 4; SPILL(); return;
}

void f_78c8b0(void) {
  LOAD_REGS();
L_78c8b0: /* 78c8b0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78c8b3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 78c8b6: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78c8b9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 78c8bc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78c8be: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 78c8c0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78c8c3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 78c8c5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78c8c8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 78c8ca: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78c8cc: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 78c8cf: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78c8d1: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 78c8d4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78c8d6: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 78c8d9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78c8db: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78c8de: ret  */
  esp += 4; SPILL(); return;
}

void f_78c8f0(void) {
  LOAD_REGS();
L_78c8f0: /* 78c8f0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78c8f3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78c8f5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78c8f8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78c8fa: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78c8fc: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 78c8fe: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 78c900: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78c902: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78c904: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78c906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78c908: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 78c90a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78c90c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78c90e: ret  */
  esp += 4; SPILL(); return;
}

void f_78c920(void) {
  LOAD_REGS();
L_78c920: /* 78c920: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78c923: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 78c925: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78c928: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78c92a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78c92c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 78c92e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 78c930: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78c932: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78c934: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78c936: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78c938: fsqrt  */
  ST0 = sqrt(ST0);
/* 78c93a: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 78c93c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78c93e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78c940: ret  */
  esp += 4; SPILL(); return;
}

void f_78c960(void) {
  LOAD_REGS();
L_78c960: /* 78c960: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78c964: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 78c966: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 78c968: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78c96c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 78c96f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 78c972: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78c976: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 78c979: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 78c97c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78c990(void) {
  LOAD_REGS();
L_78c990: /* 78c990: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78c994: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 78c996: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 78c998: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 78c99a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78c99e: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 78c9a1: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 78c9a4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 78c9a7: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 78c9ab: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 78c9ae: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 78c9b1: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 78c9b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_78c9d0(void) {
  LOAD_REGS();
L_78c9d0: /* 78c9d0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78c9d2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78c9d5: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78c9d8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78c9da: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 78c9dc: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78c9de: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78c9e0: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 78c9e2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78c9e4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78c9e6: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 78c9e8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78c9ea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78c9ec: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78c9f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78c9f4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78c9f7: jne 0x78ca18 */
  if (!zf) goto L_78ca18;
L_78c9f9: /* 78c9f9: fsqrt  */
  ST0 = sqrt(ST0);
/* 78c9fb: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 78ca01: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 78ca03: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78ca05: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 78ca07: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 78ca09: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78ca0b: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 78ca0e: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 78ca11: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 78ca14: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 78ca17: ret  */
  esp += 4; SPILL(); return;
L_78ca18: /* 78ca18: xor eax, eax */
  eax = 0;
/* 78ca1a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78ca1c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 78ca22: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 78ca28: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78ca2b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78ca2e: ret  */
  esp += 4; SPILL(); return;
}

void f_78ca50(void) {
  LOAD_REGS();
L_78ca50: /* 78ca50: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78ca52: fabs  */
  ST0 = fabs(ST0);
/* 78ca54: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78ca57: fabs  */
  ST0 = fabs(ST0);
/* 78ca59: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78ca5b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78ca5d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 78ca5f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78ca62: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78ca64: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78ca67: jp 0x78cab5 */
  if (pf) goto L_78cab5;
L_78ca69: /* 78ca69: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78ca6b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78ca6d: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 78ca6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78ca71: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78ca73: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 78ca75: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78ca77: fsqrt  */
  ST0 = sqrt(ST0);
/* 78ca79: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 78ca7b: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78ca81: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78ca83: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 78ca86: mov dword ptr [edx + 4], 0 */
  W32((uint32_t)(edx + 0x4u), 0x0u);
/* 78ca8d: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 78ca8f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 78ca91: fchs  */
  ST0 = -ST0;
/* 78ca93: fst dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0);
/* 78ca96: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 78ca99: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 78ca9b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78ca9e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78caa0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78caa2: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78caa5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78caa7: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 78caaa: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78caad: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78caaf: fchs  */
  ST0 = -ST0;
/* 78cab1: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 78cab4: ret  */
  esp += 4; SPILL(); return;
L_78cab5: /* 78cab5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 78cab8: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 78cabe: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78cac0: fmulp st(2) */
  STI(2) = STI(2) * ST0;
  FPOP();
/* 78cac2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78cac4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78cac6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 78cac8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78caca: fsqrt  */
  ST0 = sqrt(ST0);
/* 78cacc: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 78cace: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78cad4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78cad6: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 78cad9: fchs  */
  ST0 = -ST0;
/* 78cadb: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 78cade: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 78cae1: fst dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0);
/* 78cae4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 78cae7: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 78caea: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78caed: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78caef: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 78caf1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78caf3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78caf6: fchs  */
  ST0 = -ST0;
/* 78caf8: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 78cafb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78cafd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78cb00: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 78cb03: ret  */
  esp += 4; SPILL(); return;
}

void f_78cb40(void) {
  LOAD_REGS();
L_78cb40: /* 78cb40: xor ecx, ecx */
  ecx = 0;
/* 78cb42: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 78cb47: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78cb49: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 78cb4c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78cb4f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 78cb52: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 78cb55: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 78cb58: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 78cb5b: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 78cb5e: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 78cb61: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 78cb64: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 78cb67: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 78cb6a: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 78cb6d: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 78cb70: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 78cb73: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 78cb76: ret  */
  esp += 4; SPILL(); return;
}

void f_78cb90(void) {
  LOAD_REGS();
L_78cb90: /* 78cb90: lea eax, [ecx + 1] */
  eax = (uint32_t)(ecx + 0x1u);
/* 78cb93: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 78cb96: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 78cb98: ret  */
  esp += 4; SPILL(); return;
}

void f_78cbb0(void) {
  LOAD_REGS();
L_78cbb0: /* 78cbb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78cbb1: mov ebp, esp */
  ebp = esp;
/* 78cbb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78cbb5: push 0x9cccc0 */
  { uint32_t v = 0x9cccc0u; esp -= 4; W32(esp, v); }
/* 78cbba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78cbc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78cbc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78cbc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78cbcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78cbcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78cbcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78cbce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78cbd1: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 78cbd3: mov esi, ecx */
  esi = ecx;
/* 78cbd5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78cbdc: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78cbe2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78cbe2: mov edi, eax */
  edi = eax;
/* 78cbe4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cbe6: jne 0x78cc09 */
  if (!zf) goto L_78cc09;
L_78cbe8: /* 78cbe8: push 0xac8c68 */
  { uint32_t v = 0xac8c68u; esp -= 4; W32(esp, v); }
/* 78cbed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78cbee: call 0x971e20 */
  esp -= 4; W32(esp, 0x78cbf3u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 78cbf3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78cbf6: xor eax, eax */
  eax = 0;
/* 78cbf8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cbfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cc02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cc03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cc04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cc05: mov esp, ebp */
  esp = ebp;
/* 78cc07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cc08: ret  */
  esp += 4; SPILL(); return;
L_78cc09: /* 78cc09: lea ebx, [esi + 1] */
  ebx = (uint32_t)(esi + 0x1u);
/* 78cc0c: imul ebx, esi */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(esi);
  ebx = (uint32_t)r;
  }
/* 78cc0f: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 78cc11: mov eax, ebx */
  eax = ebx;
/* 78cc13: imul eax, eax, 0x54 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x54u);
  eax = (uint32_t)r;
  }
/* 78cc16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78cc17: mov dword ptr [edi], esi */
  W32((uint32_t)(edi), esi);
/* 78cc19: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78cc1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78cc1f: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 78cc22: mov esi, eax */
  esi = eax;
/* 78cc24: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 78cc2b: jmp 0x78cc30 */
  goto L_78cc30;
L_78cc30: /* 78cc30: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 78cc33: jae 0x78cc52 */
  if (!cf) goto L_78cc52;
L_78cc35: /* 78cc35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78cc36: call 0x911dd0 */
  esp -= 4; W32(esp, 0x78cc3bu); SPILL(); f_911dd0(); if (g_unwind) return; RELOAD();
/* 78cc3b: xor eax, eax */
  eax = 0;
/* 78cc3d: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 78cc40: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 78cc43: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 78cc46: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78cc49: add esi, 0x54 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78cc4c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78cc4d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78cc50: jmp 0x78cc30 */
  goto L_78cc30;
L_78cc52: /* 78cc52: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* 78cc54: mov dword ptr [edi + 4], 1 */
  W32((uint32_t)(edi + 0x4u), 0x1u);
/* 78cc5b: call 0x92a4b0 */
  esp -= 4; W32(esp, 0x78cc60u); SPILL(); f_92a4b0(); if (g_unwind) return; RELOAD();
/* 78cc60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78cc63: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 78cc66: call 0x78c0d0 */
  esp -= 4; W32(esp, 0x78cc6bu); SPILL(); f_78c0d0(); if (g_unwind) return; RELOAD();
/* 78cc6b: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 78cc70: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78cc73: mov dword ptr [edi + 0x18], 0x32 */
  W32((uint32_t)(edi + 0x18u), 0x32u);
/* 78cc7a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78cc80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78cc80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cc83: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 78cc86: mov eax, edi */
  eax = edi;
/* 78cc88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cc89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cc8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cc91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cc92: mov esp, ebp */
  esp = ebp;
/* 78cc94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cc95: ret  */
  esp += 4; SPILL(); return;
}

void f_78cc2d(void) {
  LOAD_REGS();
L_78cc2d: /* 78cc2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_78cc30: /* 78cc30: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 78cc33: jae 0x78cc52 */
  if (!cf) goto L_78cc52;
L_78cc35: /* 78cc35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78cc36: call 0x911dd0 */
  esp -= 4; W32(esp, 0x78cc3bu); SPILL(); f_911dd0(); if (g_unwind) return; RELOAD();
/* 78cc3b: xor eax, eax */
  eax = 0;
/* 78cc3d: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 78cc40: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 78cc43: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 78cc46: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78cc49: add esi, 0x54 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 78cc4c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78cc4d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78cc50: jmp 0x78cc30 */
  goto L_78cc30;
L_78cc52: /* 78cc52: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* 78cc54: mov dword ptr [edi + 4], 1 */
  W32((uint32_t)(edi + 0x4u), 0x1u);
/* 78cc5b: call 0x92a4b0 */
  esp -= 4; W32(esp, 0x78cc60u); SPILL(); f_92a4b0(); if (g_unwind) return; RELOAD();
/* 78cc60: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78cc63: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 78cc66: call 0x78c0d0 */
  esp -= 4; W32(esp, 0x78cc6bu); SPILL(); f_78c0d0(); if (g_unwind) return; RELOAD();
/* 78cc6b: push 0x7d0 */
  { uint32_t v = 0x7d0u; esp -= 4; W32(esp, v); }
/* 78cc70: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78cc73: mov dword ptr [edi + 0x18], 0x32 */
  W32((uint32_t)(edi + 0x18u), 0x32u);
/* 78cc7a: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x78cc80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78cc80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cc83: mov dword ptr [edi + 0x14], eax */
  W32((uint32_t)(edi + 0x14u), eax);
/* 78cc86: mov eax, edi */
  eax = edi;
/* 78cc88: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cc89: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cc8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cc91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cc92: mov esp, ebp */
  esp = ebp;
/* 78cc94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cc95: ret  */
  esp += 4; SPILL(); return;
}

void f_78cc96(void) {
  LOAD_REGS();
L_78cc96: /* 78cc96: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78cc99: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 78cc9e: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 78cca1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78cca2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 78cca5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ccaau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78ccaa(); return;
}

void f_78ccaa(void) {
  LOAD_REGS();
L_78ccaa: /* 78ccaa: push 0xa09da4 */
  { uint32_t v = 0xa09da4u; esp -= 4; W32(esp, v); }
/* 78ccaf: push 0xac8ca0 */
  { uint32_t v = 0xac8ca0u; esp -= 4; W32(esp, v); }
/* 78ccb4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78ccbau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78ccba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78ccbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ccbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78ccc1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78ccc6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78ccc6: guest_badaddr(0x78ccc6); return;
}

void f_78cd20(void) {
  LOAD_REGS();
L_78cd20: /* 78cd20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78cd21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 78cd25: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cd27: je 0x78cd3e */
  if (zf) goto L_78cd3e;
L_78cd29: /* 78cd29: push 0xb202c8 */
  { uint32_t v = 0xb202c8u; esp -= 4; W32(esp, v); }
/* 78cd2e: mov ecx, esi */
  ecx = esi;
/* 78cd30: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78cd36u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78cd36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cd38: je 0x78cd3e */
  if (zf) goto L_78cd3e;
L_78cd3a: /* 78cd3a: mov eax, esi */
  eax = esi;
/* 78cd3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cd3d: ret  */
  esp += 4; SPILL(); return;
L_78cd3e: /* 78cd3e: xor eax, eax */
  eax = 0;
/* 78cd40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cd41: ret  */
  esp += 4; SPILL(); return;
}

void f_78cd60(void) {
  LOAD_REGS();
L_78cd60: /* 78cd60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78cd61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 78cd65: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cd67: je 0x78cd7e */
  if (zf) goto L_78cd7e;
L_78cd69: /* 78cd69: push 0xcd93a0 */
  { uint32_t v = 0xcd93a0u; esp -= 4; W32(esp, v); }
/* 78cd6e: mov ecx, esi */
  ecx = esi;
/* 78cd70: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78cd76u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78cd76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cd78: je 0x78cd7e */
  if (zf) goto L_78cd7e;
L_78cd7a: /* 78cd7a: mov eax, esi */
  eax = esi;
/* 78cd7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cd7d: ret  */
  esp += 4; SPILL(); return;
L_78cd7e: /* 78cd7e: xor eax, eax */
  eax = 0;
/* 78cd80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cd81: ret  */
  esp += 4; SPILL(); return;
}

void f_78cda0(void) {
  LOAD_REGS();
L_78cda0: /* 78cda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78cda1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 78cda5: push 0xb1e8d8 */
  { uint32_t v = 0xb1e8d8u; esp -= 4; W32(esp, v); }
/* 78cdaa: mov ecx, esi */
  ecx = esi;
/* 78cdac: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x78cdb2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 78cdb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cdb4: jne 0x78cdce */
  if (!zf) goto L_78cdce;
L_78cdb6: /* 78cdb6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 78cdbb: push 0xaca570 */
  { uint32_t v = 0xaca570u; esp -= 4; W32(esp, v); }
/* 78cdc0: push 0xaca5b4 */
  { uint32_t v = 0xaca5b4u; esp -= 4; W32(esp, v); }
/* 78cdc5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78cdcbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78cdcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78cdce: /* 78cdce: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 78cdd2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78cdd5: jne 0x78cddd */
  if (!zf) goto L_78cddd;
L_78cdd7: /* 78cdd7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x78cdddu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_78cddd: /* 78cddd: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 78cde3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78cde5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 78cde9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78cdeb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78cdec: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 78cdf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78cdf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78cdf3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78cdf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78cdf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78cdf6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x78cdfcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 78cdfc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78cdff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78ce00: ret  */
  esp += 4; SPILL(); return;
}

void f_78ce30(void) {
  LOAD_REGS();
L_78ce30: /* 78ce30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78ce31: mov ebp, esp */
  ebp = esp;
/* 78ce33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 78ce35: push 0x9cccd0 */
  { uint32_t v = 0x9cccd0u; esp -= 4; W32(esp, v); }
/* 78ce3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 78ce40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ce41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 78ce48: sub esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78ce4e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78ce51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ce52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78ce53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78ce54: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78ce57: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 78ce5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ce5b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78ce5d: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 78ce60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ce61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ce62: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78ce69: call 0x92a450 */
  esp -= 4; W32(esp, 0x78ce6eu); SPILL(); f_92a450(); if (g_unwind) return; RELOAD();
/* 78ce6e: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 78ce71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78ce72: call 0x6c78e7 */
  esp -= 4; W32(esp, 0x78ce77u); SPILL(); f_6c78e7(); if (g_unwind) return; RELOAD();
/* 78ce77: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78ce7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78ce7b: mov esi, eax */
  esi = eax;
/* 78ce7d: call 0x6c78e7 */
  esp -= 4; W32(esp, 0x78ce82u); SPILL(); f_6c78e7(); if (g_unwind) return; RELOAD();
/* 78ce82: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78ce85: mov edi, eax */
  edi = eax;
/* 78ce87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ce88: mov dword ptr [ebp - 0x7c], edi */
  W32((uint32_t)(ebp + 0xffffff84u), edi);
/* 78ce8b: call 0x90f940 */
  esp -= 4; W32(esp, 0x78ce90u); SPILL(); f_90f940(); if (g_unwind) return; RELOAD();
/* 78ce90: fsub dword ptr [0xa09e1c] */
  ST0 = ST0 - (F32((uint32_t)(0xa09e1cu)));
/* 78ce96: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 78ce99: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 78ce9f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78cea1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78cea4: jp 0x78cead */
  if (pf) goto L_78cead;
L_78cea6: /* 78cea6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_78cead: /* 78cead: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78ceb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78ceb1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78ceb2: call 0x90fb40 */
  esp -= 4; W32(esp, 0x78ceb7u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 78ceb7: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 78cebd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78cebe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78cebf: call 0x90f8e0 */
  esp -= 4; W32(esp, 0x78cec4u); SPILL(); f_90f8e0(); if (g_unwind) return; RELOAD();
/* 78cec4: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 78cec7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78cec8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78cec9: call 0x90f910 */
  esp -= 4; W32(esp, 0x78ceceu); SPILL(); f_90f910(); if (g_unwind) return; RELOAD();
/* 78cece: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78ced1: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78ced4: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78ced7: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78ceda: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78cedc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 78cede: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78cee0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78cee2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78cee4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78cee6: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 78cee8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78ceea: fsqrt  */
  ST0 = sqrt(ST0);
/* 78ceec: fcom dword ptr [0xa09e18] */
  fpu_com(ST0, F32((uint32_t)(0xa09e18u)));
/* 78cef2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78cef4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78cef7: jnp 0x78d9d9 */
  if (!pf) goto L_78d9d9;
L_78cefd: /* 78cefd: fcom dword ptr [0xa09e14] */
  fpu_com(ST0, F32((uint32_t)(0xa09e14u)));
/* 78cf03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78cf05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78cf08: je 0x78d9d9 */
  if (zf) goto L_78d9d9;
L_78cf0e: /* 78cf0e: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 78cf11: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78cf13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78cf14: call 0x9287f0 */
  esp -= 4; W32(esp, 0x78cf19u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 78cf19: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78cf1c: xor ecx, ecx */
  ecx = 0;
/* 78cf1e: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 78cf20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78cf21: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 78cf27: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 78cf2a: call 0x9287f0 */
  esp -= 4; W32(esp, 0x78cf2fu); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 78cf2f: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 78cf32: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 78cf37: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cf39: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 78cf3c: je 0x78cf48 */
  if (zf) goto L_78cf48;
L_78cf3e: /* 78cf3e: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 78cf44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cf46: je 0x78cf56 */
  if (zf) goto L_78cf56;
L_78cf48: /* 78cf48: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cf4a: je 0x78cf85 */
  if (zf) goto L_78cf85;
L_78cf4c: /* 78cf4c: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78cf52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cf54: jne 0x78cf85 */
  if (!zf) goto L_78cf85;
L_78cf56: /* 78cf56: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 78cf5c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78cf5e: push 0xac8ce8 */
  { uint32_t v = 0xac8ce8u; esp -= 4; W32(esp, v); }
/* 78cf63: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78cf64: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78cf6au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78cf6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78cf85: /* 78cf85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78cf87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78cf88: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x78cf8du); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 78cf8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78cf8e: call 0x90bda0 */
  esp -= 4; W32(esp, 0x78cf93u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 78cf93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78cf95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78cf96: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78cf99: call 0x90f8b0 */
  esp -= 4; W32(esp, 0x78cf9eu); SPILL(); f_90f8b0(); if (g_unwind) return; RELOAD();
/* 78cf9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78cf9f: call 0x90bda0 */
  esp -= 4; W32(esp, 0x78cfa4u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 78cfa4: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 78cfa7: xor eax, eax */
  eax = 0;
/* 78cfa9: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78cfab: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 78cfb5: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 78cfbf: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 78cfc9: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 78cfcc: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 78cfcf: jne 0x78d063 */
  if (!zf) goto L_78d063;
L_78cfd5: /* 78cfd5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78cfd7: jne 0x78d007 */
  if (!zf) goto L_78d007;
L_78cfd9: /* 78cfd9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78cfde: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78cfe0: push 0xac8d48 */
  { uint32_t v = 0xac8d48u; esp -= 4; W32(esp, v); }
/* 78cfe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78cfe6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78cfecu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78cfec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78cfef: mov eax, 1 */
  eax = 0x1u;
/* 78cff4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cff7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cffe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cfff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78d000: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78d001: mov esp, ebp */
  esp = ebp;
/* 78d003: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78d004: ret 0xc */
  esp += 16; SPILL(); return;
L_78d007: /* 78d007: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78d00a: mov ebx, dword ptr [eax + 0x20] */
  ebx = R32((uint32_t)(eax + 0x20u));
/* 78d00d: movsx eax, byte ptr [eax + 0x1c] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x1cu)));
/* 78d011: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 78d017: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 78d01c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d01e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78d021: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 78d024: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 78d027: jne 0x78d041 */
  if (!zf) goto L_78d041;
L_78d029: /* 78d029: push 0x129 */
  { uint32_t v = 0x129u; esp -= 4; W32(esp, v); }
/* 78d02e: push 0xac8d98 */
  { uint32_t v = 0xac8d98u; esp -= 4; W32(esp, v); }
/* 78d033: push 0xac8dac */
  { uint32_t v = 0xac8dacu; esp -= 4; W32(esp, v); }
/* 78d038: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d03eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d03e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d041: /* 78d041: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78d047: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 78d04a: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 78d04d: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 78d04f: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78d052: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78d055: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* 78d058: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 78d05b: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 78d05e: jmp 0x78d1cf */
  goto L_78d1cf;
L_78d063: /* 78d063: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d065: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 78d06b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78d06e: jne 0x78d0c0 */
  if (!zf) goto L_78d0c0;
L_78d070: /* 78d070: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78d073: mov ebx, dword ptr [eax + 0x24] */
  ebx = R32((uint32_t)(eax + 0x24u));
/* 78d076: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d078: movsx dx, byte ptr [eax + 0x1d] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x1du)))) & 0xffffu);
/* 78d07d: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 78d080: mov word ptr [ebp - 0x78], dx */
  W16((uint32_t)(ebp + 0xffffff88u), (edx & 0xffffu));
/* 78d084: jne 0x78d09e */
  if (!zf) goto L_78d09e;
L_78d086: /* 78d086: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 78d08b: push 0xac8db4 */
  { uint32_t v = 0xac8db4u; esp -= 4; W32(esp, v); }
/* 78d090: push 0xac8dc8 */
  { uint32_t v = 0xac8dc8u; esp -= 4; W32(esp, v); }
/* 78d095: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d09bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d09b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d09e: /* 78d09e: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 78d0a4: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 78d0a7: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 78d0aa: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 78d0ac: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 78d0af: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78d0b2: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* 78d0b5: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 78d0b8: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 78d0bb: jmp 0x78d1cf */
  goto L_78d1cf;
L_78d0c0: /* 78d0c0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78d0c2: jne 0x78d0d7 */
  if (!zf) goto L_78d0d7;
L_78d0c4: /* 78d0c4: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 78d0cb: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 78d0d2: jmp 0x78d1d2 */
  goto L_78d1d2;
L_78d0d7: /* 78d0d7: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 78d0da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d0db: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78d0e0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78d0e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d0e2: jne 0x78d147 */
  if (!zf) goto L_78d147;
L_78d0e4: /* 78d0e4: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78d0ea: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 78d0ed: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 78d0f0: test byte ptr [esi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d0f7: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 78d0fa: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 78d0fd: jne 0x78d138 */
  if (!zf) goto L_78d138;
L_78d0ff: /* 78d0ff: lea eax, [esi + 0x188] */
  eax = (uint32_t)(esi + 0x188u);
/* 78d105: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78d107: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d10a: mov ecx, esp */
  ecx = esp;
/* 78d10c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78d10e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78d111: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78d114: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 78d117: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78d11a: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 78d120: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d121: call 0x6c882d */
  esp -= 4; W32(esp, 0x78d126u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78d126: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78d129: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d12c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d12d: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78d132u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78d132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d133: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x78d138u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_78d138: /* 78d138: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78d13e: or dword ptr [eax + 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x48u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x48u), r);
  }
/* 78d142: jmp 0x78d1d2 */
  goto L_78d1d2;
L_78d147: /* 78d147: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 78d14a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d14b: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78d150u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78d150: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d152: jne 0x78d1b4 */
  if (!zf) goto L_78d1b4;
L_78d154: /* 78d154: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 78d15a: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 78d15d: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 78d160: test byte ptr [edi + 0x80], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x80u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d167: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 78d16a: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 78d16d: jne 0x78d1a8 */
  if (!zf) goto L_78d1a8;
L_78d16f: /* 78d16f: lea eax, [edi + 0x188] */
  eax = (uint32_t)(edi + 0x188u);
/* 78d175: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 78d177: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d17a: mov ecx, esp */
  ecx = esp;
/* 78d17c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78d17e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78d181: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78d184: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 78d187: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 78d18a: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 78d190: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d191: call 0x6c882d */
  esp -= 4; W32(esp, 0x78d196u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78d196: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 78d199: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d19c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d19d: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78d1a2u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78d1a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d1a3: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x78d1a8u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_78d1a8: /* 78d1a8: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 78d1ae: or dword ptr [eax + 0x48], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x48u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x48u), r);
  }
/* 78d1b2: jmp 0x78d1d2 */
  goto L_78d1d2;
L_78d1b4: /* 78d1b4: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78d1ba: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 78d1c0: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* 78d1c3: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* 78d1c6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78d1c9: fld dword ptr [eax + 0x40] */
  { double v = F32((uint32_t)(eax + 0x40u)); FPUSH(v); }
/* 78d1cc: fmul dword ptr [ecx + 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x40u)));
L_78d1cf: /* 78d1cf: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
L_78d1d2: /* 78d1d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78d1d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d1d7: jne 0x78d1f1 */
  if (!zf) goto L_78d1f1;
L_78d1d9: /* 78d1d9: push 0x179 */
  { uint32_t v = 0x179u; esp -= 4; W32(esp, v); }
/* 78d1de: push 0xac8dd0 */
  { uint32_t v = 0xac8dd0u; esp -= 4; W32(esp, v); }
/* 78d1e3: push 0xac8de4 */
  { uint32_t v = 0xac8de4u; esp -= 4; W32(esp, v); }
/* 78d1e8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d1eeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d1ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d1f1: /* 78d1f1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d1f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d1f5: call 0x90f9b0 */
  esp -= 4; W32(esp, 0x78d1fau); SPILL(); f_90f9b0(); if (g_unwind) return; RELOAD();
/* 78d1fa: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 78d1fd: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 78d203: mov ebx, eax */
  ebx = eax;
/* 78d205: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d207: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d20a: jp 0x78d219 */
  if (pf) goto L_78d219;
L_78d20c: /* 78d20c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d20e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d20f: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d214u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d214: jmp 0x78d2aa */
  goto L_78d2aa;
L_78d219: /* 78d219: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78d21c: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 78d21f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78d221: test byte ptr [eax + 0x404], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x404u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d228: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 78d22a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d22b: je 0x78d251 */
  if (zf) goto L_78d251;
L_78d22d: /* 78d22d: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d232u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d232: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78d234: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d235: call 0x912000 */
  esp -= 4; W32(esp, 0x78d23au); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 78d23a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 78d23d: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 78d243: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d244: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d247: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d248: call 0x912310 */
  esp -= 4; W32(esp, 0x78d24du); SPILL(); f_912310(); if (g_unwind) return; RELOAD();
/* 78d24d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d24f: jmp 0x78d2a4 */
  goto L_78d2a4;
L_78d251: /* 78d251: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d256u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d256: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d258: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d259: call 0x912000 */
  esp -= 4; W32(esp, 0x78d25eu); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 78d25e: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 78d263: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d264: call 0x912310 */
  esp -= 4; W32(esp, 0x78d269u); SPILL(); f_912310(); if (g_unwind) return; RELOAD();
/* 78d269: push 0x7f7fffff */
  { uint32_t v = 0x7f7fffffu; esp -= 4; W32(esp, v); }
/* 78d26e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d26f: call 0x9122d0 */
  esp -= 4; W32(esp, 0x78d274u); SPILL(); f_9122d0(); if (g_unwind) return; RELOAD();
/* 78d274: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 78d27a: fdiv dword ptr [ebp - 0x2c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78d27d: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 78d283: fld dword ptr [0xa0892c] */
  { double v = F32((uint32_t)(0xa0892cu)); FPUSH(v); }
/* 78d289: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 78d28b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d28d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d290: jp 0x78d297 */
  if (pf) goto L_78d297;
L_78d292: /* 78d292: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78d295: jmp 0x78d2a0 */
  goto L_78d2a0;
L_78d297: /* 78d297: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78d299: mov dword ptr [ebp - 0x14], 0x3a83126f */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3a83126fu);
L_78d2a0: /* 78d2a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 78d2a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_78d2a4: /* 78d2a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d2a5: call 0x9122b0 */
  esp -= 4; W32(esp, 0x78d2aau); SPILL(); f_9122b0(); if (g_unwind) return; RELOAD();
L_78d2aa: /* 78d2aa: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 78d2ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d2ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d2af: call 0x912020 */
  esp -= 4; W32(esp, 0x78d2b4u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d2b4: push 0x3c23d70a */
  { uint32_t v = 0x3c23d70au; esp -= 4; W32(esp, v); }
/* 78d2b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d2ba: call 0x912090 */
  esp -= 4; W32(esp, 0x78d2bfu); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d2bf: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 78d2c5: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 78d2cb: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 78d2d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d2d2: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 78d2d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d2d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d2d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d2d8: call 0x90fbe0 */
  esp -= 4; W32(esp, 0x78d2ddu); SPILL(); f_90fbe0(); if (g_unwind) return; RELOAD();
/* 78d2dd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78d2e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d2e2: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 78d2e5: je 0x78d312 */
  if (zf) goto L_78d312;
L_78d2e7: /* 78d2e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d2e9: je 0x78d31a */
  if (zf) goto L_78d31a;
L_78d2eb: /* 78d2eb: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 78d2ee: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 78d2f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d2f6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d2f9: jne 0x78d3cb */
  if (!zf) goto L_78d3cb;
L_78d2ff: /* 78d2ff: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d302: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* 78d307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d308: call 0x90fb40 */
  esp -= 4; W32(esp, 0x78d30du); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 78d30d: jmp 0x78d3cb */
  goto L_78d3cb;
L_78d312: /* 78d312: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d314: je 0x78d3cb */
  if (zf) goto L_78d3cb;
L_78d31a: /* 78d31a: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 78d31d: cmp ax, 1 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 78d321: je 0x78d3cb */
  if (zf) goto L_78d3cb;
L_78d327: /* 78d327: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78d32a: cmp cx, 1 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 78d32e: je 0x78d3cb */
  if (zf) goto L_78d3cb;
L_78d334: /* 78d334: cmp ax, 5 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 78d338: je 0x78d3cb */
  if (zf) goto L_78d3cb;
L_78d33e: /* 78d33e: cmp cx, 5 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 78d342: je 0x78d3cb */
  if (zf) goto L_78d3cb;
L_78d348: /* 78d348: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78d34b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d34d: mov edi, eax */
  edi = eax;
/* 78d34f: jne 0x78d354 */
  if (!zf) goto L_78d354;
L_78d351: /* 78d351: mov edi, dword ptr [ebp - 0x5c] */
  edi = R32((uint32_t)(ebp + 0xffffffa4u));
L_78d354: /* 78d354: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d356: jne 0x78d36e */
  if (!zf) goto L_78d36e;
L_78d358: /* 78d358: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 78d35d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78d35f: push 0xac8df8 */
  { uint32_t v = 0xac8df8u; esp -= 4; W32(esp, v); }
/* 78d364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d365: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78d36bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78d36b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d36e: /* 78d36e: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 78d371: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78d373: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x78d378u); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 78d378: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78d37d: fld dword ptr [eax + 0x1521c] */
  { double v = F32((uint32_t)(eax + 0x1521cu)); FPUSH(v); }
/* 78d383: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 78d386: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d389: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d38b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78d38e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d391: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d393: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78d396: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d399: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d39b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78d39e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78d3a0: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d3a5u); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d3a5: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 78d3ab: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78d3ae: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 78d3b1: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 78d3b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d3b6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d3b9: jne 0x78d3c8 */
  if (!zf) goto L_78d3c8;
L_78d3bb: /* 78d3bb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 78d3be: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 78d3c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d3c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d3c3: call 0x90fb40 */
  esp -= 4; W32(esp, 0x78d3c8u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
L_78d3c8: /* 78d3c8: mov edi, dword ptr [ebp - 0x7c] */
  edi = R32((uint32_t)(ebp + 0xffffff84u));
L_78d3cb: /* 78d3cb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78d3ce: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 78d3d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d3d5: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 78d3db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d3dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d3dd: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 78d3e7: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 78d3f1: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 78d3fb: call 0x90e330 */
  esp -= 4; W32(esp, 0x78d400u); SPILL(); f_90e330(); if (g_unwind) return; RELOAD();
/* 78d400: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 78d403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d405: je 0x78d41b */
  if (zf) goto L_78d41b;
L_78d407: /* 78d407: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 78d40d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d40e: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 78d414: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d416: call 0x90e330 */
  esp -= 4; W32(esp, 0x78d41bu); SPILL(); f_90e330(); if (g_unwind) return; RELOAD();
L_78d41b: /* 78d41b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d41d: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 78d423: fsub dword ptr [ebp - 0xac] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff54u)));
/* 78d429: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d42c: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 78d432: fsub dword ptr [ebp - 0xa8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff58u)));
/* 78d438: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d43b: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 78d441: fsub dword ptr [ebp - 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff5cu)));
/* 78d447: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d44a: je 0x78d45f */
  if (zf) goto L_78d45f;
L_78d44c: /* 78d44c: mov ecx, dword ptr [0xb7e44c] */
  ecx = R32((uint32_t)(0xb7e44cu));
/* 78d452: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d453: mov ecx, esi */
  ecx = esi;
/* 78d455: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x78d45bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 78d45b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d45d: jne 0x78d47e */
  if (!zf) goto L_78d47e;
L_78d45f: /* 78d45f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d461: je 0x78d5c8 */
  if (zf) goto L_78d5c8;
L_78d467: /* 78d467: mov edx, dword ptr [0xb7e44c] */
  edx = R32((uint32_t)(0xb7e44cu));
/* 78d46d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d46e: mov ecx, edi */
  ecx = edi;
/* 78d470: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x78d476u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 78d476: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d478: je 0x78d5c8 */
  if (zf) goto L_78d5c8;
L_78d47e: /* 78d47e: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d481: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 78d484: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d487: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 78d48a: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d48d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 78d490: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d493: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 78d496: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 78d49c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 78d49f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78d4a1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 78d4a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d4a4: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 78d4a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d4a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d4aa: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 78d4ad: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78d4af: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78d4b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d4b3: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 78d4b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78d4b7: fsqrt  */
  ST0 = sqrt(ST0);
/* 78d4b9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78d4bc: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d4c1u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d4c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d4c4: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 78d4c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d4c8: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 78d4cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d4cc: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d4d1u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d4d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d4d4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d4d6: je 0x78d54e */
  if (zf) goto L_78d54e;
L_78d4d8: /* 78d4d8: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78d4db: mov ecx, dword ptr [esi + 0x30c] */
  ecx = R32((uint32_t)(esi + 0x30cu));
/* 78d4e1: fmul dword ptr [0xa09d00] */
  ST0 = ST0 * (F32((uint32_t)(0xa09d00u)));
/* 78d4e7: fcomp dword ptr [ecx + 0x44] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x44u)));
  FPOP();
/* 78d4ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d4ec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d4ef: jne 0x78d54e */
  if (!zf) goto L_78d54e;
L_78d4f1: /* 78d4f1: mov edx, dword ptr [0xb7e44c] */
  edx = R32((uint32_t)(0xb7e44cu));
/* 78d4f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d4f8: mov ecx, esi */
  ecx = esi;
/* 78d4fa: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x78d500u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 78d500: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d502: je 0x78d54e */
  if (zf) goto L_78d54e;
L_78d504: /* 78d504: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78d507: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78d50a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d50d: mov eax, esp */
  eax = esp;
/* 78d50f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78d511: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78d514: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78d517: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78d51a: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78d51d: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78d520: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d523: mov edx, esp */
  edx = esp;
/* 78d525: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78d527: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78d52a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78d52d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 78d530: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 78d533: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 78d536: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d539: mov ecx, esp */
  ecx = esp;
/* 78d53b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78d53d: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 78d540: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78d543: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 78d546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78d547: mov ecx, esi */
  ecx = esi;
/* 78d549: call 0x6c499e */
  esp -= 4; W32(esp, 0x78d54eu); SPILL(); f_6c499e(); if (g_unwind) return; RELOAD();
L_78d54e: /* 78d54e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d550: je 0x78d5c8 */
  if (zf) goto L_78d5c8;
L_78d552: /* 78d552: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78d555: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78d55b: fmul dword ptr [0xa09d00] */
  ST0 = ST0 * (F32((uint32_t)(0xa09d00u)));
/* 78d561: fcomp dword ptr [eax + 0x44] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x44u)));
  FPOP();
/* 78d564: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d566: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d569: jne 0x78d5c8 */
  if (!zf) goto L_78d5c8;
L_78d56b: /* 78d56b: mov ecx, dword ptr [0xb7e44c] */
  ecx = R32((uint32_t)(0xb7e44cu));
/* 78d571: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d572: mov ecx, edi */
  ecx = edi;
/* 78d574: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x78d57au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 78d57a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d57c: je 0x78d5c8 */
  if (zf) goto L_78d5c8;
L_78d57e: /* 78d57e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78d581: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78d584: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d587: mov edx, esp */
  edx = esp;
/* 78d589: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78d58b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78d58e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78d591: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 78d594: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78d597: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78d59a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d59d: mov ecx, esp */
  ecx = esp;
/* 78d59f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78d5a1: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78d5a4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78d5a7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 78d5aa: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 78d5ad: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 78d5b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d5b3: mov eax, esp */
  eax = esp;
/* 78d5b5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78d5b7: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 78d5ba: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78d5bd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78d5c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78d5c1: mov ecx, edi */
  ecx = edi;
/* 78d5c3: call 0x6c499e */
  esp -= 4; W32(esp, 0x78d5c8u); SPILL(); f_6c499e(); if (g_unwind) return; RELOAD();
L_78d5c8: /* 78d5c8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d5ca: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78d5ce: je 0x78d5e4 */
  if (zf) goto L_78d5e4;
L_78d5d0: /* 78d5d0: push 0xb202c8 */
  { uint32_t v = 0xb202c8u; esp -= 4; W32(esp, v); }
/* 78d5d5: mov ecx, esi */
  ecx = esi;
/* 78d5d7: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78d5ddu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78d5dd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d5df: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 78d5e2: jne 0x78d5eb */
  if (!zf) goto L_78d5eb;
L_78d5e4: /* 78d5e4: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_78d5eb: /* 78d5eb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d5ed: je 0x78d604 */
  if (zf) goto L_78d604;
L_78d5ef: /* 78d5ef: push 0xb202c8 */
  { uint32_t v = 0xb202c8u; esp -= 4; W32(esp, v); }
/* 78d5f4: mov ecx, edi */
  ecx = edi;
/* 78d5f6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78d5fcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78d5fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d5fe: je 0x78d604 */
  if (zf) goto L_78d604;
L_78d600: /* 78d600: mov eax, edi */
  eax = edi;
/* 78d602: jmp 0x78d606 */
  goto L_78d606;
L_78d604: /* 78d604: xor eax, eax */
  eax = 0;
L_78d606: /* 78d606: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78d609: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d60b: je 0x78d617 */
  if (zf) goto L_78d617;
L_78d60d: /* 78d60d: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 78d610: mov edi, ecx */
  edi = ecx;
/* 78d612: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 78d615: jmp 0x78d61c */
  goto L_78d61c;
L_78d617: /* 78d617: mov edi, eax */
  edi = eax;
/* 78d619: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_78d61c: /* 78d61c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d61e: je 0x78cf6d */
  if (zf) goto L_78cf6d;
L_78d624: /* 78d624: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78d627: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d629: je 0x78d633 */
  if (zf) goto L_78d633;
L_78d62b: /* 78d62b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d62d: jne 0x78cf6d */
  if (!zf) goto L_78cf6d;
L_78d633: /* 78d633: mov ecx, dword ptr [edi + 0x360] */
  ecx = R32((uint32_t)(edi + 0x360u));
/* 78d639: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d63b: je 0x78cf6d */
  if (zf) goto L_78cf6d;
L_78d641: /* 78d641: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 78d643: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x78d649u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78d649: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d64b: je 0x78cf6d */
  if (zf) goto L_78cf6d;
L_78d651: /* 78d651: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d652: call 0x90d820 */
  esp -= 4; W32(esp, 0x78d657u); SPILL(); f_90d820(); if (g_unwind) return; RELOAD();
/* 78d657: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d659: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 78d65c: je 0x78cf6d */
  if (zf) goto L_78cf6d;
L_78d662: /* 78d662: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 78d664: mov ecx, edi */
  ecx = edi;
/* 78d666: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x78d66cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78d66c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d66d: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78d672u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78d672: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d674: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 78d677: je 0x78cf6d */
  if (zf) goto L_78cf6d;
L_78d67d: /* 78d67d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78d680: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d683: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d685: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 78d688: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78d68b: jne 0x78d6f3 */
  if (!zf) goto L_78d6f3;
L_78d68d: /* 78d68d: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78d690: je 0x78d6f3 */
  if (zf) goto L_78d6f3;
L_78d692: /* 78d692: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 78d695: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d697: jne 0x78d6b1 */
  if (!zf) goto L_78d6b1;
L_78d699: /* 78d699: push 0x204 */
  { uint32_t v = 0x204u; esp -= 4; W32(esp, v); }
/* 78d69e: push 0xac8e3c */
  { uint32_t v = 0xac8e3cu; esp -= 4; W32(esp, v); }
/* 78d6a3: push 0xac8e50 */
  { uint32_t v = 0xac8e50u; esp -= 4; W32(esp, v); }
/* 78d6a8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d6aeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d6ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d6b1: /* 78d6b1: cmp word ptr [ebp - 0x78], 2 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffff88u))); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 78d6b6: je 0x78d6f6 */
  if (zf) goto L_78d6f6;
L_78d6b8: /* 78d6b8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78d6bb: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d6be: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 78d6c1: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 78d6c4: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 78d6c7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d6c9: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d6cc: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 78d6cf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d6d1: fcomp dword ptr [0x9f7194] */
  fpu_com(ST0, F32((uint32_t)(0x9f7194u)));
  FPOP();
/* 78d6d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d6d9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d6dc: jne 0x78d6f6 */
  if (!zf) goto L_78d6f6;
L_78d6de: /* 78d6de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78d6e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78d6e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78d6e3: xor eax, eax */
  eax = 0;
/* 78d6e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78d6ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78d6ed: mov esp, ebp */
  esp = ebp;
/* 78d6ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78d6f0: ret 0xc */
  esp += 16; SPILL(); return;
L_78d6f3: /* 78d6f3: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
L_78d6f6: /* 78d6f6: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78d6f9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 78d6fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d6fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d6fe: call 0x90da60 */
  esp -= 4; W32(esp, 0x78d703u); SPILL(); f_90da60(); if (g_unwind) return; RELOAD();
/* 78d703: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d706: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d709: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d70c: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d70f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78d711: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 78d714: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d717: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d71a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d71d: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d720: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78d722: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 78d725: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d728: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d72b: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d72e: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d731: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78d733: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 78d736: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 78d739: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 78d73c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78d73e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 78d740: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d742: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78d744: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78d746: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d748: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 78d74a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78d74c: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 78d752: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d754: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d757: jp 0x78d781 */
  if (pf) goto L_78d781;
L_78d759: /* 78d759: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 78d75f: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 78d762: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78d765: call 0x78ca50 */
  esp -= 4; W32(esp, 0x78d76au); SPILL(); f_78ca50(); if (g_unwind) return; RELOAD();
/* 78d76a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 78d76d: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 78d770: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 78d773: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 78d776: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 78d779: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 78d77c: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 78d77f: jmp 0x78d78b */
  goto L_78d78b;
L_78d781: /* 78d781: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 78d784: call 0x78c9d0 */
  esp -= 4; W32(esp, 0x78d789u); SPILL(); f_78c9d0(); if (g_unwind) return; RELOAD();
/* 78d789: fstp st(0) */
  STI(0) = ST0; FPOP();
L_78d78b: /* 78d78b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78d78e: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78d791: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78d794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d795: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d798: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d799: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d79b: call 0x90fba0 */
  esp -= 4; W32(esp, 0x78d7a0u); SPILL(); f_90fba0(); if (g_unwind) return; RELOAD();
/* 78d7a0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d7a3: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d7a6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d7a9: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d7ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d7ae: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d7b1: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d7b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d7b6: fabs  */
  ST0 = fabs(ST0);
/* 78d7b8: fcomp qword ptr [0xa09e08] */
  fpu_com(ST0, F64((uint32_t)(0xa09e08u)));
  FPOP();
/* 78d7be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d7c0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d7c3: jne 0x78d7d2 */
  if (!zf) goto L_78d7d2;
L_78d7c5: /* 78d7c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d7c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7c8: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d7cdu); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d7cd: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d7d2: /* 78d7d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 78d7d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7d5: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d7dau); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d7da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78d7dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7dd: call 0x912000 */
  esp -= 4; W32(esp, 0x78d7e2u); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 78d7e2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d7e4: je 0x78d806 */
  if (zf) goto L_78d806;
L_78d7e6: /* 78d7e6: fld dword ptr [edi + 0x364] */
  { double v = F32((uint32_t)(edi + 0x364u)); FPUSH(v); }
/* 78d7ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d7ed: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d7ef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d7f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7f3: call 0x912140 */
  esp -= 4; W32(esp, 0x78d7f8u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d7f8: fld dword ptr [edi + 0x368] */
  { double v = F32((uint32_t)(edi + 0x368u)); FPUSH(v); }
/* 78d7fe: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d801: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d804: jmp 0x78d81a */
  goto L_78d81a;
L_78d806: /* 78d806: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 78d80c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d80d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d80e: call 0x912140 */
  esp -= 4; W32(esp, 0x78d813u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d813: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 78d819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78d81a: /* 78d81a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d81b: call 0x912200 */
  esp -= 4; W32(esp, 0x78d820u); SPILL(); f_912200(); if (g_unwind) return; RELOAD();
/* 78d820: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 78d823: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 78d826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d828: call 0x90e2f0 */
  esp -= 4; W32(esp, 0x78d82du); SPILL(); f_90e2f0(); if (g_unwind) return; RELOAD();
/* 78d82d: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 78d830: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78d833: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 78d836: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 78d839: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d83b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 78d83e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78d841: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d843: fabs  */
  ST0 = fabs(ST0);
/* 78d845: fld dword ptr [0xa09cfc] */
  { double v = F32((uint32_t)(0xa09cfcu)); FPUSH(v); }
/* 78d84b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d84d: fstp dword ptr [edi + 0x39c] */
  WF32((uint32_t)(edi + 0x39cu), ST0); FPOP();
/* 78d853: fmul dword ptr [edi + 0x378] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x378u)));
/* 78d859: fadd dword ptr [edi + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x374u)));
/* 78d85f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 78d862: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d868: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d86b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d86d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d870: jp 0x78d87a */
  if (pf) goto L_78d87a;
L_78d872: /* 78d872: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d878: jmp 0x78d87d */
  goto L_78d87d;
L_78d87a: /* 78d87a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_78d87d: /* 78d87d: fld dword ptr [edi + 0x370] */
  { double v = F32((uint32_t)(edi + 0x370u)); FPUSH(v); }
/* 78d883: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d888: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d88b: jp 0x78d898 */
  if (pf) goto L_78d898;
L_78d88d: /* 78d88d: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 78d893: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 78d896: jmp 0x78d89e */
  goto L_78d89e;
L_78d898: /* 78d898: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d89b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_78d89e: /* 78d89e: fabs  */
  ST0 = fabs(ST0);
/* 78d8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8a5: call 0x912150 */
  esp -= 4; W32(esp, 0x78d8aau); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 78d8aa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d8ad: fabs  */
  ST0 = fabs(ST0);
/* 78d8af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8b4: call 0x912210 */
  esp -= 4; W32(esp, 0x78d8b9u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 78d8b9: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 78d8bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8c1: call 0x912020 */
  esp -= 4; W32(esp, 0x78d8c6u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d8c6: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 78d8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d8cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8ce: call 0x9120f0 */
  esp -= 4; W32(esp, 0x78d8d3u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 78d8d3: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 78d8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d8da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8db: call 0x912090 */
  esp -= 4; W32(esp, 0x78d8e0u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d8e0: mov ebx, dword ptr [edi + 0x388] */
  ebx = R32((uint32_t)(edi + 0x388u));
/* 78d8e6: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 78d8e9: mov dword ptr [edi + 0x388], ebx */
  W32((uint32_t)(edi + 0x388u), ebx);
/* 78d8ef: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d8f2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d8f5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 78d8f8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d8fb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d8fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d900: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d903: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d908: fchs  */
  ST0 = -ST0;
/* 78d90a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d90d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d90f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d912: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d915: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d918: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d91a: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 78d91d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d920: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d923: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78d926: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d929: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d92eu); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d92e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78d931: fstp dword ptr [edi + 0x38c] */
  WF32((uint32_t)(edi + 0x38cu), ST0); FPOP();
/* 78d937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d938: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 78d93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d93f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d944u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d944: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d94a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d94c: je 0x78d978 */
  if (zf) goto L_78d978;
L_78d94e: /* 78d94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d950: je 0x78d96a */
  if (zf) goto L_78d96a;
L_78d952: /* 78d952: push 0x268 */
  { uint32_t v = 0x268u; esp -= 4; W32(esp, v); }
/* 78d957: push 0xac8e58 */
  { uint32_t v = 0xac8e58u; esp -= 4; W32(esp, v); }
/* 78d95c: push 0xac8e6c */
  { uint32_t v = 0xac8e6cu; esp -= 4; W32(esp, v); }
/* 78d961: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d967u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d967: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d96a: /* 78d96a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 78d96d: mov dword ptr [edi + 0x3a0], eax */
  W32((uint32_t)(edi + 0x3a0u), eax);
/* 78d973: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d9d9: /* 78d9d9: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78d9de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78d9e0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78d9e3: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 78d9e6: push 0xac8ca8 */
  { uint32_t v = 0xac8ca8u; esp -= 4; W32(esp, v); }
/* 78d9eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d9ec: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78d9f2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78d9f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d9f5: jmp 0x78d6de */
  goto L_78d6de;
}

void f_78d6f3(void) {
  LOAD_REGS();
  goto L_78d6f3;
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78d6f3: /* 78d6f3: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 78d6f6: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78d6f9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 78d6fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d6fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d6fe: call 0x90da60 */
  esp -= 4; W32(esp, 0x78d703u); SPILL(); f_90da60(); if (g_unwind) return; RELOAD();
/* 78d703: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d706: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d709: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d70c: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d70f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78d711: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 78d714: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d717: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d71a: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d71d: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d720: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78d722: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 78d725: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d728: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d72b: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d72e: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d731: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 78d733: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 78d736: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 78d739: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 78d73c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78d73e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 78d740: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d742: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 78d744: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 78d746: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d748: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 78d74a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78d74c: fcomp qword ptr [0xa09718] */
  fpu_com(ST0, F64((uint32_t)(0xa09718u)));
  FPOP();
/* 78d752: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d754: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d757: jp 0x78d781 */
  if (pf) goto L_78d781;
L_78d759: /* 78d759: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 78d75f: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 78d762: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 78d765: call 0x78ca50 */
  esp -= 4; W32(esp, 0x78d76au); SPILL(); f_78ca50(); if (g_unwind) return; RELOAD();
/* 78d76a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 78d76d: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 78d770: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 78d773: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 78d776: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 78d779: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 78d77c: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 78d77f: jmp 0x78d78b */
  goto L_78d78b;
L_78d781: /* 78d781: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 78d784: call 0x78c9d0 */
  esp -= 4; W32(esp, 0x78d789u); SPILL(); f_78c9d0(); if (g_unwind) return; RELOAD();
/* 78d789: fstp st(0) */
  STI(0) = ST0; FPOP();
L_78d78b: /* 78d78b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78d78e: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78d791: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78d794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d795: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d798: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d799: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d79b: call 0x90fba0 */
  esp -= 4; W32(esp, 0x78d7a0u); SPILL(); f_90fba0(); if (g_unwind) return; RELOAD();
/* 78d7a0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d7a3: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d7a6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d7a9: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d7ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d7ae: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d7b1: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d7b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d7b6: fabs  */
  ST0 = fabs(ST0);
/* 78d7b8: fcomp qword ptr [0xa09e08] */
  fpu_com(ST0, F64((uint32_t)(0xa09e08u)));
  FPOP();
/* 78d7be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d7c0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d7c3: jne 0x78d7d2 */
  if (!zf) goto L_78d7d2;
L_78d7c5: /* 78d7c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d7c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7c8: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d7cdu); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d7cd: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d7d2: /* 78d7d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 78d7d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7d5: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d7dau); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d7da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78d7dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7dd: call 0x912000 */
  esp -= 4; W32(esp, 0x78d7e2u); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 78d7e2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d7e4: je 0x78d806 */
  if (zf) goto L_78d806;
L_78d7e6: /* 78d7e6: fld dword ptr [edi + 0x364] */
  { double v = F32((uint32_t)(edi + 0x364u)); FPUSH(v); }
/* 78d7ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d7ed: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d7ef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d7f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7f3: call 0x912140 */
  esp -= 4; W32(esp, 0x78d7f8u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d7f8: fld dword ptr [edi + 0x368] */
  { double v = F32((uint32_t)(edi + 0x368u)); FPUSH(v); }
/* 78d7fe: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d801: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d804: jmp 0x78d81a */
  goto L_78d81a;
L_78d806: /* 78d806: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 78d80c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d80d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d80e: call 0x912140 */
  esp -= 4; W32(esp, 0x78d813u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d813: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 78d819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78d81a: /* 78d81a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d81b: call 0x912200 */
  esp -= 4; W32(esp, 0x78d820u); SPILL(); f_912200(); if (g_unwind) return; RELOAD();
/* 78d820: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 78d823: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 78d826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d828: call 0x90e2f0 */
  esp -= 4; W32(esp, 0x78d82du); SPILL(); f_90e2f0(); if (g_unwind) return; RELOAD();
/* 78d82d: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 78d830: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78d833: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 78d836: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 78d839: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d83b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 78d83e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78d841: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d843: fabs  */
  ST0 = fabs(ST0);
/* 78d845: fld dword ptr [0xa09cfc] */
  { double v = F32((uint32_t)(0xa09cfcu)); FPUSH(v); }
/* 78d84b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d84d: fstp dword ptr [edi + 0x39c] */
  WF32((uint32_t)(edi + 0x39cu), ST0); FPOP();
/* 78d853: fmul dword ptr [edi + 0x378] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x378u)));
/* 78d859: fadd dword ptr [edi + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x374u)));
/* 78d85f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 78d862: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d868: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d86b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d86d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d870: jp 0x78d87a */
  if (pf) goto L_78d87a;
L_78d872: /* 78d872: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d878: jmp 0x78d87d */
  goto L_78d87d;
L_78d87a: /* 78d87a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_78d87d: /* 78d87d: fld dword ptr [edi + 0x370] */
  { double v = F32((uint32_t)(edi + 0x370u)); FPUSH(v); }
/* 78d883: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d888: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d88b: jp 0x78d898 */
  if (pf) goto L_78d898;
L_78d88d: /* 78d88d: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 78d893: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 78d896: jmp 0x78d89e */
  goto L_78d89e;
L_78d898: /* 78d898: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d89b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_78d89e: /* 78d89e: fabs  */
  ST0 = fabs(ST0);
/* 78d8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8a5: call 0x912150 */
  esp -= 4; W32(esp, 0x78d8aau); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 78d8aa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d8ad: fabs  */
  ST0 = fabs(ST0);
/* 78d8af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8b4: call 0x912210 */
  esp -= 4; W32(esp, 0x78d8b9u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 78d8b9: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 78d8bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8c1: call 0x912020 */
  esp -= 4; W32(esp, 0x78d8c6u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d8c6: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 78d8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d8cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8ce: call 0x9120f0 */
  esp -= 4; W32(esp, 0x78d8d3u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 78d8d3: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 78d8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d8da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8db: call 0x912090 */
  esp -= 4; W32(esp, 0x78d8e0u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d8e0: mov ebx, dword ptr [edi + 0x388] */
  ebx = R32((uint32_t)(edi + 0x388u));
/* 78d8e6: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 78d8e9: mov dword ptr [edi + 0x388], ebx */
  W32((uint32_t)(edi + 0x388u), ebx);
/* 78d8ef: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d8f2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d8f5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 78d8f8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d8fb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d8fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d900: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d903: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d908: fchs  */
  ST0 = -ST0;
/* 78d90a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d90d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d90f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d912: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d915: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d918: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d91a: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 78d91d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d920: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d923: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78d926: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d929: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d92eu); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d92e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78d931: fstp dword ptr [edi + 0x38c] */
  WF32((uint32_t)(edi + 0x38cu), ST0); FPOP();
/* 78d937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d938: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 78d93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d93f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d944u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d944: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d94a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d94c: je 0x78d978 */
  if (zf) goto L_78d978;
L_78d94e: /* 78d94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d950: je 0x78d96a */
  if (zf) goto L_78d96a;
L_78d952: /* 78d952: push 0x268 */
  { uint32_t v = 0x268u; esp -= 4; W32(esp, v); }
/* 78d957: push 0xac8e58 */
  { uint32_t v = 0xac8e58u; esp -= 4; W32(esp, v); }
/* 78d95c: push 0xac8e6c */
  { uint32_t v = 0xac8e6cu; esp -= 4; W32(esp, v); }
/* 78d961: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d967u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d967: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d96a: /* 78d96a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 78d96d: mov dword ptr [edi + 0x3a0], eax */
  W32((uint32_t)(edi + 0x3a0u), eax);
/* 78d973: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
}

void f_78d781(void) {
  LOAD_REGS();
  goto L_78d781;
L_78cf6d: /* 78cf6d: mov eax, 1 */
  eax = 0x1u;
/* 78cf72: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78cf75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78cf7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78cf7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78cf7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78cf7f: mov esp, ebp */
  esp = ebp;
/* 78cf81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78cf82: ret 0xc */
  esp += 16; SPILL(); return;
L_78d781: /* 78d781: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 78d784: call 0x78c9d0 */
  esp -= 4; W32(esp, 0x78d789u); SPILL(); f_78c9d0(); if (g_unwind) return; RELOAD();
/* 78d789: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78d78b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78d78e: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78d791: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78d794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d795: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d798: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d799: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d79a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d79b: call 0x90fba0 */
  esp -= 4; W32(esp, 0x78d7a0u); SPILL(); f_90fba0(); if (g_unwind) return; RELOAD();
/* 78d7a0: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78d7a3: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d7a6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 78d7a9: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d7ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d7ae: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 78d7b1: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d7b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d7b6: fabs  */
  ST0 = fabs(ST0);
/* 78d7b8: fcomp qword ptr [0xa09e08] */
  fpu_com(ST0, F64((uint32_t)(0xa09e08u)));
  FPOP();
/* 78d7be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d7c0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78d7c3: jne 0x78d7d2 */
  if (!zf) goto L_78d7d2;
L_78d7c5: /* 78d7c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78d7c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7c8: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d7cdu); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d7cd: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d7d2: /* 78d7d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 78d7d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7d5: call 0x911f10 */
  esp -= 4; W32(esp, 0x78d7dau); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 78d7da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78d7dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7dd: call 0x912000 */
  esp -= 4; W32(esp, 0x78d7e2u); SPILL(); f_912000(); if (g_unwind) return; RELOAD();
/* 78d7e2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d7e4: je 0x78d806 */
  if (zf) goto L_78d806;
L_78d7e6: /* 78d7e6: fld dword ptr [edi + 0x364] */
  { double v = F32((uint32_t)(edi + 0x364u)); FPUSH(v); }
/* 78d7ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d7ed: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d7ef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d7f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d7f3: call 0x912140 */
  esp -= 4; W32(esp, 0x78d7f8u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d7f8: fld dword ptr [edi + 0x368] */
  { double v = F32((uint32_t)(edi + 0x368u)); FPUSH(v); }
/* 78d7fe: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 78d800: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d801: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d804: jmp 0x78d81a */
  goto L_78d81a;
L_78d806: /* 78d806: mov ecx, dword ptr [edi + 0x364] */
  ecx = R32((uint32_t)(edi + 0x364u));
/* 78d80c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d80d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d80e: call 0x912140 */
  esp -= 4; W32(esp, 0x78d813u); SPILL(); f_912140(); if (g_unwind) return; RELOAD();
/* 78d813: mov edx, dword ptr [edi + 0x368] */
  edx = R32((uint32_t)(edi + 0x368u));
/* 78d819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78d81a: /* 78d81a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d81b: call 0x912200 */
  esp -= 4; W32(esp, 0x78d820u); SPILL(); f_912200(); if (g_unwind) return; RELOAD();
/* 78d820: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 78d823: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 78d826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d827: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d828: call 0x90e2f0 */
  esp -= 4; W32(esp, 0x78d82du); SPILL(); f_90e2f0(); if (g_unwind) return; RELOAD();
/* 78d82d: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 78d830: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78d833: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 78d836: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 78d839: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d83b: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 78d83e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78d841: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d843: fabs  */
  ST0 = fabs(ST0);
/* 78d845: fld dword ptr [0xa09cfc] */
  { double v = F32((uint32_t)(0xa09cfcu)); FPUSH(v); }
/* 78d84b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d84d: fstp dword ptr [edi + 0x39c] */
  WF32((uint32_t)(edi + 0x39cu), ST0); FPOP();
/* 78d853: fmul dword ptr [edi + 0x378] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x378u)));
/* 78d859: fadd dword ptr [edi + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x374u)));
/* 78d85f: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 78d862: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d868: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d86b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d86d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d870: jp 0x78d87a */
  if (pf) goto L_78d87a;
L_78d872: /* 78d872: fld dword ptr [edi + 0x36c] */
  { double v = F32((uint32_t)(edi + 0x36cu)); FPUSH(v); }
/* 78d878: jmp 0x78d87d */
  goto L_78d87d;
L_78d87a: /* 78d87a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_78d87d: /* 78d87d: fld dword ptr [edi + 0x370] */
  { double v = F32((uint32_t)(edi + 0x370u)); FPUSH(v); }
/* 78d883: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 78d886: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78d888: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 78d88b: jp 0x78d898 */
  if (pf) goto L_78d898;
L_78d88d: /* 78d88d: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 78d893: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
/* 78d896: jmp 0x78d89e */
  goto L_78d89e;
L_78d898: /* 78d898: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 78d89b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_78d89e: /* 78d89e: fabs  */
  ST0 = fabs(ST0);
/* 78d8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8a5: call 0x912150 */
  esp -= 4; W32(esp, 0x78d8aau); SPILL(); f_912150(); if (g_unwind) return; RELOAD();
/* 78d8aa: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 78d8ad: fabs  */
  ST0 = fabs(ST0);
/* 78d8af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78d8b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8b4: call 0x912210 */
  esp -= 4; W32(esp, 0x78d8b9u); SPILL(); f_912210(); if (g_unwind) return; RELOAD();
/* 78d8b9: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 78d8bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d8c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8c1: call 0x912020 */
  esp -= 4; W32(esp, 0x78d8c6u); SPILL(); f_912020(); if (g_unwind) return; RELOAD();
/* 78d8c6: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 78d8cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d8cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8ce: call 0x9120f0 */
  esp -= 4; W32(esp, 0x78d8d3u); SPILL(); f_9120f0(); if (g_unwind) return; RELOAD();
/* 78d8d3: mov eax, dword ptr [edi + 0x37c] */
  eax = R32((uint32_t)(edi + 0x37cu));
/* 78d8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78d8da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78d8db: call 0x912090 */
  esp -= 4; W32(esp, 0x78d8e0u); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78d8e0: mov ebx, dword ptr [edi + 0x388] */
  ebx = R32((uint32_t)(edi + 0x388u));
/* 78d8e6: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 78d8e9: mov dword ptr [edi + 0x388], ebx */
  W32((uint32_t)(edi + 0x388u), ebx);
/* 78d8ef: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 78d8f2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d8f5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 78d8f8: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 78d8fb: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78d8fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d900: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 78d903: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 78d906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78d908: fchs  */
  ST0 = -ST0;
/* 78d90a: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78d90d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d90f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78d912: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 78d915: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 78d918: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 78d91a: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 78d91d: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78d920: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78d923: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78d926: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 78d929: call 0x78c920 */
  esp -= 4; W32(esp, 0x78d92eu); SPILL(); f_78c920(); if (g_unwind) return; RELOAD();
/* 78d92e: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78d931: fstp dword ptr [edi + 0x38c] */
  WF32((uint32_t)(edi + 0x38cu), ST0); FPOP();
/* 78d937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78d938: lea edx, [edi + 0x390] */
  edx = (uint32_t)(edi + 0x390u);
/* 78d93e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78d93f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78d944u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78d944: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78d947: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78d94a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d94c: je 0x78d978 */
  if (zf) goto L_78d978;
L_78d94e: /* 78d94e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d950: je 0x78d96a */
  if (zf) goto L_78d96a;
L_78d952: /* 78d952: push 0x268 */
  { uint32_t v = 0x268u; esp -= 4; W32(esp, v); }
/* 78d957: push 0xac8e58 */
  { uint32_t v = 0xac8e58u; esp -= 4; W32(esp, v); }
/* 78d95c: push 0xac8e6c */
  { uint32_t v = 0xac8e6cu; esp -= 4; W32(esp, v); }
/* 78d961: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d967u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d967: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d96a: /* 78d96a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 78d96d: mov dword ptr [edi + 0x3a0], eax */
  W32((uint32_t)(edi + 0x3a0u), eax);
/* 78d973: jmp 0x78cf6d */
  goto L_78cf6d;
L_78d978: /* 78d978: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78d97a: jne 0x78d994 */
  if (!zf) goto L_78d994;
L_78d97c: /* 78d97c: push 0x26e */
  { uint32_t v = 0x26eu; esp -= 4; W32(esp, v); }
/* 78d981: push 0xac8e74 */
  { uint32_t v = 0xac8e74u; esp -= 4; W32(esp, v); }
/* 78d986: push 0xac8e88 */
  { uint32_t v = 0xac8e88u; esp -= 4; W32(esp, v); }
/* 78d98b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78d991u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78d991: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78d994: /* 78d994: mov dword ptr [edi + 0x3a0], 0 */
  W32((uint32_t)(edi + 0x3a0u), 0x0u);
/* 78d99e: jmp 0x78cf6d */
  goto L_78cf6d;
}
