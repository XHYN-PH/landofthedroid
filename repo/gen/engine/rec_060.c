#include "recomp.h"
#include "rec_mod.h"

void f_80b9b3(void) {
  LOAD_REGS();
L_80b9b3: /* 80b9b3: mov eax, dword ptr [ebp - 0x138] */
  eax = R32((uint32_t)(ebp + 0xfffffec8u));
/* 80b9b9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80b9be: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 80b9c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80b9c2: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 80b9c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80b9cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80b9ca(); return;
}

void f_80b9ca(void) {
  LOAD_REGS();
L_80b9ca: /* 80b9ca: push 0xa13010 */
  { uint32_t v = 0xa13010u; esp -= 4; W32(esp, v); }
/* 80b9cf: push 0xae1084 */
  { uint32_t v = 0xae1084u; esp -= 4; W32(esp, v); }
/* 80b9d4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80b9dau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80b9da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80b9dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80b9df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80b9e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80b9e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80b9e6: guest_badaddr(0x80b9e6); return;
}

void f_80bc50(void) {
  LOAD_REGS();
L_80bc50: /* 80bc50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80bc51: mov ebp, esp */
  ebp = esp;
/* 80bc53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80bc55: push 0x9d2630 */
  { uint32_t v = 0x9d2630u; esp -= 4; W32(esp, v); }
/* 80bc5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80bc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bc61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80bc68: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80bc6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80bc6c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 80bc6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bc70: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 80bc73: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 80bc76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80bc77: mov edi, ebx */
  edi = ebx;
/* 80bc79: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 80bc7c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80bc7f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80bc82: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80bc89: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80bc8b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80bc91u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80bc91: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80bc94: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80bc98: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80bc9eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80bc9e: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 80bca1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bca4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 80bca8: je 0x80bcba */
  if (zf) goto L_80bcba;
L_80bcaa: /* 80bcaa: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80bcad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80bcae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bcaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bcb0: call 0x6cbb54 */
  esp -= 4; W32(esp, 0x80bcb5u); SPILL(); f_6cbb54(); if (g_unwind) return; RELOAD();
/* 80bcb5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80bcb8: jmp 0x80bcd4 */
  goto L_80bcd4;
L_80bcba: /* 80bcba: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 80bcbd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bcc0: je 0x80bcd4 */
  if (zf) goto L_80bcd4;
L_80bcc2: /* 80bcc2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 80bcc5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80bcc6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80bcc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80bcca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bccb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bccc: call 0x6c79cd */
  esp -= 4; W32(esp, 0x80bcd1u); SPILL(); f_6c79cd(); if (g_unwind) return; RELOAD();
/* 80bcd1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80bcd4: /* 80bcd4: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 80bcd7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bcda: je 0x80bcec */
  if (zf) goto L_80bcec;
L_80bcdc: /* 80bcdc: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 80bcdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80bce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bce1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bce2: call 0x6cbb54 */
  esp -= 4; W32(esp, 0x80bce7u); SPILL(); f_6cbb54(); if (g_unwind) return; RELOAD();
/* 80bce7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80bcea: jmp 0x80bd06 */
  goto L_80bd06;
L_80bcec: /* 80bcec: mov edi, dword ptr [edi + 0x20] */
  edi = R32((uint32_t)(edi + 0x20u));
/* 80bcef: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bcf2: je 0x80bd06 */
  if (zf) goto L_80bd06;
L_80bcf4: /* 80bcf4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 80bcf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bcf8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80bcfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80bcfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80bcfd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bcfe: call 0x6c79cd */
  esp -= 4; W32(esp, 0x80bd03u); SPILL(); f_6c79cd(); if (g_unwind) return; RELOAD();
/* 80bd03: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80bd06: /* 80bd06: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bd09: je 0x80bd56 */
  if (zf) goto L_80bd56;
L_80bd0b: /* 80bd0b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 80bd0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80bd0f: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 80bd12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bd13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80bd14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bd15: call 0x6cac2c */
  esp -= 4; W32(esp, 0x80bd1au); SPILL(); f_6cac2c(); if (g_unwind) return; RELOAD();
/* 80bd1a: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 80bd1d: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 80bd23: mov edi, ebx */
  edi = ebx;
/* 80bd25: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 80bd28: mov edx, dword ptr [edi + ecx + 0x1c] */
  edx = R32((uint32_t)(edi + ecx + 0x1cu));
/* 80bd2c: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 80bd2f: mov ecx, dword ptr [edx + eax + 4] */
  ecx = R32((uint32_t)(edx + eax + 0x4u));
/* 80bd33: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80bd36: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80bd39: je 0x80bd4d */
  if (zf) goto L_80bd4d;
L_80bd3b: /* 80bd3b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 80bd3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80bd3f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 80bd42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80bd43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80bd44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bd45: call 0x6cac2c */
  esp -= 4; W32(esp, 0x80bd4au); SPILL(); f_6cac2c(); if (g_unwind) return; RELOAD();
/* 80bd4a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80bd4d: /* 80bd4d: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 80bd50: mov ebx, dword ptr [edi + eax + 0x28] */
  ebx = R32((uint32_t)(edi + eax + 0x28u));
/* 80bd54: jmp 0x80bd06 */
  goto L_80bd06;
L_80bd56: /* 80bd56: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 80bd59: xor ebx, ebx */
  ebx = 0;
/* 80bd5b: jmp 0x80bd60 */
  goto L_80bd60;
L_80bd60: /* 80bd60: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bd63: jge 0x80bd97 */
  if ((sf == of)) goto L_80bd97;
L_80bd65: /* 80bd65: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80bd68: lea edi, [ecx + ebx*4] */
  edi = (uint32_t)(ecx + ebx*4);
/* 80bd6b: xor eax, eax */
  eax = 0;
/* 80bd6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80bd70: /* 80bd70: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bd73: jge 0x80bd81 */
  if ((sf == of)) goto L_80bd81;
L_80bd75: /* 80bd75: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80bd77: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 80bd7a: cmp ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bd7c: je 0x80bd94 */
  if (zf) goto L_80bd94;
L_80bd7e: /* 80bd7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80bd7f: jmp 0x80bd70 */
  goto L_80bd70;
L_80bd81: /* 80bd81: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80bd83: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80bd85: mov ecx, esi */
  ecx = esi;
/* 80bd87: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80bd8du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80bd8d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80bd8f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 80bd91: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_80bd94: /* 80bd94: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80bd95: jmp 0x80bd60 */
  goto L_80bd60;
L_80bd97: /* 80bd97: xor ebx, ebx */
  ebx = 0;
/* 80bd99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80bda0: /* 80bda0: cmp ebx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bda3: jge 0x80bdd7 */
  if ((sf == of)) goto L_80bdd7;
L_80bda5: /* 80bda5: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80bda8: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 80bdab: xor eax, eax */
  eax = 0;
/* 80bdad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80bdb0: /* 80bdb0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bdb3: jge 0x80bdc1 */
  if ((sf == of)) goto L_80bdc1;
L_80bdb5: /* 80bdb5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80bdb7: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 80bdba: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bdbc: je 0x80bdd4 */
  if (zf) goto L_80bdd4;
L_80bdbe: /* 80bdbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80bdbf: jmp 0x80bdb0 */
  goto L_80bdb0;
L_80bdc1: /* 80bdc1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80bdc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80bdc5: mov ecx, esi */
  ecx = esi;
/* 80bdc7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80bdcdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80bdcd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80bdcf: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 80bdd1: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_80bdd4: /* 80bdd4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80bdd5: jmp 0x80bda0 */
  goto L_80bda0;
L_80bdd7: /* 80bdd7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80bdda: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80bdde: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80bde3u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80bde3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80bde6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80bdea: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80bdefu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80bdef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80bdf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80bdf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80bdf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80bdfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80bdfc: mov esp, ebp */
  esp = ebp;
/* 80bdfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80bdff: ret  */
  esp += 4; SPILL(); return;
}

void f_80bd5d(void) {
  LOAD_REGS();
L_80bd5d: /* 80bd5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80bd60: /* 80bd60: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bd63: jge 0x80bd97 */
  if ((sf == of)) goto L_80bd97;
L_80bd65: /* 80bd65: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80bd68: lea edi, [ecx + ebx*4] */
  edi = (uint32_t)(ecx + ebx*4);
/* 80bd6b: xor eax, eax */
  eax = 0;
/* 80bd6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80bd70: /* 80bd70: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bd73: jge 0x80bd81 */
  if ((sf == of)) goto L_80bd81;
L_80bd75: /* 80bd75: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80bd77: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 80bd7a: cmp ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bd7c: je 0x80bd94 */
  if (zf) goto L_80bd94;
L_80bd7e: /* 80bd7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80bd7f: jmp 0x80bd70 */
  goto L_80bd70;
L_80bd81: /* 80bd81: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80bd83: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80bd85: mov ecx, esi */
  ecx = esi;
/* 80bd87: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80bd8du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80bd8d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80bd8f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 80bd91: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_80bd94: /* 80bd94: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80bd95: jmp 0x80bd60 */
  goto L_80bd60;
L_80bd97: /* 80bd97: xor ebx, ebx */
  ebx = 0;
/* 80bd99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80bda0: /* 80bda0: cmp ebx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bda3: jge 0x80bdd7 */
  if ((sf == of)) goto L_80bdd7;
L_80bda5: /* 80bda5: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80bda8: lea edi, [edx + ebx*4] */
  edi = (uint32_t)(edx + ebx*4);
/* 80bdab: xor eax, eax */
  eax = 0;
/* 80bdad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80bdb0: /* 80bdb0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bdb3: jge 0x80bdc1 */
  if ((sf == of)) goto L_80bdc1;
L_80bdb5: /* 80bdb5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80bdb7: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 80bdba: cmp edx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bdbc: je 0x80bdd4 */
  if (zf) goto L_80bdd4;
L_80bdbe: /* 80bdbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80bdbf: jmp 0x80bdb0 */
  goto L_80bdb0;
L_80bdc1: /* 80bdc1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80bdc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80bdc5: mov ecx, esi */
  ecx = esi;
/* 80bdc7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80bdcdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80bdcd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80bdcf: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 80bdd1: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
L_80bdd4: /* 80bdd4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80bdd5: jmp 0x80bda0 */
  goto L_80bda0;
L_80bdd7: /* 80bdd7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80bdda: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80bdde: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80bde3u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80bde3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80bde6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80bdea: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80bdefu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80bdef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80bdf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80bdf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80bdf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80bdfb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80bdfc: mov esp, ebp */
  esp = ebp;
/* 80bdfe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80bdff: ret  */
  esp += 4; SPILL(); return;
}

void f_80be00(void) {
  LOAD_REGS();
L_80be00: /* 80be00: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80be03: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80be08: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80be0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80be0c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80be0f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80be14u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80be14(); return;
}

void f_80be14(void) {
  LOAD_REGS();
L_80be14: /* 80be14: push 0xa13044 */
  { uint32_t v = 0xa13044u; esp -= 4; W32(esp, v); }
/* 80be19: push 0xae109c */
  { uint32_t v = 0xae109cu; esp -= 4; W32(esp, v); }
/* 80be1e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80be24u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80be24: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80be27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80be29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80be2b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80be30u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80be30: guest_badaddr(0x80be30); return;
}

void f_80bec0(void) {
  LOAD_REGS();
L_80bec0: /* 80bec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bec1: mov esi, ecx */
  esi = ecx;
/* 80bec3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 80bec6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80beccu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80becc: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 80bed0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 80bed4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 80bed6: xor eax, eax */
  eax = 0;
/* 80bed8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 80bedb: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 80bede: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 80bee1: mov eax, esi */
  eax = esi;
/* 80bee3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80bee4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80bf00(void) {
  LOAD_REGS();
L_80bf00: /* 80bf00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80bf02: push 0x9d264e */
  { uint32_t v = 0x9d264eu; esp -= 4; W32(esp, v); }
/* 80bf07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80bf0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bf0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80bf15: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80bf1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80bf1c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80bf1d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bf1e: mov ebx, ecx */
  ebx = ecx;
/* 80bf20: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* 80bf23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80bf24: xor edi, edi */
  edi = 0;
/* 80bf26: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bf28: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 80bf2c: je 0x80bf46 */
  if (zf) goto L_80bf46;
L_80bf2e: /* 80bf2e: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 80bf31: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x80bf36u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 80bf36: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 80bf3b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80bf3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80bf3f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80bf40: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80bf43u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80bf43: mov dword ptr [ebx + 0x18], edi */
  W32((uint32_t)(ebx + 0x18u), edi);
L_80bf46: /* 80bf46: cmp dword ptr [ebx + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80bf49: je 0x80c273 */
  if (zf) goto L_80c273;
L_80bf4f: /* 80bf4f: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 80bf52: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80bf54: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x80bf57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80bf57: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
/* 80bf5a: test byte ptr [0xcc5584], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcc5584u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80bf61: jne 0x80bf92 */
  if (!zf) goto L_80bf92;
L_80bf63: /* 80bf63: or dword ptr [0xcc5584], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcc5584u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcc5584u), r);
  }
/* 80bf6a: push 0x6cb5fa */
  { uint32_t v = 0x6cb5fau; esp -= 4; W32(esp, v); }
/* 80bf6f: push 0x40000 */
  { uint32_t v = 0x40000u; esp -= 4; W32(esp, v); }
/* 80bf74: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80bf76: push 0xb92250 */
  { uint32_t v = 0xb92250u; esp -= 4; W32(esp, v); }
/* 80bf7b: mov dword ptr [esp + 0xc0], edi */
  W32((uint32_t)(esp + 0xc0u), edi);
/* 80bf82: call 0x6c7ad6 */
  esp -= 4; W32(esp, 0x80bf87u); SPILL(); f_6c7ad6(); if (g_unwind) return; RELOAD();
/* 80bf87: mov dword ptr [esp + 0xb0], 0xffffffff */
  W32((uint32_t)(esp + 0xb0u), 0xffffffffu);
L_80bf92: /* 80bf92: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 80bf95: mov ecx, dword ptr [eax + 0x70] */
  ecx = R32((uint32_t)(eax + 0x70u));
/* 80bf98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80bf9a: push 0xb92250 */
  { uint32_t v = 0xb92250u; esp -= 4; W32(esp, v); }
/* 80bf9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80bfa0: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x80bfa6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80bfa6: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 80bfa9: xor edx, edx */
  edx = 0;
/* 80bfab: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80bfad: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 80bfb1: jle 0x80c267 */
  if ((zf || sf != of)) goto L_80c267;
L_80bfb7: /* 80bfb7: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 80bfba: mov esi, dword ptr [eax + edx*8] */
  esi = R32((uint32_t)(eax + edx*8));
/* 80bfbd: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 80bfc0: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 80bfc6: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 80bfc8: mov edi, dword ptr [eax + 0xf0] */
  edi = R32((uint32_t)(eax + 0xf0u));
/* 80bfce: mov ebp, dword ptr [eax + 0x98] */
  ebp = R32((uint32_t)(eax + 0x98u));
/* 80bfd4: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80bfd6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 80bfd9: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 80bfdf: imul edi, edi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x34u);
  edi = (uint32_t)r;
  }
/* 80bfe2: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 80bfe5: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80bfe7: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 80bfea: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 80bfed: mov ecx, dword ptr [ecx + ebp + 0xc] */
  ecx = R32((uint32_t)(ecx + ebp + 0xcu));
/* 80bff1: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 80bff4: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 80bff7: xor ecx, ecx */
  ecx = 0;
/* 80bff9: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 80bffd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 80bfff: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 80c002: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 80c005: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 80c008: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80c00a: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 80c011: fild dword ptr [edi + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 80c014: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 80c016: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 80c01c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 80c01e: fmul dword ptr [esi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x84u)));
/* 80c024: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 80c028: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80c02a: fmul dword ptr [esi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x88u)));
/* 80c030: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 80c034: fild dword ptr [edi + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 80c037: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 80c039: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 80c03c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 80c03e: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 80c041: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 80c045: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80c047: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 80c04a: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 80c04e: fadd dword ptr [esi + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x68u)));
/* 80c051: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 80c055: fadd dword ptr [esi + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x6cu)));
/* 80c058: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 80c05c: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 80c060: fadd dword ptr [esi + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x70u)));
/* 80c063: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 80c06a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80c06c: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 80c070: fadd dword ptr [esp + 0x64] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x64u)));
/* 80c074: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 80c07b: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 80c082: fadd dword ptr [esp + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x68u)));
/* 80c086: fstp dword ptr [esp + 0x8c] */
  WF32((uint32_t)(esp + 0x8cu), ST0); FPOP();
/* 80c08d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 80c08f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 80c093: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 80c09a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 80c09c: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 80c0a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80c0a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80c0a4: fld dword ptr [esp + 0x8c] */
  { double v = F32((uint32_t)(esp + 0x8cu)); FPUSH(v); }
/* 80c0ab: fadd dword ptr [esp + 0x98] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x98u)));
/* 80c0b2: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 80c0b6: jle 0x80c255 */
  if ((zf || sf != of)) goto L_80c255;
L_80c0bc: /* 80c0bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80c0c0: /* 80c0c0: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 80c0c3: mov ebp, dword ptr [edi + 0x28] */
  ebp = R32((uint32_t)(edi + 0x28u));
/* 80c0c6: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 80c0c9: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 80c0cc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80c0ce: shl eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 80c0d1: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80c0d3: mov ebp, dword ptr [edi + 0x30] */
  ebp = R32((uint32_t)(edi + 0x30u));
/* 80c0d6: imul ebp, ecx */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(ecx);
  ebp = (uint32_t)r;
  }
/* 80c0d9: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 80c0db: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80c0dd: lea eax, [eax*4 + 0xb92250] */
  eax = (uint32_t)(eax*4 + 0xb92250u);
/* 80c0e4: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 80c0e6: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 80c0ee: jle 0x80c23d */
  if ((zf || sf != of)) goto L_80c23d;
L_80c0f4: /* 80c0f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80c0f5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 80c0f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80c100: /* 80c100: cmp byte ptr [eax + 1], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80c104: jne 0x80c209 */
  if (!zf) goto L_80c209;
L_80c10a: /* 80c10a: cmp byte ptr [eax], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80c10d: jne 0x80c209 */
  if (!zf) goto L_80c209;
L_80c113: /* 80c113: cmp byte ptr [eax - 1], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80c117: jne 0x80c209 */
  if (!zf) goto L_80c209;
L_80c11d: /* 80c11d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 80c11f: cmp byte ptr [ecx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80c123: je 0x80c12d */
  if (zf) goto L_80c12d;
L_80c125: /* 80c125: or byte ptr [ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp), r);
  }
/* 80c128: jmp 0x80c215 */
  goto L_80c215;
L_80c12d: /* 80c12d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 80c131: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80c134: mov edx, esp */
  edx = esp;
/* 80c136: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 80c138: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 80c13e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 80c140: fmul dword ptr [esi + 0x84] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x84u)));
/* 80c146: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 80c14a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80c14c: fmul dword ptr [esi + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x88u)));
/* 80c152: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 80c159: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 80c15d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 80c15f: fmul dword ptr [esi + 0x74] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x74u)));
/* 80c162: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 80c164: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 80c167: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 80c16b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80c16d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 80c170: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 80c174: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 80c178: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 80c17c: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 80c180: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 80c184: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 80c188: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 80c18c: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 80c190: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 80c192: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 80c196: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 80c19a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80c19c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80c19e: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 80c1a2: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 80c1a6: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 80c1aa: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 80c1ae: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 80c1b2: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 80c1b9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80c1bc: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 80c1c0: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 80c1c4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80c1c7: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 80c1cb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80c1ce: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 80c1d1: mov ecx, dword ptr [edx + 0xb0] */
  ecx = R32((uint32_t)(edx + 0xb0u));
/* 80c1d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c1d8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80c1da: lea edx, [esp + 0xac] */
  edx = (uint32_t)(esp + 0xacu);
/* 80c1e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c1e2: call 0x6c9192 */
  esp -= 4; W32(esp, 0x80c1e7u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 80c1e7: mov cl, byte ptr [eax + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x8u))) & 0xffu);
/* 80c1ea: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80c1ec: je 0x80c1f7 */
  if (zf) goto L_80c1f7;
L_80c1ee: /* 80c1ee: or byte ptr [ebp], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp), r);
  }
/* 80c1f1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 80c1f5: jmp 0x80c215 */
  goto L_80c215;
L_80c1f7: /* 80c1f7: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 80c1fa: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 80c1fc: not al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(~(eax & 0xffu)) & 0xffu);
/* 80c1fe: and cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 80c200: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 80c204: mov byte ptr [ebp], cl */
  W8((uint32_t)(ebp), (ecx & 0xffu));
/* 80c207: jmp 0x80c215 */
  goto L_80c215;
L_80c209: /* 80c209: mov dl, byte ptr [ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 80c20c: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 80c20e: not cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(~(ecx & 0xffu)) & 0xffu);
/* 80c210: and dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 80c212: mov byte ptr [ebp], dl */
  W8((uint32_t)(ebp), (edx & 0xffu));
L_80c215: /* 80c215: shl bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 80c217: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80c219: jne 0x80c21e */
  if (!zf) goto L_80c21e;
L_80c21b: /* 80c21b: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 80c21c: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_80c21e: /* 80c21e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 80c222: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 80c225: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80c226: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80c229: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c22b: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 80c22f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 80c233: jl 0x80c100 */
  if ((sf != of)) goto L_80c100;
L_80c239: /* 80c239: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_80c23d: /* 80c23d: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 80c240: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80c241: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c243: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 80c247: jl 0x80c0c0 */
  if ((sf != of)) goto L_80c0c0;
L_80c24d: /* 80c24d: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 80c251: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
L_80c255: /* 80c255: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 80c258: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80c259: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c25b: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 80c25f: jl 0x80bfb7 */
  if ((sf != of)) goto L_80bfb7;
L_80c265: /* 80c265: xor edi, edi */
  edi = 0;
L_80c267: /* 80c267: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c268: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 80c26b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80c26d: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80c273u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_80c273: /* 80c273: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 80c27a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80c27b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80c27c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80c27d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80c284: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80c285: add esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80c28b: ret  */
  esp += 4; SPILL(); return;
}

void f_80c380(void) {
  LOAD_REGS();
L_80c380: /* 80c380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80c382: push 0x9d266b */
  { uint32_t v = 0x9d266bu; esp -= 4; W32(esp, v); }
/* 80c387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80c38d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c38e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80c395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80c397: mov esi, ecx */
  esi = ecx;
/* 80c399: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 80c39d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 80c3a5: call 0x6c92f5 */
  esp -= 4; W32(esp, 0x80c3aau); SPILL(); f_6c92f5(); if (g_unwind) return; RELOAD();
/* 80c3aa: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 80c3ad: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 80c3b5: call 0x6cc419 */
  esp -= 4; W32(esp, 0x80c3bau); SPILL(); f_6cc419(); if (g_unwind) return; RELOAD();
/* 80c3ba: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 80c3be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80c3bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80c3c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80c3c9: ret  */
  esp += 4; SPILL(); return;
}

void f_80c3f0(void) {
  LOAD_REGS();
L_80c3f0: /* 80c3f0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80c3f6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80c3f8: push 0x9d26bd */
  { uint32_t v = 0x9d26bdu; esp -= 4; W32(esp, v); }
/* 80c3fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c3fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80c405: sub esp, 0x1f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80c40b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80c40c: mov esi, ecx */
  esi = ecx;
/* 80c40e: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 80c411: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c413: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c414: jne 0x80c45e */
  if (!zf) goto L_80c45e;
L_80c416: /* 80c416: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 80c41b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80c41d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c41f: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 80c424: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 80c426: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x80c428u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c428: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 80c42c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c42e: mov dword ptr [esp + 0x204], 0 */
  W32((uint32_t)(esp + 0x204u), 0x0u);
/* 80c439: je 0x80c44e */
  if (zf) goto L_80c44e;
L_80c43b: /* 80c43b: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80c440: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80c445: mov ecx, eax */
  ecx = eax;
/* 80c447: call 0x6c554c */
  esp -= 4; W32(esp, 0x80c44cu); SPILL(); f_6c554c(); if (g_unwind) return; RELOAD();
/* 80c44c: jmp 0x80c450 */
  goto L_80c450;
L_80c44e: /* 80c44e: xor eax, eax */
  eax = 0;
L_80c450: /* 80c450: mov dword ptr [esp + 0x204], 0xffffffff */
  W32((uint32_t)(esp + 0x204u), 0xffffffffu);
/* 80c45b: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
L_80c45e: /* 80c45e: mov edi, dword ptr [esp + 0x210] */
  edi = R32((uint32_t)(esp + 0x210u));
/* 80c465: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 80c467: imul edi, edi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x34u);
  edi = (uint32_t)r;
  }
/* 80c46a: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 80c470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80c471: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80c472: mov ebp, dword ptr [esp + 0x214] */
  ebp = R32((uint32_t)(esp + 0x214u));
/* 80c479: imul ebp, ebp, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0xa4u);
  ebp = (uint32_t)r;
  }
/* 80c47f: mov ebx, dword ptr [ebp + ecx + 0x8c] */
  ebx = R32((uint32_t)(ebp + ecx + 0x8cu));
/* 80c486: mov edx, dword ptr [edi + ebx + 0x10] */
  edx = R32((uint32_t)(edi + ebx + 0x10u));
/* 80c48a: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 80c48c: mov ecx, dword ptr [edi + ebx + 0x14] */
  ecx = R32((uint32_t)(edi + ebx + 0x14u));
/* 80c490: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80c492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c493: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 80c496: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c497: lea ebx, [edi + 0x2c] */
  ebx = (uint32_t)(edi + 0x2cu);
/* 80c49a: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 80c49d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80c49e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c49f: call 0x6ca060 */
  esp -= 4; W32(esp, 0x80c4a4u); SPILL(); f_6ca060(); if (g_unwind) return; RELOAD();
/* 80c4a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c4a6: jne 0x80c527 */
  if (!zf) goto L_80c527;
L_80c4a8: /* 80c4a8: mov ecx, esi */
  ecx = esi;
/* 80c4aa: call 0x6c92f5 */
  esp -= 4; W32(esp, 0x80c4afu); SPILL(); f_6c92f5(); if (g_unwind) return; RELOAD();
/* 80c4af: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 80c4b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80c4b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c4b8: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 80c4bd: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 80c4bf: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x80c4c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c4c1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 80c4c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c4c7: mov dword ptr [esp + 0x20c], 1 */
  W32((uint32_t)(esp + 0x20cu), 0x1u);
/* 80c4d2: je 0x80c4e7 */
  if (zf) goto L_80c4e7;
L_80c4d4: /* 80c4d4: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80c4d9: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 80c4de: mov ecx, eax */
  ecx = eax;
/* 80c4e0: call 0x6c554c */
  esp -= 4; W32(esp, 0x80c4e5u); SPILL(); f_6c554c(); if (g_unwind) return; RELOAD();
/* 80c4e5: jmp 0x80c4e9 */
  goto L_80c4e9;
L_80c4e7: /* 80c4e7: xor eax, eax */
  eax = 0;
L_80c4e9: /* 80c4e9: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 80c4ec: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 80c4ef: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 80c4f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c4f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c4f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80c4f5: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 80c4f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c4f9: mov ecx, eax */
  ecx = eax;
/* 80c4fb: mov dword ptr [esp + 0x21c], 0xffffffff */
  W32((uint32_t)(esp + 0x21cu), 0xffffffffu);
/* 80c506: call 0x6ca060 */
  esp -= 4; W32(esp, 0x80c50bu); SPILL(); f_6ca060(); if (g_unwind) return; RELOAD();
/* 80c50b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c50d: jne 0x80c527 */
  if (!zf) goto L_80c527;
L_80c50f: /* 80c50f: push 0x3d0 */
  { uint32_t v = 0x3d0u; esp -= 4; W32(esp, v); }
/* 80c514: push 0xae12bc */
  { uint32_t v = 0xae12bcu; esp -= 4; W32(esp, v); }
/* 80c519: push 0xae1240 */
  { uint32_t v = 0xae1240u; esp -= 4; W32(esp, v); }
/* 80c51e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x80c524u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 80c524: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80c527: /* 80c527: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 80c52a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c52c: jne 0x80c56a */
  if (!zf) goto L_80c56a;
L_80c52e: /* 80c52e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80c531: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80c533: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80c535: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80c537: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x80c53au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c53a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c53c: jne 0x80c55e */
  if (!zf) goto L_80c55e;
L_80c53e: /* 80c53e: mov edi, edi */
  edi = edi;
L_80c540: /* 80c540: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* 80c545: call dword ptr [0xcfa818] */
  esp -= 4; W32(esp, 0x80c54bu); SPILL(); f_4e3e22(); if (g_unwind) return; /* Core!?appSleep@@YAXM@Z */ RELOAD();
/* 80c54b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80c54e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c550: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80c553: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80c555: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80c557: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x80c55au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c55a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80c55c: je 0x80c540 */
  if (zf) goto L_80c540;
L_80c55e: /* 80c55e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 80c561: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* 80c567: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
L_80c56a: /* 80c56a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 80c56d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c56f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x80c571u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c571: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 80c574: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 80c577: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80c579: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c57a: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 80c57d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c57e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80c580: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c581: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 80c584: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c585: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80c588u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c588: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 80c58c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80c592u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80c592: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 80c594: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80c598: mov dword ptr [esp + 0x20c], 2 */
  W32((uint32_t)(esp + 0x20cu), 0x2u);
/* 80c5a3: jne 0x80c60f */
  if (!zf) goto L_80c60f;
L_80c5a5: /* 80c5a5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80c5a7: mov eax, dword ptr [ecx + 0x9c] */
  eax = R32((uint32_t)(ecx + 0x9cu));
/* 80c5ad: xor ebx, ebx */
  ebx = 0;
/* 80c5af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80c5b1: jle 0x80c60f */
  if ((zf || sf != of)) goto L_80c60f;
L_80c5b3: /* 80c5b3: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 80c5b7: jmp 0x80c5c0 */
  goto L_80c5c0;
L_80c5c0: /* 80c5c0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80c5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 80c5c6: mov eax, dword ptr [edx + 0x98] */
  eax = R32((uint32_t)(edx + 0x98u));
/* 80c5cc: lea eax, [eax + ecx + 4] */
  eax = (uint32_t)(eax + ecx + 0x4u);
/* 80c5d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80c5d2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 80c5d4: jns 0x80c5f7 */
  if (!sf) goto L_80c5f7;
L_80c5d6: /* 80c5d6: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80c5d9: jne 0x80c5f7 */
  if (!zf) goto L_80c5f7;
L_80c5db: /* 80c5db: mov edx, ecx */
  edx = ecx;
/* 80c5dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80c5df: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 80c5e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c5e4: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 80c5e8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 80c5ea: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80c5f0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80c5f0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 80c5f4: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_80c5f7: /* 80c5f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 80c5fb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 80c5fd: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 80c603: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80c604: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80c607: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c609: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 80c60d: jl 0x80c5c0 */
  if ((sf != of)) goto L_80c5c0;
L_80c60f: /* 80c60f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 80c611: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80c615: jne 0x80c656 */
  if (!zf) goto L_80c656;
L_80c617: /* 80c617: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 80c61a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80c61c: mov edi, dword ptr [edx + 0x98] */
  edi = R32((uint32_t)(edx + 0x98u));
/* 80c622: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 80c625: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80c626: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80c628: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c62a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 80c62d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c62e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 80c632: call 0x6c6db6 */
  esp -= 4; W32(esp, 0x80c637u); SPILL(); f_6c6db6(); if (g_unwind) return; RELOAD();
/* 80c637: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80c63a: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 80c640: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80c642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c643: mov ecx, eax */
  ecx = eax;
/* 80c645: mov byte ptr [esp + 0x210], 3 */
  W8((uint32_t)(esp + 0x210u), 0x3u);
/* 80c64d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x80c650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c650: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 80c654: jmp 0x80c6a3 */
  goto L_80c6a3;
L_80c656: /* 80c656: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 80c659: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 80c65c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c65d: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 80c660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c661: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 80c664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c665: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 80c668: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c669: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80c66b: mov edi, dword ptr [ecx + 0x98] */
  edi = R32((uint32_t)(ecx + 0x98u));
/* 80c671: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 80c674: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80c675: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80c677: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c678: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 80c67b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c67c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c67d: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 80c681: call 0x6c384b */
  esp -= 4; W32(esp, 0x80c686u); SPILL(); f_6c384b(); if (g_unwind) return; RELOAD();
/* 80c686: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80c689: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 80c68f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80c691: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c692: mov ecx, eax */
  ecx = eax;
/* 80c694: mov byte ptr [esp + 0x210], 4 */
  W8((uint32_t)(esp + 0x210u), 0x4u);
/* 80c69c: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x80c69fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c69f: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
L_80c6a3: /* 80c6a3: mov byte ptr [esp + 0x20c], 2 */
  W8((uint32_t)(esp + 0x20cu), 0x2u);
/* 80c6ab: mov dword ptr [esp + 0x20], 0xa12d28 */
  W32((uint32_t)(esp + 0x20u), 0xa12d28u);
/* 80c6b3: call 0x6c6474 */
  esp -= 4; W32(esp, 0x80c6b8u); SPILL(); f_6c6474(); if (g_unwind) return; RELOAD();
/* 80c6b8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 80c6bc: xor eax, eax */
  eax = 0;
/* 80c6be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80c6c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80c6c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80c6c2: jle 0x80c6ec */
  if ((zf || sf != of)) goto L_80c6ec;
L_80c6c4: /* 80c6c4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 80c6c8: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 80c6cb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80c6cd: mov edx, dword ptr [edx + 0x98] */
  edx = R32((uint32_t)(edx + 0x98u));
/* 80c6d3: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 80c6d6: mov edi, dword ptr [ecx + edx + 4] */
  edi = R32((uint32_t)(ecx + edx + 0x4u));
/* 80c6da: lea ecx, [ecx + edx + 4] */
  ecx = (uint32_t)(ecx + edx + 0x4u);
/* 80c6de: and edi, 0xfffffffe */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 80c6e1: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 80c6e3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 80c6e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80c6e8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c6ea: jl 0x80c6c4 */
  if ((sf != of)) goto L_80c6c4;
L_80c6ec: /* 80c6ec: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 80c6ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80c6f1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x80c6f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c6f4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80c6f6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80c6f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c6fb: mov ecx, esi */
  ecx = esi;
/* 80c6fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80c703u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80c703: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80c705: mov edx, dword ptr [esp + 0x20c] */
  edx = R32((uint32_t)(esp + 0x20cu));
/* 80c70c: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 80c70f: mov edx, dword ptr [esp + 0x210] */
  edx = R32((uint32_t)(esp + 0x210u));
/* 80c716: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 80c71a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 80c71e: mov dword ptr [esp + 0x204], 0xffffffff */
  W32((uint32_t)(esp + 0x204u), 0xffffffffu);
/* 80c729: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x80c72eu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 80c72e: mov ecx, dword ptr [esp + 0x1fc] */
  ecx = R32((uint32_t)(esp + 0x1fcu));
/* 80c735: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80c736: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80c737: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80c73e: add esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80c744: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80c5b9(void) {
  LOAD_REGS();
L_80c5b9: /* 80c5b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80c5c0: /* 80c5c0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80c5c2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 80c5c6: mov eax, dword ptr [edx + 0x98] */
  eax = R32((uint32_t)(edx + 0x98u));
/* 80c5cc: lea eax, [eax + ecx + 4] */
  eax = (uint32_t)(eax + ecx + 0x4u);
/* 80c5d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80c5d2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 80c5d4: jns 0x80c5f7 */
  if (!sf) goto L_80c5f7;
L_80c5d6: /* 80c5d6: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80c5d9: jne 0x80c5f7 */
  if (!zf) goto L_80c5f7;
L_80c5db: /* 80c5db: mov edx, ecx */
  edx = ecx;
/* 80c5dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80c5df: or edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 80c5e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c5e4: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 80c5e8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 80c5ea: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80c5f0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80c5f0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 80c5f4: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_80c5f7: /* 80c5f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 80c5fb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 80c5fd: mov ecx, dword ptr [eax + 0x9c] */
  ecx = R32((uint32_t)(eax + 0x9cu));
/* 80c603: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80c604: add edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80c607: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c609: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 80c60d: jl 0x80c5c0 */
  if ((sf != of)) goto L_80c5c0;
L_80c60f: /* 80c60f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 80c611: cmp byte ptr [eax + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80c615: jne 0x80c656 */
  if (!zf) goto L_80c656;
L_80c617: /* 80c617: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 80c61a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80c61c: mov edi, dword ptr [edx + 0x98] */
  edi = R32((uint32_t)(edx + 0x98u));
/* 80c622: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 80c625: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80c626: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80c628: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c62a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 80c62d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c62e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 80c632: call 0x6c6db6 */
  esp -= 4; W32(esp, 0x80c637u); SPILL(); f_6c6db6(); if (g_unwind) return; RELOAD();
/* 80c637: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80c63a: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 80c640: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80c642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c643: mov ecx, eax */
  ecx = eax;
/* 80c645: mov byte ptr [esp + 0x210], 3 */
  W8((uint32_t)(esp + 0x210u), 0x3u);
/* 80c64d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x80c650u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c650: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 80c654: jmp 0x80c6a3 */
  goto L_80c6a3;
L_80c656: /* 80c656: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* 80c659: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 80c65c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c65d: mov edx, dword ptr [edi + 0x1c] */
  edx = R32((uint32_t)(edi + 0x1cu));
/* 80c660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c661: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 80c664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c665: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 80c668: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c669: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80c66b: mov edi, dword ptr [ecx + 0x98] */
  edi = R32((uint32_t)(ecx + 0x98u));
/* 80c671: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 80c674: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80c675: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80c677: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c678: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 80c67b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c67c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c67d: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 80c681: call 0x6c384b */
  esp -= 4; W32(esp, 0x80c686u); SPILL(); f_6c384b(); if (g_unwind) return; RELOAD();
/* 80c686: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 80c689: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 80c68f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80c691: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80c692: mov ecx, eax */
  ecx = eax;
/* 80c694: mov byte ptr [esp + 0x210], 4 */
  W8((uint32_t)(esp + 0x210u), 0x4u);
/* 80c69c: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x80c69fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c69f: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
L_80c6a3: /* 80c6a3: mov byte ptr [esp + 0x20c], 2 */
  W8((uint32_t)(esp + 0x20cu), 0x2u);
/* 80c6ab: mov dword ptr [esp + 0x20], 0xa12d28 */
  W32((uint32_t)(esp + 0x20u), 0xa12d28u);
/* 80c6b3: call 0x6c6474 */
  esp -= 4; W32(esp, 0x80c6b8u); SPILL(); f_6c6474(); if (g_unwind) return; RELOAD();
/* 80c6b8: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 80c6bc: xor eax, eax */
  eax = 0;
/* 80c6be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80c6c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80c6c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80c6c2: jle 0x80c6ec */
  if ((zf || sf != of)) goto L_80c6ec;
L_80c6c4: /* 80c6c4: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 80c6c8: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 80c6cb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80c6cd: mov edx, dword ptr [edx + 0x98] */
  edx = R32((uint32_t)(edx + 0x98u));
/* 80c6d3: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 80c6d6: mov edi, dword ptr [ecx + edx + 4] */
  edi = R32((uint32_t)(ecx + edx + 0x4u));
/* 80c6da: lea ecx, [ecx + edx + 4] */
  ecx = (uint32_t)(ecx + edx + 0x4u);
/* 80c6de: and edi, 0xfffffffe */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 80c6e1: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 80c6e3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 80c6e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80c6e8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c6ea: jl 0x80c6c4 */
  if ((sf != of)) goto L_80c6c4;
L_80c6ec: /* 80c6ec: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 80c6ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80c6f1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x80c6f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c6f4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 80c6f6: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80c6f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c6fb: mov ecx, esi */
  ecx = esi;
/* 80c6fd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80c703u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80c703: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 80c705: mov edx, dword ptr [esp + 0x20c] */
  edx = R32((uint32_t)(esp + 0x20cu));
/* 80c70c: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 80c70f: mov edx, dword ptr [esp + 0x210] */
  edx = R32((uint32_t)(esp + 0x210u));
/* 80c716: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 80c71a: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 80c71e: mov dword ptr [esp + 0x204], 0xffffffff */
  W32((uint32_t)(esp + 0x204u), 0xffffffffu);
/* 80c729: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x80c72eu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 80c72e: mov ecx, dword ptr [esp + 0x1fc] */
  ecx = R32((uint32_t)(esp + 0x1fcu));
/* 80c735: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80c736: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80c737: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80c73e: add esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80c744: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80c830(void) {
  LOAD_REGS();
L_80c830: /* 80c830: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80c831: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 80c835: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80c838: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80c839: mov esi, ecx */
  esi = ecx;
/* 80c83b: je 0x80c86d */
  if (zf) goto L_80c86d;
L_80c83d: /* 80c83d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 80c840: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c841: push 0x6c80a3 */
  { uint32_t v = 0x6c80a3u; esp -= 4; W32(esp, v); }
/* 80c846: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 80c849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c84a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 80c84c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80c84d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x80c852u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 80c852: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80c855: je 0x80c865 */
  if (zf) goto L_80c865;
L_80c857: /* 80c857: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 80c85d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80c85f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c861: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c862: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80c865u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80c865: /* 80c865: mov eax, edi */
  eax = edi;
/* 80c867: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80c868: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80c869: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80c86a: ret 4 */
  esp += 8; SPILL(); return;
L_80c86d: /* 80c86d: mov ecx, esi */
  ecx = esi;
/* 80c86f: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80c874u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80c874: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80c877: je 0x80c886 */
  if (zf) goto L_80c886;
L_80c879: /* 80c879: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 80c87e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80c880: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80c883: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80c886u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80c886: /* 80c886: mov eax, esi */
  eax = esi;
/* 80c888: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80c889: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80c88a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80c8b0(void) {
  LOAD_REGS();
L_80c8b0: /* 80c8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80c8b1: mov ebp, esp */
  ebp = esp;
/* 80c8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80c8b5: push 0x9d2703 */
  { uint32_t v = 0x9d2703u; esp -= 4; W32(esp, v); }
/* 80c8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80c8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80c8c8: sub esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80c8ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80c8d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80c8d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80c8d3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80c8d6: mov esi, dword ptr [eax + 0xb4] */
  esi = R32((uint32_t)(eax + 0xb4u));
/* 80c8dc: mov eax, ecx */
  eax = ecx;
/* 80c8de: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 80c8e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c8e5: xor edi, edi */
  edi = 0;
/* 80c8e7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80c8e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80c8ec: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 80c8ef: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 80c8f2: jne 0x80d0bc */
  if (!zf) goto L_80d0bc;
L_80c8f8: /* 80c8f8: cmp dword ptr [eax + 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80c8fb: jle 0x80d0bc */
  if ((zf || sf != of)) goto L_80d0bc;
L_80c901: /* 80c901: call 0x6c44ad */
  esp -= 4; W32(esp, 0x80c906u); SPILL(); f_6c44ad(); if (g_unwind) return; RELOAD();
/* 80c906: fstp qword ptr [ebp - 0x9c] */
  WF64((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 80c90c: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80c912: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80c914: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c916: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c918: push 0xae10a4 */
  { uint32_t v = 0xae10a4u; esp -= 4; W32(esp, v); }
/* 80c91d: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 80c920: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80c923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c923: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c925: push 0xae10c8 */
  { uint32_t v = 0xae10c8u; esp -= 4; W32(esp, v); }
/* 80c92a: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 80c92d: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x80c933u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 80c933: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 80c936: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 80c939: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80c93b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80c93d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80c93e: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x80c944u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c944: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80c946: mov ebx, eax */
  ebx = eax;
/* 80c948: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80c949: mov ecx, esi */
  ecx = esi;
/* 80c94b: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 80c94e: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x80c954u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c954: mov ecx, dword ptr [ebx + 0x6c] */
  ecx = R32((uint32_t)(ebx + 0x6cu));
/* 80c957: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80c959: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80c95a: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0x80c95du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c95d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80c95f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 80c961: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 80c963: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 80c968: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 80c96d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c96e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c96f: mov ecx, ebx */
  ecx = ebx;
/* 80c971: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x80c977u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c977: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 80c97a: mov dword ptr [eax + 0x540], 6 */
  W32((uint32_t)(eax + 0x540u), 0x6u);
/* 80c984: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 80c987: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 80c98d: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 80c990: or ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 80c996: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
/* 80c99c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80c99e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c99f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c9a0: mov ecx, ebx */
  ecx = ebx;
/* 80c9a2: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x80c9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c9a5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80c9a7: je 0x80c9e2 */
  if (zf) goto L_80c9e2;
L_80c9a9: /* 80c9a9: mov ecx, dword ptr [ebx + 0x148] */
  ecx = R32((uint32_t)(ebx + 0x148u));
/* 80c9af: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80c9b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c9b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c9b4: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 80c9b9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c9bb: mov byte ptr [ebp - 0x1c], 0 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 80c9bf: mov byte ptr [ebp - 0x1b], 0 */
  W8((uint32_t)(ebp + 0xffffffe5u), 0x0u);
/* 80c9c3: mov byte ptr [ebp - 0x1a], 0 */
  W8((uint32_t)(ebp + 0xffffffe6u), 0x0u);
/* 80c9c7: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* 80c9cb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80c9ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80c9cf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80c9d1: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x80c9d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c9d4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 80c9d6: mov ecx, ebx */
  ecx = ebx;
/* 80c9d8: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x80c9dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80c9db: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80c9dd: mov ecx, ebx */
  ecx = ebx;
/* 80c9df: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x80c9e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80c9e2: /* 80c9e2: mov eax, 0x200 */
  eax = 0x200u;
/* 80c9e7: mov dword ptr [ebx + 0x88], eax */
  W32((uint32_t)(ebx + 0x88u), eax);
/* 80c9ed: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 80c9f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80c9f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80c9f7: add ecx, 0xfc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80c9fd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80c9ff: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80ca05u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80ca05: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80ca08: jne 0x80caff */
  if (!zf) goto L_80caff;
L_80ca0e: /* 80ca0e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80ca11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ca12: add ecx, 0xf0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80ca18: call 0x6ca77c */
  esp -= 4; W32(esp, 0x80ca1du); SPILL(); f_6ca77c(); if (g_unwind) return; RELOAD();
/* 80ca1d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80ca20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ca21: add ecx, 0xe4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80ca27: call 0x6cc1f8 */
  esp -= 4; W32(esp, 0x80ca2cu); SPILL(); f_6cc1f8(); if (g_unwind) return; RELOAD();
/* 80ca2c: xor ecx, ecx */
  ecx = 0;
/* 80ca2e: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
L_80ca31: /* 80ca31: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80ca34: cmp ecx, dword ptr [eax + 0x5c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ca37: jge 0x80ca48 */
  if ((sf == of)) goto L_80ca48;
L_80ca39: /* 80ca39: mov eax, dword ptr [eax + 0x58] */
  eax = R32((uint32_t)(eax + 0x58u));
/* 80ca3c: mov edi, ecx */
  edi = ecx;
/* 80ca3e: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 80ca41: mov dword ptr [edi + eax + 0x68], edx */
  W32((uint32_t)(edi + eax + 0x68u), edx);
/* 80ca45: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80ca46: jmp 0x80ca31 */
  goto L_80ca31;
L_80ca48: /* 80ca48: xor ecx, ecx */
  ecx = 0;
/* 80ca4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_80ca50: /* 80ca50: cmp ecx, dword ptr [eax + 0xdc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ca56: jge 0x80ca6d */
  if ((sf == of)) goto L_80ca6d;
L_80ca58: /* 80ca58: mov eax, dword ptr [eax + 0xd8] */
  eax = R32((uint32_t)(eax + 0xd8u));
/* 80ca5e: mov edi, ecx */
  edi = ecx;
/* 80ca60: imul edi, edi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x2cu);
  edi = (uint32_t)r;
  }
/* 80ca63: mov dword ptr [eax + edi + 0x28], edx */
  W32((uint32_t)(eax + edi + 0x28u), edx);
/* 80ca67: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80ca6a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80ca6b: jmp 0x80ca50 */
  goto L_80ca50;
L_80ca6d: /* 80ca6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ca6e: call 0x6c6195 */
  esp -= 4; W32(esp, 0x80ca73u); SPILL(); f_6c6195(); if (g_unwind) return; RELOAD();
/* 80ca73: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80ca76: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80ca79: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_80ca80: /* 80ca80: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80ca83: cmp ecx, dword ptr [edx + 0xdc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xdcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ca89: jge 0x80caff */
  if ((sf == of)) goto L_80caff;
L_80ca8b: /* 80ca8b: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_80ca92: /* 80ca92: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80ca95: cmp eax, dword ptr [edx + 0x118] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x118u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ca9b: jge 0x80cafa */
  if ((sf == of)) goto L_80cafa;
L_80ca9d: /* 80ca9d: xor edi, edi */
  edi = 0;
/* 80ca9f: nop  */
L_80caa0: /* 80caa0: cmp edi, dword ptr [edx + 0x5c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80caa3: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80caa6: jge 0x80caf4 */
  if ((sf == of)) goto L_80caf4;
L_80caa8: /* 80caa8: mov ecx, dword ptr [edx + 0x58] */
  ecx = R32((uint32_t)(edx + 0x58u));
/* 80caab: mov esi, edi */
  esi = edi;
/* 80caad: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 80cab0: movzx ebx, byte ptr [esi + ecx + 0x55] */
  ebx = (uint32_t)(R8((uint32_t)(esi + ecx + 0x55u)));
/* 80cab5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80cab7: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80cab9: jne 0x80caee */
  if (!zf) goto L_80caee;
L_80cabb: /* 80cabb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80cabe: cmp dword ptr [esi + 0x60], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x60u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80cac1: jne 0x80caee */
  if (!zf) goto L_80caee;
L_80cac3: /* 80cac3: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 80cac6: mov eax, ecx */
  eax = ecx;
/* 80cac8: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 80cacb: add eax, dword ptr [edx + 0x98] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x98u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80cad1: test dword ptr [eax + 4], 0x400091 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x400091u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cad8: jne 0x80caee */
  if (!zf) goto L_80caee;
L_80cada: /* 80cada: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80cadd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80cade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cadf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cae0: call 0x6c3e63 */
  esp -= 4; W32(esp, 0x80cae5u); SPILL(); f_6c3e63(); if (g_unwind) return; RELOAD();
/* 80cae5: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 80cae8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80caeb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_80caee: /* 80caee: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 80caf1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80caf2: jmp 0x80caa0 */
  goto L_80caa0;
L_80caf4: /* 80caf4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80caf5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 80caf8: jmp 0x80ca92 */
  goto L_80ca92;
L_80cafa: /* 80cafa: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 80cafd: jmp 0x80ca80 */
  goto L_80ca80;
L_80caff: /* 80caff: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 80cb02: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80cb08u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80cb08: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cb0b: mov esi, dword ptr [eax + 0x9c] */
  esi = R32((uint32_t)(eax + 0x9cu));
/* 80cb11: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 80cb17: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80cb19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80cb1b: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 80cb1e: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 80cb23: lea eax, [eax*4 + 4] */
  eax = (uint32_t)(eax*4 + 0x4u);
/* 80cb2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cb2b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80cb2f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x80cb31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80cb31: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 80cb34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cb36: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 80cb3a: je 0x80cb59 */
  if (zf) goto L_80cb59;
L_80cb3c: /* 80cb3c: push 0x6c80a3 */
  { uint32_t v = 0x6c80a3u; esp -= 4; W32(esp, v); }
/* 80cb41: push 0x6ca9cf */
  { uint32_t v = 0x6ca9cfu; esp -= 4; W32(esp, v); }
/* 80cb46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80cb47: lea edi, [eax + 4] */
  edi = (uint32_t)(eax + 0x4u);
/* 80cb4a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 80cb4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80cb4d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 80cb4f: call 0x99cafe */
  esp -= 4; W32(esp, 0x80cb54u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 80cb54: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 80cb57: jmp 0x80cb60 */
  goto L_80cb60;
L_80cb59: /* 80cb59: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_80cb60: /* 80cb60: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80cb63: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cb66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cb67: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 80cb6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cb6b: xor esi, esi */
  esi = 0;
/* 80cb6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80cb6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cb6f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80cb73: call 0x6c79cd */
  esp -= 4; W32(esp, 0x80cb78u); SPILL(); f_6c79cd(); if (g_unwind) return; RELOAD();
/* 80cb78: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80cb7b: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 80cb7e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x80cb84u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 80cb84: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cb87: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 80cb8a: mov dword ptr [ebp - 0x6c], ebx */
  W32((uint32_t)(ebp + 0xffffff94u), ebx);
/* 80cb8d: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 80cb90: mov dword ptr [ebp - 0x58], esi */
  W32((uint32_t)(ebp + 0xffffffa8u), esi);
/* 80cb93: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 80cb97: xor edx, edx */
  edx = 0;
L_80cb99: /* 80cb99: mov ecx, dword ptr [eax + 0xf4] */
  ecx = R32((uint32_t)(eax + 0xf4u));
/* 80cb9f: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cba1: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 80cba4: jge 0x80cf62 */
  if ((sf == of)) goto L_80cf62;
L_80cbaa: /* 80cbaa: mov edi, dword ptr [eax + 0xf0] */
  edi = R32((uint32_t)(eax + 0xf0u));
/* 80cbb0: mov esi, dword ptr [eax + 0x98] */
  esi = R32((uint32_t)(eax + 0x98u));
/* 80cbb6: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 80cbbb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80cbbd: mov ebx, edx */
  ebx = edx;
/* 80cbbf: imul ebx, ebx, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xa4u);
  ebx = (uint32_t)r;
  }
/* 80cbc5: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 80cbc7: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 80cbca: push 0xae10ec */
  { uint32_t v = 0xae10ecu; esp -= 4; W32(esp, v); }
/* 80cbcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cbd0: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 80cbd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cbd4: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80cbd6: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 80cbd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cbd9: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 80cbdc: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x80cbdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80cbdf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80cbe2: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 80cbe8: xor eax, eax */
  eax = 0;
/* 80cbea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_80cbf0: /* 80cbf0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cbf3: jge 0x80cbf8 */
  if ((sf == of)) goto L_80cbf8;
L_80cbf5: /* 80cbf5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80cbf6: jmp 0x80cbf0 */
  goto L_80cbf0;
L_80cbf8: /* 80cbf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80cbfa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80cbfc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80cc02u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80cc02: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80cc05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc07: je 0x80cc68 */
  if (zf) goto L_80cc68;
L_80cc09: /* 80cc09: xor esi, esi */
  esi = 0;
/* 80cc0b: jmp 0x80cc10 */
  goto L_80cc10;
L_80cc10: /* 80cc10: cmp esi, dword ptr [ebx + 0x90] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cc16: jge 0x80cc68 */
  if ((sf == of)) goto L_80cc68;
L_80cc18: /* 80cc18: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 80cc1e: mov edx, esi */
  edx = esi;
/* 80cc20: imul edx, edx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x34u);
  edx = (uint32_t)r;
  }
/* 80cc23: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* 80cc26: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 80cc2c: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc2e: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 80cc34: jne 0x80cc3b */
  if (!zf) goto L_80cc3b;
L_80cc36: /* 80cc36: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc39: je 0x80cc65 */
  if (zf) goto L_80cc65;
L_80cc3b: /* 80cc3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80cc3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80cc3e: call 0x6c5560 */
  esp -= 4; W32(esp, 0x80cc43u); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 80cc43: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 80cc46: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 80cc49: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 80cc4c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 80cc4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cc4e: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 80cc51: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cc54: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 80cc5a: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 80cc5e: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 80cc62: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80cc63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_80cc65: /* 80cc65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 80cc66: jmp 0x80cc10 */
  goto L_80cc10;
L_80cc68: /* 80cc68: xor edx, edx */
  edx = 0;
L_80cc6a: /* 80cc6a: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 80cc6d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80cc70: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 80cc73: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 80cc76: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cc79: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 80cc7c: jge 0x80cf53 */
  if ((sf == of)) goto L_80cf53;
L_80cc82: /* 80cc82: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80cc84: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 80cc87: test dword ptr [ecx + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc91: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 80cc94: jne 0x80cf4d */
  if (!zf) goto L_80cf4d;
L_80cc9a: /* 80cc9a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80cc9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc9f: je 0x80ccae */
  if (zf) goto L_80ccae;
L_80cca1: /* 80cca1: test byte ptr [ecx + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cca8: je 0x80cf4d */
  if (zf) goto L_80cf4d;
L_80ccae: /* 80ccae: cmp byte ptr [ecx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80ccb2: jne 0x80ccc9 */
  if (!zf) goto L_80ccc9;
L_80ccb4: /* 80ccb4: mov edi, dword ptr [ebx + 0x1c] */
  edi = R32((uint32_t)(ebx + 0x1cu));
/* 80ccb7: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 80ccba: xor eax, eax */
  eax = 0;
/* 80ccbc: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 80ccbd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 80ccc0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 80ccc3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 80ccc4: jmp 0x80cecb */
  goto L_80cecb;
L_80ccc9: /* 80ccc9: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 80cccf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80ccd1: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 80ccd4: lea esi, [edi + 0x2c] */
  esi = (uint32_t)(edi + 0x2cu);
/* 80ccd7: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 80ccdd: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 80cce0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80cce2: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 80cce8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 80ccea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ccec: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 80ccef: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 80ccf2: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x80ccf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80ccf8: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 80ccfb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 80ccfd: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 80ccff: fmul dword ptr [0xa130a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa130a4u)));
/* 80cd05: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 80cd08: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 80cd0b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 80cd0d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 80cd13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80cd15: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cd18: je 0x80cd22 */
  if (zf) goto L_80cd22;
L_80cd1a: /* 80cd1a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80cd1c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_80cd22: /* 80cd22: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80cd25: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 80cd28: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x80cd2eu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 80cd2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80cd31: fst qword ptr [ebp - 0x2c] */
  WF64((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 80cd34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80cd37: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80cd3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cd3b: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 80cd41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cd42: mov ecx, esi */
  ecx = esi;
/* 80cd44: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x80cd4au); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 80cd4a: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 80cd4d: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 80cd53: lea edx, [ebx + 0x28] */
  edx = (uint32_t)(ebx + 0x28u);
/* 80cd56: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 80cd59: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 80cd5c: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 80cd62: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 80cd69: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 80cd6c: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 80cd72: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 80cd74: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 80cd77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 80cd7a: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 80cd7d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 80cd80: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 80cd83: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80cd86: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80cd89: lea edi, [ebp - 0x90] */
  edi = (uint32_t)(ebp + 0xffffff70u);
/* 80cd8f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd91: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 80cd93: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd95: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80cd98: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd9a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80cd9d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd9f: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80cda2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cda5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80cda8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cdab: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80cdae: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cdb1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80cdb4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cdb7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80cdba: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80cdbc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80cdbe: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cdc0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cdc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80cdc4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdc7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80cdca: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdcd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80cdd0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdd3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80cdd6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdd9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80cddc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80cdde: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80cde0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cde2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cde4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80cde6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cde9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80cdec: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cdef: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80cdf2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cdf5: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80cdf8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cdfb: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80cdfe: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80ce00: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80ce02: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80ce04: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80ce06: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ce08: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80ce0a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80ce0c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80ce0e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80ce11: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80ce14: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80ce17: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* 80ce1a: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x80ce20u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 80ce20: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80ce23: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80ce26: lea ecx, [ebx + 0x80] */
  ecx = (uint32_t)(ebx + 0x80u);
/* 80ce2c: fdiv dword ptr [ebp - 0x28] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80ce2f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80ce32: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x80ce38u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 80ce38: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 80ce3b: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80ce3e: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 80ce41: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 80ce44: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 80ce47: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 80ce4d: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80ce50: call 0x99c958 */
  esp -= 4; W32(esp, 0x80ce55u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80ce55: xor edi, edi */
  edi = 0;
/* 80ce57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce59: jge 0x80ce60 */
  if ((sf == of)) goto L_80ce60;
L_80ce5b: /* 80ce5b: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 80ce5e: jmp 0x80ce6a */
  goto L_80ce6a;
L_80ce60: /* 80ce60: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce62: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 80ce65: jl 0x80ce6a */
  if ((sf != of)) goto L_80ce6a;
L_80ce67: /* 80ce67: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_80ce6a: /* 80ce6a: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 80ce70: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80ce73: call 0x99c958 */
  esp -= 4; W32(esp, 0x80ce78u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80ce78: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce7a: jl 0x80ce84 */
  if ((sf != of)) goto L_80ce84;
L_80ce7c: /* 80ce7c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce7e: mov edi, eax */
  edi = eax;
/* 80ce80: jl 0x80ce84 */
  if ((sf != of)) goto L_80ce84;
L_80ce82: /* 80ce82: mov edi, esi */
  edi = esi;
L_80ce84: /* 80ce84: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 80ce8a: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 80ce8d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 80ce8f: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 80ce92: call 0x99c958 */
  esp -= 4; W32(esp, 0x80ce97u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80ce97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80ce99: jge 0x80cea4 */
  if ((sf == of)) goto L_80cea4;
L_80ce9b: /* 80ce9b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 80cea2: jmp 0x80ceae */
  goto L_80ceae;
L_80cea4: /* 80cea4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cea6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 80cea9: jl 0x80ceae */
  if ((sf != of)) goto L_80ceae;
L_80ceab: /* 80ceab: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_80ceae: /* 80ceae: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 80ceb4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 80ceb6: call 0x99c958 */
  esp -= 4; W32(esp, 0x80cebbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80cebb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80cebd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80cebf: jge 0x80cec5 */
  if ((sf == of)) goto L_80cec5;
L_80cec1: /* 80cec1: xor esi, esi */
  esi = 0;
/* 80cec3: jmp 0x80cecb */
  goto L_80cecb;
L_80cec5: /* 80cec5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cec7: jge 0x80cecb */
  if ((sf == of)) goto L_80cecb;
L_80cec9: /* 80cec9: mov esi, eax */
  esi = eax;
L_80cecb: /* 80cecb: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 80cecd: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 80ced3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80ced5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80cedbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80cedb: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 80cede: add eax, dword ptr [ebx + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8cu)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 80cee4: je 0x80cefb */
  if (zf) goto L_80cefb;
L_80cee6: /* 80cee6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80cee9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80ceec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ceed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ceee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80ceef: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 80cef2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cef3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cef4: mov ecx, eax */
  ecx = eax;
/* 80cef6: call 0x6c8193 */
  esp -= 4; W32(esp, 0x80cefbu); SPILL(); f_6c8193(); if (g_unwind) return; RELOAD();
L_80cefb: /* 80cefb: mov eax, dword ptr [ebx + 0x90] */
  eax = R32((uint32_t)(ebx + 0x90u));
/* 80cf01: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 80cf04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 80cf05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cf06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cf07: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 80cf0a: call 0x6c5d49 */
  esp -= 4; W32(esp, 0x80cf0fu); SPILL(); f_6c5d49(); if (g_unwind) return; RELOAD();
/* 80cf0f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80cf12: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80cf15: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 80cf18: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 80cf1a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 80cf1d: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 80cf1f: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 80cf22: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 80cf23: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80cf24: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 80cf27: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 80cf2a: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80cf2c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cf2d: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 80cf30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cf33: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 80cf39: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 80cf3d: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 80cf41: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80cf44: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80cf45: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 80cf48: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80cf4b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_80cf4d: /* 80cf4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cf4e: jmp 0x80cc6a */
  goto L_80cc6a;
L_80cf53: /* 80cf53: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 80cf56: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cf59: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 80cf5c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cf5d: jmp 0x80cb99 */
  goto L_80cb99;
L_80cf62: /* 80cf62: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 80cf65: call 0x6c92f5 */
  esp -= 4; W32(esp, 0x80cf6au); SPILL(); f_6c92f5(); if (g_unwind) return; RELOAD();
/* 80cf6a: xor esi, esi */
  esi = 0;
L_80cf6c: /* 80cf6c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cf6f: cmp esi, dword ptr [eax + 0xf4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cf75: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 80cf78: jge 0x80cfe0 */
  if ((sf == of)) goto L_80cfe0;
L_80cf7a: /* 80cf7a: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 80cf80: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 80cf86: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80cf88: xor ebx, ebx */
  ebx = 0;
/* 80cf8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_80cf90: /* 80cf90: cmp ebx, dword ptr [esi + 0x90] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cf96: jge 0x80cfd7 */
  if ((sf == of)) goto L_80cfd7;
L_80cf98: /* 80cf98: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 80cf9e: mov eax, ebx */
  eax = ebx;
/* 80cfa0: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 80cfa3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80cfa5: xor edx, edx */
  edx = 0;
/* 80cfa7: xor ecx, ecx */
  ecx = 0;
/* 80cfa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80cfb0: /* 80cfb0: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cfb3: jge 0x80cfc1 */
  if ((sf == of)) goto L_80cfc1;
L_80cfb5: /* 80cfb5: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 80cfb8: cmp byte ptr [ecx + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80cfbc: jne 0x80cfd4 */
  if (!zf) goto L_80cfd4;
L_80cfbe: /* 80cfbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80cfbf: jmp 0x80cfb0 */
  goto L_80cfb0;
L_80cfc1: /* 80cfc1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cfc3: jne 0x80cfd4 */
  if (!zf) goto L_80cfd4;
L_80cfc5: /* 80cfc5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80cfc7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80cfc8: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 80cfce: call 0x6c5560 */
  esp -= 4; W32(esp, 0x80cfd3u); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 80cfd3: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_80cfd4: /* 80cfd4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80cfd5: jmp 0x80cf90 */
  goto L_80cf90;
L_80cfd7: /* 80cfd7: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80cfda: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 80cfdd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 80cfde: jmp 0x80cf6c */
  goto L_80cf6c;
L_80cfe0: /* 80cfe0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80cfe3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cfe5: je 0x80d009 */
  if (zf) goto L_80d009;
L_80cfe7: /* 80cfe7: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* 80cfea: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
/* 80cfed: push 0x6c80a3 */
  { uint32_t v = 0x6c80a3u; esp -= 4; W32(esp, v); }
/* 80cff2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cff3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 80cff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cff6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x80cffbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 80cffb: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 80d001: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80d003: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80d005: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d006: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80d009u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80d009: /* 80d009: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80d00b: je 0x80d016 */
  if (zf) goto L_80d016;
L_80d00d: /* 80d00d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80d00f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80d011: mov ecx, ebx */
  ecx = ebx;
/* 80d013: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80d016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80d016: /* 80d016: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80d019: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80d01b: jne 0x80d027 */
  if (!zf) goto L_80d027;
L_80d01d: /* 80d01d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80d020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d022: call 0x6c88f0 */
  esp -= 4; W32(esp, 0x80d027u); SPILL(); f_6c88f0(); if (g_unwind) return; RELOAD();
L_80d027: /* 80d027: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 80d02c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80d02e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80d030: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x80d033u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80d033: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 80d035: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 80d038: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 80d03b: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 80d03e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80d041: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80d043: jge 0x80d04b */
  if ((sf == of)) goto L_80d04b;
L_80d045: /* 80d045: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_80d04b: /* 80d04b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d04e: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 80d054: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80d056: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 80d059: jge 0x80d061 */
  if ((sf == of)) goto L_80d061;
L_80d05b: /* 80d05b: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_80d061: /* 80d061: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 80d067: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80d069: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 80d06c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 80d072: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 80d074: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80d076: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80d079: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 80d07f: fsub qword ptr [ebp - 0x9c] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffff64u)));
/* 80d085: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 80d088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d089: push 0xae1110 */
  { uint32_t v = 0xae1110u; esp -= 4; W32(esp, v); }
/* 80d08e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80d08f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x80d095u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 80d095: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80d098: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 80d09b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 80d09f: call 0x6c92f5 */
  esp -= 4; W32(esp, 0x80d0a4u); SPILL(); f_6c92f5(); if (g_unwind) return; RELOAD();
/* 80d0a4: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 80d0a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80d0ab: call 0x6cc419 */
  esp -= 4; W32(esp, 0x80d0b0u); SPILL(); f_6cc419(); if (g_unwind) return; RELOAD();
/* 80d0b0: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 80d0b3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80d0b7: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80d0bcu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
L_80d0bc: /* 80d0bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80d0bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80d0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d0c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80d0c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80d0c9: mov esp, ebp */
  esp = ebp;
/* 80d0cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80d0cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80cc0d(void) {
  LOAD_REGS();
  goto L_80cc0d;
L_80cb99: /* 80cb99: mov ecx, dword ptr [eax + 0xf4] */
  ecx = R32((uint32_t)(eax + 0xf4u));
/* 80cb9f: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cba1: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 80cba4: jge 0x80cf62 */
  if ((sf == of)) goto L_80cf62;
L_80cbaa: /* 80cbaa: mov edi, dword ptr [eax + 0xf0] */
  edi = R32((uint32_t)(eax + 0xf0u));
/* 80cbb0: mov esi, dword ptr [eax + 0x98] */
  esi = R32((uint32_t)(eax + 0x98u));
/* 80cbb6: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 80cbbb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80cbbd: mov ebx, edx */
  ebx = edx;
/* 80cbbf: imul ebx, ebx, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xa4u);
  ebx = (uint32_t)r;
  }
/* 80cbc5: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 80cbc7: mov edi, dword ptr [ebx + 0xc] */
  edi = R32((uint32_t)(ebx + 0xcu));
/* 80cbca: push 0xae10ec */
  { uint32_t v = 0xae10ecu; esp -= 4; W32(esp, v); }
/* 80cbcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cbd0: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 80cbd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cbd4: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80cbd6: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 80cbd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cbd9: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 80cbdc: call dword ptr [esi + 0x14] */
  { uint32_t t = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, 0x80cbdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80cbdf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80cbe2: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 80cbe8: xor eax, eax */
  eax = 0;
/* 80cbea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_80cbf0: /* 80cbf0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cbf3: jge 0x80cbf8 */
  if ((sf == of)) goto L_80cbf8;
L_80cbf5: /* 80cbf5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80cbf6: jmp 0x80cbf0 */
  goto L_80cbf0;
L_80cbf8: /* 80cbf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80cbfa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80cbfc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80cc02u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80cc02: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80cc05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc07: je 0x80cc68 */
  if (zf) goto L_80cc68;
L_80cc09: /* 80cc09: xor esi, esi */
  esi = 0;
/* 80cc0b: jmp 0x80cc10 */
  goto L_80cc10;
L_80cc0d: /* 80cc0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80cc10: /* 80cc10: cmp esi, dword ptr [ebx + 0x90] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cc16: jge 0x80cc68 */
  if ((sf == of)) goto L_80cc68;
L_80cc18: /* 80cc18: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 80cc1e: mov edx, esi */
  edx = esi;
/* 80cc20: imul edx, edx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x34u);
  edx = (uint32_t)r;
  }
/* 80cc23: mov edx, dword ptr [edx + eax] */
  edx = R32((uint32_t)(edx + eax));
/* 80cc26: mov eax, dword ptr [edx + 0x80] */
  eax = R32((uint32_t)(edx + 0x80u));
/* 80cc2c: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc2e: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 80cc34: jne 0x80cc3b */
  if (!zf) goto L_80cc3b;
L_80cc36: /* 80cc36: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc39: je 0x80cc65 */
  if (zf) goto L_80cc65;
L_80cc3b: /* 80cc3b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80cc3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80cc3e: call 0x6c5560 */
  esp -= 4; W32(esp, 0x80cc43u); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 80cc43: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 80cc46: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 80cc49: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 80cc4c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 80cc4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cc4e: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 80cc51: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cc54: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 80cc5a: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 80cc5e: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 80cc62: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80cc63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_80cc65: /* 80cc65: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 80cc66: jmp 0x80cc10 */
  goto L_80cc10;
L_80cc68: /* 80cc68: xor edx, edx */
  edx = 0;
L_80cc6a: /* 80cc6a: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 80cc6d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80cc70: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 80cc73: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 80cc76: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cc79: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 80cc7c: jge 0x80cf53 */
  if ((sf == of)) goto L_80cf53;
L_80cc82: /* 80cc82: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80cc84: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 80cc87: test dword ptr [ecx + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc91: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 80cc94: jne 0x80cf4d */
  if (!zf) goto L_80cf4d;
L_80cc9a: /* 80cc9a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80cc9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cc9f: je 0x80ccae */
  if (zf) goto L_80ccae;
L_80cca1: /* 80cca1: test byte ptr [ecx + 0x80], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x80u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cca8: je 0x80cf4d */
  if (zf) goto L_80cf4d;
L_80ccae: /* 80ccae: cmp byte ptr [ecx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80ccb2: jne 0x80ccc9 */
  if (!zf) goto L_80ccc9;
L_80ccb4: /* 80ccb4: mov edi, dword ptr [ebx + 0x1c] */
  edi = R32((uint32_t)(ebx + 0x1cu));
/* 80ccb7: mov esi, dword ptr [ebx + 0x20] */
  esi = R32((uint32_t)(ebx + 0x20u));
/* 80ccba: xor eax, eax */
  eax = 0;
/* 80ccbc: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 80ccbd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 80ccc0: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 80ccc3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 80ccc4: jmp 0x80cecb */
  goto L_80cecb;
L_80ccc9: /* 80ccc9: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 80cccf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80ccd1: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 80ccd4: lea esi, [edi + 0x2c] */
  esi = (uint32_t)(edi + 0x2cu);
/* 80ccd7: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 80ccdd: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 80cce0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80cce2: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 80cce8: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 80ccea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ccec: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 80ccef: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 80ccf2: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x80ccf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80ccf8: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 80ccfb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 80ccfd: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 80ccff: fmul dword ptr [0xa130a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa130a4u)));
/* 80cd05: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 80cd08: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 80cd0b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 80cd0d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 80cd13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80cd15: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80cd18: je 0x80cd22 */
  if (zf) goto L_80cd22;
L_80cd1a: /* 80cd1a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80cd1c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_80cd22: /* 80cd22: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80cd25: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 80cd28: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x80cd2eu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 80cd2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80cd31: fst qword ptr [ebp - 0x2c] */
  WF64((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 80cd34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80cd37: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80cd3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cd3b: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 80cd41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cd42: mov ecx, esi */
  ecx = esi;
/* 80cd44: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x80cd4au); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 80cd4a: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 80cd4d: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 80cd53: lea edx, [ebx + 0x28] */
  edx = (uint32_t)(ebx + 0x28u);
/* 80cd56: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 80cd59: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 80cd5c: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 80cd62: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 80cd69: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 80cd6c: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 80cd72: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 80cd74: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 80cd77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 80cd7a: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 80cd7d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 80cd80: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 80cd83: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80cd86: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80cd89: lea edi, [ebp - 0x90] */
  edi = (uint32_t)(ebp + 0xffffff70u);
/* 80cd8f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd91: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 80cd93: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd95: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 80cd98: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd9a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 80cd9d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 80cd9f: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 80cda2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cda5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 80cda8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cdab: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 80cdae: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cdb1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 80cdb4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 80cdb7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 80cdba: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80cdbc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80cdbe: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cdc0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cdc2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80cdc4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdc7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 80cdca: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdcd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 80cdd0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdd3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 80cdd6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 80cdd9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 80cddc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80cdde: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80cde0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cde2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80cde4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80cde6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cde9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 80cdec: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cdef: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 80cdf2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cdf5: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 80cdf8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 80cdfb: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 80cdfe: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80ce00: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 80ce02: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80ce04: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 80ce06: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80ce08: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 80ce0a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 80ce0c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 80ce0e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 80ce11: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 80ce14: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 80ce17: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* 80ce1a: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x80ce20u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 80ce20: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80ce23: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80ce26: lea ecx, [ebx + 0x80] */
  ecx = (uint32_t)(ebx + 0x80u);
/* 80ce2c: fdiv dword ptr [ebp - 0x28] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80ce2f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80ce32: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x80ce38u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 80ce38: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 80ce3b: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 80ce3e: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 80ce41: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 80ce44: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 80ce47: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 80ce4d: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80ce50: call 0x99c958 */
  esp -= 4; W32(esp, 0x80ce55u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80ce55: xor edi, edi */
  edi = 0;
/* 80ce57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce59: jge 0x80ce60 */
  if ((sf == of)) goto L_80ce60;
L_80ce5b: /* 80ce5b: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 80ce5e: jmp 0x80ce6a */
  goto L_80ce6a;
L_80ce60: /* 80ce60: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce62: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 80ce65: jl 0x80ce6a */
  if ((sf != of)) goto L_80ce6a;
L_80ce67: /* 80ce67: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_80ce6a: /* 80ce6a: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 80ce70: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80ce73: call 0x99c958 */
  esp -= 4; W32(esp, 0x80ce78u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80ce78: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce7a: jl 0x80ce84 */
  if ((sf != of)) goto L_80ce84;
L_80ce7c: /* 80ce7c: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80ce7e: mov edi, eax */
  edi = eax;
/* 80ce80: jl 0x80ce84 */
  if ((sf != of)) goto L_80ce84;
L_80ce82: /* 80ce82: mov edi, esi */
  edi = esi;
L_80ce84: /* 80ce84: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 80ce8a: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 80ce8d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 80ce8f: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 80ce92: call 0x99c958 */
  esp -= 4; W32(esp, 0x80ce97u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80ce97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80ce99: jge 0x80cea4 */
  if ((sf == of)) goto L_80cea4;
L_80ce9b: /* 80ce9b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 80cea2: jmp 0x80ceae */
  goto L_80ceae;
L_80cea4: /* 80cea4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cea6: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 80cea9: jl 0x80ceae */
  if ((sf != of)) goto L_80ceae;
L_80ceab: /* 80ceab: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
L_80ceae: /* 80ceae: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 80ceb4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 80ceb6: call 0x99c958 */
  esp -= 4; W32(esp, 0x80cebbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80cebb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80cebd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80cebf: jge 0x80cec5 */
  if ((sf == of)) goto L_80cec5;
L_80cec1: /* 80cec1: xor esi, esi */
  esi = 0;
/* 80cec3: jmp 0x80cecb */
  goto L_80cecb;
L_80cec5: /* 80cec5: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cec7: jge 0x80cecb */
  if ((sf == of)) goto L_80cecb;
L_80cec9: /* 80cec9: mov esi, eax */
  esi = eax;
L_80cecb: /* 80cecb: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 80cecd: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 80ced3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80ced5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80cedbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80cedb: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 80cede: add eax, dword ptr [ebx + 0x8c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x8cu)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 80cee4: je 0x80cefb */
  if (zf) goto L_80cefb;
L_80cee6: /* 80cee6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80cee9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80ceec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ceed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ceee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80ceef: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 80cef2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cef3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cef4: mov ecx, eax */
  ecx = eax;
/* 80cef6: call 0x6c8193 */
  esp -= 4; W32(esp, 0x80cefbu); SPILL(); f_6c8193(); if (g_unwind) return; RELOAD();
L_80cefb: /* 80cefb: mov eax, dword ptr [ebx + 0x90] */
  eax = R32((uint32_t)(ebx + 0x90u));
/* 80cf01: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 80cf04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 80cf05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cf06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80cf07: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 80cf0a: call 0x6c5d49 */
  esp -= 4; W32(esp, 0x80cf0fu); SPILL(); f_6c5d49(); if (g_unwind) return; RELOAD();
/* 80cf0f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80cf12: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80cf15: mov edx, dword ptr [ebx + 0x24] */
  edx = R32((uint32_t)(ebx + 0x24u));
/* 80cf18: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 80cf1a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 80cf1d: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 80cf1f: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 80cf22: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 80cf23: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80cf24: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 80cf27: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 80cf2a: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80cf2c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cf2d: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 80cf30: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cf33: mov edx, dword ptr [ecx + 0xe4] */
  edx = R32((uint32_t)(ecx + 0xe4u));
/* 80cf39: mov ecx, dword ptr [eax + edx + 0x68] */
  ecx = R32((uint32_t)(eax + edx + 0x68u));
/* 80cf3d: lea eax, [eax + edx + 0x68] */
  eax = (uint32_t)(eax + edx + 0x68u);
/* 80cf41: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80cf44: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80cf45: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 80cf48: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80cf4b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_80cf4d: /* 80cf4d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cf4e: jmp 0x80cc6a */
  goto L_80cc6a;
L_80cf53: /* 80cf53: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 80cf56: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cf59: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 80cf5c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80cf5d: jmp 0x80cb99 */
  goto L_80cb99;
L_80cf62: /* 80cf62: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 80cf65: call 0x6c92f5 */
  esp -= 4; W32(esp, 0x80cf6au); SPILL(); f_6c92f5(); if (g_unwind) return; RELOAD();
/* 80cf6a: xor esi, esi */
  esi = 0;
L_80cf6c: /* 80cf6c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80cf6f: cmp esi, dword ptr [eax + 0xf4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xf4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cf75: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 80cf78: jge 0x80cfe0 */
  if ((sf == of)) goto L_80cfe0;
L_80cf7a: /* 80cf7a: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 80cf80: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 80cf86: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80cf88: xor ebx, ebx */
  ebx = 0;
/* 80cf8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_80cf90: /* 80cf90: cmp ebx, dword ptr [esi + 0x90] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cf96: jge 0x80cfd7 */
  if ((sf == of)) goto L_80cfd7;
L_80cf98: /* 80cf98: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 80cf9e: mov eax, ebx */
  eax = ebx;
/* 80cfa0: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 80cfa3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80cfa5: xor edx, edx */
  edx = 0;
/* 80cfa7: xor ecx, ecx */
  ecx = 0;
/* 80cfa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80cfb0: /* 80cfb0: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80cfb3: jge 0x80cfc1 */
  if ((sf == of)) goto L_80cfc1;
L_80cfb5: /* 80cfb5: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 80cfb8: cmp byte ptr [ecx + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80cfbc: jne 0x80cfd4 */
  if (!zf) goto L_80cfd4;
L_80cfbe: /* 80cfbe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80cfbf: jmp 0x80cfb0 */
  goto L_80cfb0;
L_80cfc1: /* 80cfc1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cfc3: jne 0x80cfd4 */
  if (!zf) goto L_80cfd4;
L_80cfc5: /* 80cfc5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80cfc7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80cfc8: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 80cfce: call 0x6c5560 */
  esp -= 4; W32(esp, 0x80cfd3u); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 80cfd3: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_80cfd4: /* 80cfd4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80cfd5: jmp 0x80cf90 */
  goto L_80cf90;
L_80cfd7: /* 80cfd7: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80cfda: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 80cfdd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 80cfde: jmp 0x80cf6c */
  goto L_80cf6c;
L_80cfe0: /* 80cfe0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80cfe3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80cfe5: je 0x80d009 */
  if (zf) goto L_80d009;
L_80cfe7: /* 80cfe7: mov ecx, dword ptr [eax - 4] */
  ecx = R32((uint32_t)(eax + 0xfffffffcu));
/* 80cfea: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
/* 80cfed: push 0x6c80a3 */
  { uint32_t v = 0x6c80a3u; esp -= 4; W32(esp, v); }
/* 80cff2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80cff3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 80cff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80cff6: call 0x99ca3d */
  esp -= 4; W32(esp, 0x80cffbu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 80cffb: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 80d001: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80d003: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80d005: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d006: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80d009u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80d009: /* 80d009: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80d00b: je 0x80d016 */
  if (zf) goto L_80d016;
L_80d00d: /* 80d00d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 80d00f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80d011: mov ecx, ebx */
  ecx = ebx;
/* 80d013: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x80d016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80d016: /* 80d016: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 80d019: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80d01b: jne 0x80d027 */
  if (!zf) goto L_80d027;
L_80d01d: /* 80d01d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 80d020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d022: call 0x6c88f0 */
  esp -= 4; W32(esp, 0x80d027u); SPILL(); f_6c88f0(); if (g_unwind) return; RELOAD();
L_80d027: /* 80d027: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 80d02c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80d02e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80d030: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x80d033u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80d033: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 80d035: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 80d038: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 80d03b: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 80d03e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80d041: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80d043: jge 0x80d04b */
  if ((sf == of)) goto L_80d04b;
L_80d045: /* 80d045: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_80d04b: /* 80d04b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d04e: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 80d054: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80d056: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 80d059: jge 0x80d061 */
  if ((sf == of)) goto L_80d061;
L_80d05b: /* 80d05b: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_80d061: /* 80d061: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 80d067: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80d069: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 80d06c: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 80d072: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 80d074: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80d076: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80d079: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 80d07f: fsub qword ptr [ebp - 0x9c] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffff64u)));
/* 80d085: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 80d088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d089: push 0xae1110 */
  { uint32_t v = 0xae1110u; esp -= 4; W32(esp, v); }
/* 80d08e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80d08f: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x80d095u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 80d095: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80d098: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 80d09b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 80d09f: call 0x6c92f5 */
  esp -= 4; W32(esp, 0x80d0a4u); SPILL(); f_6c92f5(); if (g_unwind) return; RELOAD();
/* 80d0a4: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 80d0a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80d0ab: call 0x6cc419 */
  esp -= 4; W32(esp, 0x80d0b0u); SPILL(); f_6cc419(); if (g_unwind) return; RELOAD();
/* 80d0b0: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 80d0b3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80d0b7: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x80d0bcu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 80d0bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80d0bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80d0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d0c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80d0c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80d0c9: mov esp, ebp */
  esp = ebp;
/* 80d0cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80d0cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80d0cf(void) {
  LOAD_REGS();
L_80d0cf: /* 80d0cf: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 80d0d5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80d0da: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 80d0dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80d0de: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 80d0e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d0e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80d0e6(); return;
}

void f_80d0e6(void) {
  LOAD_REGS();
L_80d0e6: /* 80d0e6: push 0xa13074 */
  { uint32_t v = 0xa13074u; esp -= 4; W32(esp, v); }
/* 80d0eb: push 0xae1160 */
  { uint32_t v = 0xae1160u; esp -= 4; W32(esp, v); }
/* 80d0f0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80d0f6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80d0f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80d0f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d0fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d0fd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d102u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80d102: guest_badaddr(0x80d102); return;
}

void f_80d330(void) {
  LOAD_REGS();
L_80d330: /* 80d330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d331: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d333: mov esi, ecx */
  esi = ecx;
/* 80d335: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x80d33bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 80d33b: mov eax, esi */
  eax = esi;
/* 80d33d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d33e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80d360(void) {
  LOAD_REGS();
L_80d360: /* 80d360: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 80d366: lea edx, [ecx + 0x5f4] */
  edx = (uint32_t)(ecx + 0x5f4u);
/* 80d36c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d36d: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 80d36f: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 80d371: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 80d374: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80d377: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 80d37a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80d37d: lea edx, [ecx + 0x17c] */
  edx = (uint32_t)(ecx + 0x17cu);
/* 80d383: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 80d385: add ecx, 0x624 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x624u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80d38b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 80d38d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 80d390: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 80d393: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 80d396: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 80d399: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d39a: ret  */
  esp += 4; SPILL(); return;
}

void f_80d3b0(void) {
  LOAD_REGS();
L_80d3b0: /* 80d3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80d3b1: mov ebp, esp */
  ebp = esp;
/* 80d3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80d3b5: push 0x9d2720 */
  { uint32_t v = 0x9d2720u; esp -= 4; W32(esp, v); }
/* 80d3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80d3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80d3c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80d3cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80d3cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d3cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80d3ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80d3d1: mov esi, ecx */
  esi = ecx;
/* 80d3d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80d3da: call 0x6cb45b */
  esp -= 4; W32(esp, 0x80d3dfu); SPILL(); f_6cb45b(); if (g_unwind) return; RELOAD();
/* 80d3df: mov dword ptr [ebp - 0x24], 0xc640e400 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xc640e400u);
/* 80d3e6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80d3e9: lea eax, [esi + 0x618] */
  eax = (uint32_t)(esi + 0x618u);
/* 80d3ef: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80d3f1: mov dword ptr [ebp - 0x20], 0xc640e400 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xc640e400u);
/* 80d3f8: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d3fb: push 0x315 */
  { uint32_t v = 0x315u; esp -= 4; W32(esp, v); }
/* 80d400: mov dword ptr [ebp - 0x1c], 0xc640e400 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xc640e400u);
/* 80d407: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80d40a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80d40d: push 0x1c8 */
  { uint32_t v = 0x1c8u; esp -= 4; W32(esp, v); }
/* 80d412: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80d415: push 0x7b */
  { uint32_t v = 0x7bu; esp -= 4; W32(esp, v); }
/* 80d417: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80d41a: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x80d420u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 80d420: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80d422: lea edx, [esi + 0x63c] */
  edx = (uint32_t)(esi + 0x63cu);
/* 80d428: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80d42a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80d42d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80d430: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80d433: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80d436: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 80d43c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80d43e: je 0x80d4a3 */
  if (zf) goto L_80d4a3;
L_80d440: /* 80d440: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 80d443: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80d445: je 0x80d4a3 */
  if (zf) goto L_80d4a3;
L_80d447: /* 80d447: xor eax, eax */
  eax = 0;
/* 80d449: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80d450: /* 80d450: mov ecx, dword ptr [esi + 0x280] */
  ecx = R32((uint32_t)(esi + 0x280u));
/* 80d456: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 80d459: cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80d45c: jge 0x80d4a3 */
  if ((sf == of)) goto L_80d4a3;
L_80d45e: /* 80d45e: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 80d461: mov edx, eax */
  edx = eax;
/* 80d463: imul edx, edx, 0x148 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x148u);
  edx = (uint32_t)r;
  }
/* 80d469: mov dword ptr [ecx + edx + 0x104], eax */
  W32((uint32_t)(ecx + edx + 0x104u), eax);
/* 80d470: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80d471: jmp 0x80d450 */
  goto L_80d450;
L_80d4a3: /* 80d4a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80d4a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80d4a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d4a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80d4af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80d4b0: mov esp, ebp */
  esp = ebp;
/* 80d4b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80d4b3: ret  */
  esp += 4; SPILL(); return;
}

void f_80d473(void) {
  LOAD_REGS();
L_80d473: /* 80d473: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80d476: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80d47b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 80d47e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d47f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 80d482: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d487u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80d487(); return;
}

void f_80d487(void) {
  LOAD_REGS();
L_80d487: /* 80d487: push 0xa130a8 */
  { uint32_t v = 0xa130a8u; esp -= 4; W32(esp, v); }
/* 80d48c: push 0xae12d8 */
  { uint32_t v = 0xae12d8u; esp -= 4; W32(esp, v); }
/* 80d491: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80d497u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80d497: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80d49a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d49c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d49e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d4a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 80d4a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80d4a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80d4a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d4a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80d4af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80d4b0: mov esp, ebp */
  esp = ebp;
/* 80d4b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80d4b3: ret  */
  esp += 4; SPILL(); return;
}

void f_80d510(void) {
  LOAD_REGS();
L_80d510: /* 80d510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80d511: mov ebp, esp */
  ebp = esp;
/* 80d513: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80d515: push 0x9d2730 */
  { uint32_t v = 0x9d2730u; esp -= 4; W32(esp, v); }
/* 80d51a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80d520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d521: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80d528: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80d52b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80d52c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d52d: mov esi, ecx */
  esi = ecx;
/* 80d52f: mov al, byte ptr [esi + 0x33f] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x33fu))) & 0xffu);
/* 80d535: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80d537: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80d538: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80d53b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80d542: lea ebx, [esi + 0x5f4] */
  ebx = (uint32_t)(esi + 0x5f4u);
/* 80d548: lea edi, [esi + 0x170] */
  edi = (uint32_t)(esi + 0x170u);
/* 80d54e: jne 0x80d5b8 */
  if (!zf) goto L_80d5b8;
L_80d550: /* 80d550: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 80d553: mov eax, ebx */
  eax = ebx;
/* 80d555: fsub dword ptr [esi + 0x608] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x608u)));
/* 80d55b: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 80d55e: fsub dword ptr [esi + 0x604] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x604u)));
/* 80d564: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 80d566: fsub dword ptr [esi + 0x600] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x600u)));
/* 80d56c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80d56f: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80d572: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80d574: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80d577: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80d57a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80d57d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80d580: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d583: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80d586: lea edx, [esi + 0x630] */
  edx = (uint32_t)(esi + 0x630u);
/* 80d58c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80d58d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 80d590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d591: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 80d597: call dword ptr [0xcfaad4] */
  esp -= 4; W32(esp, 0x80d59du); SPILL(); f_4e4174(); if (g_unwind) return; /* Core!??GFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80d59d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80d59f: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80d5a5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80d5a7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80d5aa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 80d5ad: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80d5b0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 80d5b3: jmp 0x80d6a2 */
  goto L_80d6a2;
L_80d5b8: /* 80d5b8: fld dword ptr [esi + 0x3bc] */
  { double v = F32((uint32_t)(esi + 0x3bcu)); FPUSH(v); }
/* 80d5be: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 80d5c1: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 80d5c4: add eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80d5c7: fld dword ptr [esi + 0x3b8] */
  { double v = F32((uint32_t)(esi + 0x3b8u)); FPUSH(v); }
/* 80d5cd: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 80d5d0: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 80d5d3: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 80d5d6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 80d5d9: fld dword ptr [esi + 0x3b4] */
  { double v = F32((uint32_t)(esi + 0x3b4u)); FPUSH(v); }
/* 80d5df: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 80d5e1: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80d5e4: fsubr dword ptr [edi + 8] */
  ST0 = (F32((uint32_t)(edi + 0x8u))) - ST0;
/* 80d5e7: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 80d5ea: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 80d5ed: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 80d5ef: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 80d5f2: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80d5f5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80d5f8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80d5fa: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80d5fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80d600: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80d603: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80d606: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d609: lea ecx, [esi + 0x4d4] */
  ecx = (uint32_t)(esi + 0x4d4u);
/* 80d60f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80d612: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80d613: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 80d616: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80d617: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80d61d: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x80d623u); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80d623: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d624: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 80d627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d628: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 80d62e: call dword ptr [0xcfaad4] */
  esp -= 4; W32(esp, 0x80d634u); SPILL(); f_4e4174(); if (g_unwind) return; /* Core!??GFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80d634: movzx ecx, byte ptr [esi + 0x33f] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 80d63b: add ecx, 0x67 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80d63e: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 80d641: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 80d644: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80d646: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80d648: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80d64b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80d64e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80d651: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80d654: movzx eax, byte ptr [esi + 0x33f] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 80d65b: lea ecx, [eax + eax*2 + 0xed] */
  ecx = (uint32_t)(eax + eax*2 + 0xedu);
/* 80d662: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 80d665: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 80d667: lea eax, [esi + 0x600] */
  eax = (uint32_t)(esi + 0x600u);
/* 80d66d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80d66f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 80d672: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 80d675: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 80d678: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 80d67b: movzx eax, byte ptr [esi + 0x33f] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 80d682: lea eax, [eax + eax*2 + 0x135] */
  eax = (uint32_t)(eax + eax*2 + 0x135u);
/* 80d689: lea ecx, [esi + eax*4] */
  ecx = (uint32_t)(esi + eax*4);
/* 80d68c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80d68e: lea edx, [esi + 0x630] */
  edx = (uint32_t)(esi + 0x630u);
/* 80d694: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 80d696: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 80d699: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 80d69c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 80d69f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_80d6a2: /* 80d6a2: movzx eax, byte ptr [esi + 0x33f] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 80d6a9: add eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80d6ac: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 80d6af: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 80d6b2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 80d6b4: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 80d6b6: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80d6b9: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 80d6bc: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 80d6bf: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80d6c2: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 80d6c5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80d6c8: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 80d6cb: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80d6ce: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 80d6d0: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 80d6d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80d6d6: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80d6d9: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d6dc: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 80d6df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80d6e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d6e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80d6e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80d6e9: mov esp, ebp */
  esp = ebp;
/* 80d6eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80d6ec: ret  */
  esp += 4; SPILL(); return;
}

void f_80d6ed(void) {
  LOAD_REGS();
L_80d6ed: /* 80d6ed: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80d6f0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80d6f5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 80d6f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80d6f9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 80d6fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d701u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80d701(); return;
}

void f_80d701(void) {
  LOAD_REGS();
L_80d701: /* 80d701: push 0xa130d0 */
  { uint32_t v = 0xa130d0u; esp -= 4; W32(esp, v); }
/* 80d706: push 0xae12e0 */
  { uint32_t v = 0xae12e0u; esp -= 4; W32(esp, v); }
/* 80d70b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80d711u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80d711: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80d714: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d716: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d718: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d71du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80d71d: guest_badaddr(0x80d71d); return;
}

void f_80d7b0(void) {
  LOAD_REGS();
L_80d7b0: /* 80d7b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80d7b1: mov ebp, esp */
  ebp = esp;
/* 80d7b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80d7b5: push 0x9d2740 */
  { uint32_t v = 0x9d2740u; esp -= 4; W32(esp, v); }
/* 80d7ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80d7c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d7c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80d7c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80d7cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80d7cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d7cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80d7ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80d7d1: mov esi, ecx */
  esi = ecx;
/* 80d7d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80d7da: call 0x6c45ed */
  esp -= 4; W32(esp, 0x80d7dfu); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 80d7df: movzx eax, byte ptr [esi + 0x33f] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 80d7e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80d7e8: jge 0x80d7ee */
  if ((sf == of)) goto L_80d7ee;
L_80d7ea: /* 80d7ea: xor eax, eax */
  eax = 0;
/* 80d7ec: jmp 0x80d7f8 */
  goto L_80d7f8;
L_80d7ee: /* 80d7ee: cmp eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80d7f1: jl 0x80d7f8 */
  if ((sf != of)) goto L_80d7f8;
L_80d7f3: /* 80d7f3: mov eax, 0x17 */
  eax = 0x17u;
L_80d7f8: /* 80d7f8: mov byte ptr [esi + 0x33f], al */
  W8((uint32_t)(esi + 0x33fu), (eax & 0xffu));
/* 80d7fe: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 80d804: fsub dword ptr [esi + 0x608] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x608u)));
/* 80d80a: lea edi, [esi + 0x600] */
  edi = (uint32_t)(esi + 0x600u);
/* 80d810: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 80d816: lea eax, [esi + 0x5f4] */
  eax = (uint32_t)(esi + 0x5f4u);
/* 80d81c: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 80d81f: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 80d825: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 80d827: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80d82a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80d82d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80d82f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80d832: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d835: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80d838: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80d83b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80d83e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80d841: lea eax, [esi + 0x630] */
  eax = (uint32_t)(esi + 0x630u);
/* 80d847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d848: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 80d84b: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 80d851: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80d852: call dword ptr [0xcfaad4] */
  esp -= 4; W32(esp, 0x80d858u); SPILL(); f_4e4174(); if (g_unwind) return; /* Core!??GFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80d858: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80d85a: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80d860: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80d862: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80d865: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 80d868: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80d86b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 80d86e: movzx eax, byte ptr [esi + 0x33f] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 80d875: lea ecx, [eax + eax*2 + 0xed] */
  ecx = (uint32_t)(eax + eax*2 + 0xedu);
/* 80d87c: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 80d87f: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 80d881: mov ecx, edi */
  ecx = edi;
/* 80d883: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 80d885: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 80d888: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 80d88b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 80d88e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 80d891: lea eax, [eax + eax*2 + 0x135] */
  eax = (uint32_t)(eax + eax*2 + 0x135u);
/* 80d898: lea ecx, [esi + eax*4] */
  ecx = (uint32_t)(esi + eax*4);
/* 80d89b: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 80d89d: lea eax, [esi + 0x630] */
  eax = (uint32_t)(esi + 0x630u);
/* 80d8a3: mov edx, eax */
  edx = eax;
/* 80d8a5: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 80d8a7: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 80d8aa: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 80d8ad: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 80d8b0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 80d8b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d8b4: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 80d8b7: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 80d8ba: fadd dword ptr [esi + 0x5fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5fcu)));
/* 80d8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d8c1: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 80d8c4: fadd dword ptr [esi + 0x5f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f8u)));
/* 80d8ca: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 80d8cc: fadd dword ptr [esi + 0x5f4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f4u)));
/* 80d8d2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80d8d5: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80d8d8: mov dword ptr [esi + 0x170], edx */
  W32((uint32_t)(esi + 0x170u), edx);
/* 80d8de: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80d8e1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80d8e4: mov dword ptr [esi + 0x174], ecx */
  W32((uint32_t)(esi + 0x174u), ecx);
/* 80d8ea: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80d8ed: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80d8f0: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80d8f6: mov dword ptr [esi + 0x178], edx */
  W32((uint32_t)(esi + 0x178u), edx);
/* 80d8fc: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x80d902u); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80d902: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80d904: mov dword ptr [esi + 0x17c], ecx */
  W32((uint32_t)(esi + 0x17cu), ecx);
/* 80d90a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80d90d: mov dword ptr [esi + 0x180], edx */
  W32((uint32_t)(esi + 0x180u), edx);
/* 80d913: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80d916: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80d918: mov ecx, esi */
  ecx = esi;
/* 80d91a: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
/* 80d920: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x80d926u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80d926: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80d929: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80d92a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80d92b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80d932: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80d933: mov esp, ebp */
  esp = ebp;
/* 80d935: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80d936: ret  */
  esp += 4; SPILL(); return;
}

void f_80d937(void) {
  LOAD_REGS();
L_80d937: /* 80d937: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80d93a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80d93f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80d942: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80d943: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80d946: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d94bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80d94b(); return;
}

void f_80d94b(void) {
  LOAD_REGS();
L_80d94b: /* 80d94b: push 0xa13104 */
  { uint32_t v = 0xa13104u; esp -= 4; W32(esp, v); }
/* 80d950: push 0xae12e8 */
  { uint32_t v = 0xae12e8u; esp -= 4; W32(esp, v); }
/* 80d955: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80d95bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80d95b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80d95e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d960: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80d962: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80d967u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80d967: guest_badaddr(0x80d967); return;
}

void f_80d9e0(void) {
  LOAD_REGS();
L_80d9e0: /* 80d9e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80d9e1: mov ebp, esp */
  ebp = esp;
/* 80d9e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80d9e5: push 0x9d2750 */
  { uint32_t v = 0x9d2750u; esp -= 4; W32(esp, v); }
/* 80d9ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80d9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80d9f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80d9f8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80d9fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80d9fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80d9fd: mov esi, ecx */
  esi = ecx;
/* 80d9ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80da00: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 80da07: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80da0a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80da0d: lea eax, [esi + 0x618] */
  eax = (uint32_t)(esi + 0x618u);
/* 80da13: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80da15: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 80da1c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80da1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80da21: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 80da28: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80da2b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80da2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80da30: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80da33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80da35: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80da38: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80da3f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x80da45u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 80da45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80da47: lea edx, [esi + 0x63c] */
  edx = (uint32_t)(esi + 0x63cu);
/* 80da4d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80da4f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80da52: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80da55: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80da58: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80da5b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80da5d: mov ecx, esi */
  ecx = esi;
/* 80da5f: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x80da65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80da65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80da68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80da69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80da6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80da71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80da72: mov esp, ebp */
  esp = ebp;
/* 80da74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80da75: ret  */
  esp += 4; SPILL(); return;
}

void f_80da76(void) {
  LOAD_REGS();
L_80da76: /* 80da76: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80da79: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80da7e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80da81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80da82: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80da85: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80da8au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80da8a(); return;
}

void f_80da8a(void) {
  LOAD_REGS();
L_80da8a: /* 80da8a: push 0xa1313c */
  { uint32_t v = 0xa1313cu; esp -= 4; W32(esp, v); }
/* 80da8f: push 0xae12f0 */
  { uint32_t v = 0xae12f0u; esp -= 4; W32(esp, v); }
/* 80da94: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80da9au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80da9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80da9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80da9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80daa1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80daa6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80daa6: guest_badaddr(0x80daa6); return;
}

void f_80daf0(void) {
  LOAD_REGS();
L_80daf0: /* 80daf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80daf1: mov ebp, esp */
  ebp = esp;
/* 80daf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80daf5: push 0x9d2760 */
  { uint32_t v = 0x9d2760u; esp -= 4; W32(esp, v); }
/* 80dafa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80db00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80db01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80db08: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80db0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80db0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80db0d: mov esi, ecx */
  esi = ecx;
/* 80db0f: mov al, byte ptr [esi + 0x342] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x342u))) & 0xffu);
/* 80db15: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80db17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80db18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80db1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80db22: je 0x80dbff */
  if (zf) goto L_80dbff;
L_80db28: /* 80db28: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 80db2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80db2d: jge 0x80db33 */
  if ((sf == of)) goto L_80db33;
L_80db2f: /* 80db2f: xor eax, eax */
  eax = 0;
/* 80db31: jmp 0x80db3d */
  goto L_80db3d;
L_80db33: /* 80db33: cmp eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80db36: jl 0x80db3d */
  if ((sf != of)) goto L_80db3d;
L_80db38: /* 80db38: mov eax, 0x17 */
  eax = 0x17u;
L_80db3d: /* 80db3d: mov byte ptr [esi + 0x342], al */
  W8((uint32_t)(esi + 0x342u), (eax & 0xffu));
/* 80db43: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 80db49: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 80db4b: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80db4d: je 0x80db65 */
  if (zf) goto L_80db65;
L_80db4f: /* 80db4f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 80db55: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 80db5b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80db5d: je 0x80db65 */
  if (zf) goto L_80db65;
L_80db5f: /* 80db5f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80db61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80db62: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80db65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80db65: /* 80db65: movzx eax, byte ptr [esi + 0x342] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x342u)));
/* 80db6c: lea ecx, [eax + eax*2 + 0xed] */
  ecx = (uint32_t)(eax + eax*2 + 0xedu);
/* 80db73: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 80db76: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 80db7c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 80db7f: fadd dword ptr [esi + 0x5fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5fcu)));
/* 80db85: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 80db88: fadd dword ptr [esi + 0x5f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f8u)));
/* 80db8e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 80db90: fadd dword ptr [esi + 0x5f4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f4u)));
/* 80db96: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80db99: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80db9c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80db9e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80dba1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80dba4: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80dba7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80dbaa: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80dbad: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 80dbb0: lea edx, [eax + eax*2 + 0x135] */
  edx = (uint32_t)(eax + eax*2 + 0x135u);
/* 80dbb7: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 80dbba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80dbbb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80dbbe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80dbbf: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80dbc5: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x80dbcbu); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80dbcb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80dbcd: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 80dbd3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80dbd5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80dbd8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80dbdb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80dbde: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80dbe1: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80dbe7: je 0x80dbff */
  if (zf) goto L_80dbff;
L_80dbe9: /* 80dbe9: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 80dbef: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 80dbf5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80dbf7: je 0x80dbff */
  if (zf) goto L_80dbff;
L_80dbf9: /* 80dbf9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80dbfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80dbfc: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x80dbffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80dbff: /* 80dbff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80dc02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80dc03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80dc04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80dc0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80dc0c: mov esp, ebp */
  esp = ebp;
/* 80dc0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80dc0f: ret  */
  esp += 4; SPILL(); return;
}

void f_80dc10(void) {
  LOAD_REGS();
L_80dc10: /* 80dc10: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80dc13: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80dc18: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80dc1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80dc1c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80dc1f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80dc24u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80dc24(); return;
}

void f_80dc24(void) {
  LOAD_REGS();
L_80dc24: /* 80dc24: push 0xa1316c */
  { uint32_t v = 0xa1316cu; esp -= 4; W32(esp, v); }
/* 80dc29: push 0xae12f8 */
  { uint32_t v = 0xae12f8u; esp -= 4; W32(esp, v); }
/* 80dc2e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80dc34u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80dc34: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80dc37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80dc39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80dc3b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80dc40u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80dc40: guest_badaddr(0x80dc40); return;
}

void f_80dcb0(void) {
  LOAD_REGS();
L_80dcb0: /* 80dcb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80dcb1: mov ebp, esp */
  ebp = esp;
/* 80dcb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80dcb5: push 0x9d2770 */
  { uint32_t v = 0x9d2770u; esp -= 4; W32(esp, v); }
/* 80dcba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80dcc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80dcc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80dcc8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80dccb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80dccc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80dccd: mov esi, ecx */
  esi = ecx;
/* 80dccf: movzx eax, byte ptr [esi + 0x343] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x343u)));
/* 80dcd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80dcd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80dcd9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80dcdc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80dce3: jge 0x80dce9 */
  if ((sf == of)) goto L_80dce9;
L_80dce5: /* 80dce5: xor eax, eax */
  eax = 0;
/* 80dce7: jmp 0x80dcf3 */
  goto L_80dcf3;
L_80dce9: /* 80dce9: cmp eax, 0x17 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80dcec: jl 0x80dcf3 */
  if ((sf != of)) goto L_80dcf3;
L_80dcee: /* 80dcee: mov eax, 0x17 */
  eax = 0x17u;
L_80dcf3: /* 80dcf3: mov byte ptr [esi + 0x343], al */
  W8((uint32_t)(esi + 0x343u), (eax & 0xffu));
/* 80dcf9: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 80dcff: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 80dd01: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80dd03: je 0x80dd1b */
  if (zf) goto L_80dd1b;
L_80dd05: /* 80dd05: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 80dd0b: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 80dd11: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80dd13: je 0x80dd1b */
  if (zf) goto L_80dd1b;
L_80dd15: /* 80dd15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80dd17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80dd18: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80dd1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80dd1b: /* 80dd1b: movzx eax, byte ptr [esi + 0x343] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x343u)));
/* 80dd22: lea ecx, [eax + eax*2 + 0xed] */
  ecx = (uint32_t)(eax + eax*2 + 0xedu);
/* 80dd29: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 80dd2c: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 80dd32: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 80dd35: fadd dword ptr [esi + 0x5fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5fcu)));
/* 80dd3b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 80dd3e: fadd dword ptr [esi + 0x5f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f8u)));
/* 80dd44: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 80dd46: fadd dword ptr [esi + 0x5f4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f4u)));
/* 80dd4c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80dd4f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80dd52: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80dd54: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80dd57: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80dd5a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80dd5d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80dd60: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80dd63: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 80dd66: lea edx, [eax + eax*2 + 0x135] */
  edx = (uint32_t)(eax + eax*2 + 0x135u);
/* 80dd6d: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 80dd70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80dd71: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80dd74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80dd75: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80dd7b: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x80dd81u); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80dd81: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80dd83: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 80dd89: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80dd8b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80dd8e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80dd91: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80dd94: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80dd97: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80dd9d: je 0x80ddb5 */
  if (zf) goto L_80ddb5;
L_80dd9f: /* 80dd9f: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 80dda5: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 80ddab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ddad: je 0x80ddb5 */
  if (zf) goto L_80ddb5;
L_80ddaf: /* 80ddaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80ddb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ddb2: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x80ddb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80ddb5: /* 80ddb5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ddb8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ddb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ddba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ddc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ddc2: mov esp, ebp */
  esp = ebp;
/* 80ddc4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ddc5: ret  */
  esp += 4; SPILL(); return;
}

void f_80ddc6(void) {
  LOAD_REGS();
L_80ddc6: /* 80ddc6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80ddc9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80ddce: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80ddd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80ddd2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80ddd5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80dddau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80ddda(); return;
}

void f_80ddda(void) {
  LOAD_REGS();
L_80ddda: /* 80ddda: push 0xa131b0 */
  { uint32_t v = 0xa131b0u; esp -= 4; W32(esp, v); }
/* 80dddf: push 0xae1300 */
  { uint32_t v = 0xae1300u; esp -= 4; W32(esp, v); }
/* 80dde4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80ddeau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80ddea: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80dded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ddef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ddf1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80ddf6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80ddf6: guest_badaddr(0x80ddf6); return;
}

void f_80de60(void) {
  LOAD_REGS();
L_80de60: /* 80de60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80de61: mov ebp, esp */
  ebp = esp;
/* 80de63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80de65: push 0x9d2780 */
  { uint32_t v = 0x9d2780u; esp -= 4; W32(esp, v); }
/* 80de6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80de70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80de71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80de78: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80de7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80de7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80de7d: mov esi, ecx */
  esi = ecx;
/* 80de7f: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 80de85: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 80de87: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80de89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80de8a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80de8d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80de94: je 0x80deac */
  if (zf) goto L_80deac;
L_80de96: /* 80de96: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 80de9c: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 80dea2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80dea4: je 0x80deac */
  if (zf) goto L_80deac;
L_80dea6: /* 80dea6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 80dea8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80dea9: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x80deacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80deac: /* 80deac: movzx eax, byte ptr [esi + 0x33f] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x33fu)));
/* 80deb3: lea ecx, [eax + eax*2 + 0xed] */
  ecx = (uint32_t)(eax + eax*2 + 0xedu);
/* 80deba: lea ecx, [esi + ecx*4] */
  ecx = (uint32_t)(esi + ecx*4);
/* 80debd: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 80dec3: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 80dec6: fadd dword ptr [esi + 0x5fc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5fcu)));
/* 80decc: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 80decf: fadd dword ptr [esi + 0x5f8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f8u)));
/* 80ded5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 80ded7: fadd dword ptr [esi + 0x5f4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x5f4u)));
/* 80dedd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80dee0: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80dee3: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80dee5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80dee8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80deeb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80deee: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80def1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80def4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 80def7: lea edx, [eax + eax*2 + 0x135] */
  edx = (uint32_t)(eax + eax*2 + 0x135u);
/* 80defe: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 80df01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80df02: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80df05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80df06: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80df0c: call dword ptr [0xcfaa74] */
  esp -= 4; W32(esp, 0x80df12u); SPILL(); f_4e2d0b(); if (g_unwind) return; /* Core!??HFRotator@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 80df12: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80df14: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 80df1a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 80df1c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80df1f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 80df22: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80df25: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 80df28: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80df2e: je 0x80df46 */
  if (zf) goto L_80df46;
L_80df30: /* 80df30: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 80df36: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 80df3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80df3e: je 0x80df46 */
  if (zf) goto L_80df46;
L_80df40: /* 80df40: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80df42: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80df43: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x80df46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80df46: /* 80df46: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 80df4d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80df50: lea eax, [esi + 0x618] */
  eax = (uint32_t)(esi + 0x618u);
/* 80df56: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80df58: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 80df5f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80df62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80df64: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 80df6b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80df6e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 80df71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80df73: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80df76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80df78: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80df7b: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x80df81u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 80df81: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80df83: add esi, 0x63c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 80df89: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 80df8b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 80df8e: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 80df91: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 80df94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80df97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80df98: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 80df9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80df9c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80dfa3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80dfa4: mov esp, ebp */
  esp = ebp;
/* 80dfa6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80dfa7: ret  */
  esp += 4; SPILL(); return;
}

void f_80dfa8(void) {
  LOAD_REGS();
L_80dfa8: /* 80dfa8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80dfab: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80dfb0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80dfb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80dfb4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80dfb7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80dfbcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80dfbc(); return;
}

void f_80dfbc(void) {
  LOAD_REGS();
L_80dfbc: /* 80dfbc: push 0xa131f4 */
  { uint32_t v = 0xa131f4u; esp -= 4; W32(esp, v); }
/* 80dfc1: push 0xae1308 */
  { uint32_t v = 0xae1308u; esp -= 4; W32(esp, v); }
/* 80dfc6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80dfccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80dfcc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80dfcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80dfd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80dfd3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80dfd8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80dfd8: guest_badaddr(0x80dfd8); return;
}

void f_80e040(void) {
  LOAD_REGS();
L_80e040: /* 80e040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e041: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e043: mov esi, ecx */
  esi = ecx;
/* 80e045: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x80e04bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 80e04b: mov eax, esi */
  eax = esi;
/* 80e04d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e04e: ret  */
  esp += 4; SPILL(); return;
}

void f_80e060(void) {
  LOAD_REGS();
L_80e060: /* 80e060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e062: push 0x9d27a6 */
  { uint32_t v = 0x9d27a6u; esp -= 4; W32(esp, v); }
/* 80e067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e06d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e06e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80e076: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e077: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e078: mov esi, ecx */
  esi = ecx;
/* 80e07a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e07b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 80e07f: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x80e084u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 80e084: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 80e08a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 80e092: mov dword ptr [esi], 0x9fdc88 */
  W32((uint32_t)(esi), 0x9fdc88u);
/* 80e098: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e09eu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e09e: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 80e0a4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e0aau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e0aa: lea ecx, [esi + 0x374] */
  ecx = (uint32_t)(esi + 0x374u);
/* 80e0b0: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e0b6u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e0b6: lea ecx, [esi + 0x394] */
  ecx = (uint32_t)(esi + 0x394u);
/* 80e0bc: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e0c2u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e0c2: lea ecx, [esi + 0x398] */
  ecx = (uint32_t)(esi + 0x398u);
/* 80e0c8: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e0ceu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e0ce: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 80e0d4: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e0dau); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e0da: lea ecx, [esi + 0x3a0] */
  ecx = (uint32_t)(esi + 0x3a0u);
/* 80e0e0: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e0e6u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e0e6: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 80e0ec: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e0f2u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e0f2: lea edi, [esi + 0x3b4] */
  edi = (uint32_t)(esi + 0x3b4u);
/* 80e0f8: mov ebx, 0x18 */
  ebx = 0x18u;
/* 80e0fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80e100: /* 80e100: mov ecx, edi */
  ecx = edi;
/* 80e102: call dword ptr [0xcfa1e0] */
  esp -= 4; W32(esp, 0x80e108u); SPILL(); f_4e35b2(); if (g_unwind) return; /* Core!??0FVector@@QAE@XZ */ RELOAD();
/* 80e108: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80e10b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 80e10c: jne 0x80e100 */
  if (!zf) goto L_80e100;
L_80e10e: /* 80e10e: lea edi, [esi + 0x4d4] */
  edi = (uint32_t)(esi + 0x4d4u);
/* 80e114: mov ebx, 0x18 */
  ebx = 0x18u;
/* 80e119: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80e120: /* 80e120: mov ecx, edi */
  ecx = edi;
/* 80e122: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x80e128u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 80e128: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 80e12b: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 80e12c: jne 0x80e120 */
  if (!zf) goto L_80e120;
L_80e12e: /* 80e12e: lea ecx, [esi + 0x624] */
  ecx = (uint32_t)(esi + 0x624u);
/* 80e134: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x80e13au); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 80e13a: lea ecx, [esi + 0x630] */
  ecx = (uint32_t)(esi + 0x630u);
/* 80e140: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x80e146u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 80e146: lea ecx, [esi + 0x63c] */
  ecx = (uint32_t)(esi + 0x63cu);
/* 80e14c: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x80e152u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 80e152: lea ecx, [esi + 0x688] */
  ecx = (uint32_t)(esi + 0x688u);
/* 80e158: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x80e15eu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 80e15e: lea ecx, [esi + 0x698] */
  ecx = (uint32_t)(esi + 0x698u);
/* 80e164: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e166: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x80e16cu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 80e16c: lea ecx, [esi + 0x6a4] */
  ecx = (uint32_t)(esi + 0x6a4u);
/* 80e172: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 80e177: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x80e17du); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 80e17d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 80e181: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e182: mov eax, esi */
  eax = esi;
/* 80e184: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e185: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e186: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e18d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80e190: ret  */
  esp += 4; SPILL(); return;
}

void f_80e1f0(void) {
  LOAD_REGS();
L_80e1f0: /* 80e1f0: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 80e1f6: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80e1fb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 80e1fd: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 80e1ff: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80e201: ret  */
  esp += 4; SPILL(); return;
}

void f_80e220(void) {
  LOAD_REGS();
L_80e220: /* 80e220: mov eax, dword ptr [ecx + 0x3ac] */
  eax = R32((uint32_t)(ecx + 0x3acu));
/* 80e226: ret  */
  esp += 4; SPILL(); return;
}

void f_80e240(void) {
  LOAD_REGS();
L_80e240: /* 80e240: test dword ptr [ecx + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e24a: je 0x80e25a */
  if (zf) goto L_80e25a;
L_80e24c: /* 80e24c: cmp dword ptr [esp + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80e250: jne 0x80e25a */
  if (!zf) goto L_80e25a;
L_80e252: /* 80e252: mov eax, 1 */
  eax = 0x1u;
/* 80e257: ret 4 */
  esp += 8; SPILL(); return;
L_80e25a: /* 80e25a: xor eax, eax */
  eax = 0;
/* 80e25c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e270(void) {
  LOAD_REGS();
L_80e270: /* 80e270: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 80e274: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e276: je 0x80e290 */
  if (zf) goto L_80e290;
L_80e278: /* 80e278: mov eax, dword ptr [ecx + 0x3ac] */
  eax = R32((uint32_t)(ecx + 0x3acu));
/* 80e27e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e280: je 0x80e290 */
  if (zf) goto L_80e290;
L_80e282: /* 80e282: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80e284: je 0x80e295 */
  if (zf) goto L_80e295;
L_80e286: /* 80e286: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 80e28c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e28e: jne 0x80e282 */
  if (!zf) goto L_80e282;
L_80e290: /* 80e290: xor eax, eax */
  eax = 0;
/* 80e292: ret 4 */
  esp += 8; SPILL(); return;
L_80e295: /* 80e295: mov eax, 1 */
  eax = 0x1u;
/* 80e29a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e2b0(void) {
  LOAD_REGS();
L_80e2b0: /* 80e2b0: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 80e2b6: and dword ptr [eax + 0x44c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 80e2bd: or dword ptr [ecx + 0x390], 0x2000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x390u))); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x390u), r);
  }
/* 80e2c7: ret  */
  esp += 4; SPILL(); return;
}

void f_80e2e0(void) {
  LOAD_REGS();
L_80e2e0: /* 80e2e0: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 80e2e6: and dword ptr [eax + 0x44c], 0xffffffef */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44cu))); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x44cu), r);
  }
/* 80e2ed: or dword ptr [ecx + 0x390], 0x2000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x390u))); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx + 0x390u), r);
  }
/* 80e2f7: ret  */
  esp += 4; SPILL(); return;
}

void f_80e310(void) {
  LOAD_REGS();
L_80e310: /* 80e310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80e311: mov ebp, esp */
  ebp = esp;
/* 80e313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e315: push 0x9d27c0 */
  { uint32_t v = 0x9d27c0u; esp -= 4; W32(esp, v); }
/* 80e31a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e328: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80e32b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e32c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e32d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 80e330: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e331: mov edi, ecx */
  edi = ecx;
/* 80e333: mov al, byte ptr [edi + 0x390] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x390u))) & 0xffu);
/* 80e339: xor ebx, ebx */
  ebx = 0;
/* 80e33b: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80e33d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80e340: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 80e343: je 0x80e3a4 */
  if (zf) goto L_80e3a4;
L_80e345: /* 80e345: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 80e34b: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 80e34e: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 80e354: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e355: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 80e35b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 80e35e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 80e364: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 80e36a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 80e36d: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 80e373: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 80e379: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80e37c: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x80e382u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 80e382: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 80e385: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 80e388: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 80e38b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 80e38e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80e390: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 80e393: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 80e395: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 80e397: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 80e39d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80e39f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80e3a2: jnp 0x80e3ea */
  if (!pf) goto L_80e3ea;
L_80e3a4: /* 80e3a4: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 80e3aa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 80e3ad: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 80e3b3: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 80e3b9: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 80e3bf: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 80e3c5: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 80e3cb: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80e3ce: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80e3d1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80e3d4: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x80e3dau); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 80e3da: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 80e3dd: fcomp dword ptr [0xa1327c] */
  fpu_com(ST0, F32((uint32_t)(0xa1327cu)));
  FPOP();
/* 80e3e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80e3e5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80e3e8: jne 0x80e402 */
  if (!zf) goto L_80e402;
L_80e3ea: /* 80e3ea: mov eax, 1 */
  eax = 0x1u;
/* 80e3ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e3f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e3f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e3fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e3fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e3fc: mov esp, ebp */
  esp = ebp;
/* 80e3fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e3ff: ret 4 */
  esp += 8; SPILL(); return;
L_80e402: /* 80e402: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80e405: jge 0x80e438 */
  if ((sf == of)) goto L_80e438;
L_80e407: /* 80e407: mov eax, dword ptr [edi + ebx*4 + 0x348] */
  eax = R32((uint32_t)(edi + ebx*4 + 0x348u));
/* 80e40e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80e410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e411: mov ecx, esi */
  ecx = esi;
/* 80e413: call dword ptr [edx + 0x1ac] */
  { uint32_t t = R32((uint32_t)(edx + 0x1acu)); esp -= 4; W32(esp, 0x80e419u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80e419: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e41b: je 0x80e435 */
  if (zf) goto L_80e435;
L_80e41d: /* 80e41d: mov eax, 2 */
  eax = 0x2u;
/* 80e422: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e425: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e42c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e42d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e42e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e42f: mov esp, ebp */
  esp = ebp;
/* 80e431: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e432: ret 4 */
  esp += 8; SPILL(); return;
L_80e435: /* 80e435: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80e436: jmp 0x80e402 */
  goto L_80e402;
L_80e438: /* 80e438: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e43b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e43c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e43d: xor eax, eax */
  eax = 0;
/* 80e43f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e446: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e447: mov esp, ebp */
  esp = ebp;
/* 80e449: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e44a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e44d(void) {
  LOAD_REGS();
L_80e44d: /* 80e44d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80e450: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80e455: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 80e458: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80e459: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 80e45c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e461u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80e461(); return;
}

void f_80e461(void) {
  LOAD_REGS();
L_80e461: /* 80e461: push 0xa13228 */
  { uint32_t v = 0xa13228u; esp -= 4; W32(esp, v); }
/* 80e466: push 0xae1560 */
  { uint32_t v = 0xae1560u; esp -= 4; W32(esp, v); }
/* 80e46b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80e471u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80e471: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80e474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e476: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e478: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e47du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80e47d: guest_badaddr(0x80e47d); return;
}

void f_80e4e0(void) {
  LOAD_REGS();
L_80e4e0: /* 80e4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80e4e1: mov ebp, esp */
  ebp = esp;
/* 80e4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e4e5: push 0x9d27d0 */
  { uint32_t v = 0x9d27d0u; esp -= 4; W32(esp, v); }
/* 80e4ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e4f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e4f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80e4fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e4fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e4fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e4fe: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 80e501: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80e504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e505: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80e50c: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e512u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e512: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e513: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e516: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e51cu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e51c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e51f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e521: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e528: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e529: mov esp, ebp */
  esp = ebp;
/* 80e52b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e52c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e52f(void) {
  LOAD_REGS();
L_80e52f: /* 80e52f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80e532: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80e537: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80e53a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80e53b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80e53e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e543u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80e543(); return;
}

void f_80e543(void) {
  LOAD_REGS();
L_80e543: /* 80e543: push 0xa13280 */
  { uint32_t v = 0xa13280u; esp -= 4; W32(esp, v); }
/* 80e548: push 0xae1568 */
  { uint32_t v = 0xae1568u; esp -= 4; W32(esp, v); }
/* 80e54d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80e553u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80e553: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80e556: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e558: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e55a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e55fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80e55f: guest_badaddr(0x80e55f); return;
}

void f_80e580(void) {
  LOAD_REGS();
L_80e580: /* 80e580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80e581: mov ebp, esp */
  ebp = esp;
/* 80e583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e585: push 0x9d27e0 */
  { uint32_t v = 0x9d27e0u; esp -= 4; W32(esp, v); }
/* 80e58a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e598: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80e59b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e59c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e59d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e59e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 80e5a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80e5a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e5a5: mov esi, ecx */
  esi = ecx;
/* 80e5a7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80e5ae: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e5b4u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e5b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e5b5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e5b8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e5beu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e5be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e5c0: jne 0x80e5e4 */
  if (!zf) goto L_80e5e4;
L_80e5c2: /* 80e5c2: mov ecx, dword ptr [esi + 0x3a8] */
  ecx = R32((uint32_t)(esi + 0x3a8u));
/* 80e5c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e5ca: je 0x80e5fc */
  if (zf) goto L_80e5fc;
L_80e5cc: /* 80e5cc: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 80e5cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80e5d0: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e5d6u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e5d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e5d7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e5da: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e5e0u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e5e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e5e2: je 0x80e5fc */
  if (zf) goto L_80e5fc;
L_80e5e4: /* 80e5e4: mov eax, 1 */
  eax = 0x1u;
/* 80e5e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e5ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e5f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e5f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e5f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e5f6: mov esp, ebp */
  esp = ebp;
/* 80e5f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e5f9: ret 4 */
  esp += 8; SPILL(); return;
L_80e5fc: /* 80e5fc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e5ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e600: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e601: xor eax, eax */
  eax = 0;
/* 80e603: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e60a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e60b: mov esp, ebp */
  esp = ebp;
/* 80e60d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e60e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e611(void) {
  LOAD_REGS();
L_80e611: /* 80e611: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80e614: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80e619: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80e61c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80e61d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80e620: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e625u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80e625(); return;
}

void f_80e625(void) {
  LOAD_REGS();
L_80e625: /* 80e625: push 0xa132d0 */
  { uint32_t v = 0xa132d0u; esp -= 4; W32(esp, v); }
/* 80e62a: push 0xae1570 */
  { uint32_t v = 0xae1570u; esp -= 4; W32(esp, v); }
/* 80e62f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80e635u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80e635: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80e638: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e63a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e63c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e641u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80e641: guest_badaddr(0x80e641); return;
}

void f_80e690(void) {
  LOAD_REGS();
L_80e690: /* 80e690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80e691: mov ebp, esp */
  ebp = esp;
/* 80e693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e695: push 0x9d27f0 */
  { uint32_t v = 0x9d27f0u; esp -= 4; W32(esp, v); }
/* 80e69a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e6a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e6a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80e6ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e6ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e6ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e6ae: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 80e6b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80e6b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e6b5: mov esi, ecx */
  esi = ecx;
/* 80e6b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80e6be: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e6c4u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e6c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e6c5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e6c8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e6ceu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e6ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e6d0: jne 0x80e6f4 */
  if (!zf) goto L_80e6f4;
L_80e6d2: /* 80e6d2: mov ecx, dword ptr [esi + 0x3a8] */
  ecx = R32((uint32_t)(esi + 0x3a8u));
/* 80e6d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e6da: je 0x80e70c */
  if (zf) goto L_80e70c;
L_80e6dc: /* 80e6dc: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 80e6df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80e6e0: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e6e6u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e6e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e6e7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e6ea: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e6f0u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e6f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e6f2: je 0x80e70c */
  if (zf) goto L_80e70c;
L_80e6f4: /* 80e6f4: mov eax, 1 */
  eax = 0x1u;
/* 80e6f9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e6fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e703: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e704: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e705: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e706: mov esp, ebp */
  esp = ebp;
/* 80e708: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e709: ret 4 */
  esp += 8; SPILL(); return;
L_80e70c: /* 80e70c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e70f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e710: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e711: xor eax, eax */
  eax = 0;
/* 80e713: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e71a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e71b: mov esp, ebp */
  esp = ebp;
/* 80e71d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e71e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e721(void) {
  LOAD_REGS();
L_80e721: /* 80e721: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80e724: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80e729: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80e72c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80e72d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80e730: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e735u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80e735(); return;
}

void f_80e735(void) {
  LOAD_REGS();
L_80e735: /* 80e735: push 0xa1331c */
  { uint32_t v = 0xa1331cu; esp -= 4; W32(esp, v); }
/* 80e73a: push 0xae1578 */
  { uint32_t v = 0xae1578u; esp -= 4; W32(esp, v); }
/* 80e73f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80e745u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80e745: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80e748: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e74a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e74c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e751u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80e751: guest_badaddr(0x80e751); return;
}

void f_80e7a0(void) {
  LOAD_REGS();
L_80e7a0: /* 80e7a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80e7a1: mov ebp, esp */
  ebp = esp;
/* 80e7a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e7a5: push 0x9d2800 */
  { uint32_t v = 0x9d2800u; esp -= 4; W32(esp, v); }
/* 80e7aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e7b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e7b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80e7bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e7bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e7bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e7be: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 80e7c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80e7c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e7c5: mov esi, ecx */
  esi = ecx;
/* 80e7c7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80e7ce: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e7d4u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e7d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e7d5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e7d8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e7deu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e7de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e7e0: jne 0x80e804 */
  if (!zf) goto L_80e804;
L_80e7e2: /* 80e7e2: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 80e7e8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e7ea: je 0x80e81c */
  if (zf) goto L_80e81c;
L_80e7ec: /* 80e7ec: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 80e7ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80e7f0: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e7f6u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e7f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e7f7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e7fa: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e800u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e800: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e802: je 0x80e81c */
  if (zf) goto L_80e81c;
L_80e804: /* 80e804: mov eax, 1 */
  eax = 0x1u;
/* 80e809: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e80c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e813: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e814: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e815: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e816: mov esp, ebp */
  esp = ebp;
/* 80e818: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e819: ret 4 */
  esp += 8; SPILL(); return;
L_80e81c: /* 80e81c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e81f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e820: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e821: xor eax, eax */
  eax = 0;
/* 80e823: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e82a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e82b: mov esp, ebp */
  esp = ebp;
/* 80e82d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e82e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e831(void) {
  LOAD_REGS();
L_80e831: /* 80e831: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80e834: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80e839: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80e83c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80e83d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80e840: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e845u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80e845(); return;
}

void f_80e845(void) {
  LOAD_REGS();
L_80e845: /* 80e845: push 0xa13360 */
  { uint32_t v = 0xa13360u; esp -= 4; W32(esp, v); }
/* 80e84a: push 0xae1580 */
  { uint32_t v = 0xae1580u; esp -= 4; W32(esp, v); }
/* 80e84f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80e855u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80e855: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80e858: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e85a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e85c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e861u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80e861: guest_badaddr(0x80e861); return;
}

void f_80e8b0(void) {
  LOAD_REGS();
L_80e8b0: /* 80e8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80e8b1: mov ebp, esp */
  ebp = esp;
/* 80e8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e8b5: push 0x9d2810 */
  { uint32_t v = 0x9d2810u; esp -= 4; W32(esp, v); }
/* 80e8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e8c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80e8cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e8cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e8cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e8ce: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 80e8d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80e8d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e8d5: mov esi, ecx */
  esi = ecx;
/* 80e8d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80e8de: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e8e4u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e8e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e8e5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e8e8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e8eeu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e8ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e8f0: jne 0x80e914 */
  if (!zf) goto L_80e914;
L_80e8f2: /* 80e8f2: mov ecx, dword ptr [esi + 0x3a8] */
  ecx = R32((uint32_t)(esi + 0x3a8u));
/* 80e8f8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e8fa: je 0x80e92c */
  if (zf) goto L_80e92c;
L_80e8fc: /* 80e8fc: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 80e8ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80e900: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e906u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e906: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e907: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e90a: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e910u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e910: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80e912: je 0x80e92c */
  if (zf) goto L_80e92c;
L_80e914: /* 80e914: mov eax, 1 */
  eax = 0x1u;
/* 80e919: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e91c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e923: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e924: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e925: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e926: mov esp, ebp */
  esp = ebp;
/* 80e928: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e929: ret 4 */
  esp += 8; SPILL(); return;
L_80e92c: /* 80e92c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80e92f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80e930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80e931: xor eax, eax */
  eax = 0;
/* 80e933: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80e93a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80e93b: mov esp, ebp */
  esp = ebp;
/* 80e93d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80e93e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80e941(void) {
  LOAD_REGS();
L_80e941: /* 80e941: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80e944: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80e949: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80e94c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80e94d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80e950: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e955u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80e955(); return;
}

void f_80e955(void) {
  LOAD_REGS();
L_80e955: /* 80e955: push 0xa13394 */
  { uint32_t v = 0xa13394u; esp -= 4; W32(esp, v); }
/* 80e95a: push 0xae1588 */
  { uint32_t v = 0xae1588u; esp -= 4; W32(esp, v); }
/* 80e95f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80e965u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80e965: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80e968: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e96a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80e96c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80e971u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80e971: guest_badaddr(0x80e971); return;
}

void f_80e9c0(void) {
  LOAD_REGS();
L_80e9c0: /* 80e9c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80e9c1: mov ebp, esp */
  ebp = esp;
/* 80e9c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80e9c5: push 0x9d2820 */
  { uint32_t v = 0x9d2820u; esp -= 4; W32(esp, v); }
/* 80e9ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80e9d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e9d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80e9d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80e9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80e9dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80e9dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80e9de: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 80e9e1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80e9e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e9e5: mov esi, ecx */
  esi = ecx;
/* 80e9e7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80e9ee: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80e9f4u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80e9f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80e9f5: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80e9f8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80e9feu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80e9fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ea00: jne 0x80ea24 */
  if (!zf) goto L_80ea24;
L_80ea02: /* 80ea02: mov ecx, dword ptr [esi + 0x3a8] */
  ecx = R32((uint32_t)(esi + 0x3a8u));
/* 80ea08: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ea0a: je 0x80ea3c */
  if (zf) goto L_80ea3c;
L_80ea0c: /* 80ea0c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 80ea0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80ea10: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x80ea16u); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 80ea16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ea17: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 80ea1a: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x80ea20u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 80ea20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ea22: je 0x80ea3c */
  if (zf) goto L_80ea3c;
L_80ea24: /* 80ea24: mov eax, 1 */
  eax = 0x1u;
/* 80ea29: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ea2c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ea33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ea34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ea35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ea36: mov esp, ebp */
  esp = ebp;
/* 80ea38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ea39: ret 4 */
  esp += 8; SPILL(); return;
L_80ea3c: /* 80ea3c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ea3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ea40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ea41: xor eax, eax */
  eax = 0;
/* 80ea43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ea4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ea4b: mov esp, ebp */
  esp = ebp;
/* 80ea4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ea4e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80ea51(void) {
  LOAD_REGS();
L_80ea51: /* 80ea51: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80ea54: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80ea59: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80ea5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80ea5d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80ea60: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80ea65u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80ea65(); return;
}

void f_80ea65(void) {
  LOAD_REGS();
L_80ea65: /* 80ea65: push 0xa133d8 */
  { uint32_t v = 0xa133d8u; esp -= 4; W32(esp, v); }
/* 80ea6a: push 0xae1590 */
  { uint32_t v = 0xae1590u; esp -= 4; W32(esp, v); }
/* 80ea6f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80ea75u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80ea75: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80ea78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ea7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ea7c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80ea81u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80ea81: guest_badaddr(0x80ea81); return;
}

void f_80ead0(void) {
  LOAD_REGS();
L_80ead0: /* 80ead0: mov eax, dword ptr [ecx + 0x16c] */
  eax = R32((uint32_t)(ecx + 0x16cu));
/* 80ead6: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80eadd: jne 0x80eaf0 */
  if (!zf) goto L_80eaf0;
L_80eadf: /* 80eadf: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 80eae5: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80eae8: jne 0x80eaf0 */
  if (!zf) goto L_80eaf0;
L_80eaea: /* 80eaea: mov eax, 1 */
  eax = 0x1u;
/* 80eaef: ret  */
  esp += 4; SPILL(); return;
L_80eaf0: /* 80eaf0: xor eax, eax */
  eax = 0;
/* 80eaf2: ret  */
  esp += 4; SPILL(); return;
}

void f_80eb10(void) {
  LOAD_REGS();
L_80eb10: /* 80eb10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80eb11: mov ebp, esp */
  ebp = esp;
/* 80eb13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80eb15: push 0x9d2830 */
  { uint32_t v = 0x9d2830u; esp -= 4; W32(esp, v); }
/* 80eb1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80eb20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80eb21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80eb28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80eb2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80eb2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80eb2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80eb2e: mov edi, ecx */
  edi = ecx;
/* 80eb30: mov esi, dword ptr [edi + 0x3ac] */
  esi = R32((uint32_t)(edi + 0x3acu));
/* 80eb36: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80eb39: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80eb40: mov ebx, 8 */
  ebx = 0x8u;
L_80eb45: /* 80eb45: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80eb47: je 0x80ebac */
  if (zf) goto L_80ebac;
L_80eb49: /* 80eb49: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 80eb4f: mov ecx, eax */
  ecx = eax;
/* 80eb51: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 80eb54: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 80eb57: je 0x80eb74 */
  if (zf) goto L_80eb74;
L_80eb59: /* 80eb59: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80eb5b: je 0x80eb74 */
  if (zf) goto L_80eb74;
L_80eb5d: /* 80eb5d: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 80eb60: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80eb63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80eb64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80eb65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80eb67: mov ecx, esi */
  ecx = esi;
/* 80eb69: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x80eb6eu); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 80eb6e: or dword ptr [edi + 0x3b8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3b8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x3b8u), r);
  }
L_80eb74: /* 80eb74: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 80eb7a: jmp 0x80eb45 */
  goto L_80eb45;
L_80ebac: /* 80ebac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ebaf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ebb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ebb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ebb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ebb9: mov esp, ebp */
  esp = ebp;
/* 80ebbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ebbc: ret  */
  esp += 4; SPILL(); return;
}

void f_80eb7c(void) {
  LOAD_REGS();
L_80eb7c: /* 80eb7c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80eb7f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80eb84: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80eb87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80eb88: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80eb8b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80eb90u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80eb90(); return;
}

void f_80eb90(void) {
  LOAD_REGS();
L_80eb90: /* 80eb90: push 0xa13424 */
  { uint32_t v = 0xa13424u; esp -= 4; W32(esp, v); }
/* 80eb95: push 0xae1ae0 */
  { uint32_t v = 0xae1ae0u; esp -= 4; W32(esp, v); }
/* 80eb9a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80eba0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80eba0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80eba3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80eba5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80eba7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80ebacu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 80ebac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ebaf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ebb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ebb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ebb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ebb9: mov esp, ebp */
  esp = ebp;
/* 80ebbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ebbc: ret  */
  esp += 4; SPILL(); return;
}

void f_80ebf0(void) {
  LOAD_REGS();
L_80ebf0: /* 80ebf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80ebf1: mov ebp, esp */
  ebp = esp;
/* 80ebf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80ebf5: push 0x9d2840 */
  { uint32_t v = 0x9d2840u; esp -= 4; W32(esp, v); }
/* 80ebfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80ec00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ec01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80ec08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80ec0b: test byte ptr [ecx + 0x3b8], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x3b8u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80ec12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80ec13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ec14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ec15: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80ec18: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80ec1f: je 0x80ec82 */
  if (zf) goto L_80ec82;
L_80ec21: /* 80ec21: mov esi, dword ptr [ecx + 0x3ac] */
  esi = R32((uint32_t)(ecx + 0x3acu));
L_80ec27: /* 80ec27: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ec29: je 0x80ec82 */
  if (zf) goto L_80ec82;
L_80ec2b: /* 80ec2b: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 80ec31: mov ecx, eax */
  ecx = eax;
/* 80ec33: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 80ec36: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 80ec39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80ec3a: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 80ec3d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80ec40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ec41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80ec43: mov ecx, esi */
  ecx = esi;
/* 80ec45: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x80ec4au); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 80ec4a: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 80ec50: jmp 0x80ec27 */
  goto L_80ec27;
L_80ec82: /* 80ec82: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ec85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ec86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ec87: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ec8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ec8f: mov esp, ebp */
  esp = ebp;
/* 80ec91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ec92: ret  */
  esp += 4; SPILL(); return;
}

void f_80ec52(void) {
  LOAD_REGS();
L_80ec52: /* 80ec52: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80ec55: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80ec5a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 80ec5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ec5e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 80ec61: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80ec66u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80ec66(); return;
}

void f_80ec66(void) {
  LOAD_REGS();
L_80ec66: /* 80ec66: push 0xa13448 */
  { uint32_t v = 0xa13448u; esp -= 4; W32(esp, v); }
/* 80ec6b: push 0xae1ae8 */
  { uint32_t v = 0xae1ae8u; esp -= 4; W32(esp, v); }
/* 80ec70: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80ec76u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80ec76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80ec79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ec7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ec7d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80ec82u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 80ec82: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ec85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ec86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ec87: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ec8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ec8f: mov esp, ebp */
  esp = ebp;
/* 80ec91: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ec92: ret  */
  esp += 4; SPILL(); return;
}

void f_80ecd0(void) {
  LOAD_REGS();
L_80ecd0: /* 80ecd0: mov eax, dword ptr [ecx + 0x390] */
  eax = R32((uint32_t)(ecx + 0x390u));
/* 80ecd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ecd7: mov esi, eax */
  esi = eax;
/* 80ecd9: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 80ecdb: and esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 80ecde: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 80ece1: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 80ece3: mov eax, dword ptr [ecx + 0x38c] */
  eax = R32((uint32_t)(ecx + 0x38cu));
/* 80ece9: mov dword ptr [ecx + 0x390], esi */
  W32((uint32_t)(ecx + 0x390u), esi);
/* 80ecef: add eax, dword ptr [ecx + 0x384] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x384u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80ecf5: mov esi, dword ptr [ecx + 0x388] */
  esi = R32((uint32_t)(ecx + 0x388u));
/* 80ecfb: xor edx, edx */
  edx = 0;
/* 80ecfd: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 80ecff: mov dword ptr [ecx + 0x368], 0x989680 */
  W32((uint32_t)(ecx + 0x368u), 0x989680u);
/* 80ed09: mov dword ptr [ecx + 0x374], edx */
  W32((uint32_t)(ecx + 0x374u), edx);
/* 80ed0f: mov dword ptr [ecx + 0x378], edx */
  W32((uint32_t)(ecx + 0x378u), edx);
/* 80ed15: mov dword ptr [ecx + 0x37c], edx */
  W32((uint32_t)(ecx + 0x37cu), edx);
/* 80ed1b: mov dword ptr [ecx + 0x380], eax */
  W32((uint32_t)(ecx + 0x380u), eax);
/* 80ed21: mov dword ptr [ecx + 0x388], edx */
  W32((uint32_t)(ecx + 0x388u), edx);
/* 80ed27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ed28: ret  */
  esp += 4; SPILL(); return;
}

void f_80ed50(void) {
  LOAD_REGS();
L_80ed50: /* 80ed50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80ed51: mov ebp, esp */
  ebp = esp;
/* 80ed53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80ed55: push 0x9d2850 */
  { uint32_t v = 0x9d2850u; esp -= 4; W32(esp, v); }
/* 80ed5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80ed60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ed61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80ed68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80ed6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80ed6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80ed6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ed70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ed71: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80ed74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ed75: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80ed7c: call 0x6c2964 */
  esp -= 4; W32(esp, 0x80ed81u); SPILL(); f_6c2964(); if (g_unwind) return; RELOAD();
/* 80ed81: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ed84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80ed85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80ed86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80ed8d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80ed8e: mov esp, ebp */
  esp = ebp;
/* 80ed90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ed91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80ed94(void) {
  LOAD_REGS();
L_80ed94: /* 80ed94: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80ed97: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80ed9c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80ed9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80eda0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80eda3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80eda8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80eda8(); return;
}

void f_80eda8(void) {
  LOAD_REGS();
L_80eda8: /* 80eda8: push 0xa13470 */
  { uint32_t v = 0xa13470u; esp -= 4; W32(esp, v); }
/* 80edad: push 0xae1ca4 */
  { uint32_t v = 0xae1ca4u; esp -= 4; W32(esp, v); }
/* 80edb2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80edb8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80edb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80edbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80edbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80edbf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80edc4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80edc4: guest_badaddr(0x80edc4); return;
}

void f_80edf0(void) {
  LOAD_REGS();
L_80edf0: /* 80edf0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80edf2: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x80edf8u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 80edf8: ret  */
  esp += 4; SPILL(); return;
}

void f_80ee10(void) {
  LOAD_REGS();
L_80ee10: /* 80ee10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 80ee14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80ee16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ee17: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80ee1du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80ee1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80ee30(void) {
  LOAD_REGS();
L_80ee30: /* 80ee30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 80ee34: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80ee36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ee37: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x80ee3du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 80ee3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80ee50(void) {
  LOAD_REGS();
L_80ee50: /* 80ee50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80ee51: mov ebp, esp */
  ebp = esp;
/* 80ee53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80ee55: push 0x9d2869 */
  { uint32_t v = 0x9d2869u; esp -= 4; W32(esp, v); }
/* 80ee5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80ee60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ee61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80ee68: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80ee6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80ee6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80ee6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ee70: mov esi, ecx */
  esi = ecx;
/* 80ee72: xor ebx, ebx */
  ebx = 0;
/* 80ee74: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80ee76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ee77: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80ee7a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 80ee7d: je 0x80ef92 */
  if (zf) goto L_80ef92;
L_80ee83: /* 80ee83: fild dword ptr [esi + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x368u)); FPUSH(v); }
/* 80ee89: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 80ee8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80ee8e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80ee91: je 0x80efda */
  if (zf) goto L_80efda;
L_80ee97: /* 80ee97: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80ee9a: call 0x99c958 */
  esp -= 4; W32(esp, 0x80ee9fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80ee9f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80eea2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 80eea8: mov dword ptr [esi + 0x368], eax */
  W32((uint32_t)(esi + 0x368u), eax);
/* 80eeae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80eeb0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80eeb3: jnp 0x80efda */
  if (!pf) goto L_80efda;
L_80eeb9: /* 80eeb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80eec0: /* 80eec0: cmp ebx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80eec6: jge 0x80efda */
  if ((sf == of)) goto L_80efda;
L_80eecc: /* 80eecc: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 80eed2: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 80eed5: mov al, byte ptr [ecx + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3cu))) & 0xffu);
/* 80eed8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 80eeda: js 0x80ef71 */
  if (sf) goto L_80ef71;
L_80eee0: /* 80eee0: fild dword ptr [ecx + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 80eee3: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 80eee9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80eeeb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80eeee: jp 0x80ef77 */
  if (pf) goto L_80ef77;
L_80eef4: /* 80eef4: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 80eef7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80eef9: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x80eeffu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 80eeff: mov ecx, esi */
  ecx = esi;
/* 80ef01: mov edi, eax */
  edi = eax;
/* 80ef03: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x80ef09u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 80ef09: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 80ef0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80ef11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ef12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ef13: push 0xae1330 */
  { uint32_t v = 0xae1330u; esp -= 4; W32(esp, v); }
/* 80ef18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80ef19: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x80ef1fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 80ef1f: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 80ef25: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 80ef28: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 80ef2b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80ef2e: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x80ef34u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 80ef34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ef35: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 80ef38: push 0xae1378 */
  { uint32_t v = 0xae1378u; esp -= 4; W32(esp, v); }
/* 80ef3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80ef3e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x80ef44u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 80ef44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80ef47: mov ecx, eax */
  ecx = eax;
/* 80ef49: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80ef4d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x80ef53u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 80ef53: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80ef59: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80ef5b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80ef5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ef5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ef5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ef61: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x80ef64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80ef64: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80ef67: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80ef6b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x80ef71u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_80ef71: /* 80ef71: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 80ef72: jmp 0x80eec0 */
  goto L_80eec0;
L_80ef77: /* 80ef77: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 80ef7a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80ef7d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 80ef7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80ef80: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 80ef83: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80ef86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ef87: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80ef89: call 0x6c9cc3 */
  esp -= 4; W32(esp, 0x80ef8eu); SPILL(); f_6c9cc3(); if (g_unwind) return; RELOAD();
/* 80ef8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80ef90: je 0x80ef71 */
  if (zf) goto L_80ef71;
L_80ef92: /* 80ef92: mov eax, 1 */
  eax = 0x1u;
/* 80ef97: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80ef9a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80efa1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80efa2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80efa3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80efa4: mov esp, ebp */
  esp = ebp;
/* 80efa6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80efa7: ret 8 */
  esp += 12; SPILL(); return;
L_80efda: /* 80efda: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80efdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80efde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80efdf: xor eax, eax */
  eax = 0;
/* 80efe1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80efe8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80efe9: mov esp, ebp */
  esp = ebp;
/* 80efeb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80efec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80efaa(void) {
  LOAD_REGS();
L_80efaa: /* 80efaa: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80efad: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80efb2: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80efb5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80efb6: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80efb9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80efbeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80efbe(); return;
}

void f_80efbe(void) {
  LOAD_REGS();
L_80efbe: /* 80efbe: push 0xa134b8 */
  { uint32_t v = 0xa134b8u; esp -= 4; W32(esp, v); }
/* 80efc3: push 0xae13bc */
  { uint32_t v = 0xae13bcu; esp -= 4; W32(esp, v); }
/* 80efc8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80efceu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80efce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80efd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80efd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80efd5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80efdau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 80efda: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80efdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80efde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80efdf: xor eax, eax */
  eax = 0;
/* 80efe1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80efe8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80efe9: mov esp, ebp */
  esp = ebp;
/* 80efeb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80efec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80f060(void) {
  LOAD_REGS();
L_80f060: /* 80f060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80f061: mov ebp, esp */
  ebp = esp;
/* 80f063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80f065: push 0x9d2892 */
  { uint32_t v = 0x9d2892u; esp -= 4; W32(esp, v); }
/* 80f06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80f070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80f078: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f07b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f07c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f07d: mov ebx, ecx */
  ebx = ecx;
/* 80f07f: mov eax, dword ptr [ebx + 0x390] */
  eax = R32((uint32_t)(ebx + 0x390u));
/* 80f085: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f086: xor edi, edi */
  edi = 0;
/* 80f088: test eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f08d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80f090: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 80f093: je 0x80f124 */
  if (zf) goto L_80f124;
L_80f099: /* 80f099: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 80f09f: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
L_80f0a5: /* 80f0a5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f0a7: je 0x80f124 */
  if (zf) goto L_80f124;
L_80f0a9: /* 80f0a9: mov ecx, dword ptr [ebx + 0xb0] */
  ecx = R32((uint32_t)(ebx + 0xb0u));
/* 80f0af: mov eax, dword ptr [ecx + 0x510] */
  eax = R32((uint32_t)(ecx + 0x510u));
L_80f0b5: /* 80f0b5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f0b7: je 0x80f0c7 */
  if (zf) goto L_80f0c7;
L_80f0b9: /* 80f0b9: mov dword ptr [eax + 0x368], edi */
  W32((uint32_t)(eax + 0x368u), edi);
/* 80f0bf: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 80f0c5: jmp 0x80f0b5 */
  goto L_80f0b5;
L_80f0c7: /* 80f0c7: push 0x4b189680 */
  { uint32_t v = 0x4b189680u; esp -= 4; W32(esp, v); }
/* 80f0cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f0cd: mov ecx, esi */
  ecx = esi;
/* 80f0cf: call 0x6c9cc3 */
  esp -= 4; W32(esp, 0x80f0d4u); SPILL(); f_6c9cc3(); if (g_unwind) return; RELOAD();
/* 80f0d4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f0d6: jne 0x80f11c */
  if (!zf) goto L_80f11c;
L_80f0d8: /* 80f0d8: mov ecx, ebx */
  ecx = ebx;
/* 80f0da: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x80f0e0u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 80f0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f0e1: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 80f0e4: push 0xae13c8 */
  { uint32_t v = 0xae13c8u; esp -= 4; W32(esp, v); }
/* 80f0e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80f0ea: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x80f0f0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 80f0f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f0f3: mov ecx, eax */
  ecx = eax;
/* 80f0f5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80f0f9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x80f0ffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 80f0ff: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80f105: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80f107: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80f109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f10a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f10b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f10c: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x80f10fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80f10f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80f112: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80f116: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x80f11cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_80f11c: /* 80f11c: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 80f122: jmp 0x80f0a5 */
  goto L_80f0a5;
L_80f124: /* 80f124: xor eax, eax */
  eax = 0;
L_80f126: /* 80f126: cmp eax, dword ptr [ebx + 0x340] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f12c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80f12f: jge 0x80f294 */
  if ((sf == of)) goto L_80f294;
L_80f135: /* 80f135: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 80f13b: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 80f13e: test dword ptr [ecx + 0x3c], 0x188 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x3cu))); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f145: jne 0x80f259 */
  if (!zf) goto L_80f259;
L_80f14b: /* 80f14b: fild dword ptr [ecx + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 80f14e: fcomp dword ptr [0xa0cecc] */
  fpu_com(ST0, F32((uint32_t)(0xa0ceccu)));
  FPOP();
/* 80f154: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80f156: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80f159: jne 0x80f259 */
  if (!zf) goto L_80f259;
L_80f15f: /* 80f15f: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 80f162: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 80f165: fld dword ptr [edx + 0x178] */
  { double v = F32((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 80f16b: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 80f171: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 80f177: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80f179: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80f17c: je 0x80f180 */
  if (zf) goto L_80f180;
L_80f17e: /* 80f17e: fchs  */
  ST0 = -ST0;
L_80f180: /* 80f180: fcomp dword ptr [0xa0d224] */
  fpu_com(ST0, F32((uint32_t)(0xa0d224u)));
  FPOP();
/* 80f186: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80f188: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80f18b: jp 0x80f259 */
  if (pf) goto L_80f259;
L_80f191: /* 80f191: cmp edi, dword ptr [ebx + 0x340] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f197: jge 0x80f201 */
  if ((sf == of)) goto L_80f201;
L_80f199: /* 80f199: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 80f19f: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 80f1a2: mov esi, dword ptr [edx + 0x28] */
  esi = R32((uint32_t)(edx + 0x28u));
/* 80f1a5: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 80f1a8: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 80f1ab: fcomp dword ptr [0xa13544] */
  fpu_com(ST0, F32((uint32_t)(0xa13544u)));
  FPOP();
/* 80f1b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80f1b3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80f1b6: jp 0x80f1fe */
  if (pf) goto L_80f1fe;
L_80f1b8: /* 80f1b8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80f1bb: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 80f1be: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 80f1c1: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 80f1c3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 80f1c6: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 80f1c9: fmul dword ptr [0xa13540] */
  ST0 = ST0 * (F32((uint32_t)(0xa13540u)));
/* 80f1cf: fcom dword ptr [0xa13544] */
  fpu_com(ST0, F32((uint32_t)(0xa13544u)));
/* 80f1d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80f1d7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80f1da: jne 0x80f1e1 */
  if (!zf) goto L_80f1e1;
L_80f1dc: /* 80f1dc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 80f1df: jmp 0x80f1ea */
  goto L_80f1ea;
L_80f1e1: /* 80f1e1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 80f1e3: mov dword ptr [ebp - 0x18], 0x442f0000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x442f0000u);
L_80f1ea: /* 80f1ea: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80f1ed: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 80f1f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f1f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80f1f2: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 80f1f5: call 0x6c9cc3 */
  esp -= 4; W32(esp, 0x80f1fau); SPILL(); f_6c9cc3(); if (g_unwind) return; RELOAD();
/* 80f1fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f1fc: jne 0x80f259 */
  if (!zf) goto L_80f259;
L_80f1fe: /* 80f1fe: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80f1ff: jmp 0x80f191 */
  goto L_80f191;
L_80f201: /* 80f201: xor eax, eax */
  eax = 0;
/* 80f203: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f205: jne 0x80f259 */
  if (!zf) goto L_80f259;
L_80f207: /* 80f207: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 80f20d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80f210: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 80f213: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 80f216: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x80f21cu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 80f21c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f21d: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 80f220: push 0xae1408 */
  { uint32_t v = 0xae1408u; esp -= 4; W32(esp, v); }
/* 80f225: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80f226: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x80f22cu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 80f22c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f22f: mov ecx, eax */
  ecx = eax;
/* 80f231: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 80f235: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x80f23bu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 80f23b: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80f241: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80f243: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80f245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f246: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f247: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80f249: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x80f24cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80f24c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 80f24f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80f253: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x80f259u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_80f259: /* 80f259: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 80f25c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80f25d: xor edi, edi */
  edi = 0;
/* 80f25f: jmp 0x80f126 */
  goto L_80f126;
L_80f294: /* 80f294: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80f297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f299: mov eax, 1 */
  eax = 0x1u;
/* 80f29e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80f2a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f2a6: mov esp, ebp */
  esp = ebp;
/* 80f2a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80f2a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f264(void) {
  LOAD_REGS();
L_80f264: /* 80f264: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80f267: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80f26c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 80f26f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80f270: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 80f273: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f278u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80f278(); return;
}

void f_80f278(void) {
  LOAD_REGS();
L_80f278: /* 80f278: push 0xa134f8 */
  { uint32_t v = 0xa134f8u; esp -= 4; W32(esp, v); }
/* 80f27d: push 0xae1474 */
  { uint32_t v = 0xae1474u; esp -= 4; W32(esp, v); }
/* 80f282: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80f288u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80f288: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f28b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f28d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f28f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f294u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 80f294: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80f297: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f299: mov eax, 1 */
  eax = 0x1u;
/* 80f29e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80f2a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f2a6: mov esp, ebp */
  esp = ebp;
/* 80f2a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80f2a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f350(void) {
  LOAD_REGS();
L_80f350: /* 80f350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80f351: mov ebp, esp */
  ebp = esp;
/* 80f353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80f355: push 0x9d28b0 */
  { uint32_t v = 0x9d28b0u; esp -= 4; W32(esp, v); }
/* 80f35a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80f360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80f368: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f36b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f36c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f36d: mov esi, ecx */
  esi = ecx;
/* 80f36f: mov al, byte ptr [esi + 0x3a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3a8u))) & 0xffu);
/* 80f375: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f376: xor edi, edi */
  edi = 0;
/* 80f378: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80f37a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80f37d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 80f380: jne 0x80f3e4 */
  if (!zf) goto L_80f3e4;
L_80f382: /* 80f382: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 80f388: mov ecx, dword ptr [eax + 0x510] */
  ecx = R32((uint32_t)(eax + 0x510u));
/* 80f38e: mov ebx, 0x100 */
  ebx = 0x100u;
L_80f393: /* 80f393: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f395: je 0x80f3cb */
  if (zf) goto L_80f3cb;
L_80f397: /* 80f397: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f399: je 0x80f3c0 */
  if (zf) goto L_80f3c0;
L_80f39b: /* 80f39b: xor edx, edx */
  edx = 0;
/* 80f39d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80f3a0: /* 80f3a0: cmp edx, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f3a6: jge 0x80f3c0 */
  if ((sf == of)) goto L_80f3c0;
L_80f3a8: /* 80f3a8: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 80f3ae: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 80f3b1: cmp dword ptr [eax + 0x30], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f3b4: jne 0x80f3c8 */
  if (!zf) goto L_80f3c8;
L_80f3b6: /* 80f3b6: test dword ptr [eax + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f3b9: je 0x80f3c8 */
  if (zf) goto L_80f3c8;
L_80f3bb: /* 80f3bb: mov edi, 1 */
  edi = 0x1u;
L_80f3c0: /* 80f3c0: mov ecx, dword ptr [ecx + 0x370] */
  ecx = R32((uint32_t)(ecx + 0x370u));
/* 80f3c6: jmp 0x80f393 */
  goto L_80f393;
L_80f3c8: /* 80f3c8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 80f3c9: jmp 0x80f3a0 */
  goto L_80f3a0;
L_80f3cb: /* 80f3cb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f3cd: jne 0x80f3e4 */
  if (!zf) goto L_80f3e4;
L_80f3cf: /* 80f3cf: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80f3d5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80f3d7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80f3d9: push 0xae1480 */
  { uint32_t v = 0xae1480u; esp -= 4; W32(esp, v); }
/* 80f3de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f3df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80f3e1: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x80f3e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80f3e4: /* 80f3e4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80f3e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f3e8: mov ecx, esi */
  ecx = esi;
/* 80f3ea: call 0x6cad4e */
  esp -= 4; W32(esp, 0x80f3efu); SPILL(); f_6cad4e(); if (g_unwind) return; RELOAD();
/* 80f3ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80f3f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f3f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f3f4: mov eax, 1 */
  eax = 0x1u;
/* 80f3f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80f400: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f401: mov esp, ebp */
  esp = ebp;
/* 80f403: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80f404: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f407(void) {
  LOAD_REGS();
L_80f407: /* 80f407: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80f40a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80f40f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80f412: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80f413: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80f416: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f41bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80f41b(); return;
}

void f_80f41b(void) {
  LOAD_REGS();
L_80f41b: /* 80f41b: push 0xa13548 */
  { uint32_t v = 0xa13548u; esp -= 4; W32(esp, v); }
/* 80f420: push 0xae14c8 */
  { uint32_t v = 0xae14c8u; esp -= 4; W32(esp, v); }
/* 80f425: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80f42bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80f42b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f42e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f430: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f432: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f437u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80f437: guest_badaddr(0x80f437); return;
}

void f_80f480(void) {
  LOAD_REGS();
L_80f480: /* 80f480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80f481: mov ebp, esp */
  ebp = esp;
/* 80f483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80f485: push 0x9d28c0 */
  { uint32_t v = 0x9d28c0u; esp -= 4; W32(esp, v); }
/* 80f48a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80f490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80f498: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f49b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f49c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f49d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f49e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80f4a1: mov esi, ecx */
  esi = ecx;
/* 80f4a3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80f4aa: xor edi, edi */
  edi = 0;
/* 80f4ac: mov bl, 0x80 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 80f4ae: mov edi, edi */
  edi = edi;
L_80f4b0: /* 80f4b0: cmp edi, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f4b6: jge 0x80f4d7 */
  if ((sf == of)) goto L_80f4d7;
L_80f4b8: /* 80f4b8: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 80f4be: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 80f4c1: test byte ptr [eax + 0x3c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80f4c4: jne 0x80f4d4 */
  if (!zf) goto L_80f4d4;
L_80f4c6: /* 80f4c6: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 80f4c9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80f4cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f4cc: mov ecx, eax */
  ecx = eax;
/* 80f4ce: call dword ptr [edx + 0x1b4] */
  { uint32_t t = R32((uint32_t)(edx + 0x1b4u)); esp -= 4; W32(esp, 0x80f4d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80f4d4: /* 80f4d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 80f4d5: jmp 0x80f4b0 */
  goto L_80f4b0;
L_80f4d7: /* 80f4d7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 80f4da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f4db: mov ecx, esi */
  ecx = esi;
/* 80f4dd: call 0x6cad4e */
  esp -= 4; W32(esp, 0x80f4e2u); SPILL(); f_6cad4e(); if (g_unwind) return; RELOAD();
/* 80f4e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80f4e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f4e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f4e7: mov eax, 1 */
  eax = 0x1u;
/* 80f4ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80f4f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f4f4: mov esp, ebp */
  esp = ebp;
/* 80f4f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80f4f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f4fa(void) {
  LOAD_REGS();
L_80f4fa: /* 80f4fa: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80f4fd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80f502: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80f505: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80f506: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80f509: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f50eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80f50e(); return;
}

void f_80f50e(void) {
  LOAD_REGS();
L_80f50e: /* 80f50e: push 0xa1357c */
  { uint32_t v = 0xa1357cu; esp -= 4; W32(esp, v); }
/* 80f513: push 0xae14d0 */
  { uint32_t v = 0xae14d0u; esp -= 4; W32(esp, v); }
/* 80f518: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80f51eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80f51e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f521: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f523: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f525: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f52au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80f52a: guest_badaddr(0x80f52a); return;
}

void f_80f560(void) {
  LOAD_REGS();
L_80f560: /* 80f560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80f561: mov ebp, esp */
  ebp = esp;
/* 80f563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80f565: push 0x9d28d9 */
  { uint32_t v = 0x9d28d9u; esp -= 4; W32(esp, v); }
/* 80f56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80f570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80f578: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f57b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f57c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f57d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f57e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 80f581: xor ebx, ebx */
  ebx = 0;
/* 80f583: mov esi, ecx */
  esi = ecx;
/* 80f585: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80f588: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 80f58b: xor ecx, ecx */
  ecx = 0;
/* 80f58d: mov dl, 0x80 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 80f58f: nop  */
L_80f590: /* 80f590: cmp ecx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f596: jge 0x80f5b2 */
  if ((sf == of)) goto L_80f5b2;
L_80f598: /* 80f598: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 80f59e: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 80f5a1: cmp dword ptr [eax + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f5a4: jne 0x80f5af */
  if (!zf) goto L_80f5af;
L_80f5a6: /* 80f5a6: test byte ptr [eax + 0x3c], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3cu))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80f5a9: je 0x80f662 */
  if (zf) goto L_80f662;
L_80f5af: /* 80f5af: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 80f5b0: jmp 0x80f590 */
  goto L_80f590;
L_80f5b2: /* 80f5b2: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 80f5b8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80f5bb: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 80f5c1: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 80f5c7: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 80f5cd: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 80f5d3: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 80f5d9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 80f5dc: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80f5df: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 80f5e2: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x80f5e8u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 80f5e8: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 80f5ee: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 80f5f1: mov eax, dword ptr [ecx + 0x510] */
  eax = R32((uint32_t)(ecx + 0x510u));
L_80f5f7: /* 80f5f7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f5f9: je 0x80f609 */
  if (zf) goto L_80f609;
L_80f5fb: /* 80f5fb: mov dword ptr [eax + 0x368], ebx */
  W32((uint32_t)(eax + 0x368u), ebx);
/* 80f601: mov eax, dword ptr [eax + 0x370] */
  eax = R32((uint32_t)(eax + 0x370u));
/* 80f607: jmp 0x80f5f7 */
  goto L_80f5f7;
L_80f609: /* 80f609: fmul dword ptr [0xa135ec] */
  ST0 = ST0 * (F32((uint32_t)(0xa135ecu)));
/* 80f60f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80f610: mov ecx, esi */
  ecx = esi;
/* 80f612: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 80f615: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f616: call 0x6c9cc3 */
  esp -= 4; W32(esp, 0x80f61bu); SPILL(); f_6c9cc3(); if (g_unwind) return; RELOAD();
/* 80f61b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f61d: jne 0x80f662 */
  if (!zf) goto L_80f662;
L_80f61f: /* 80f61f: mov ecx, esi */
  ecx = esi;
/* 80f621: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x80f627u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 80f627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f628: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 80f62b: push 0xae14d8 */
  { uint32_t v = 0xae14d8u; esp -= 4; W32(esp, v); }
/* 80f630: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80f631: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x80f637u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 80f637: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f63a: mov ecx, eax */
  ecx = eax;
/* 80f63c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 80f640: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x80f646u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 80f646: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 80f64c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 80f64e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80f650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f651: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f652: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f653: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x80f656u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80f656: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80f659: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 80f65c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x80f662u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_80f662: /* 80f662: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80f665: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f666: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f667: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80f66e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f66f: mov esp, ebp */
  esp = ebp;
/* 80f671: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80f672: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f675(void) {
  LOAD_REGS();
L_80f675: /* 80f675: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80f678: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80f67d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80f680: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80f681: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80f684: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f689u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80f689(); return;
}

void f_80f689(void) {
  LOAD_REGS();
L_80f689: /* 80f689: push 0xa135b0 */
  { uint32_t v = 0xa135b0u; esp -= 4; W32(esp, v); }
/* 80f68e: push 0xae1510 */
  { uint32_t v = 0xae1510u; esp -= 4; W32(esp, v); }
/* 80f693: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80f699u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80f699: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f69c: xor ebx, ebx */
  ebx = 0;
/* 80f69e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f69f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f6a0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80f6a5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80f6a5: guest_badaddr(0x80f6a5); return;
}

void f_80f710(void) {
  LOAD_REGS();
L_80f710: /* 80f710: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 80f716: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f717: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f718: xor eax, eax */
  eax = 0;
/* 80f71a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80f71c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f71d: jle 0x80f73f */
  if ((zf || sf != of)) goto L_80f73f;
L_80f71f: /* 80f71f: mov esi, dword ptr [ecx + 0x33c] */
  esi = R32((uint32_t)(ecx + 0x33cu));
/* 80f725: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 80f729: mov ecx, esi */
  ecx = esi;
/* 80f72b: jmp 0x80f730 */
  goto L_80f730;
L_80f730: /* 80f730: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 80f732: cmp dword ptr [ebx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f735: je 0x80f747 */
  if (zf) goto L_80f747;
L_80f737: /* 80f737: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80f738: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80f73b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f73d: jl 0x80f730 */
  if ((sf != of)) goto L_80f730;
L_80f73f: /* 80f73f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f741: xor eax, eax */
  eax = 0;
/* 80f743: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f744: ret 4 */
  esp += 8; SPILL(); return;
L_80f747: /* 80f747: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 80f74a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f74b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f74c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f74d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f72d(void) {
  LOAD_REGS();
L_80f72d: /* 80f72d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_80f730: /* 80f730: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 80f732: cmp dword ptr [ebx + 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x30u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f735: je 0x80f747 */
  if (zf) goto L_80f747;
L_80f737: /* 80f737: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80f738: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80f73b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f73d: jl 0x80f730 */
  if ((sf != of)) goto L_80f730;
L_80f73f: /* 80f73f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f741: xor eax, eax */
  eax = 0;
/* 80f743: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f744: ret 4 */
  esp += 8; SPILL(); return;
L_80f747: /* 80f747: mov eax, dword ptr [esi + eax*4] */
  eax = R32((uint32_t)(esi + eax*4));
/* 80f74a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f74b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f74c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f74d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f760(void) {
  LOAD_REGS();
L_80f760: /* 80f760: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 80f766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f767: xor eax, eax */
  eax = 0;
/* 80f769: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80f76b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f76c: mov edi, 0x10 */
  edi = 0x10u;
/* 80f771: jle 0x80f78a */
  if ((zf || sf != of)) goto L_80f78a;
L_80f773: /* 80f773: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 80f779: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 80f77c: or dword ptr [edx + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx + 0x3cu), r);
  }
/* 80f77f: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 80f785: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80f786: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f788: jl 0x80f773 */
  if ((sf != of)) goto L_80f773;
L_80f78a: /* 80f78a: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 80f790: mov edx, dword ptr [eax + 0x510] */
  edx = R32((uint32_t)(eax + 0x510u));
/* 80f796: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f798: je 0x80f7d6 */
  if (zf) goto L_80f7d6;
L_80f79a: /* 80f79a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_80f7a0: /* 80f7a0: mov eax, dword ptr [edx + 0x340] */
  eax = R32((uint32_t)(edx + 0x340u));
/* 80f7a6: xor esi, esi */
  esi = 0;
/* 80f7a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 80f7aa: jle 0x80f7cc */
  if ((zf || sf != of)) goto L_80f7cc;
L_80f7ac: /* 80f7ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_80f7b0: /* 80f7b0: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 80f7b6: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 80f7b9: cmp dword ptr [eax + 0x30], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80f7bc: jne 0x80f7c1 */
  if (!zf) goto L_80f7c1;
L_80f7be: /* 80f7be: or dword ptr [eax + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x3cu), r);
  }
L_80f7c1: /* 80f7c1: mov eax, dword ptr [edx + 0x340] */
  eax = R32((uint32_t)(edx + 0x340u));
/* 80f7c7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 80f7c8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f7ca: jl 0x80f7b0 */
  if ((sf != of)) goto L_80f7b0;
L_80f7cc: /* 80f7cc: mov edx, dword ptr [edx + 0x370] */
  edx = R32((uint32_t)(edx + 0x370u));
/* 80f7d2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f7d4: jne 0x80f7a0 */
  if (!zf) goto L_80f7a0;
L_80f7d6: /* 80f7d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f7d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f7d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_80f800(void) {
  LOAD_REGS();
L_80f800: /* 80f800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80f801: mov ebp, esp */
  ebp = esp;
/* 80f803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80f805: push 0x9d28f0 */
  { uint32_t v = 0x9d28f0u; esp -= 4; W32(esp, v); }
/* 80f80a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80f810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80f811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80f818: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f81b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80f81c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f81d: mov esi, ecx */
  esi = ecx;
/* 80f81f: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 80f825: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80f828: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f829: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80f82c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80f833: jle 0x80f85c */
  if ((zf || sf != of)) goto L_80f85c;
L_80f835: /* 80f835: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 80f83a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80f83c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80f83e: push 0xae1b00 */
  { uint32_t v = 0xae1b00u; esp -= 4; W32(esp, v); }
/* 80f843: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80f844: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f846: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x80f849u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80f849: /* 80f849: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80f84c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80f853: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f854: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f855: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f856: mov esp, ebp */
  esp = ebp;
/* 80f858: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80f859: ret 8 */
  esp += 12; SPILL(); return;
L_80f85c: /* 80f85c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 80f85f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 80f862: lea ecx, [esi + eax*4 + 0x3d0] */
  ecx = (uint32_t)(esi + eax*4 + 0x3d0u);
/* 80f869: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 80f870: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 80f873: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80f875: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 80f87c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80f87f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 80f882: mov dword ptr [ebp - 0x1c], 0x43e70000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x43e70000u);
/* 80f889: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80f88c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 80f88f: push 0x429c0000 */
  { uint32_t v = 0x429c0000u; esp -= 4; W32(esp, v); }
/* 80f894: push 0x42100000 */
  { uint32_t v = 0x42100000u; esp -= 4; W32(esp, v); }
/* 80f899: mov ecx, edi */
  ecx = edi;
/* 80f89b: mov dword ptr [edi + 0x40c], 0x461c4000 */
  W32((uint32_t)(edi + 0x40cu), 0x461c4000u);
/* 80f8a5: mov dword ptr [edi + 0x3f8], 0x44160000 */
  W32((uint32_t)(edi + 0x3f8u), 0x44160000u);
/* 80f8af: call 0x6c389b */
  esp -= 4; W32(esp, 0x80f8b4u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 80f8b4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 80f8b7: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 80f8ba: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 80f8c0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 80f8c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f8c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f8c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f8c8: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 80f8ce: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 80f8d0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f8d3: mov ecx, esp */
  ecx = esp;
/* 80f8d5: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 80f8d7: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 80f8da: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 80f8dd: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 80f8e0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 80f8e3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 80f8e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80f8ea: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x80f8f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80f8f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80f8f2: je 0x80f95a */
  if (zf) goto L_80f95a;
L_80f8f4: /* 80f8f4: mov eax, dword ptr [edi + 0x16c] */
  eax = R32((uint32_t)(edi + 0x16cu));
/* 80f8fa: mov edx, dword ptr [eax + 0x3cc] */
  edx = R32((uint32_t)(eax + 0x3ccu));
/* 80f900: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 80f906: mov dword ptr [esi + ecx*4 + 0x430], edx */
  W32((uint32_t)(esi + ecx*4 + 0x430u), edx);
/* 80f90d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80f90f: push 0x44160000 */
  { uint32_t v = 0x44160000u; esp -= 4; W32(esp, v); }
/* 80f914: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f917: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 80f91d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80f91f: mov ecx, esp */
  ecx = esp;
/* 80f921: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80f923: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80f926: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80f929: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 80f92c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 80f92f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 80f932: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80f933: mov ecx, edi */
  ecx = edi;
/* 80f935: call 0x6cb2fd */
  esp -= 4; W32(esp, 0x80f93au); SPILL(); f_6cb2fd(); if (g_unwind) return; RELOAD();
/* 80f93a: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 80f940: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 80f943: lea ecx, [esi + edx*4 + 0x3d0] */
  ecx = (uint32_t)(esi + edx*4 + 0x3d0u);
/* 80f94a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 80f94c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 80f94e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 80f951: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 80f954: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 80f957: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
L_80f95a: /* 80f95a: mov dword ptr [edi + 0x40c], 0x43d20000 */
  W32((uint32_t)(edi + 0x40cu), 0x43d20000u);
/* 80f964: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 80f96a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 80f96d: mov dword ptr [esi + ecx*4 + 0x3b0], edi */
  W32((uint32_t)(esi + ecx*4 + 0x3b0u), edi);
/* 80f974: inc dword ptr [esi + 0x3ac] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3acu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x3acu), r);
  }
/* 80f97a: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 80f97d: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 80f983: fcomp dword ptr [esi + 0x178] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x178u)));
  FPOP();
/* 80f989: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80f98b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80f98e: jne 0x80f849 */
  if (!zf) goto L_80f849;
L_80f994: /* 80f994: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 80f99a: mov edx, dword ptr [esi + 0x16c] */
  edx = R32((uint32_t)(esi + 0x16cu));
/* 80f9a0: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 80f9a6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80f9a9: fdiv dword ptr [edx + 0x3cc] */
  ST0 = ST0 / (F32((uint32_t)(edx + 0x3ccu)));
/* 80f9af: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 80f9b1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 80f9b4: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x80f9bau); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 80f9ba: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 80f9c0: fstp qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 80f9c3: fld dword ptr [eax + 0x3cc] */
  { double v = F32((uint32_t)(eax + 0x3ccu)); FPUSH(v); }
/* 80f9c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80f9cc: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 80f9d2: fmul qword ptr [ebp - 0x20] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe0u)));
/* 80f9d5: call 0x99c958 */
  esp -= 4; W32(esp, 0x80f9dau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 80f9da: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80f9dd: mov dword ptr [edi + 0x40], eax */
  W32((uint32_t)(edi + 0x40u), eax);
/* 80f9e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80f9e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80f9e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80f9e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80f9ea: mov esp, ebp */
  esp = ebp;
/* 80f9ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80f9ed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_80f9f0(void) {
  LOAD_REGS();
L_80f9f0: /* 80f9f0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80f9f3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80f9f8: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80f9fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80f9fc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80f9ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fa04u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80fa04(); return;
}

void f_80fa04(void) {
  LOAD_REGS();
L_80fa04: /* 80fa04: push 0xa135f0 */
  { uint32_t v = 0xa135f0u; esp -= 4; W32(esp, v); }
/* 80fa09: push 0xae1b48 */
  { uint32_t v = 0xae1b48u; esp -= 4; W32(esp, v); }
/* 80fa0e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80fa14u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80fa14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80fa17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80fa19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80fa1b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fa20u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80fa20: guest_badaddr(0x80fa20); return;
}

void f_80fac0(void) {
  LOAD_REGS();
L_80fac0: /* 80fac0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80fac1: mov ebp, esp */
  ebp = esp;
/* 80fac3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80fac5: push 0x9d2900 */
  { uint32_t v = 0x9d2900u; esp -= 4; W32(esp, v); }
/* 80faca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80fad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80fad1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80fad8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80fadb: xor edx, edx */
  edx = 0;
/* 80fadd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80fade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80fadf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80fae0: mov dword ptr [ecx + 0x370], edx */
  W32((uint32_t)(ecx + 0x370u), edx);
/* 80fae6: mov dword ptr [ecx + 0x374], edx */
  W32((uint32_t)(ecx + 0x374u), edx);
/* 80faec: mov dword ptr [ecx + 0x378], edx */
  W32((uint32_t)(ecx + 0x378u), edx);
/* 80faf2: mov dword ptr [ecx + 0x37c], edx */
  W32((uint32_t)(ecx + 0x37cu), edx);
/* 80faf8: add ecx, 0x33c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 80fafe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80fb01: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 80fb04: xor eax, eax */
  eax = 0;
L_80fb06: /* 80fb06: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 80fb09: jge 0x80fb0e */
  if ((sf == of)) goto L_80fb0e;
L_80fb0b: /* 80fb0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 80fb0c: jmp 0x80fb06 */
  goto L_80fb06;
L_80fb0e: /* 80fb0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80fb0f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 80fb11: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x80fb17u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 80fb17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80fb1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80fb1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80fb1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80fb23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80fb24: mov esp, ebp */
  esp = ebp;
/* 80fb26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80fb27: ret  */
  esp += 4; SPILL(); return;
}

void f_80fb28(void) {
  LOAD_REGS();
L_80fb28: /* 80fb28: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80fb2b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80fb30: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80fb33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80fb34: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80fb37: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fb3cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80fb3c(); return;
}

void f_80fb3c(void) {
  LOAD_REGS();
L_80fb3c: /* 80fb3c: push 0xa13630 */
  { uint32_t v = 0xa13630u; esp -= 4; W32(esp, v); }
/* 80fb41: push 0xae1bb0 */
  { uint32_t v = 0xae1bb0u; esp -= 4; W32(esp, v); }
/* 80fb46: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80fb4cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80fb4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80fb4f: xor edx, edx */
  edx = 0;
/* 80fb51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80fb52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80fb53: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fb58u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80fb58: guest_badaddr(0x80fb58); return;
}

void f_80fb90(void) {
  LOAD_REGS();
L_80fb90: /* 80fb90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80fb91: mov ebp, esp */
  ebp = esp;
/* 80fb93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80fb95: push 0x9d2910 */
  { uint32_t v = 0x9d2910u; esp -= 4; W32(esp, v); }
/* 80fb9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80fba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80fba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80fba8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80fbab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80fbac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80fbad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80fbae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80fbb1: mov esi, ecx */
  esi = ecx;
/* 80fbb3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80fbba: call 0x6cbec9 */
  esp -= 4; W32(esp, 0x80fbbfu); SPILL(); f_6cbec9(); if (g_unwind) return; RELOAD();
/* 80fbbf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80fbc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80fbc3: mov dword ptr [esi + 0x3ac], 0 */
  W32((uint32_t)(esi + 0x3acu), 0x0u);
/* 80fbcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80fbce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80fbd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80fbd6: mov esp, ebp */
  esp = ebp;
/* 80fbd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80fbd9: ret  */
  esp += 4; SPILL(); return;
}

void f_80fbda(void) {
  LOAD_REGS();
L_80fbda: /* 80fbda: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80fbdd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80fbe2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80fbe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80fbe6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80fbe9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fbeeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80fbee(); return;
}

void f_80fbee(void) {
  LOAD_REGS();
L_80fbee: /* 80fbee: push 0xa13678 */
  { uint32_t v = 0xa13678u; esp -= 4; W32(esp, v); }
/* 80fbf3: push 0xae1bb8 */
  { uint32_t v = 0xae1bb8u; esp -= 4; W32(esp, v); }
/* 80fbf8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80fbfeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80fbfe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80fc01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80fc03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80fc05: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fc0au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80fc0a: guest_badaddr(0x80fc0a); return;
}

void f_80fc30(void) {
  LOAD_REGS();
L_80fc30: /* 80fc30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80fc31: mov ebp, esp */
  ebp = esp;
/* 80fc33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80fc35: push 0x9d2920 */
  { uint32_t v = 0x9d2920u; esp -= 4; W32(esp, v); }
/* 80fc3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80fc40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80fc41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80fc48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80fc4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80fc4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80fc4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80fc4e: xor edi, edi */
  edi = 0;
/* 80fc50: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80fc53: mov esi, ecx */
  esi = ecx;
/* 80fc55: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 80fc58: call 0x6cbec9 */
  esp -= 4; W32(esp, 0x80fc5du); SPILL(); f_6cbec9(); if (g_unwind) return; RELOAD();
/* 80fc5d: mov eax, dword ptr [esi + 0x3a8] */
  eax = R32((uint32_t)(esi + 0x3a8u));
/* 80fc63: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80fc65: je 0x80fc6d */
  if (zf) goto L_80fc6d;
L_80fc67: /* 80fc67: mov dword ptr [eax + 0x464], edi */
  W32((uint32_t)(eax + 0x464u), edi);
L_80fc6d: /* 80fc6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80fc70: mov dword ptr [esi + 0x3ac], edi */
  W32((uint32_t)(esi + 0x3acu), edi);
/* 80fc76: mov dword ptr [esi + 0x3a8], edi */
  W32((uint32_t)(esi + 0x3a8u), edi);
/* 80fc7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80fc7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80fc7e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80fc85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80fc86: mov esp, ebp */
  esp = ebp;
/* 80fc88: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80fc89: ret  */
  esp += 4; SPILL(); return;
}

void f_80fc8a(void) {
  LOAD_REGS();
L_80fc8a: /* 80fc8a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80fc8d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80fc92: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 80fc95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 80fc96: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 80fc99: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fc9eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80fc9e(); return;
}

void f_80fc9e(void) {
  LOAD_REGS();
L_80fc9e: /* 80fc9e: push 0xa136c0 */
  { uint32_t v = 0xa136c0u; esp -= 4; W32(esp, v); }
/* 80fca3: push 0xae1bc0 */
  { uint32_t v = 0xae1bc0u; esp -= 4; W32(esp, v); }
/* 80fca8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80fcaeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80fcae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80fcb1: xor edi, edi */
  edi = 0;
/* 80fcb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80fcb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80fcb5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80fcbau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80fcba: guest_badaddr(0x80fcba); return;
}

void f_80fcf0(void) {
  LOAD_REGS();
L_80fcf0: /* 80fcf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80fcf1: mov ebp, esp */
  ebp = esp;
/* 80fcf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80fcf5: push 0x9d2930 */
  { uint32_t v = 0x9d2930u; esp -= 4; W32(esp, v); }
/* 80fcfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80fd00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80fd01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80fd08: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80fd0b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 80fd10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80fd11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80fd12: mov esi, ecx */
  esi = ecx;
/* 80fd14: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 80fd16: xor ebx, ebx */
  ebx = 0;
/* 80fd18: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80fd1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80fd1b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80fd1e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 80fd21: je 0x80fec8 */
  if (zf) goto L_80fec8;
L_80fd27: /* 80fd27: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80fd29: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80fd2b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80fd2d: mov ecx, esi */
  ecx = esi;
/* 80fd2f: call dword ptr [edx + 0x10c] */
  { uint32_t t = R32((uint32_t)(edx + 0x10cu)); esp -= 4; W32(esp, 0x80fd35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80fd35: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 80fd3b: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80fd42: jne 0x80fec8 */
  if (!zf) goto L_80fec8;
L_80fd48: /* 80fd48: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 80fd4e: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80fd51: jne 0x80fec8 */
  if (!zf) goto L_80fec8;
L_80fd57: /* 80fd57: cmp byte ptr [esi + 0xc8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xc8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 80fd5d: je 0x80fec8 */
  if (zf) goto L_80fec8;
L_80fd63: /* 80fd63: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 80fd69: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* 80fd6c: fcomp dword ptr [0xa13730] */
  fpu_com(ST0, F32((uint32_t)(0xa13730u)));
  FPOP();
/* 80fd72: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 80fd75: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 80fd78: mov dword ptr [ebp - 0x54], ebx */
  W32((uint32_t)(ebp + 0xffffffacu), ebx);
/* 80fd7b: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* 80fd7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80fd80: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 80fd83: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 80fd86: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 80fd89: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 80fd8c: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 80fd8f: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 80fd96: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 80fd9d: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 80fda0: mov dword ptr [ebp - 0x24], 0x42100000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x42100000u);
/* 80fda7: mov dword ptr [ebp - 0x20], 0x42100000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x42100000u);
/* 80fdae: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 80fdb5: jp 0x80fde0 */
  if (pf) goto L_80fde0;
L_80fdb7: /* 80fdb7: mov ecx, dword ptr [esi + 0x2d4] */
  ecx = R32((uint32_t)(esi + 0x2d4u));
/* 80fdbd: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 80fdc3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80fdc6: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 80fdc9: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 80fdcc: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 80fdd3: mov edx, ecx */
  edx = ecx;
/* 80fdd5: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80fdd8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 80fddb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 80fdde: jmp 0x80fde3 */
  goto L_80fde3;
L_80fde0: /* 80fde0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
L_80fde3: /* 80fde3: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 80fde9: mov edi, dword ptr [esi + 0x170] */
  edi = R32((uint32_t)(esi + 0x170u));
/* 80fdef: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 80fdf5: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 80fdf7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80fdfa: mov ebx, esp */
  ebx = esp;
/* 80fdfc: fsubr dword ptr [esi + 0x178] */
  ST0 = (F32((uint32_t)(esi + 0x178u))) - ST0;
/* 80fe02: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 80fe08: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 80fe0b: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 80fe0d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 80fe10: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80fe13: push 0xdf */
  { uint32_t v = 0xdfu; esp -= 4; W32(esp, v); }
/* 80fe18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80fe19: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80fe1c: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 80fe1f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 80fe22: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 80fe25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80fe26: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 80fe29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80fe2a: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 80fe2d: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 80fe30: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 80fe32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80fe33: call dword ptr [edi + 0xd0] */
  { uint32_t t = R32((uint32_t)(edi + 0xd0u)); esp -= 4; W32(esp, 0x80fe39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80fe39: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 80fe3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 80fe3e: je 0x80fea2 */
  if (zf) goto L_80fea2;
L_80fe40: /* 80fe40: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 80fe43: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 80fe49: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 80fe4b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 80fe4e: jne 0x80fe9b */
  if (!zf) goto L_80fe9b;
L_80fe50: /* 80fe50: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 80fe56: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 80fe59: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 80fe5f: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 80fe65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 80fe67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80fe69: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 80fe6c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80fe6e: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 80fe71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80fe73: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 80fe76: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 80fe79: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 80fe7c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80fe7f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 80fe82: mov eax, esp */
  eax = esp;
/* 80fe84: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 80fe86: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 80fe89: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 80fe8c: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 80fe8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80fe90: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 80fe93: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x80fe99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80fe99: jmp 0x80fea2 */
  goto L_80fea2;
L_80fe9b: /* 80fe9b: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
L_80fea2: /* 80fea2: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 80fea5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80fea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 80fea9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80feac: mov eax, esp */
  eax = esp;
/* 80feae: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 80feb0: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 80feb3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 80feb6: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 80feb9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 80febc: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 80febf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80fec0: mov ecx, esi */
  ecx = esi;
/* 80fec2: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x80fec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80fec8: /* 80fec8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80fecb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80fecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80fecd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80fed4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80fed5: mov esp, ebp */
  esp = ebp;
/* 80fed7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80fed8: ret  */
  esp += 4; SPILL(); return;
}

void f_80fed9(void) {
  LOAD_REGS();
L_80fed9: /* 80fed9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 80fedc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 80fee1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 80fee4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 80fee5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 80fee8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80feedu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_80feed(); return;
}

void f_80feed(void) {
  LOAD_REGS();
L_80feed: /* 80feed: push 0xa136f0 */
  { uint32_t v = 0xa136f0u; esp -= 4; W32(esp, v); }
/* 80fef2: push 0xae1c5c */
  { uint32_t v = 0xae1c5cu; esp -= 4; W32(esp, v); }
/* 80fef7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x80fefdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 80fefd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 80ff00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ff02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 80ff04: call 0x99caf8 */
  esp -= 4; W32(esp, 0x80ff09u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_80ff09: guest_badaddr(0x80ff09); return;
}

void f_80ffa0(void) {
  LOAD_REGS();
L_80ffa0: /* 80ffa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 80ffa1: mov ebp, esp */
  ebp = esp;
/* 80ffa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 80ffa5: push 0x9d2940 */
  { uint32_t v = 0x9d2940u; esp -= 4; W32(esp, v); }
/* 80ffaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 80ffb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 80ffb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 80ffb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 80ffbb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 80ffc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 80ffc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 80ffc2: mov esi, ecx */
  esi = ecx;
/* 80ffc4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 80ffc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 80ffc8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 80ffcb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 80ffd2: je 0x80ffef */
  if (zf) goto L_80ffef;
L_80ffd4: /* 80ffd4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 80ffd6: mov ecx, esi */
  ecx = esi;
/* 80ffd8: call dword ptr [edx + 0x168] */
  { uint32_t t = R32((uint32_t)(edx + 0x168u)); esp -= 4; W32(esp, 0x80ffdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 80ffde: mov ecx, esi */
  ecx = esi;
/* 80ffe0: call 0x6ca21d */
  esp -= 4; W32(esp, 0x80ffe5u); SPILL(); f_6ca21d(); if (g_unwind) return; RELOAD();
/* 80ffe5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 80ffe7: mov ecx, esi */
  ecx = esi;
/* 80ffe9: call dword ptr [eax + 0x16c] */
  { uint32_t t = R32((uint32_t)(eax + 0x16cu)); esp -= 4; W32(esp, 0x80ffefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_80ffef: /* 80ffef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 80fff2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 80fff3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 80fff4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 80fffb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 80fffc: mov esp, ebp */
  esp = ebp;
/* 80fffe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 80ffff: ret  */
  esp += 4; SPILL(); return;
}

void f_810000(void) {
  LOAD_REGS();
L_810000: /* 810000: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 810003: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 810008: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 81000b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81000c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 81000f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810014u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_810014(); return;
}

void f_810014(void) {
  LOAD_REGS();
L_810014: /* 810014: push 0xa13734 */
  { uint32_t v = 0xa13734u; esp -= 4; W32(esp, v); }
/* 810019: push 0xae1c64 */
  { uint32_t v = 0xae1c64u; esp -= 4; W32(esp, v); }
/* 81001e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x810024u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 810024: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 810029: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81002b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810030u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_810030: guest_badaddr(0x810030); return;
}

void f_810070(void) {
  LOAD_REGS();
L_810070: /* 810070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 810071: mov ebp, esp */
  ebp = esp;
/* 810073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 810075: push 0x9d2950 */
  { uint32_t v = 0x9d2950u; esp -= 4; W32(esp, v); }
/* 81007a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 810080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 810088: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81008b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81008c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81008d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81008e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 810091: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 810094: mov esi, ecx */
  esi = ecx;
/* 810096: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 810099: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 81009f: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8100a5: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8100ab: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8100b0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8100b3: xor ebx, ebx */
  ebx = 0;
/* 8100b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8100b8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8100bb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8100bd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8100c0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8100c2: xor edx, edx */
  edx = 0;
/* 8100c4: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8100c7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8100ca: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8100cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8100d0: /* 8100d0: cmp edx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8100d6: jge 0x810194 */
  if ((sf == of)) goto L_810194;
L_8100dc: /* 8100dc: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8100e2: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8100e5: mov al, byte ptr [ecx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* 8100e8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8100ea: jne 0x81018e */
  if (!zf) goto L_81018e;
L_8100f0: /* 8100f0: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8100f3: cmp dword ptr [ecx + 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8100f6: jne 0x81018e */
  if (!zf) goto L_81018e;
L_8100fc: /* 8100fc: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 810102: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 810108: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 81010e: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 810114: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 81011a: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 810120: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 810123: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 810125: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 810128: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81012a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81012c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81012e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 810131: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810133: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 810139: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81013b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81013d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810140: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810142: jne 0x81018e */
  if (!zf) goto L_81018e;
L_810144: /* 810144: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 810147: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 81014a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81014c: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 81014f: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 810152: fild dword ptr [edi + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 810155: fmul dword ptr [0xa0b260] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b260u)));
/* 81015b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 81015d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81015f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810162: jne 0x8102b9 */
  if (!zf) goto L_8102b9;
L_810168: /* 810168: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810169: call 0x6c454d */
  esp -= 4; W32(esp, 0x81016eu); SPILL(); f_6c454d(); if (g_unwind) return; RELOAD();
/* 81016e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810170: je 0x8102b9 */
  if (zf) goto L_8102b9;
L_810176: /* 810176: mov eax, 1 */
  eax = 0x1u;
/* 81017b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81017e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 810185: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 810186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810187: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 810188: mov esp, ebp */
  esp = ebp;
/* 81018a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81018b: ret 8 */
  esp += 12; SPILL(); return;
L_81018e: /* 81018e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81018f: jmp 0x8100d0 */
  goto L_8100d0;
L_810194: /* 810194: cmp ebx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81019a: jge 0x8102b9 */
  if ((sf == of)) goto L_8102b9;
L_8101a0: /* 8101a0: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8101a6: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 8101a9: mov al, byte ptr [ecx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* 8101ac: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101ae: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101b4: /* 8101b4: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8101b7: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8101ba: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8101bd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8101c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8101c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101c8: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101ce: /* 8101ce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8101d1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8101d3: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8101d6: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8101d9: fild dword ptr [edi + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 8101dc: fmul dword ptr [0xa0b260] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b260u)));
/* 8101e2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8101e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8101e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101e9: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101ef: /* 8101ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8101f0: call 0x6c454d */
  esp -= 4; W32(esp, 0x8101f5u); SPILL(); f_6c454d(); if (g_unwind) return; RELOAD();
/* 8101f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8101f7: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_8101fd: /* 8101fd: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 810203: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 810206: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 810209: cmp ecx, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81020c: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_810212: /* 810212: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 810218: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 81021e: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 810224: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 81022a: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 810230: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 810236: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 810239: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81023b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 81023e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 810240: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810242: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 810244: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 810247: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810249: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81024f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 810251: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810253: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810256: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810258: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_81025a: /* 81025a: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 81025d: add edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 810260: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 810261: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810262: call 0x6c3463 */
  esp -= 4; W32(esp, 0x810267u); SPILL(); f_6c3463(); if (g_unwind) return; RELOAD();
/* 810267: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810269: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_81026b: /* 81026b: mov eax, 1 */
  eax = 0x1u;
/* 810270: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81027a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81027b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81027c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81027d: mov esp, ebp */
  esp = ebp;
/* 81027f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810280: ret 8 */
  esp += 12; SPILL(); return;
L_8102b3: /* 8102b3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8102b4: jmp 0x810194 */
  goto L_810194;
L_8102b9: /* 8102b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8102bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8102bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8102be: xor eax, eax */
  eax = 0;
/* 8102c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8102c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8102c8: mov esp, ebp */
  esp = ebp;
/* 8102ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8102cb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_810080(void) {
  LOAD_REGS();
L_810080: /* 810080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 810088: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81008b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81008c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81008d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81008e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 810091: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 810094: mov esi, ecx */
  esi = ecx;
/* 810096: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 810099: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 81009f: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8100a5: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 8100ab: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8100b0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8100b3: xor ebx, ebx */
  ebx = 0;
/* 8100b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8100b8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8100bb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8100bd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8100c0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8100c2: xor edx, edx */
  edx = 0;
/* 8100c4: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8100c7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8100ca: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8100cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8100d0: /* 8100d0: cmp edx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8100d6: jge 0x810194 */
  if ((sf == of)) goto L_810194;
L_8100dc: /* 8100dc: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8100e2: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8100e5: mov al, byte ptr [ecx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* 8100e8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8100ea: jne 0x81018e */
  if (!zf) goto L_81018e;
L_8100f0: /* 8100f0: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 8100f3: cmp dword ptr [ecx + 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8100f6: jne 0x81018e */
  if (!zf) goto L_81018e;
L_8100fc: /* 8100fc: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 810102: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 810108: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 81010e: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 810114: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 81011a: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 810120: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 810123: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 810125: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 810128: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81012a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 81012c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81012e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 810131: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810133: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 810139: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81013b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 81013d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810140: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810142: jne 0x81018e */
  if (!zf) goto L_81018e;
L_810144: /* 810144: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 810147: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 81014a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 81014c: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 81014f: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 810152: fild dword ptr [edi + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 810155: fmul dword ptr [0xa0b260] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b260u)));
/* 81015b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 81015d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81015f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810162: jne 0x8102b9 */
  if (!zf) goto L_8102b9;
L_810168: /* 810168: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810169: call 0x6c454d */
  esp -= 4; W32(esp, 0x81016eu); SPILL(); f_6c454d(); if (g_unwind) return; RELOAD();
/* 81016e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810170: je 0x8102b9 */
  if (zf) goto L_8102b9;
L_810176: /* 810176: mov eax, 1 */
  eax = 0x1u;
/* 81017b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 81017e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 810185: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 810186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810187: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 810188: mov esp, ebp */
  esp = ebp;
/* 81018a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 81018b: ret 8 */
  esp += 12; SPILL(); return;
L_81018e: /* 81018e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81018f: jmp 0x8100d0 */
  goto L_8100d0;
L_810194: /* 810194: cmp ebx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81019a: jge 0x8102b9 */
  if ((sf == of)) goto L_8102b9;
L_8101a0: /* 8101a0: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8101a6: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 8101a9: mov al, byte ptr [ecx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* 8101ac: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101ae: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101b4: /* 8101b4: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8101b7: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8101ba: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8101bd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8101c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8101c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101c8: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101ce: /* 8101ce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8101d1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8101d3: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8101d6: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8101d9: fild dword ptr [edi + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 8101dc: fmul dword ptr [0xa0b260] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b260u)));
/* 8101e2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8101e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8101e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101e9: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101ef: /* 8101ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8101f0: call 0x6c454d */
  esp -= 4; W32(esp, 0x8101f5u); SPILL(); f_6c454d(); if (g_unwind) return; RELOAD();
/* 8101f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8101f7: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_8101fd: /* 8101fd: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 810203: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 810206: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 810209: cmp ecx, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81020c: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_810212: /* 810212: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 810218: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 81021e: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 810224: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 81022a: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 810230: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 810236: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 810239: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81023b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 81023e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 810240: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810242: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 810244: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 810247: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810249: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81024f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 810251: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810253: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810256: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810258: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_81025a: /* 81025a: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 81025d: add edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 810260: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 810261: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810262: call 0x6c3463 */
  esp -= 4; W32(esp, 0x810267u); SPILL(); f_6c3463(); if (g_unwind) return; RELOAD();
/* 810267: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810269: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_81026b: /* 81026b: mov eax, 1 */
  eax = 0x1u;
/* 810270: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81027a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81027b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81027c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81027d: mov esp, ebp */
  esp = ebp;
/* 81027f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810280: ret 8 */
  esp += 12; SPILL(); return;
L_8102b3: /* 8102b3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8102b4: jmp 0x810194 */
  goto L_810194;
L_8102b9: /* 8102b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8102bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8102bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8102be: xor eax, eax */
  eax = 0;
/* 8102c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8102c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8102c8: mov esp, ebp */
  esp = ebp;
/* 8102ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8102cb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_810283(void) {
  LOAD_REGS();
L_810283: /* 810283: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 810286: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81028b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 81028e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 81028f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 810292: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810297u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_810297(); return;
}

void f_810297(void) {
  LOAD_REGS();
  goto L_810297;
L_810194: /* 810194: cmp ebx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81019a: jge 0x8102b9 */
  if ((sf == of)) goto L_8102b9;
L_8101a0: /* 8101a0: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 8101a6: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 8101a9: mov al, byte ptr [ecx + 0x44] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x44u))) & 0xffu);
/* 8101ac: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101ae: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101b4: /* 8101b4: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8101b7: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8101ba: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8101bd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8101c3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8101c5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101c8: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101ce: /* 8101ce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8101d1: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8101d3: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8101d6: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8101d9: fild dword ptr [edi + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x28u)); FPUSH(v); }
/* 8101dc: fmul dword ptr [0xa0b260] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b260u)));
/* 8101e2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8101e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8101e6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8101e9: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_8101ef: /* 8101ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8101f0: call 0x6c454d */
  esp -= 4; W32(esp, 0x8101f5u); SPILL(); f_6c454d(); if (g_unwind) return; RELOAD();
/* 8101f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8101f7: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_8101fd: /* 8101fd: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 810203: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 810206: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 810209: cmp ecx, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81020c: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_810212: /* 810212: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 810218: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 81021e: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 810224: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 81022a: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 810230: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 810236: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 810239: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 81023b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 81023e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 810240: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810242: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 810244: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 810247: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 810249: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 81024f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 810251: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810253: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810256: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 810258: jne 0x8102b3 */
  if (!zf) goto L_8102b3;
L_81025a: /* 81025a: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 81025d: add edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 810260: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 810261: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810262: call 0x6c3463 */
  esp -= 4; W32(esp, 0x810267u); SPILL(); f_6c3463(); if (g_unwind) return; RELOAD();
/* 810267: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810269: je 0x8102b3 */
  if (zf) goto L_8102b3;
L_81026b: /* 81026b: mov eax, 1 */
  eax = 0x1u;
/* 810270: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810273: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81027a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 81027b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81027c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81027d: mov esp, ebp */
  esp = ebp;
/* 81027f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810280: ret 8 */
  esp += 12; SPILL(); return;
L_810297: /* 810297: push 0xa13760 */
  { uint32_t v = 0xa13760u; esp -= 4; W32(esp, v); }
/* 81029c: push 0xae1c9c */
  { uint32_t v = 0xae1c9cu; esp -= 4; W32(esp, v); }
/* 8102a1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8102a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8102a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8102aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8102ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8102ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8102b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8102b3: /* 8102b3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8102b4: jmp 0x810194 */
  goto L_810194;
L_8102b9: /* 8102b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8102bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8102bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8102be: xor eax, eax */
  eax = 0;
/* 8102c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8102c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8102c8: mov esp, ebp */
  esp = ebp;
/* 8102ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8102cb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_810370(void) {
  LOAD_REGS();
L_810370: /* 810370: mov edx, dword ptr [ecx + 0x3a0] */
  edx = R32((uint32_t)(ecx + 0x3a0u));
/* 810376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810377: xor eax, eax */
  eax = 0;
/* 810379: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 81037b: jle 0x810393 */
  if ((zf || sf != of)) goto L_810393;
L_81037d: /* 81037d: mov ecx, dword ptr [ecx + 0x39c] */
  ecx = R32((uint32_t)(ecx + 0x39cu));
/* 810383: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
L_810387: /* 810387: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810389: je 0x810399 */
  if (zf) goto L_810399;
L_81038b: /* 81038b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 81038c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 81038f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 810391: jl 0x810387 */
  if ((sf != of)) goto L_810387;
L_810393: /* 810393: xor eax, eax */
  eax = 0;
/* 810395: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810396: ret 4 */
  esp += 8; SPILL(); return;
L_810399: /* 810399: mov eax, 1 */
  eax = 0x1u;
/* 81039e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81039f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8103c0(void) {
  LOAD_REGS();
L_8103c0: /* 8103c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8103c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8103c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8103c5: mov esi, ecx */
  esi = ecx;
/* 8103c7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8103cdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8103cd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8103d1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8103d3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8103d5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8103d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8103d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8103f0(void) {
  LOAD_REGS();
L_8103f0: /* 8103f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8103f1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8103f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8103f5: mov esi, ecx */
  esi = ecx;
/* 8103f7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8103fdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8103fd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 810401: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 810403: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 810405: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 810408: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810409: ret 4 */
  esp += 8; SPILL(); return;
}

void f_810420(void) {
  LOAD_REGS();
L_810420: /* 810420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810421: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 810425: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810427: je 0x81043e */
  if (zf) goto L_81043e;
L_810429: /* 810429: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 81042e: mov ecx, esi */
  ecx = esi;
/* 810430: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x810436u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 810436: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810438: je 0x81043e */
  if (zf) goto L_81043e;
L_81043a: /* 81043a: mov eax, esi */
  eax = esi;
/* 81043c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81043d: ret  */
  esp += 4; SPILL(); return;
L_81043e: /* 81043e: xor eax, eax */
  eax = 0;
/* 810440: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810441: ret  */
  esp += 4; SPILL(); return;
}

void f_810460(void) {
  LOAD_REGS();
L_810460: /* 810460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810461: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 810465: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 81046a: mov ecx, esi */
  ecx = esi;
/* 81046c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x810472u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 810472: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810474: jne 0x81048e */
  if (!zf) goto L_81048e;
L_810476: /* 810476: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 81047b: push 0xae1cb0 */
  { uint32_t v = 0xae1cb0u; esp -= 4; W32(esp, v); }
/* 810480: push 0xae1cf4 */
  { uint32_t v = 0xae1cf4u; esp -= 4; W32(esp, v); }
/* 810485: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x81048bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 81048b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_81048e: /* 81048e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 810492: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810495: jne 0x81049d */
  if (!zf) goto L_81049d;
L_810497: /* 810497: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x81049du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_81049d: /* 81049d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8104a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8104a5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8104a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8104ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8104ac: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8104b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8104b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8104b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8104b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8104b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8104b6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8104bcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8104bc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8104bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8104c0: ret  */
  esp += 4; SPILL(); return;
}

void f_8104f0(void) {
  LOAD_REGS();
L_8104f0: /* 8104f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8104f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8104f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8104f7: je 0x81050e */
  if (zf) goto L_81050e;
L_8104f9: /* 8104f9: push 0xb66568 */
  { uint32_t v = 0xb66568u; esp -= 4; W32(esp, v); }
/* 8104fe: mov ecx, esi */
  ecx = esi;
/* 810500: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x810506u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 810506: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810508: je 0x81050e */
  if (zf) goto L_81050e;
L_81050a: /* 81050a: mov eax, esi */
  eax = esi;
/* 81050c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81050d: ret  */
  esp += 4; SPILL(); return;
L_81050e: /* 81050e: xor eax, eax */
  eax = 0;
/* 810510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810511: ret  */
  esp += 4; SPILL(); return;
}

void f_810530(void) {
  LOAD_REGS();
L_810530: /* 810530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810531: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 810535: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810537: je 0x81054e */
  if (zf) goto L_81054e;
L_810539: /* 810539: push 0xb62728 */
  { uint32_t v = 0xb62728u; esp -= 4; W32(esp, v); }
/* 81053e: mov ecx, esi */
  ecx = esi;
/* 810540: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x810546u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 810546: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810548: je 0x81054e */
  if (zf) goto L_81054e;
L_81054a: /* 81054a: mov eax, esi */
  eax = esi;
/* 81054c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81054d: ret  */
  esp += 4; SPILL(); return;
L_81054e: /* 81054e: xor eax, eax */
  eax = 0;
/* 810550: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810551: ret  */
  esp += 4; SPILL(); return;
}

void f_810570(void) {
  LOAD_REGS();
L_810570: /* 810570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810571: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 810575: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810577: je 0x81058e */
  if (zf) goto L_81058e;
L_810579: /* 810579: push 0xb6ec48 */
  { uint32_t v = 0xb6ec48u; esp -= 4; W32(esp, v); }
/* 81057e: mov ecx, esi */
  ecx = esi;
/* 810580: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x810586u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 810586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810588: je 0x81058e */
  if (zf) goto L_81058e;
L_81058a: /* 81058a: mov eax, esi */
  eax = esi;
/* 81058c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 81058d: ret  */
  esp += 4; SPILL(); return;
L_81058e: /* 81058e: xor eax, eax */
  eax = 0;
/* 810590: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810591: ret  */
  esp += 4; SPILL(); return;
}

void f_8105b0(void) {
  LOAD_REGS();
L_8105b0: /* 8105b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8105b1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8105b5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8105b7: je 0x8105ce */
  if (zf) goto L_8105ce;
L_8105b9: /* 8105b9: push 0xb650a8 */
  { uint32_t v = 0xb650a8u; esp -= 4; W32(esp, v); }
/* 8105be: mov ecx, esi */
  ecx = esi;
/* 8105c0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8105c6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8105c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8105c8: je 0x8105ce */
  if (zf) goto L_8105ce;
L_8105ca: /* 8105ca: mov eax, esi */
  eax = esi;
/* 8105cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8105cd: ret  */
  esp += 4; SPILL(); return;
L_8105ce: /* 8105ce: xor eax, eax */
  eax = 0;
/* 8105d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8105d1: ret  */
  esp += 4; SPILL(); return;
}

void f_8105f0(void) {
  LOAD_REGS();
L_8105f0: /* 8105f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8105f1: mov ebp, esp */
  ebp = esp;
/* 8105f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8105f5: push 0x9d2960 */
  { uint32_t v = 0x9d2960u; esp -= 4; W32(esp, v); }
/* 8105fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 810600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 810608: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 81060b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81060c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81060d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 81060e: mov edi, ecx */
  edi = ecx;
/* 810610: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 810616: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 810619: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 810620: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_810623: /* 810623: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 810625: lea ecx, [edi + 0x33c] */
  ecx = (uint32_t)(edi + 0x33cu);
/* 81062b: jl 0x810648 */
  if ((sf != of)) goto L_810648;
L_81062d: /* 81062d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 81062f: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 810632: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810634: je 0x810645 */
  if (zf) goto L_810645;
L_810636: /* 810636: mov dl, byte ptr [eax + 0x44] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x44u))) & 0xffu);
/* 810639: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81063b: je 0x810645 */
  if (zf) goto L_810645;
L_81063d: /* 81063d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81063f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810640: call 0x6c8cdd */
  esp -= 4; W32(esp, 0x810645u); SPILL(); f_6c8cdd(); if (g_unwind) return; RELOAD();
L_810645: /* 810645: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 810646: jmp 0x810623 */
  goto L_810623;
L_810648: /* 810648: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 81064a: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x810650u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 810650: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810653: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 810654: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810655: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81065c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81065d: mov esp, ebp */
  esp = ebp;
/* 81065f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810660: ret  */
  esp += 4; SPILL(); return;
}

void f_810661(void) {
  LOAD_REGS();
L_810661: /* 810661: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 810664: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 810669: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 81066c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81066d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 810670: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810675u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_810675(); return;
}

void f_810675(void) {
  LOAD_REGS();
L_810675: /* 810675: push 0xa137b8 */
  { uint32_t v = 0xa137b8u; esp -= 4; W32(esp, v); }
/* 81067a: push 0xae1558 */
  { uint32_t v = 0xae1558u; esp -= 4; W32(esp, v); }
/* 81067f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x810685u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 810685: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810688: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81068a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81068c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810691u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_810691: guest_badaddr(0x810691); return;
}

void f_8106d0(void) {
  LOAD_REGS();
L_8106d0: /* 8106d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8106d1: mov ebp, esp */
  ebp = esp;
/* 8106d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8106d5: push 0x9d2970 */
  { uint32_t v = 0x9d2970u; esp -= 4; W32(esp, v); }
/* 8106da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8106e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8106e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8106e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8106eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8106ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8106ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8106f0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8106f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8106f3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8106f6: mov edi, ecx */
  edi = ecx;
/* 8106f8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8106ff: je 0x810738 */
  if (zf) goto L_810738;
L_810701: /* 810701: push 0xb6bd98 */
  { uint32_t v = 0xb6bd98u; esp -= 4; W32(esp, v); }
/* 810706: mov ecx, esi */
  ecx = esi;
/* 810708: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81070eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81070e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810710: je 0x810738 */
  if (zf) goto L_810738;
L_810712: /* 810712: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 810718: cmp eax, dword ptr [esi + 0x3a8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 81071e: jne 0x810738 */
  if (!zf) goto L_810738;
L_810720: /* 810720: mov eax, 1 */
  eax = 0x1u;
/* 810725: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810728: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81072f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 810730: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810731: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 810732: mov esp, ebp */
  esp = ebp;
/* 810734: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810735: ret 4 */
  esp += 8; SPILL(); return;
L_810738: /* 810738: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810739: mov ecx, edi */
  ecx = edi;
/* 81073b: call 0x6ca24a */
  esp -= 4; W32(esp, 0x810740u); SPILL(); f_6ca24a(); if (g_unwind) return; RELOAD();
/* 810740: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810743: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 810744: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810745: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 81074c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 81074d: mov esp, ebp */
  esp = ebp;
/* 81074f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810750: ret 4 */
  esp += 8; SPILL(); return;
}

void f_810753(void) {
  LOAD_REGS();
L_810753: /* 810753: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 810756: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 81075b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 81075e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 81075f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 810762: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810767u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_810767(); return;
}

void f_810767(void) {
  LOAD_REGS();
L_810767: /* 810767: push 0xa13804 */
  { uint32_t v = 0xa13804u; esp -= 4; W32(esp, v); }
/* 81076c: push 0xae1598 */
  { uint32_t v = 0xae1598u; esp -= 4; W32(esp, v); }
/* 810771: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x810777u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 810777: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 81077a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81077c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81077e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810783u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_810783: guest_badaddr(0x810783); return;
}

void f_8107c0(void) {
  LOAD_REGS();
L_8107c0: /* 8107c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8107c1: mov ebp, esp */
  ebp = esp;
/* 8107c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8107c5: push 0x9d2989 */
  { uint32_t v = 0x9d2989u; esp -= 4; W32(esp, v); }
/* 8107ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8107d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8107d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8107d8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8107db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8107dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8107dd: mov esi, ecx */
  esi = ecx;
/* 8107df: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 8107e5: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8107e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8107e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8107ec: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8107f3: jne 0x810800 */
  if (!zf) goto L_810800;
L_8107f5: /* 8107f5: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8107f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8107fa: je 0x810800 */
  if (zf) goto L_810800;
L_8107fc: /* 8107fc: xor eax, eax */
  eax = 0;
/* 8107fe: jmp 0x810805 */
  goto L_810805;
L_810800: /* 810800: mov eax, 1 */
  eax = 0x1u;
L_810805: /* 810805: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 81080b: shl eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 81080e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 810810: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810812: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810813: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 810818: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 81081a: mov ecx, esp */
  ecx = esp;
/* 81081c: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 81081f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 810821: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 810827: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x81082du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 81082d: mov ecx, edi */
  ecx = edi;
/* 81082f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x810835u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 810835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810836: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 81083b: call 0x6c3233 */
  esp -= 4; W32(esp, 0x810840u); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 810840: mov ebx, eax */
  ebx = eax;
/* 810842: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 810845: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810848: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81084a: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 81084d: jne 0x810891 */
  if (!zf) goto L_810891;
L_81084f: /* 81084f: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 810855: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81085c: jne 0x810891 */
  if (!zf) goto L_810891;
L_81085e: /* 81085e: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 810864: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810867: jne 0x810891 */
  if (!zf) goto L_810891;
L_810869: /* 810869: mov ecx, esi */
  ecx = esi;
/* 81086b: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x810871u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 810871: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 810877: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81087a: je 0x810891 */
  if (zf) goto L_810891;
L_81087c: /* 81087c: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 810882: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 810884: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 810886: push 0xae15a0 */
  { uint32_t v = 0xae15a0u; esp -= 4; W32(esp, v); }
/* 81088b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81088c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 81088e: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x810891u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_810891: /* 810891: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 810894: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810896: je 0x8108e4 */
  if (zf) goto L_8108e4;
L_810898: /* 810898: test byte ptr [ecx + 0x8c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81089f: je 0x8108e4 */
  if (zf) goto L_8108e4;
L_8108a1: /* 8108a1: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8108a7u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8108a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8108a8: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8108ab: push 0xae1620 */
  { uint32_t v = 0xae1620u; esp -= 4; W32(esp, v); }
/* 8108b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8108b1: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8108b7u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8108b7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8108ba: mov ecx, eax */
  ecx = eax;
/* 8108bc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8108c0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8108c6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8108c6: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8108cc: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8108ce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8108d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8108d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8108d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8108d4: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x8108d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8108d7: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8108da: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8108de: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8108e4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8108e4: /* 8108e4: mov al, byte ptr [esi + 0xc8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* 8108ea: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8108ec: jne 0x810902 */
  if (!zf) goto L_810902;
L_8108ee: /* 8108ee: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 8108f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8108f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8108f7: push 0xae1688 */
  { uint32_t v = 0xae1688u; esp -= 4; W32(esp, v); }
/* 8108fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8108fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8108ff: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x810902u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_810902: /* 810902: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 810909: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_810910: /* 810910: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 810916: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 810919: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 81091c: jge 0x810bdb */
  if ((sf == of)) goto L_810bdb;
L_810922: /* 810922: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 810925: mov eax, ecx */
  eax = ecx;
/* 810927: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 81092a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81092c: je 0x810ba3 */
  if (zf) goto L_810ba3;
L_810932: /* 810932: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 810937: mov ecx, edi */
  ecx = edi;
/* 810939: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x81093fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 81093f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810941: je 0x810ba3 */
  if (zf) goto L_810ba3;
L_810947: /* 810947: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 81094d: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810950: jne 0x810ba3 */
  if (!zf) goto L_810ba3;
L_810956: /* 810956: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 81095c: test ah, 0x88 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x88u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81095f: jne 0x810ba3 */
  if (!zf) goto L_810ba3;
L_810965: /* 810965: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810967: je 0x810ba3 */
  if (zf) goto L_810ba3;
L_81096d: /* 81096d: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 810973: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810976: jne 0x810981 */
  if (!zf) goto L_810981;
L_810978: /* 810978: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81097b: je 0x810ba3 */
  if (zf) goto L_810ba3;
L_810981: /* 810981: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 810987: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 81098a: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 810990: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 810996: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 81099c: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 8109a2: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 8109a8: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8109ab: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8109ae: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8109b1: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8109b7u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8109b7: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 8109ba: fcomp dword ptr [0xa13894] */
  fpu_com(ST0, F32((uint32_t)(0xa13894u)));
  FPOP();
/* 8109c0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8109c2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8109c5: jp 0x8109ef */
  if (pf) goto L_8109ef;
L_8109c7: /* 8109c7: mov ecx, edi */
  ecx = edi;
/* 8109c9: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8109cfu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8109cf: mov ecx, dword ptr [eax + 0x498] */
  ecx = R32((uint32_t)(eax + 0x498u));
/* 8109d5: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8109d8: je 0x8109ef */
  if (zf) goto L_8109ef;
L_8109da: /* 8109da: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8109e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8109e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8109e4: push 0xae16e0 */
  { uint32_t v = 0xae16e0u; esp -= 4; W32(esp, v); }
/* 8109e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8109ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8109ec: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x8109efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8109ef: /* 8109ef: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8109f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8109f2: mov ecx, esi */
  ecx = esi;
/* 8109f4: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x8109fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8109fa: mov ecx, ebx */
  ecx = ebx;
/* 8109fc: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8109ff: call 0x6c2554 */
  esp -= 4; W32(esp, 0x810a04u); SPILL(); f_6c2554(); if (g_unwind) return; RELOAD();
/* 810a04: cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810a08: jne 0x810a33 */
  if (!zf) goto L_810a33;
L_810a0a: /* 810a0a: mov dword ptr [ebx + 0x3c], 0x80 */
  W32((uint32_t)(ebx + 0x3cu), 0x80u);
/* 810a11: mov dword ptr [ebx + 0x2c], esi */
  W32((uint32_t)(ebx + 0x2cu), esi);
/* 810a14: mov dword ptr [ebx + 0x30], edi */
  W32((uint32_t)(ebx + 0x30u), edi);
/* 810a17: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810a19: lea edi, [esi + 0x33c] */
  edi = (uint32_t)(esi + 0x33cu);
/* 810a1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 810a21: mov ecx, edi */
  ecx = edi;
/* 810a23: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x810a29u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 810a29: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 810a2b: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 810a2e: jmp 0x810b72 */
  goto L_810b72;
L_810a33: /* 810a33: xor eax, eax */
  eax = 0;
/* 810a35: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_810a38: /* 810a38: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 810a3b: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 810a3e: jge 0x810a70 */
  if ((sf == of)) goto L_810a70;
L_810a40: /* 810a40: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 810a43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 810a44: mov ecx, edi */
  ecx = edi;
/* 810a46: call dword ptr [0xcfa880] */
  esp -= 4; W32(esp, 0x810a4cu); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* 810a4c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 810a4f: lea edx, [esi + ecx*4 + 0x358] */
  edx = (uint32_t)(esi + ecx*4 + 0x358u);
/* 810a56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 810a57: mov ecx, eax */
  ecx = eax;
/* 810a59: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x810a5fu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 810a5f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810a61: je 0x810a6a */
  if (zf) goto L_810a6a;
L_810a63: /* 810a63: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_810a6a: /* 810a6a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 810a6d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 810a6e: jmp 0x810a38 */
  goto L_810a38;
L_810a70: /* 810a70: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 810a73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810a75: je 0x810b11 */
  if (zf) goto L_810b11;
L_810a7b: /* 810a7b: mov ecx, ebx */
  ecx = ebx;
/* 810a7d: call 0x6c2554 */
  esp -= 4; W32(esp, 0x810a82u); SPILL(); f_6c2554(); if (g_unwind) return; RELOAD();
/* 810a82: mov dword ptr [ebx + 0x34], 0x48 */
  W32((uint32_t)(ebx + 0x34u), 0x48u);
/* 810a89: mov dword ptr [ebx + 0x38], 0x64 */
  W32((uint32_t)(ebx + 0x38u), 0x64u);
/* 810a90: mov dword ptr [ebx + 0x3c], 0x100 */
  W32((uint32_t)(ebx + 0x3cu), 0x100u);
/* 810a97: mov dword ptr [ebx + 0x2c], esi */
  W32((uint32_t)(ebx + 0x2cu), esi);
/* 810a9a: mov dword ptr [ebx + 0x30], edi */
  W32((uint32_t)(ebx + 0x30u), edi);
/* 810a9d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 810aa3: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 810aa9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 810aac: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 810ab2: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 810ab8: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 810abe: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 810ac4: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 810ac7: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 810aca: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 810acd: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x810ad3u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 810ad3: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 810ad6: call 0x99c958 */
  esp -= 4; W32(esp, 0x810adbu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 810adb: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* 810ade: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* 810ae1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810ae3: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 810ae6: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 810aec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 810aee: mov dword ptr [ebx + 0x48], eax */
  W32((uint32_t)(ebx + 0x48u), eax);
/* 810af1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x810af7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 810af7: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 810afd: mov dword ptr [ecx + eax*4], ebx */
  W32((uint32_t)(ecx + eax*4), ebx);
/* 810b00: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 810b03: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 810b05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 810b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810b07: mov ecx, edi */
  ecx = edi;
/* 810b09: call dword ptr [edx + 0x1a0] */
  { uint32_t t = R32((uint32_t)(edx + 0x1a0u)); esp -= 4; W32(esp, 0x810b0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 810b0f: jmp 0x810b72 */
  goto L_810b72;
L_810b11: /* 810b11: mov eax, dword ptr [esi + 0x390] */
  eax = R32((uint32_t)(esi + 0x390u));
/* 810b17: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810b1a: jne 0x810ba3 */
  if (!zf) goto L_810ba3;
L_810b20: /* 810b20: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 810b23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810b25: jne 0x810ba3 */
  if (!zf) goto L_810ba3;
L_810b27: /* 810b27: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 810b2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810b2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810b2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810b2d: mov ecx, ebx */
  ecx = ebx;
/* 810b2f: call 0x6cbe47 */
  esp -= 4; W32(esp, 0x810b34u); SPILL(); f_6cbe47(); if (g_unwind) return; RELOAD();
/* 810b34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810b36: je 0x810ba3 */
  if (zf) goto L_810ba3;
L_810b38: /* 810b38: mov ecx, edi */
  ecx = edi;
/* 810b3a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x810b40u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 810b40: mov ecx, esi */
  ecx = esi;
/* 810b42: mov edi, eax */
  edi = eax;
/* 810b44: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x810b4au); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 810b4a: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 810b50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810b51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810b52: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 810b54: push 0xae1738 */
  { uint32_t v = 0xae1738u; esp -= 4; W32(esp, v); }
/* 810b59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810b5a: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x810b60u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 810b60: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810b63: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 810b66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810b67: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 810b6d: call 0x6c9c0f */
  esp -= 4; W32(esp, 0x810b72u); SPILL(); f_6c9c0f(); if (g_unwind) return; RELOAD();
L_810b72: /* 810b72: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 810b78: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810b7b: mov ecx, esp */
  ecx = esp;
/* 810b7d: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 810b80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 810b82: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x810b88u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 810b88: mov ecx, edi */
  ecx = edi;
/* 810b8a: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x810b90u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 810b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810b91: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 810b96: call 0x6c3233 */
  esp -= 4; W32(esp, 0x810b9bu); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 810b9b: mov ebx, eax */
  ebx = eax;
/* 810b9d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810ba0: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_810ba3: /* 810ba3: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 810ba6: jmp 0x810910 */
  goto L_810910;
L_810bdb: /* 810bdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810bde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 810bdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810be0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 810be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 810be8: mov esp, ebp */
  esp = ebp;
/* 810bea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810beb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_810bab(void) {
  LOAD_REGS();
L_810bab: /* 810bab: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 810bae: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 810bb3: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 810bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810bb7: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 810bba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810bbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_810bbf(); return;
}

void f_810bbf(void) {
  LOAD_REGS();
L_810bbf: /* 810bbf: push 0xa13848 */
  { uint32_t v = 0xa13848u; esp -= 4; W32(esp, v); }
/* 810bc4: push 0xae1788 */
  { uint32_t v = 0xae1788u; esp -= 4; W32(esp, v); }
/* 810bc9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x810bcfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 810bcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810bd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 810bd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 810bd6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x810bdbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 810bdb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 810bde: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 810bdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 810be0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 810be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 810be8: mov esp, ebp */
  esp = ebp;
/* 810bea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 810beb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_810d00(void) {
  LOAD_REGS();
L_810d00: /* 810d00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 810d01: mov ebp, esp */
  ebp = esp;
/* 810d03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 810d05: push 0x9d29a0 */
  { uint32_t v = 0x9d29a0u; esp -= 4; W32(esp, v); }
/* 810d0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 810d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810d11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 810d18: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 810d1e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 810d1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810d20: mov esi, ecx */
  esi = ecx;
/* 810d22: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 810d28: xor ebx, ebx */
  ebx = 0;
/* 810d2a: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 810d2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 810d2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 810d31: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 810d34: jne 0x810d3f */
  if (!zf) goto L_810d3f;
L_810d36: /* 810d36: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810d39: je 0x810d3f */
  if (zf) goto L_810d3f;
L_810d3b: /* 810d3b: xor eax, eax */
  eax = 0;
/* 810d3d: jmp 0x810d44 */
  goto L_810d44;
L_810d3f: /* 810d3f: mov eax, 1 */
  eax = 0x1u;
L_810d44: /* 810d44: shl eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 810d47: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 810d49: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 810d4e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 810d50: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 810d56: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 810d58: mov ecx, esi */
  ecx = esi;
/* 810d5a: call dword ptr [eax + 0x1a8] */
  { uint32_t t = R32((uint32_t)(eax + 0x1a8u)); esp -= 4; W32(esp, 0x810d60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 810d60: mov edi, dword ptr [esi + 0x5c] */
  edi = R32((uint32_t)(esi + 0x5cu));
/* 810d63: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810d65: je 0x810d7c */
  if (zf) goto L_810d7c;
L_810d67: /* 810d67: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 810d6c: mov ecx, edi */
  ecx = edi;
/* 810d6e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x810d74u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 810d74: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810d76: je 0x810d7c */
  if (zf) goto L_810d7c;
L_810d78: /* 810d78: mov eax, edi */
  eax = edi;
/* 810d7a: jmp 0x810d7e */
  goto L_810d7e;
L_810d7c: /* 810d7c: xor eax, eax */
  eax = 0;
L_810d7e: /* 810d7e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810d80: mov dword ptr [esi + 0x3ac], eax */
  W32((uint32_t)(esi + 0x3acu), eax);
/* 810d86: jne 0x810d9d */
  if (!zf) goto L_810d9d;
L_810d88: /* 810d88: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 810d8e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 810d90: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 810d92: push 0xae1790 */
  { uint32_t v = 0xae1790u; esp -= 4; W32(esp, v); }
/* 810d97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810d98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 810d9a: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x810d9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_810d9d: /* 810d9d: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 810da3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810da5: je 0x810dd1 */
  if (zf) goto L_810dd1;
L_810da7: /* 810da7: add eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 810dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810dad: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 810db3: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x810db9u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 810db9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810dbb: je 0x810dd1 */
  if (zf) goto L_810dd1;
L_810dbd: /* 810dbd: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 810dc2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 810dc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 810dc6: push 0xae17d8 */
  { uint32_t v = 0xae17d8u; esp -= 4; W32(esp, v); }
/* 810dcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810dcc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 810dce: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x810dd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_810dd1: /* 810dd1: cmp dword ptr [esi + 0x3ac], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3acu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810dd7: je 0x810e13 */
  if (zf) goto L_810e13;
L_810dd9: /* 810dd9: mov ecx, 0xcc5588 */
  ecx = 0xcc5588u;
/* 810dde: call dword ptr [0xcfa3e8] */
  esp -= 4; W32(esp, 0x810de4u); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 810de4: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 810dea: add eax, 0xf4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 810def: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810df0: add ecx, 0xf4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 810df6: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x810dfcu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 810dfc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 810dfe: je 0x810e13 */
  if (zf) goto L_810e13;
L_810e00: /* 810e00: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 810e05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 810e07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 810e09: push 0xae1848 */
  { uint32_t v = 0xae1848u; esp -= 4; W32(esp, v); }
/* 810e0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 810e0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 810e10: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x810e13u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_810e13: /* 810e13: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 810e19: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810e1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810e1c: mov ecx, esp */
  ecx = esp;
/* 810e1e: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 810e21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 810e22: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x810e28u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 810e28: mov ecx, edi */
  ecx = edi;
/* 810e2a: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x810e30u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 810e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810e31: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 810e36: call 0x6c3233 */
  esp -= 4; W32(esp, 0x810e3bu); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 810e3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810e3e: mov edi, eax */
  edi = eax;
/* 810e40: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 810e43: xor ecx, ecx */
  ecx = 0;
L_810e45: /* 810e45: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 810e4b: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 810e4e: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 810e51: jge 0x811188 */
  if ((sf == of)) goto L_811188;
L_810e57: /* 810e57: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 810e5a: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 810e5d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810e5f: je 0x81117f */
  if (zf) goto L_81117f;
L_810e65: /* 810e65: push 0xb66568 */
  { uint32_t v = 0xb66568u; esp -= 4; W32(esp, v); }
/* 810e6a: mov ecx, ebx */
  ecx = ebx;
/* 810e6c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x810e72u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 810e72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810e74: je 0x81117f */
  if (zf) goto L_81117f;
L_810e7a: /* 810e7a: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 810e80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810e81: lea ecx, [ebx + 0x3a8] */
  ecx = (uint32_t)(ebx + 0x3a8u);
/* 810e87: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x810e8du); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 810e8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810e8f: je 0x81117f */
  if (zf) goto L_81117f;
L_810e95: /* 810e95: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 810e9b: mov eax, 0x2000 */
  eax = 0x2000u;
/* 810ea0: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810ea2: jne 0x810eb0 */
  if (!zf) goto L_810eb0;
L_810ea4: /* 810ea4: test dword ptr [ebx + 0x390], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x390u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810eaa: je 0x81117f */
  if (zf) goto L_81117f;
L_810eb0: /* 810eb0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 810eb3: mov edx, dword ptr [esi + 0x3ac] */
  edx = R32((uint32_t)(esi + 0x3acu));
/* 810eb9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 810eba: mov ecx, edi */
  ecx = edi;
/* 810ebc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 810ebf: mov dword ptr [ebx + 0x3ac], edx */
  W32((uint32_t)(ebx + 0x3acu), edx);
/* 810ec5: call 0x6c2554 */
  esp -= 4; W32(esp, 0x810ecau); SPILL(); f_6c2554(); if (g_unwind) return; RELOAD();
/* 810eca: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810ecc: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 810ed2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 810ed4: mov dword ptr [edi + 0x34], 0x48 */
  W32((uint32_t)(edi + 0x34u), 0x48u);
/* 810edb: mov dword ptr [edi + 0x38], 0x64 */
  W32((uint32_t)(edi + 0x38u), 0x64u);
/* 810ee2: mov dword ptr [edi + 0x3c], 0x20 */
  W32((uint32_t)(edi + 0x3cu), 0x20u);
/* 810ee9: mov dword ptr [edi + 0x2c], esi */
  W32((uint32_t)(edi + 0x2cu), esi);
/* 810eec: mov dword ptr [edi + 0x30], ebx */
  W32((uint32_t)(edi + 0x30u), ebx);
/* 810eef: mov dword ptr [edi + 0x28], 0x1f4 */
  W32((uint32_t)(edi + 0x28u), 0x1f4u);
/* 810ef6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x810efcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 810efc: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 810f02: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810f04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810f05: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 810f08: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 810f0e: mov ecx, esp */
  ecx = esp;
/* 810f10: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 810f13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 810f15: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x810f1bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 810f1b: mov ecx, edi */
  ecx = edi;
/* 810f1d: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x810f23u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 810f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810f24: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 810f29: call 0x6c3233 */
  esp -= 4; W32(esp, 0x810f2eu); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 810f2e: mov edi, eax */
  edi = eax;
/* 810f30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810f33: mov ecx, edi */
  ecx = edi;
/* 810f35: call 0x6c2554 */
  esp -= 4; W32(esp, 0x810f3au); SPILL(); f_6c2554(); if (g_unwind) return; RELOAD();
/* 810f3a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810f3c: lea ecx, [ebx + 0x33c] */
  ecx = (uint32_t)(ebx + 0x33cu);
/* 810f42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 810f44: mov dword ptr [edi + 0x34], 0x48 */
  W32((uint32_t)(edi + 0x34u), 0x48u);
/* 810f4b: mov dword ptr [edi + 0x38], 0x64 */
  W32((uint32_t)(edi + 0x38u), 0x64u);
/* 810f52: mov dword ptr [edi + 0x3c], 0x20 */
  W32((uint32_t)(edi + 0x3cu), 0x20u);
/* 810f59: mov dword ptr [edi + 0x2c], ebx */
  W32((uint32_t)(edi + 0x2cu), ebx);
/* 810f5c: mov dword ptr [edi + 0x30], esi */
  W32((uint32_t)(edi + 0x30u), esi);
/* 810f5f: mov dword ptr [edi + 0x28], 0x1f4 */
  W32((uint32_t)(edi + 0x28u), 0x1f4u);
/* 810f66: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x810f6cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 810f6c: mov edx, dword ptr [ebx + 0x33c] */
  edx = R32((uint32_t)(ebx + 0x33cu));
/* 810f72: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 810f74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 810f75: mov ecx, esp */
  ecx = esp;
/* 810f77: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 810f7a: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 810f7d: mov edi, dword ptr [esi + 0xb4] */
  edi = R32((uint32_t)(esi + 0xb4u));
/* 810f83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 810f85: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x810f8bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 810f8b: mov ecx, edi */
  ecx = edi;
/* 810f8d: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x810f93u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 810f93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 810f94: push 0xb5f878 */
  { uint32_t v = 0xb5f878u; esp -= 4; W32(esp, v); }
/* 810f99: call 0x6c3233 */
  esp -= 4; W32(esp, 0x810f9eu); SPILL(); f_6c3233(); if (g_unwind) return; RELOAD();
/* 810f9e: mov edi, eax */
  edi = eax;
/* 810fa0: mov al, byte ptr [ebx + 0x3b0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x3b0u))) & 0xffu);
/* 810fa6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 810fa9: cmp al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 810fab: jne 0x811179 */
  if (!zf) goto L_811179;
L_810fb1: /* 810fb1: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 810fb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 810fb9: je 0x81117f */
  if (zf) goto L_81117f;
L_810fbf: /* 810fbf: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 810fc2: xor edx, edx */
  edx = 0;
/* 810fc4: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 810fc7: mov dword ptr [ebp - 0x20], 0x49742400 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x49742400u);
/* 810fce: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 810fd4: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 810fd7: mov dword ptr [ebp - 0x7c], edx */
  W32((uint32_t)(ebp + 0xffffff84u), edx);
/* 810fda: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 810fdd: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 810fe0: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 810fe3: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 810fe6: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 810fe9: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 810fec: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 810ff3: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 810ff6: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
L_810ff9: /* 810ff9: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 810fff: movzx ecx, byte ptr [eax + 0x341] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x341u)));
/* 811006: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 811008: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 81100b: jge 0x811154 */
  if ((sf == of)) goto L_811154;
L_811011: /* 811011: lea ecx, [edx + edx*2 + 0xed] */
  ecx = (uint32_t)(edx + edx*2 + 0xedu);
/* 811018: fld dword ptr [eax + ecx*4 + 8] */
  { double v = F32((uint32_t)(eax + ecx*4 + 0x8u)); FPUSH(v); }
/* 81101c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 81101f: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 811025: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 811028: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 81102e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 811030: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 811036: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 81103c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 81103e: fadd dword ptr [esi + 0x3c4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3c4u)));
/* 811044: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 811047: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 81104a: fadd dword ptr [esi + 0x3c0] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3c0u)));
/* 811050: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 811053: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 811056: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 81105c: fadd dword ptr [esi + 0x3bc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x3bcu)));
/* 811062: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 811065: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 811068: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 81106b: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 811071: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 811077: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 811079: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 81107c: je 0x811080 */
  if (zf) goto L_811080;
L_81107e: /* 81107e: fchs  */
  ST0 = -ST0;
L_811080: /* 811080: fcomp qword ptr [0xa138d8] */
  fpu_com(ST0, F64((uint32_t)(0xa138d8u)));
  FPOP();
/* 811086: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 811088: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81108b: jp 0x81114e */
  if (pf) goto L_81114e;
L_811091: /* 811091: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 811094: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 811097: fsub dword ptr [ebx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x178u)));
/* 81109d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8110a0: fsub dword ptr [ebx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x174u)));
/* 8110a6: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8110a9: fsub dword ptr [ebx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x170u)));
/* 8110af: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8110b2: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8110b5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8110b8: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x8110beu); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 8110be: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8110c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8110c4: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8110c7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8110ca: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8110cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8110cf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8110d2: jp 0x81114b */
  if (pf) goto L_81114b;
L_8110d4: /* 8110d4: mov edx, dword ptr [esi + 0x2d4] */
  edx = R32((uint32_t)(esi + 0x2d4u));
/* 8110da: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 8110e0: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8110e6: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8110e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8110ec: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8110ef: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8110f1: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8110f4: mov eax, esp */
  eax = esp;
/* 8110f6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8110f8: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8110fb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8110fe: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 811105: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 811108: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 81110b: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 811110: lea eax, [ebx + 0x170] */
  eax = (uint32_t)(ebx + 0x170u);
/* 811116: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 811117: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 81111a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 81111b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81111c: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 811122: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 811123: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 811129: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x81112fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 81112f: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 811132: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 811138: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 81113a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 81113d: jp 0x81114b */
  if (pf) goto L_81114b;
L_81113f: /* 81113f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 811142: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 811145: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 811148: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_81114b: /* 81114b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
L_81114e: /* 81114e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 81114f: jmp 0x810ff9 */
  goto L_810ff9;
L_811154: /* 811154: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 811157: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 811159: jge 0x811179 */
  if ((sf == of)) goto L_811179;
L_81115b: /* 81115b: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 811161: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 811163: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 811165: push 0xae18c8 */
  { uint32_t v = 0xae18c8u; esp -= 4; W32(esp, v); }
/* 81116a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 81116b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 81116d: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x811170u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 811170: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 811173: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 811174: jmp 0x810e45 */
  goto L_810e45;
L_811179: /* 811179: mov byte ptr [ebx + 0x3b1], al */
  W8((uint32_t)(ebx + 0x3b1u), (eax & 0xffu));
L_81117f: /* 81117f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 811182: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 811183: jmp 0x810e45 */
  goto L_810e45;
L_811188: /* 811188: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 81118b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 81118d: jne 0x8111a3 */
  if (!zf) goto L_8111a3;
L_81118f: /* 81118f: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 811194: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 811196: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 811198: push 0xae1928 */
  { uint32_t v = 0xae1928u; esp -= 4; W32(esp, v); }
/* 81119d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 81119e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8111a0: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x8111a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8111a3: /* 8111a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8111a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8111a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8111a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8111af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8111b0: mov esp, ebp */
  esp = ebp;
/* 8111b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8111b3: ret 8 */
  esp += 12; SPILL(); return;
}
