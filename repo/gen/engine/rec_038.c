#include "recomp.h"
#include "rec_mod.h"

void f_7aba60(void) {
  LOAD_REGS();
  goto L_7aba60;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7aba60: /* 7aba60: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7aba63: push 0xace81c */
  { uint32_t v = 0xace81cu; esp -= 4; W32(esp, v); }
/* 7aba68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aba69: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba70: je 0x7aba83 */
  if (zf) goto L_7aba83;
L_7aba72: /* 7aba72: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba75: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba7b: xor ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7aba81: jmp 0x7abac7 */
  goto L_7abac7;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7aba83(void) {
  LOAD_REGS();
  goto L_7aba83;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7aba83: /* 7aba83: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7aba86: push 0xace840 */
  { uint32_t v = 0xace840u; esp -= 4; W32(esp, v); }
/* 7aba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aba8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aba8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aba8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aba91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7aba93: je 0x7abaa6 */
  if (zf) goto L_7abaa6;
L_7aba95: /* 7aba95: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7aba98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7aba9e: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abaa4: jmp 0x7abac7 */
  goto L_7abac7;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
L_7abac7: /* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7abaa6(void) {
  LOAD_REGS();
  goto L_7abaa6;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abaa6: /* 7abaa6: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abaa9: push 0xace854 */
  { uint32_t v = 0xace854u; esp -= 4; W32(esp, v); }
/* 7abaae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abaaf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abab1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abab4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abab6: je 0x7abacd */
  if (zf) goto L_7abacd;
L_7abab8: /* 7abab8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ababb: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 7abac1: xor ecx, 0x800000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7abac7: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
L_7abacd: /* 7abacd: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 7abad2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7abad5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abadb: /* 7abadb: xor ecx, ecx */
  ecx = 0;
/* 7abadd: mov dl, 0x40 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x40u) & 0xffu);
/* 7abadf: nop  */
L_7abae0: /* 7abae0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7abae9: cmp ecx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7abaec: jge 0x7ab683 */
  if ((sf == of)) goto L_7ab683;
L_7abaf2: /* 7abaf2: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7abaf5: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7abaf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abafa: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abafc: /* 7abafc: test byte ptr [eax + 0x80], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb02: je 0x7abb08 */
  if (zf) goto L_7abb08;
L_7abb04: /* 7abb04: mov byte ptr [eax + 0x6c], 0 */
  W8((uint32_t)(eax + 0x6cu), 0x0u);
L_7abb08: /* 7abb08: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7abb09: jmp 0x7abae0 */
  goto L_7abae0;
}

void f_7abb0b(void) {
  LOAD_REGS();
  goto L_7abb0b;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abb0b: /* 7abb0b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abb0e: push 0xace864 */
  { uint32_t v = 0xace864u; esp -= 4; W32(esp, v); }
/* 7abb13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abb14: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb1b: je 0x7abb5e */
  if (zf) goto L_7abb5e;
L_7abb1d: /* 7abb1d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7abb20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb21: call dword ptr [0xcfa3c4] */
  esp -= 4; W32(esp, 0x7abb27u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* 7abb27: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb2c: je 0x7abb46 */
  if (zf) goto L_7abb46;
L_7abb2e: /* 7abb2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb32: call dword ptr [0xcfa7b4] */
  esp -= 4; W32(esp, 0x7abb38u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 7abb38: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb3b: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 7abb41: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb46: /* 7abb46: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 7abb4c: xor ecx, ecx */
  ecx = 0;
/* 7abb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb50: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abb53: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 7abb59: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb5e: /* 7abb5e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb61: push 0xace87c */
  { uint32_t v = 0xace87cu; esp -= 4; W32(esp, v); }
/* 7abb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb6e: je 0x7abb8e */
  if (zf) goto L_7abb8e;
L_7abb70: /* 7abb70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb74: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7abb7au); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7abb7a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7abb7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7abb80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb83: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 7abb89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7abb46(void) {
  LOAD_REGS();
  goto L_7abb46;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abb46: /* 7abb46: mov eax, dword ptr [esi + 0xf0] */
  eax = R32((uint32_t)(esi + 0xf0u));
/* 7abb4c: xor ecx, ecx */
  ecx = 0;
/* 7abb4e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb50: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abb53: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 7abb59: jmp 0x7ab683 */
  goto L_7ab683;
}

void f_7abb5e(void) {
  LOAD_REGS();
  goto L_7abb5e;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abb5e: /* 7abb5e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb61: push 0xace87c */
  { uint32_t v = 0xace87cu; esp -= 4; W32(esp, v); }
/* 7abb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb67: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb6e: je 0x7abb8e */
  if (zf) goto L_7abb8e;
L_7abb70: /* 7abb70: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abb74: call dword ptr [0xcfa778] */
  esp -= 4; W32(esp, 0x7abb7au); SPILL(); f_4e3d69(); if (g_unwind) return; /* Core!?appAtof@@YAMPBG@Z */ RELOAD();
/* 7abb7a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7abb7d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7abb80: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb83: mov dword ptr [esi + 0xf4], ecx */
  W32((uint32_t)(esi + 0xf4u), ecx);
/* 7abb89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7abb8e(void) {
  LOAD_REGS();
  goto L_7abb8e;
L_7ab65f: /* 7ab65f: xor eax, eax */
  eax = 0;
/* 7ab661: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab664: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab66b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab66c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab66d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab66e: mov esp, ebp */
  esp = ebp;
/* 7ab670: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab671: ret 8 */
  esp += 12; SPILL(); return;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abb8e: /* 7abb8e: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7abb91: push 0xace89c */
  { uint32_t v = 0xace89cu; esp -= 4; W32(esp, v); }
/* 7abb96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abb97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abb99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abb99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abb9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abb9e: je 0x7abc43 */
  if (zf) goto L_7abc43;
L_7abba4: /* 7abba4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abba7: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7abbad: mov dl, byte ptr [eax + 0x4c8] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4c8u))) & 0xffu);
/* 7abbb3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbb5: jne 0x7ab65f */
  if (!zf) goto L_7ab65f;
L_7abbbb: /* 7abbbb: mov eax, dword ptr [ecx + 0x4c4] */
  eax = R32((uint32_t)(ecx + 0x4c4u));
/* 7abbc1: mov edx, eax */
  edx = eax;
/* 7abbc3: not edx */
  edx = ~edx;
/* 7abbc5: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbc7: and edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7abbcd: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7abbcf: mov dword ptr [ecx + 0x4c4], edx */
  W32((uint32_t)(ecx + 0x4c4u), edx);
/* 7abbd5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abbd8: test dword ptr [eax + 0x4c4], 0x800000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c4u))); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abbe2: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abbe8: /* 7abbe8: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 7abbee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abbf0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7abbf3: add eax, 0x588 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x588u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abbf8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7abbfa: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7abbfd: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7abc00: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7abc03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7abc06: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abc09: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 7abc0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7abc11: add eax, 0x594 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x594u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7abc16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7abc18: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7abc1b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7abc1e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7abc21: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7abc24: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7abc27: lea eax, [ecx + 0x594] */
  eax = (uint32_t)(ecx + 0x594u);
/* 7abc2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc2e: lea edx, [ecx + 0x588] */
  edx = (uint32_t)(ecx + 0x588u);
/* 7abc34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abc35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 7abc38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc39: call 0x6c204a */
  esp -= 4; W32(esp, 0x7abc3eu); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7abc3e: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7abc43(void) {
  LOAD_REGS();
  goto L_7abc43;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abc43: /* 7abc43: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc46: push 0xace8bc */
  { uint32_t v = 0xace8bcu; esp -= 4; W32(esp, v); }
/* 7abc4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc53: je 0x7abc8e */
  if (zf) goto L_7abc8e;
L_7abc55: /* 7abc55: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* 7abc5b: xor edx, edx */
  edx = 0;
/* 7abc5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc5f: mov eax, dword ptr [esi - 0x2c] */
  eax = R32((uint32_t)(esi + 0xffffffd4u));
/* 7abc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7abc65: lea edi, [esi - 0x2c] */
  edi = (uint32_t)(esi + 0xffffffd4u);
/* 7abc68: mov ecx, edi */
  ecx = edi;
/* 7abc6a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 7abc70: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7abc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc73: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7abc76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abc78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7abc7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abc7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc7d: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 7abc80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc81: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 7abc84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abc85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7abc86: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7abc89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc89: jmp 0x7ab683 */
  goto L_7ab683;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7abc8e(void) {
  LOAD_REGS();
  goto L_7abc8e;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abc8e: /* 7abc8e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7abc91: push 0xace8d8 */
  { uint32_t v = 0xace8d8u; esp -= 4; W32(esp, v); }
/* 7abc96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abc97: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7abc99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abc99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abc9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abc9e: je 0x7abcd8 */
  if (zf) goto L_7abcd8;
L_7abca0: /* 7abca0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abca2: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 7abca7: lea edx, [ebp - 0x834] */
  edx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7abcae: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7abcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcb2: call dword ptr [0xcfa7a8] */
  esp -= 4; W32(esp, 0x7abcb8u); SPILL(); f_4e3256(); if (g_unwind) return; /* Core!?ParseToken@@YAHAAPBGPAGHH@Z */ RELOAD();
/* 7abcb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abcbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcbd: je 0x7ab683 */
  if (zf) goto L_7ab683;
L_7abcc3: /* 7abcc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcc4: lea ecx, [ebp - 0x834] */
  ecx = (uint32_t)(ebp + 0xfffff7ccu);
/* 7abcca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abccb: lea ecx, [esi - 0x2c] */
  ecx = (uint32_t)(esi + 0xffffffd4u);
/* 7abcce: call 0x6c268f */
  esp -= 4; W32(esp, 0x7abcd3u); SPILL(); f_6c268f(); if (g_unwind) return; RELOAD();
/* 7abcd3: jmp 0x7ab683 */
  goto L_7ab683;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7abcd8(void) {
  LOAD_REGS();
  goto L_7abcd8;
L_7ab683: /* 7ab683: mov eax, 1 */
  eax = 0x1u;
/* 7ab688: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ab68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ab692: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ab693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ab694: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ab695: mov esp, ebp */
  esp = ebp;
/* 7ab697: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ab698: ret 8 */
  esp += 12; SPILL(); return;
L_7abcd8: /* 7abcd8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7abcdb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcdd: je 0x7abcfb */
  if (zf) goto L_7abcfb;
L_7abcdf: /* 7abcdf: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7abce2: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 7abce8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7abcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abceb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7abcee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7abcf0: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x7abcf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7abcf3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abcf5: jne 0x7ab683 */
  if (!zf) goto L_7ab683;
L_7abcfb: /* 7abcfb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7abcfe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7abcff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd00: mov ecx, esi */
  ecx = esi;
/* 7abd02: call 0x6cc0f9 */
  esp -= 4; W32(esp, 0x7abd07u); SPILL(); f_6cc0f9(); if (g_unwind) return; RELOAD();
/* 7abd07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7abd0a: xor edx, edx */
  edx = 0;
/* 7abd0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7abd0e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7abd11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7abd12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7abd13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7abd1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7abd1b: mov eax, edx */
  eax = edx;
/* 7abd1d: mov esp, ebp */
  esp = ebp;
/* 7abd1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7abd20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7abd23(void) {
  LOAD_REGS();
L_7abd23: /* 7abd23: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7abd26: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7abd2b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7abd2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7abd2f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7abd32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7abd37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7abd37(); return;
}

void f_7abd37(void) {
  LOAD_REGS();
L_7abd37: /* 7abd37: push 0xa0c428 */
  { uint32_t v = 0xa0c428u; esp -= 4; W32(esp, v); }
/* 7abd3c: push 0xace8e4 */
  { uint32_t v = 0xace8e4u; esp -= 4; W32(esp, v); }
/* 7abd41: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7abd47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7abd47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7abd4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abd4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7abd4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7abd53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7abd53: guest_badaddr(0x7abd53); return;
}

void f_7ac090(void) {
  LOAD_REGS();
L_7ac090: /* 7ac090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ac091: mov ebp, esp */
  ebp = esp;
/* 7ac093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ac095: push 0x9ceab0 */
  { uint32_t v = 0x9ceab0u; esp -= 4; W32(esp, v); }
/* 7ac09a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ac0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac0a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ac0a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ac0ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ac0ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac0af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac0b0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 7ac0b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ac0b4: mov edi, ecx */
  edi = ecx;
/* 7ac0b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ac0b9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ac0bb: lea ebx, [edi + 0x170] */
  ebx = (uint32_t)(edi + 0x170u);
/* 7ac0c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac0c3: mov ecx, ebx */
  ecx = ebx;
/* 7ac0c5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac0cc: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7ac0cf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ac0d5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ac0d5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7ac0d7: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 7ac0da: mov ecx, dword ptr [edi + 0x148] */
  ecx = R32((uint32_t)(edi + 0x148u));
/* 7ac0e0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ac0e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac0e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac0e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac0e7: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x7ac0eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac0ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ac0ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ac0ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ac0ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ac0f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ac0f7: mov esp, ebp */
  esp = ebp;
/* 7ac0f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ac0fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ac0fd(void) {
  LOAD_REGS();
L_7ac0fd: /* 7ac0fd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ac100: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac105: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7ac108: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ac109: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ac10c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac111u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac111(); return;
}

void f_7ac111(void) {
  LOAD_REGS();
L_7ac111: /* 7ac111: push 0xa0c450 */
  { uint32_t v = 0xa0c450u; esp -= 4; W32(esp, v); }
/* 7ac116: push 0xace950 */
  { uint32_t v = 0xace950u; esp -= 4; W32(esp, v); }
/* 7ac11b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac121u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac121: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac124: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac128: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac12du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ac12d: guest_badaddr(0x7ac12d); return;
}

void f_7ac160(void) {
  LOAD_REGS();
L_7ac160: /* 7ac160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ac161: mov ebp, esp */
  ebp = esp;
/* 7ac163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ac165: push 0x9ceac0 */
  { uint32_t v = 0x9ceac0u; esp -= 4; W32(esp, v); }
/* 7ac16a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ac170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ac178: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ac17b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac17c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac17d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ac17e: mov edi, ecx */
  edi = ecx;
/* 7ac180: mov eax, dword ptr [edi + 0x174] */
  eax = R32((uint32_t)(edi + 0x174u));
/* 7ac186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ac188: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ac18b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac192: jne 0x7ac1ac */
  if (!zf) goto L_7ac1ac;
L_7ac194: /* 7ac194: push 0x2b1 */
  { uint32_t v = 0x2b1u; esp -= 4; W32(esp, v); }
/* 7ac199: push 0xace958 */
  { uint32_t v = 0xace958u; esp -= 4; W32(esp, v); }
/* 7ac19e: push 0xace968 */
  { uint32_t v = 0xace968u; esp -= 4; W32(esp, v); }
/* 7ac1a3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ac1a9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ac1a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ac1ac: /* 7ac1ac: mov eax, dword ptr [edi + 0x174] */
  eax = R32((uint32_t)(edi + 0x174u));
/* 7ac1b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ac1b4: lea esi, [edi + 0x170] */
  esi = (uint32_t)(edi + 0x170u);
/* 7ac1ba: jg 0x7ac1d4 */
  if ((!zf && sf == of)) goto L_7ac1d4;
L_7ac1bc: /* 7ac1bc: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* 7ac1c1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7ac1c6: push 0xac3d0c */
  { uint32_t v = 0xac3d0cu; esp -= 4; W32(esp, v); }
/* 7ac1cb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ac1d1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ac1d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ac1d4: /* 7ac1d4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7ac1d7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ac1d9: mov ebx, dword ptr [ecx + eax*4 - 4] */
  ebx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* 7ac1dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac1df: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7ac1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac1e1: mov ecx, esi */
  ecx = esi;
/* 7ac1e3: call 0x6c392c */
  esp -= 4; W32(esp, 0x7ac1e8u); SPILL(); f_6c392c(); if (g_unwind) return; RELOAD();
/* 7ac1e8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7ac1eb: mov ecx, dword ptr [edi + 0x148] */
  ecx = R32((uint32_t)(edi + 0x148u));
/* 7ac1f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac1f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac1f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac1f5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7ac1f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac1f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ac1fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ac1fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ac1fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ac204: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ac205: mov esp, ebp */
  esp = ebp;
/* 7ac207: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ac208: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ac20b(void) {
  LOAD_REGS();
L_7ac20b: /* 7ac20b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ac20e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac213: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7ac216: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ac217: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ac21a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac21fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac21f(); return;
}

void f_7ac21f(void) {
  LOAD_REGS();
L_7ac21f: /* 7ac21f: push 0xa0c480 */
  { uint32_t v = 0xa0c480u; esp -= 4; W32(esp, v); }
/* 7ac224: push 0xace978 */
  { uint32_t v = 0xace978u; esp -= 4; W32(esp, v); }
/* 7ac229: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac22fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac22f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac232: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac234: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac236: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac23bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ac23b: guest_badaddr(0x7ac23b); return;
}

void f_7ac280(void) {
  LOAD_REGS();
L_7ac280: /* 7ac280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ac281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac282: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ac283: mov edi, ecx */
  edi = ecx;
/* 7ac285: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 7ac288: xor esi, esi */
  esi = 0;
/* 7ac28a: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ac28c: jle 0x7ac2b0 */
  if ((zf || sf != of)) goto L_7ac2b0;
L_7ac28e: /* 7ac28e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac28f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_7ac293: /* 7ac293: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7ac295: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 7ac298: cmp ecx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ac29a: jne 0x7ac2a7 */
  if (!zf) goto L_7ac2a7;
L_7ac29c: /* 7ac29c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac29e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac29f: mov ecx, edi */
  ecx = edi;
/* 7ac2a1: call 0x6c38d2 */
  esp -= 4; W32(esp, 0x7ac2a6u); SPILL(); f_6c38d2(); if (g_unwind) return; RELOAD();
/* 7ac2a6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_7ac2a7: /* 7ac2a7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7ac2aa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7ac2ab: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7ac2ad: jl 0x7ac293 */
  if ((sf != of)) goto L_7ac293;
L_7ac2af: /* 7ac2af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7ac2b0: /* 7ac2b0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 7ac2b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ac2b4: mov eax, ebp */
  eax = ebp;
/* 7ac2b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ac2b7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ac2b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ac2ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ac2d0(void) {
  LOAD_REGS();
L_7ac2d0: /* 7ac2d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ac2d1: mov ebp, esp */
  ebp = esp;
/* 7ac2d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ac2d5: push 0x9cead0 */
  { uint32_t v = 0x9cead0u; esp -= 4; W32(esp, v); }
/* 7ac2da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ac2e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac2e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ac2e8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ac2eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac2ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac2ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ac2ee: mov esi, ecx */
  esi = ecx;
/* 7ac2f0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ac2f3: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 7ac2f6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac2fd: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac303u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac303: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 7ac306: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 7ac309: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ac30b: je 0x7ac33c */
  if (zf) goto L_7ac33c;
L_7ac30d: /* 7ac30d: mov ecx, esi */
  ecx = esi;
/* 7ac30f: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac315u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac315: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7ac318: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 7ac31b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac31d: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7ac323u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac323: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ac325: jne 0x7ac33c */
  if (!zf) goto L_7ac33c;
L_7ac327: /* 7ac327: mov ecx, esi */
  ecx = esi;
/* 7ac329: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac32fu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac32f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 7ac332: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 7ac335: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac337: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac339: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7ac33cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ac33c: /* 7ac33c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7ac33e: mov ecx, esi */
  ecx = esi;
/* 7ac340: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ac344: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x7ac34au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac34a: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 7ac34d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ac34f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac356: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ac35a: je 0x7ac363 */
  if (zf) goto L_7ac363;
L_7ac35c: /* 7ac35c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac35e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac360: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ac363u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ac363: /* 7ac363: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7ac366: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ac368: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac36f: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7ac373: je 0x7ac37c */
  if (zf) goto L_7ac37c;
L_7ac375: /* 7ac375: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac377: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac379: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ac37cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ac37c: /* 7ac37c: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 7ac37f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ac381: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac388: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7ac38c: je 0x7ac395 */
  if (zf) goto L_7ac395;
L_7ac38e: /* 7ac38e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac390: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac392: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ac395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ac395: /* 7ac395: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* 7ac398: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ac39a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac3a1: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 7ac3a5: je 0x7ac479 */
  if (zf) goto L_7ac479;
L_7ac3ab: /* 7ac3ab: mov ecx, esi */
  ecx = esi;
/* 7ac3ad: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac3b3u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac3b3: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 7ac3b6: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7ac3b9: cmp ecx, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ac3bc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ac3be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac3bf: je 0x7ac46f */
  if (zf) goto L_7ac46f;
L_7ac3c5: /* 7ac3c5: call dword ptr [eax + 0x74] */
  { uint32_t t = R32((uint32_t)(eax + 0x74u)); esp -= 4; W32(esp, 0x7ac3c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac3c8: mov ecx, dword ptr [esi + 0x70] */
  ecx = R32((uint32_t)(esi + 0x70u));
/* 7ac3cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ac3cd: je 0x7ac472 */
  if (zf) goto L_7ac472;
L_7ac3d3: /* 7ac3d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac3d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac3d7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ac3dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac3da: jmp 0x7ac472 */
  goto L_7ac472;
L_7ac46f: /* 7ac46f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7ac472u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ac472: /* 7ac472: mov dword ptr [esi + 0x70], 0 */
  W32((uint32_t)(esi + 0x70u), 0x0u);
L_7ac479: /* 7ac479: mov ecx, esi */
  ecx = esi;
/* 7ac47b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac482: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7ac485: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac48bu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac48b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ac48e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac48f: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 7ac492: call 0x6c962e */
  esp -= 4; W32(esp, 0x7ac497u); SPILL(); f_6c962e(); if (g_unwind) return; RELOAD();
/* 7ac497: mov ecx, esi */
  ecx = esi;
/* 7ac499: call 0x6c8c60 */
  esp -= 4; W32(esp, 0x7ac49eu); SPILL(); f_6c8c60(); if (g_unwind) return; RELOAD();
/* 7ac49e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ac4a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ac4a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ac4a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ac4aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ac4ab: mov esp, ebp */
  esp = ebp;
/* 7ac4ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ac4ae: ret  */
  esp += 4; SPILL(); return;
}

void f_7ac3df(void) {
  LOAD_REGS();
L_7ac3df: /* 7ac3df: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ac3e2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac3e7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ac3ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac3eb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ac3ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac3f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac3f3(); return;
}

void f_7ac3f3(void) {
  LOAD_REGS();
L_7ac3f3: /* 7ac3f3: push 0xa0c55c */
  { uint32_t v = 0xa0c55cu; esp -= 4; W32(esp, v); }
/* 7ac3f8: push 0xace348 */
  { uint32_t v = 0xace348u; esp -= 4; W32(esp, v); }
/* 7ac3fd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac403u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac403: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac406: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac40a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac40fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac40f(); return;
}

void f_7ac40f(void) {
  LOAD_REGS();
L_7ac40f: /* 7ac40f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ac412: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac417: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7ac41a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac41b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ac41e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac423u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac423(); return;
}

void f_7ac423(void) {
  LOAD_REGS();
L_7ac423: /* 7ac423: push 0xa0c538 */
  { uint32_t v = 0xa0c538u; esp -= 4; W32(esp, v); }
/* 7ac428: push 0xace350 */
  { uint32_t v = 0xace350u; esp -= 4; W32(esp, v); }
/* 7ac42d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac433u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac433: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac436: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac438: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac43a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac43fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac43f(); return;
}

void f_7ac43f(void) {
  LOAD_REGS();
L_7ac43f: /* 7ac43f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ac442: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac447: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7ac44a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac44b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ac44e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac453u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac453(); return;
}

void f_7ac453(void) {
  LOAD_REGS();
L_7ac453: /* 7ac453: push 0xa0c518 */
  { uint32_t v = 0xa0c518u; esp -= 4; W32(esp, v); }
/* 7ac458: push 0xace358 */
  { uint32_t v = 0xace358u; esp -= 4; W32(esp, v); }
/* 7ac45d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac463u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac463: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac466: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac46a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac46fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7ac46f: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x7ac472u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac472: mov dword ptr [esi + 0x70], 0 */
  W32((uint32_t)(esi + 0x70u), 0x0u);
/* 7ac479: mov ecx, esi */
  ecx = esi;
/* 7ac47b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ac482: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7ac485: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac48bu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac48b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7ac48e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac48f: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 7ac492: call 0x6c962e */
  esp -= 4; W32(esp, 0x7ac497u); SPILL(); f_6c962e(); if (g_unwind) return; RELOAD();
/* 7ac497: mov ecx, esi */
  ecx = esi;
/* 7ac499: call 0x6c8c60 */
  esp -= 4; W32(esp, 0x7ac49eu); SPILL(); f_6c8c60(); if (g_unwind) return; RELOAD();
/* 7ac49e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ac4a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ac4a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ac4a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ac4aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ac4ab: mov esp, ebp */
  esp = ebp;
/* 7ac4ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ac4ae: ret  */
  esp += 4; SPILL(); return;
}

void f_7ac4af(void) {
  LOAD_REGS();
L_7ac4af: /* 7ac4af: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ac4b2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac4b7: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ac4ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ac4bb: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7ac4be: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac4c3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac4c3(); return;
}

void f_7ac4c3(void) {
  LOAD_REGS();
L_7ac4c3: /* 7ac4c3: push 0xa0c4f8 */
  { uint32_t v = 0xa0c4f8u; esp -= 4; W32(esp, v); }
/* 7ac4c8: push 0xace360 */
  { uint32_t v = 0xace360u; esp -= 4; W32(esp, v); }
/* 7ac4cd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac4d3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac4d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac4d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac4d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac4da: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac4dfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac4df(); return;
}

void f_7ac4df(void) {
  LOAD_REGS();
L_7ac4df: /* 7ac4df: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ac4e2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac4e7: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7ac4ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac4eb: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7ac4ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac4f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac4f3(); return;
}

void f_7ac4f3(void) {
  LOAD_REGS();
L_7ac4f3: /* 7ac4f3: push 0xa0c4dc */
  { uint32_t v = 0xa0c4dcu; esp -= 4; W32(esp, v); }
/* 7ac4f8: push 0xace340 */
  { uint32_t v = 0xace340u; esp -= 4; W32(esp, v); }
/* 7ac4fd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac503u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac503: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac506: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac508: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac50a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac50fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac50f(); return;
}

void f_7ac50f(void) {
  LOAD_REGS();
L_7ac50f: /* 7ac50f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7ac512: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac517: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7ac51a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ac51b: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7ac51e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac523u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac523(); return;
}

void f_7ac523(void) {
  LOAD_REGS();
L_7ac523: /* 7ac523: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7ac529: push 0xa0c4ac */
  { uint32_t v = 0xa0c4acu; esp -= 4; W32(esp, v); }
/* 7ac52e: push 0xace368 */
  { uint32_t v = 0xace368u; esp -= 4; W32(esp, v); }
/* 7ac533: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ac535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac535: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ac538: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac53b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac53d: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7ac543u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7ac543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac544: push 0xace370 */
  { uint32_t v = 0xace370u; esp -= 4; W32(esp, v); }
/* 7ac549: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ac54bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac54b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac54e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac550: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ac552: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac557u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ac557: guest_badaddr(0x7ac557); return;
}

void f_7ac610(void) {
  LOAD_REGS();
L_7ac610: /* 7ac610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ac611: mov ebp, esp */
  ebp = esp;
/* 7ac613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ac615: push 0x9ceb0e */
  { uint32_t v = 0x9ceb0eu; esp -= 4; W32(esp, v); }
/* 7ac61a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ac620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ac628: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ac62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac62d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ac62e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ac631: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ac634: call 0x6cb8bb */
  esp -= 4; W32(esp, 0x7ac639u); SPILL(); f_6cb8bb(); if (g_unwind) return; RELOAD();
/* 7ac639: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac63c: mov dword ptr [eax], 0x9f8f58 */
  W32((uint32_t)(eax), 0x9f8f58u);
/* 7ac642: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac645: mov dword ptr [ecx + 0x28], 0x9f8f48 */
  W32((uint32_t)(ecx + 0x28u), 0x9f8f48u);
/* 7ac64c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac64f: mov dword ptr [edx + 0x2c], 0x9f8f44 */
  W32((uint32_t)(edx + 0x2cu), 0x9f8f44u);
/* 7ac656: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac659: xor ebx, ebx */
  ebx = 0;
/* 7ac65b: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ac65e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ac661: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7ac667u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7ac667: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac66a: add esi, 0xd0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7ac670: mov dword ptr [esi], 0x9f7e94 */
  W32((uint32_t)(esi), 0x9f7e94u);
/* 7ac676: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac679: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7ac67c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac67f: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ac681: je 0x7ac68b */
  if (zf) goto L_7ac68b;
L_7ac683: /* 7ac683: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x7ac689u); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 7ac689: jmp 0x7ac68d */
  goto L_7ac68d;
L_7ac68b: /* 7ac68b: xor eax, eax */
  eax = 0;
L_7ac68d: /* 7ac68d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac68e: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7ac693: xor ecx, ecx */
  ecx = 0;
/* 7ac695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac697: call 0x99c910 */
  esp -= 4; W32(esp, 0x7ac69cu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7ac69c: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7ac6a1: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7ac6a3: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7ac6a6: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ac6a9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac6ac: add ecx, 0x128 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ac6b2: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7ac6b8u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7ac6b8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac6bb: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ac6c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ac6c5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7ac6cbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7ac6cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac6ce: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ac6d2: mov edi, ecx */
  edi = ecx;
/* 7ac6d4: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac6dau); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac6da: lea esi, [eax + 0x2c] */
  esi = (uint32_t)(eax + 0x2cu);
/* 7ac6dd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ac6df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac6e1: mov ecx, esi */
  ecx = esi;
/* 7ac6e3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ac6e9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ac6e9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ac6eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac6ec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac6ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac6ef: push 0xace288 */
  { uint32_t v = 0xace288u; esp -= 4; W32(esp, v); }
/* 7ac6f4: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 7ac6f7: mov edi, dword ptr [0xcfa7b8] */
  edi = R32((uint32_t)(0xcfa7b8u));
/* 7ac6fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac6fe: push 0xb7bee0 */
  { uint32_t v = 0xb7bee0u; esp -= 4; W32(esp, v); }
/* 7ac703: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ac705u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac705: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7ac70b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac70e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac70f: mov esi, eax */
  esi = eax;
/* 7ac711: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7ac713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac714: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac715: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac717: mov ecx, esp */
  ecx = esp;
/* 7ac719: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7ac71c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac71d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ac723u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ac723: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ac729u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7ac729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac72a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac72b: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ac731u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ac731: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac734: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac735: call 0x6c98d6 */
  esp -= 4; W32(esp, 0x7ac73au); SPILL(); f_6c98d6(); if (g_unwind) return; RELOAD();
/* 7ac73a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac73d: mov dword ptr [ecx + 0x68], eax */
  W32((uint32_t)(ecx + 0x68u), eax);
/* 7ac740: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac743: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 7ac746: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ac748: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac74b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac74c: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7ac74fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac74f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac750: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ac752: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac753: push 0xace2bc */
  { uint32_t v = 0xace2bcu; esp -= 4; W32(esp, v); }
/* 7ac758: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac759: push 0xb82238 */
  { uint32_t v = 0xb82238u; esp -= 4; W32(esp, v); }
/* 7ac75e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ac760u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ac760: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac763: mov esi, eax */
  esi = eax;
/* 7ac765: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7ac76a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ac76c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac76d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac76e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac76f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac771: mov ecx, esp */
  ecx = esp;
/* 7ac773: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7ac776: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac777: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ac77du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ac77d: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ac783u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7ac783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ac785: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ac78bu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ac78b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac78e: mov dword ptr [edx + 0x6c], eax */
  W32((uint32_t)(edx + 0x6cu), eax);
/* 7ac791: mov eax, dword ptr [0xcfa790] */
  eax = R32((uint32_t)(0xcfa790u));
/* 7ac796: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ac798: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac79b: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ac79d: je 0x7ac7a7 */
  if (zf) goto L_7ac7a7;
L_7ac79f: /* 7ac79f: fld qword ptr [0x9f7668] */
  { double v = F64((uint32_t)(0x9f7668u)); FPUSH(v); }
/* 7ac7a5: jmp 0x7ac7e4 */
  goto L_7ac7e4;
L_7ac7a7: /* 7ac7a7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7ac7a9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ac7ac: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7ac7af: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7ac7b2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ac7b5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ac7b7: jge 0x7ac7bf */
  if ((sf == of)) goto L_7ac7bf;
L_7ac7b9: /* 7ac7b9: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7ac7bf: /* 7ac7bf: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ac7c2: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 7ac7c8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7ac7ca: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7ac7cd: jge 0x7ac7d5 */
  if ((sf == of)) goto L_7ac7d5;
L_7ac7cf: /* 7ac7cf: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_7ac7d5: /* 7ac7d5: mov eax, dword ptr [0xcfa77c] */
  eax = R32((uint32_t)(0xcfa77cu));
/* 7ac7da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ac7dc: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 7ac7de: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
L_7ac7e4: /* 7ac7e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac7e7: fstp qword ptr [ecx + 0x138] */
  WF64((uint32_t)(ecx + 0x138u), ST0); FPOP();
/* 7ac7ed: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac7f0: mov edx, eax */
  edx = eax;
/* 7ac7f2: mov ecx, dword ptr [edx + 0x138] */
  ecx = R32((uint32_t)(edx + 0x138u));
/* 7ac7f8: mov dword ptr [eax + 0x7c], ecx */
  W32((uint32_t)(eax + 0x7cu), ecx);
/* 7ac7fb: mov edx, dword ptr [edx + 0x13c] */
  edx = R32((uint32_t)(edx + 0x13cu));
/* 7ac801: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac804: mov dword ptr [eax + 0x80], edx */
  W32((uint32_t)(eax + 0x80u), edx);
/* 7ac80a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac80d: mov dword ptr [ecx + 0xcc], ebx */
  W32((uint32_t)(ecx + 0xccu), ebx);
/* 7ac813: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac816: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7ac81c: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7ac823: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ac826: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7ac828: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7ac82f: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ac832: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ac835: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7ac83c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ac83f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7ac842: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac845: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7ac84b: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7ac852: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ac855: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ac857: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7ac85e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ac861: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7ac864: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7ac86b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ac86e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ac871: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac874: add eax, 0xec */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ac879: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7ac880: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ac883: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7ac885: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7ac88c: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ac88f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7ac892: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7ac899: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ac89c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7ac89f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8a2: mov dword ptr [edx + 0xf8], ebx */
  W32((uint32_t)(edx + 0xf8u), ebx);
/* 7ac8a8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8ab: mov dword ptr [eax + 0x100], ebx */
  W32((uint32_t)(eax + 0x100u), ebx);
/* 7ac8b1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8b4: mov dword ptr [ecx + 0xfc], ebx */
  W32((uint32_t)(ecx + 0xfcu), ebx);
/* 7ac8ba: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8bd: mov dword ptr [edx + 0x98], 4 */
  W32((uint32_t)(edx + 0x98u), 0x4u);
/* 7ac8c7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8ca: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 7ac8cf: mov dword ptr [ecx + 0x94], eax */
  W32((uint32_t)(ecx + 0x94u), eax);
/* 7ac8d5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8d8: mov dword ptr [edx + 0x90], eax */
  W32((uint32_t)(edx + 0x90u), eax);
/* 7ac8de: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8e1: mov dword ptr [eax + 0x11c], ebx */
  W32((uint32_t)(eax + 0x11cu), ebx);
/* 7ac8e7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8ea: mov dword ptr [ecx + 0x120], 0x3fb147ae */
  W32((uint32_t)(ecx + 0x120u), 0x3fb147aeu);
/* 7ac8f4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac8f7: mov dword ptr [edx + 0x84], ebx */
  W32((uint32_t)(edx + 0x84u), ebx);
/* 7ac8fd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac900: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x7ac906u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 7ac906: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 7ac90c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac90f: mov dword ptr [ecx + 0x54], eax */
  W32((uint32_t)(ecx + 0x54u), eax);
/* 7ac912: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac915: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7ac918: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ac91a: je 0x7ac954 */
  if (zf) goto L_7ac954;
L_7ac91c: /* 7ac91c: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7ac91f: push 0xace2f0 */
  { uint32_t v = 0xace2f0u; esp -= 4; W32(esp, v); }
/* 7ac924: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ac927: mov dword ptr [eax + 0x34], edx */
  W32((uint32_t)(eax + 0x34u), edx);
/* 7ac92a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7ac930u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7ac930: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ac933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac934: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ac937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ac938: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7ac93b: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7ac93f: call 0x6c9ed0 */
  esp -= 4; W32(esp, 0x7ac944u); SPILL(); f_6c9ed0(); if (g_unwind) return; RELOAD();
/* 7ac944: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7ac947: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7ac94b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ac951u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ac951: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_7ac954: /* 7ac954: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ac957: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ac958: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ac959: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ac960: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ac961: mov esp, ebp */
  esp = ebp;
/* 7ac963: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ac964: ret  */
  esp += 4; SPILL(); return;
}

void f_7ac965(void) {
  LOAD_REGS();
L_7ac965: /* 7ac965: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ac968: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ac96d: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7ac970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ac971: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7ac974: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac979u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ac979(); return;
}

void f_7ac979(void) {
  LOAD_REGS();
L_7ac979: /* 7ac979: push 0xa0c574 */
  { uint32_t v = 0xa0c574u; esp -= 4; W32(esp, v); }
/* 7ac97e: push 0xace338 */
  { uint32_t v = 0xace338u; esp -= 4; W32(esp, v); }
/* 7ac983: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ac989u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ac989: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ac98c: xor ebx, ebx */
  ebx = 0;
/* 7ac98e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac98f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ac990: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ac995u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ac995: guest_badaddr(0x7ac995); return;
}

void f_7aca90(void) {
  LOAD_REGS();
L_7aca90: /* 7aca90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aca91: mov ebp, esp */
  ebp = esp;
/* 7aca93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aca95: push 0x9ceb30 */
  { uint32_t v = 0x9ceb30u; esp -= 4; W32(esp, v); }
/* 7aca9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7acaa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acaa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7acaa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7acaab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7acaac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7acaad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7acab0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7acab1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7acab4: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7acabb: push 0xb7a5c8 */
  { uint32_t v = 0xb7a5c8u; esp -= 4; W32(esp, v); }
/* 7acac0: mov ecx, esi */
  ecx = esi;
/* 7acac2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7acac9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7acacfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7acacf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7acad2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7acad3: mov eax, esi */
  eax = esi;
/* 7acad5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7acad6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7acadd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7acade: mov esp, ebp */
  esp = ebp;
/* 7acae0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7acae1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7acae4(void) {
  LOAD_REGS();
L_7acae4: /* 7acae4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7acae7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7acaec: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7acaef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7acaf0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7acaf3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7acaf8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7acaf8(); return;
}

void f_7acaf8(void) {
  LOAD_REGS();
L_7acaf8: /* 7acaf8: push 0xa0c5a8 */
  { uint32_t v = 0xa0c5a8u; esp -= 4; W32(esp, v); }
/* 7acafd: push 0xacec34 */
  { uint32_t v = 0xacec34u; esp -= 4; W32(esp, v); }
/* 7acb02: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7acb08u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7acb08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7acb0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7acb0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7acb0f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7acb14u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7acb14: guest_badaddr(0x7acb14); return;
}

void f_7acb50(void) {
  LOAD_REGS();
L_7acb50: /* 7acb50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7acb54: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 7acb56: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7acb5a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7acb5c: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 7acb60: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7acb62: ret  */
  esp += 4; SPILL(); return;
}

void f_7acb80(void) {
  LOAD_REGS();
L_7acb80: /* 7acb80: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7acb82: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7acb86: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 7acb89: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7acba0(void) {
  LOAD_REGS();
L_7acba0: /* 7acba0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7acba4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7acba6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acba7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7acbadu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7acbad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7acbc0(void) {
  LOAD_REGS();
L_7acbc0: /* 7acbc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7acbc1: mov ebp, esp */
  ebp = esp;
/* 7acbc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7acbc5: push 0x9ceb40 */
  { uint32_t v = 0x9ceb40u; esp -= 4; W32(esp, v); }
/* 7acbca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7acbd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acbd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7acbd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7acbdb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7acbde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7acbdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7acbe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7acbe1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7acbe4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7acbe7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7acbe8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acbe9: mov esi, ecx */
  esi = ecx;
/* 7acbeb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7acbf2: call 0x6c69fb */
  esp -= 4; W32(esp, 0x7acbf7u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 7acbf7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acbf9: jne 0x7acc0e */
  if (!zf) goto L_7acc0e;
L_7acbfb: /* 7acbfb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7acbfe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7acc05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7acc06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7acc07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7acc08: mov esp, ebp */
  esp = ebp;
/* 7acc0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7acc0b: ret 8 */
  esp += 12; SPILL(); return;
L_7acc0e: /* 7acc0e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7acc10: mov ecx, esi */
  ecx = esi;
/* 7acc12: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x7acc15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7acc15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acc17: je 0x7accbb */
  if (zf) goto L_7accbb;
L_7acc1d: /* 7acc1d: mov edi, dword ptr [edi + 0x36c] */
  edi = R32((uint32_t)(edi + 0x36cu));
/* 7acc23: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acc25: je 0x7accbb */
  if (zf) goto L_7accbb;
L_7acc2b: /* 7acc2b: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7acc30: mov ecx, edi */
  ecx = edi;
/* 7acc32: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7acc38u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7acc38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acc3a: je 0x7accbb */
  if (zf) goto L_7accbb;
L_7acc3c: /* 7acc3c: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 7acc3f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acc41: je 0x7accbb */
  if (zf) goto L_7accbb;
L_7acc43: /* 7acc43: fld dword ptr [esi + 0x4c] */
  { double v = F32((uint32_t)(esi + 0x4cu)); FPUSH(v); }
/* 7acc46: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7acc4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7acc4e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7acc51: jne 0x7acc6c */
  if (!zf) goto L_7acc6c;
L_7acc53: /* 7acc53: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7acc56: fsub dword ptr [esi + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x44u)));
/* 7acc59: fld dword ptr [esi + 0x58] */
  { double v = F32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 7acc5c: fsub dword ptr [esi + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x54u)));
/* 7acc5f: fdiv dword ptr [esi + 0x4c] */
  ST0 = ST0 / (F32((uint32_t)(esi + 0x4cu)));
/* 7acc62: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 7acc64: fadd dword ptr [esi + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x54u)));
/* 7acc67: fstp dword ptr [ecx + 0x28] */
  WF32((uint32_t)(ecx + 0x28u), ST0); FPOP();
/* 7acc6a: jmp 0x7acc72 */
  goto L_7acc72;
L_7acc6c: /* 7acc6c: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 7acc6f: mov dword ptr [ecx + 0x28], eax */
  W32((uint32_t)(ecx + 0x28u), eax);
L_7acc72: /* 7acc72: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 7acc75: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 7acc78: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7acc7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7acc80: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7acc83: jnp 0x7accb3 */
  if (!pf) goto L_7accb3;
L_7acc85: /* 7acc85: cmp byte ptr [esi + 0x34], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7acc89: jne 0x7acc91 */
  if (!zf) goto L_7acc91;
L_7acc8b: /* 7acc8b: test byte ptr [esi + 0x5c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x5cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7acc8f: jne 0x7accb3 */
  if (!zf) goto L_7accb3;
L_7acc91: /* 7acc91: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7acc93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7acc94: mov ecx, edi */
  ecx = edi;
/* 7acc96: call 0x6c9e3a */
  esp -= 4; W32(esp, 0x7acc9bu); SPILL(); f_6c9e3a(); if (g_unwind) return; RELOAD();
/* 7acc9b: mov eax, 1 */
  eax = 0x1u;
/* 7acca0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7acca3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7accaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7accab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7accac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7accad: mov esp, ebp */
  esp = ebp;
/* 7accaf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7accb0: ret 8 */
  esp += 12; SPILL(); return;
L_7accb3: /* 7accb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7accb4: mov ecx, edi */
  ecx = edi;
/* 7accb6: call 0x6c31ca */
  esp -= 4; W32(esp, 0x7accbbu); SPILL(); f_6c31ca(); if (g_unwind) return; RELOAD();
L_7accbb: /* 7accbb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7accbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7accbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7accc0: mov eax, 1 */
  eax = 0x1u;
/* 7accc5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7acccc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7acccd: mov esp, ebp */
  esp = ebp;
/* 7acccf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7accd0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7accd3(void) {
  LOAD_REGS();
L_7accd3: /* 7accd3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7accd6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7accdb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7accde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7accdf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7acce2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7acce7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7acce7(); return;
}

void f_7acce7(void) {
  LOAD_REGS();
L_7acce7: /* 7acce7: push 0xa0c600 */
  { uint32_t v = 0xa0c600u; esp -= 4; W32(esp, v); }
/* 7accec: push 0xacec2c */
  { uint32_t v = 0xacec2cu; esp -= 4; W32(esp, v); }
/* 7accf1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7accf7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7accf7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7accfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7accfc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7accfe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7acd03u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7acd03: guest_badaddr(0x7acd03); return;
}

void f_7acd70(void) {
  LOAD_REGS();
L_7acd70: /* 7acd70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7acd71: mov esi, ecx */
  esi = ecx;
/* 7acd73: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x7acd78u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
/* 7acd78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7acd7d: je 0x7acd8c */
  if (zf) goto L_7acd8c;
L_7acd7f: /* 7acd7f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7acd84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7acd86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7acd88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7acd89: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7acd8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7acd8c: /* 7acd8c: mov eax, esi */
  eax = esi;
/* 7acd8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7acd8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7acdb0(void) {
  LOAD_REGS();
L_7acdb0: /* 7acdb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7acdb1: mov ebp, esp */
  ebp = esp;
/* 7acdb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7acdb5: push 0x9ceb50 */
  { uint32_t v = 0x9ceb50u; esp -= 4; W32(esp, v); }
/* 7acdba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7acdc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acdc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7acdc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7acdcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7acdcc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7acdcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7acdd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7acdd1: xor esi, esi */
  esi = 0;
/* 7acdd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7acdd6: mov edi, ecx */
  edi = ecx;
/* 7acdd8: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7acddb: jmp 0x7acde0 */
  goto L_7acde0;
L_7acde0: /* 7acde0: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7acde3: jae 0x7aceac */
  if (!cf) goto L_7aceac;
L_7acde9: /* 7acde9: mov eax, dword ptr [edi + esi*4 + 0x34] */
  eax = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7acded: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acdef: jne 0x7ace2f */
  if (!zf) goto L_7ace2f;
L_7acdf1: /* 7acdf1: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7acdf6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7acdf8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7acdfa: push 0xacec44 */
  { uint32_t v = 0xacec44u; esp -= 4; W32(esp, v); }
/* 7acdff: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ace01: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7ace03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ace05: je 0x7ace27 */
  if (zf) goto L_7ace27;
L_7ace07: /* 7ace07: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ace0a: mov edx, dword ptr [ecx + 0x8c] */
  edx = R32((uint32_t)(ecx + 0x8cu));
/* 7ace10: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7ace16: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 7ace18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ace19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ace1a: mov ecx, eax */
  ecx = eax;
/* 7ace1c: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x7ace21u); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 7ace21: mov dword ptr [edi + esi*4 + 0x34], eax */
  W32((uint32_t)(edi + esi*4 + 0x34u), eax);
/* 7ace25: jmp 0x7ace65 */
  goto L_7ace65;
L_7ace27: /* 7ace27: xor eax, eax */
  eax = 0;
/* 7ace29: mov dword ptr [edi + esi*4 + 0x34], eax */
  W32((uint32_t)(edi + esi*4 + 0x34u), eax);
/* 7ace2d: jmp 0x7ace65 */
  goto L_7ace65;
L_7ace2f: /* 7ace2f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ace32: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7ace38: cmp dword ptr [eax + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ace3b: jne 0x7ace48 */
  if (!zf) goto L_7ace48;
L_7ace3d: /* 7ace3d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 7ace40: cmp edx, dword ptr [ecx + 0x8c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ace46: je 0x7acea6 */
  if (zf) goto L_7acea6;
L_7ace48: /* 7ace48: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7ace4e: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 7ace51: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 7ace57: mov eax, dword ptr [edi + esi*4 + 0x34] */
  eax = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7ace5b: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 7ace5e: mov eax, dword ptr [edi + esi*4 + 0x34] */
  eax = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7ace62: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_7ace65: /* 7ace65: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ace67: mov ecx, ebx */
  ecx = ebx;
/* 7ace69: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7ace6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace6b: mov ecx, dword ptr [edi + esi*4 + 0x34] */
  ecx = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7ace6f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7ace71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ace72: mov ecx, ebx */
  ecx = ebx;
/* 7ace74: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7ace77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace77: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ace79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ace7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ace7d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ace82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ace84: mov byte ptr [ebp + 0xc], 0 */
  W8((uint32_t)(ebp + 0xcu), 0x0u);
/* 7ace88: mov byte ptr [ebp + 0xd], 0 */
  W8((uint32_t)(ebp + 0xdu), 0x0u);
/* 7ace8c: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 7ace90: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 7ace94: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ace97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ace98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ace9a: mov ecx, ebx */
  ecx = ebx;
/* 7ace9c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ace9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace9f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7acea1: mov ecx, ebx */
  ecx = ebx;
/* 7acea3: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7acea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7acea6: /* 7acea6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7acea7: jmp 0x7acde0 */
  goto L_7acde0;
L_7aceac: /* 7aceac: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7aceae: mov ecx, ebx */
  ecx = ebx;
/* 7aceb0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7aceb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aceb2: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7aceb5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7aceb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aceb8: mov ecx, ebx */
  ecx = ebx;
/* 7aceba: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7acebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7acebd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7acec0: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 7acec6: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7acecc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7acece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aced0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aced2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aced4: mov ecx, ebx */
  ecx = ebx;
/* 7aced6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7aced9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aced9: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 7acedc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acede: je 0x7acef0 */
  if (zf) goto L_7acef0;
L_7acee0: /* 7acee0: cmp dword ptr [esi + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7acee7: jne 0x7acef0 */
  if (!zf) goto L_7acef0;
L_7acee9: /* 7acee9: mov eax, 1 */
  eax = 0x1u;
/* 7aceee: jmp 0x7acef2 */
  goto L_7acef2;
L_7acef0: /* 7acef0: xor eax, eax */
  eax = 0;
L_7acef2: /* 7acef2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7acef4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7acef6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7acef8: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7acefb: not eax */
  eax = ~eax;
/* 7acefd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acefe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7acf00: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7acf05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7acf07: mov byte ptr [ebp + 8], 0 */
  W8((uint32_t)(ebp + 0x8u), 0x0u);
/* 7acf0b: mov byte ptr [ebp + 9], 0 */
  W8((uint32_t)(ebp + 0x9u), 0x0u);
/* 7acf0f: mov byte ptr [ebp + 0xa], 0 */
  W8((uint32_t)(ebp + 0xau), 0x0u);
/* 7acf13: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 7acf17: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7acf1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acf1b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7acf1d: mov ecx, ebx */
  ecx = ebx;
/* 7acf1f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7acf22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7acf22: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7acf25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7acf26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7acf27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7acf2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7acf2f: mov esp, ebp */
  esp = ebp;
/* 7acf31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7acf32: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7acddd(void) {
  LOAD_REGS();
L_7acddd: /* 7acddd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7acde0: /* 7acde0: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7acde3: jae 0x7aceac */
  if (!cf) goto L_7aceac;
L_7acde9: /* 7acde9: mov eax, dword ptr [edi + esi*4 + 0x34] */
  eax = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7acded: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acdef: jne 0x7ace2f */
  if (!zf) goto L_7ace2f;
L_7acdf1: /* 7acdf1: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7acdf6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7acdf8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7acdfa: push 0xacec44 */
  { uint32_t v = 0xacec44u; esp -= 4; W32(esp, v); }
/* 7acdff: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 7ace01: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7ace03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ace05: je 0x7ace27 */
  if (zf) goto L_7ace27;
L_7ace07: /* 7ace07: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ace0a: mov edx, dword ptr [ecx + 0x8c] */
  edx = R32((uint32_t)(ecx + 0x8cu));
/* 7ace10: mov ecx, dword ptr [ecx + 0x88] */
  ecx = R32((uint32_t)(ecx + 0x88u));
/* 7ace16: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 7ace18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ace19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ace1a: mov ecx, eax */
  ecx = eax;
/* 7ace1c: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x7ace21u); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 7ace21: mov dword ptr [edi + esi*4 + 0x34], eax */
  W32((uint32_t)(edi + esi*4 + 0x34u), eax);
/* 7ace25: jmp 0x7ace65 */
  goto L_7ace65;
L_7ace27: /* 7ace27: xor eax, eax */
  eax = 0;
/* 7ace29: mov dword ptr [edi + esi*4 + 0x34], eax */
  W32((uint32_t)(edi + esi*4 + 0x34u), eax);
/* 7ace2d: jmp 0x7ace65 */
  goto L_7ace65;
L_7ace2f: /* 7ace2f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ace32: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7ace38: cmp dword ptr [eax + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ace3b: jne 0x7ace48 */
  if (!zf) goto L_7ace48;
L_7ace3d: /* 7ace3d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 7ace40: cmp edx, dword ptr [ecx + 0x8c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ace46: je 0x7acea6 */
  if (zf) goto L_7acea6;
L_7ace48: /* 7ace48: mov edx, dword ptr [ecx + 0x88] */
  edx = R32((uint32_t)(ecx + 0x88u));
/* 7ace4e: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 7ace51: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 7ace57: mov eax, dword ptr [edi + esi*4 + 0x34] */
  eax = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7ace5b: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 7ace5e: mov eax, dword ptr [edi + esi*4 + 0x34] */
  eax = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7ace62: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
L_7ace65: /* 7ace65: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ace67: mov ecx, ebx */
  ecx = ebx;
/* 7ace69: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7ace6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace6b: mov ecx, dword ptr [edi + esi*4 + 0x34] */
  ecx = R32((uint32_t)(edi + esi*4 + 0x34u));
/* 7ace6f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7ace71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ace72: mov ecx, ebx */
  ecx = ebx;
/* 7ace74: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7ace77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace77: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ace79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ace7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ace7d: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ace82: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ace84: mov byte ptr [ebp + 0xc], 0 */
  W8((uint32_t)(ebp + 0xcu), 0x0u);
/* 7ace88: mov byte ptr [ebp + 0xd], 0 */
  W8((uint32_t)(ebp + 0xdu), 0x0u);
/* 7ace8c: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 7ace90: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 7ace94: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ace97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ace98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ace9a: mov ecx, ebx */
  ecx = ebx;
/* 7ace9c: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ace9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ace9f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7acea1: mov ecx, ebx */
  ecx = ebx;
/* 7acea3: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7acea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7acea6: /* 7acea6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7acea7: jmp 0x7acde0 */
  goto L_7acde0;
L_7aceac: /* 7aceac: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7aceae: mov ecx, ebx */
  ecx = ebx;
/* 7aceb0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x7aceb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aceb2: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 7aceb5: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7aceb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aceb8: mov ecx, ebx */
  ecx = ebx;
/* 7aceba: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7acebdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7acebd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7acec0: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 7acec6: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7acecc: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7acece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aced0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aced2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aced4: mov ecx, ebx */
  ecx = ebx;
/* 7aced6: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7aced9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aced9: mov esi, dword ptr [esi + 0x30] */
  esi = R32((uint32_t)(esi + 0x30u));
/* 7acedc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7acede: je 0x7acef0 */
  if (zf) goto L_7acef0;
L_7acee0: /* 7acee0: cmp dword ptr [esi + 0x540], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x540u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7acee7: jne 0x7acef0 */
  if (!zf) goto L_7acef0;
L_7acee9: /* 7acee9: mov eax, 1 */
  eax = 0x1u;
/* 7aceee: jmp 0x7acef2 */
  goto L_7acef2;
L_7acef0: /* 7acef0: xor eax, eax */
  eax = 0;
L_7acef2: /* 7acef2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7acef4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 7acef6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 7acef8: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7acefb: not eax */
  eax = ~eax;
/* 7acefd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acefe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7acf00: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7acf05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7acf07: mov byte ptr [ebp + 8], 0 */
  W8((uint32_t)(ebp + 0x8u), 0x0u);
/* 7acf0b: mov byte ptr [ebp + 9], 0 */
  W8((uint32_t)(ebp + 0x9u), 0x0u);
/* 7acf0f: mov byte ptr [ebp + 0xa], 0 */
  W8((uint32_t)(ebp + 0xau), 0x0u);
/* 7acf13: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 7acf17: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7acf1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acf1b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7acf1d: mov ecx, ebx */
  ecx = ebx;
/* 7acf1f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7acf22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7acf22: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7acf25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7acf26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7acf27: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7acf2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7acf2f: mov esp, ebp */
  esp = ebp;
/* 7acf31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7acf32: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7acf35(void) {
  LOAD_REGS();
L_7acf35: /* 7acf35: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7acf38: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7acf3d: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7acf40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7acf41: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7acf44: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7acf49u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7acf49(); return;
}

void f_7acf49(void) {
  LOAD_REGS();
L_7acf49: /* 7acf49: push 0xa0c64c */
  { uint32_t v = 0xa0c64cu; esp -= 4; W32(esp, v); }
/* 7acf4e: push 0xacec68 */
  { uint32_t v = 0xacec68u; esp -= 4; W32(esp, v); }
/* 7acf53: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7acf59u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7acf59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7acf5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7acf5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7acf60: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7acf65u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7acf65: guest_badaddr(0x7acf65); return;
}

void f_7acfe0(void) {
  LOAD_REGS();
L_7acfe0: /* 7acfe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7acfe1: mov ebp, esp */
  ebp = esp;
/* 7acfe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7acfe5: push 0x9ceb6b */
  { uint32_t v = 0x9ceb6bu; esp -= 4; W32(esp, v); }
/* 7acfea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7acff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7acff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7acff8: sub esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7acffe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7acfff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad000: mov esi, ecx */
  esi = ecx;
/* 7ad002: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 7ad005: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad007: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad008: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ad00b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ad012: je 0x7ad0c4 */
  if (zf) goto L_7ad0c4;
L_7ad018: /* 7ad018: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ad01b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7ad01e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad01f: lea ecx, [edi + 0xd0] */
  ecx = (uint32_t)(edi + 0xd0u);
/* 7ad025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad026: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7ad02c: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x7ad031u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 7ad031: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ad034: movzx edx, byte ptr [esi + 0x33] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x33u)));
/* 7ad038: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 7ad03b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ad03f: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7ad042: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 7ad045: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ad04au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ad04a: mov cl, byte ptr [esi + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x30u))) & 0xffu);
/* 7ad04d: mov dl, byte ptr [esi + 0x31] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x31u))) & 0xffu);
/* 7ad050: mov bl, byte ptr [esi + 0x32] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x32u))) & 0xffu);
/* 7ad053: mov byte ptr [ebp + 0xc], cl */
  W8((uint32_t)(ebp + 0xcu), (ecx & 0xffu));
/* 7ad056: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7ad059: mov byte ptr [ebp + 0xf], al */
  W8((uint32_t)(ebp + 0xfu), (eax & 0xffu));
/* 7ad05c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ad05e: mov byte ptr [ebp + 0xd], dl */
  W8((uint32_t)(ebp + 0xdu), (edx & 0xffu));
/* 7ad061: mov byte ptr [ebp + 0xe], bl */
  W8((uint32_t)(ebp + 0xeu), (ebx & 0xffu));
/* 7ad064: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7ad067u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad067: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7ad06a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad06c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7ad06f: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7ad072u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad072: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7ad075: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* 7ad078: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7ad07b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7ad07e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad07f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad080: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ad083: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad085: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ad088: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7ad08c: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7ad08f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7ad092: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad094: fild dword ptr [edi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x8cu)); FPUSH(v); }
/* 7ad09a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad09c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ad09f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7ad0a3: fild dword ptr [edi + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x88u)); FPUSH(v); }
/* 7ad0a9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7ad0ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad0ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad0b0: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x7ad0b5u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 7ad0b5: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7ad0bb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ad0bf: call 0x6caac4 */
  esp -= 4; W32(esp, 0x7ad0c4u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
L_7ad0c4: /* 7ad0c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ad0c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ad0c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad0c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ad0d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ad0d1: mov esp, ebp */
  esp = ebp;
/* 7ad0d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ad0d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ad0d7(void) {
  LOAD_REGS();
L_7ad0d7: /* 7ad0d7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ad0da: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ad0df: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ad0e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad0e3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7ad0e6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad0ebu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ad0eb(); return;
}

void f_7ad0eb(void) {
  LOAD_REGS();
L_7ad0eb: /* 7ad0eb: push 0xa0c684 */
  { uint32_t v = 0xa0c684u; esp -= 4; W32(esp, v); }
/* 7ad0f0: push 0xacec78 */
  { uint32_t v = 0xacec78u; esp -= 4; W32(esp, v); }
/* 7ad0f5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ad0fbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ad0fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad0fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad100: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad102: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad107u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ad107: guest_badaddr(0x7ad107); return;
}

void f_7ad160(void) {
  LOAD_REGS();
L_7ad160: /* 7ad160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad161: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7ad165: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 7ad16a: mov ecx, esi */
  ecx = esi;
/* 7ad16c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ad172u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ad172: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad174: jne 0x7ad18e */
  if (!zf) goto L_7ad18e;
L_7ad176: /* 7ad176: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ad17b: push 0xacec80 */
  { uint32_t v = 0xacec80u; esp -= 4; W32(esp, v); }
/* 7ad180: push 0xacecc4 */
  { uint32_t v = 0xacecc4u; esp -= 4; W32(esp, v); }
/* 7ad185: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ad18bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ad18b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ad18e: /* 7ad18e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7ad192: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ad195: jne 0x7ad19d */
  if (!zf) goto L_7ad19d;
L_7ad197: /* 7ad197: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ad19du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7ad19d: /* 7ad19d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ad1a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad1a5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7ad1a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad1ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad1ac: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7ad1b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad1b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad1b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad1b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad1b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad1b6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ad1bcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ad1bc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad1bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad1c0: ret  */
  esp += 4; SPILL(); return;
}

void f_7ad1f0(void) {
  LOAD_REGS();
L_7ad1f0: /* 7ad1f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad1f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7ad1f5: push 0xb8d320 */
  { uint32_t v = 0xb8d320u; esp -= 4; W32(esp, v); }
/* 7ad1fa: mov ecx, esi */
  ecx = esi;
/* 7ad1fc: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ad202u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ad202: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad204: jne 0x7ad21e */
  if (!zf) goto L_7ad21e;
L_7ad206: /* 7ad206: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ad20b: push 0xacece8 */
  { uint32_t v = 0xacece8u; esp -= 4; W32(esp, v); }
/* 7ad210: push 0xaced2c */
  { uint32_t v = 0xaced2cu; esp -= 4; W32(esp, v); }
/* 7ad215: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ad21bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ad21b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ad21e: /* 7ad21e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7ad222: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ad225: jne 0x7ad22d */
  if (!zf) goto L_7ad22d;
L_7ad227: /* 7ad227: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ad22du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7ad22d: /* 7ad22d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ad233: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad235: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7ad239: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad23b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad23c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7ad240: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad242: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad243: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad245: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad246: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ad24cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ad24c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad24f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad250: ret  */
  esp += 4; SPILL(); return;
}

void f_7ad280(void) {
  LOAD_REGS();
L_7ad280: /* 7ad280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad281: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7ad285: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7ad28a: mov ecx, esi */
  ecx = esi;
/* 7ad28c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ad292u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ad292: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad294: jne 0x7ad2ae */
  if (!zf) goto L_7ad2ae;
L_7ad296: /* 7ad296: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ad29b: push 0xaced50 */
  { uint32_t v = 0xaced50u; esp -= 4; W32(esp, v); }
/* 7ad2a0: push 0xaced94 */
  { uint32_t v = 0xaced94u; esp -= 4; W32(esp, v); }
/* 7ad2a5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ad2abu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ad2ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ad2ae: /* 7ad2ae: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7ad2b2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ad2b5: jne 0x7ad2bd */
  if (!zf) goto L_7ad2bd;
L_7ad2b7: /* 7ad2b7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ad2bdu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7ad2bd: /* 7ad2bd: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ad2c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad2c5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7ad2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad2cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad2cc: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7ad2d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad2d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad2d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad2d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad2d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad2d6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ad2dcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ad2dc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad2df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad2e0: ret  */
  esp += 4; SPILL(); return;
}

void f_7ad310(void) {
  LOAD_REGS();
L_7ad310: /* 7ad310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad311: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ad313: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ad315: mov esi, ecx */
  esi = ecx;
/* 7ad317: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ad31du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ad31d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7ad321: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ad323: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7ad325: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7ad328: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad329: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ad340(void) {
  LOAD_REGS();
L_7ad340: /* 7ad340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ad341: mov ebp, esp */
  ebp = esp;
/* 7ad343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ad345: push 0x9ceb80 */
  { uint32_t v = 0x9ceb80u; esp -= 4; W32(esp, v); }
/* 7ad34a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ad350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ad358: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ad35b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ad35c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad35d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad35e: xor edi, edi */
  edi = 0;
/* 7ad360: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ad363: mov ebx, ecx */
  ebx = ecx;
/* 7ad365: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7ad368: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x7ad36eu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 7ad36e: mov edi, edi */
  edi = edi;
L_7ad370: /* 7ad370: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 7ad373: jae 0x7ad3cc */
  if (!cf) goto L_7ad3cc;
L_7ad375: /* 7ad375: mov esi, dword ptr [ebx + edi*4 + 0x34] */
  esi = R32((uint32_t)(ebx + edi*4 + 0x34u));
/* 7ad379: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad37b: je 0x7ad399 */
  if (zf) goto L_7ad399;
L_7ad37d: /* 7ad37d: mov ecx, esi */
  ecx = esi;
/* 7ad37f: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x7ad384u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
/* 7ad384: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7ad389: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ad38b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad38d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad38e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ad391u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad391: mov dword ptr [ebx + edi*4 + 0x34], 0 */
  W32((uint32_t)(ebx + edi*4 + 0x34u), 0x0u);
L_7ad399: /* 7ad399: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7ad39a: jmp 0x7ad370 */
  goto L_7ad370;
L_7ad3cc: /* 7ad3cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ad3cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ad3d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad3d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ad3d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ad3d9: mov esp, ebp */
  esp = ebp;
/* 7ad3db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ad3dc: ret  */
  esp += 4; SPILL(); return;
}

void f_7ad39c(void) {
  LOAD_REGS();
L_7ad39c: /* 7ad39c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ad39f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ad3a4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ad3a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad3a8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ad3ab: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad3b0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ad3b0(); return;
}

void f_7ad3b0(void) {
  LOAD_REGS();
L_7ad3b0: /* 7ad3b0: push 0xa0c6c4 */
  { uint32_t v = 0xa0c6c4u; esp -= 4; W32(esp, v); }
/* 7ad3b5: push 0xacec3c */
  { uint32_t v = 0xacec3cu; esp -= 4; W32(esp, v); }
/* 7ad3ba: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ad3c0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ad3c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad3c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad3c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad3c7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad3ccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7ad3cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ad3cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ad3d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad3d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ad3d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ad3d9: mov esp, ebp */
  esp = ebp;
/* 7ad3db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ad3dc: ret  */
  esp += 4; SPILL(); return;
}

void f_7ad410(void) {
  LOAD_REGS();
L_7ad410: /* 7ad410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ad411: mov ebp, esp */
  ebp = esp;
/* 7ad413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ad415: push 0x9ceb90 */
  { uint32_t v = 0x9ceb90u; esp -= 4; W32(esp, v); }
/* 7ad41a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ad420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ad428: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ad42b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ad42c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad42d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad42e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ad431: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 7ad434: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7ad436: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ad438: mov ecx, esi */
  ecx = esi;
/* 7ad43a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ad441: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7ad447u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7ad447: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7ad449: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ad44c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ad44d: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7ad450: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ad453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ad45b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ad45c: mov esp, ebp */
  esp = ebp;
/* 7ad45e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ad45f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ad462(void) {
  LOAD_REGS();
L_7ad462: /* 7ad462: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ad465: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ad46a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ad46d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad46e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ad471: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad476u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ad476(); return;
}

void f_7ad476(void) {
  LOAD_REGS();
L_7ad476: /* 7ad476: push 0xa0c6f8 */
  { uint32_t v = 0xa0c6f8u; esp -= 4; W32(esp, v); }
/* 7ad47b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7ad480: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ad486u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ad486: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad48b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad48d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad492u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ad492: guest_badaddr(0x7ad492); return;
}

void f_7ad4d0(void) {
  LOAD_REGS();
L_7ad4d0: /* 7ad4d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ad4d1: mov ebp, esp */
  ebp = esp;
/* 7ad4d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ad4d5: push 0x9cebb6 */
  { uint32_t v = 0x9cebb6u; esp -= 4; W32(esp, v); }
/* 7ad4da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ad4e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad4e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ad4e8: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ad4ee: mov eax, dword ptr [0xb7bec4] */
  eax = R32((uint32_t)(0xb7bec4u));
/* 7ad4f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad4f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ad4f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ad4f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad4f8: mov ebx, ecx */
  ebx = ecx;
/* 7ad4fa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ad4fd: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ad500: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ad507: jne 0x7ad596 */
  if (!zf) goto L_7ad596;
L_7ad50d: /* 7ad50d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad50f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ad512: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ad518u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ad518: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 7ad51d: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 7ad522: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ad528u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ad528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad52a: jne 0x7ad544 */
  if (!zf) goto L_7ad544;
L_7ad52c: /* 7ad52c: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ad531: push 0xacec80 */
  { uint32_t v = 0xacec80u; esp -= 4; W32(esp, v); }
/* 7ad536: push 0xacecc4 */
  { uint32_t v = 0xacecc4u; esp -= 4; W32(esp, v); }
/* 7ad53b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ad541u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ad541: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ad544: /* 7ad544: mov edi, dword ptr [0xcfa550] */
  edi = R32((uint32_t)(0xcfa550u));
/* 7ad54a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ad54cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad54c: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ad552: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad554: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ad557: mov esi, dword ptr [0xcfa54c] */
  esi = R32((uint32_t)(0xcfa54cu));
/* 7ad55d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad55f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad560: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad562: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad564: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad566: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 7ad56b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ad56du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad56d: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7ad573: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad576: push 0xb7bec4 */
  { uint32_t v = 0xb7bec4u; esp -= 4; W32(esp, v); }
/* 7ad57b: mov dword ptr [0xb7bec4], eax */
  W32((uint32_t)(0xb7bec4u), eax);
/* 7ad580: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7ad585u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7ad585: mov edx, dword ptr [ebx + 0x34] */
  edx = R32((uint32_t)(ebx + 0x34u));
/* 7ad588: mov ecx, dword ptr [0xb7bec4] */
  ecx = R32((uint32_t)(0xb7bec4u));
/* 7ad58e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad58f: call 0x6cccfc */
  esp -= 4; W32(esp, 0x7ad594u); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
/* 7ad594: jmp 0x7ad5a2 */
  goto L_7ad5a2;
L_7ad596: /* 7ad596: mov esi, dword ptr [0xcfa54c] */
  esi = R32((uint32_t)(0xcfa54cu));
/* 7ad59c: mov edi, dword ptr [0xcfa550] */
  edi = R32((uint32_t)(0xcfa550u));
L_7ad5a2: /* 7ad5a2: mov eax, dword ptr [0xb7bec0] */
  eax = R32((uint32_t)(0xb7bec0u));
/* 7ad5a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad5a9: jne 0x7ad617 */
  if (!zf) goto L_7ad617;
L_7ad5ab: /* 7ad5ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad5ad: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ad5b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ad5b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ad5b6: push 0xb8d320 */
  { uint32_t v = 0xb8d320u; esp -= 4; W32(esp, v); }
/* 7ad5bb: mov ecx, 0xb8d320 */
  ecx = 0xb8d320u;
/* 7ad5c0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ad5c6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ad5c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad5c8: jne 0x7ad5e2 */
  if (!zf) goto L_7ad5e2;
L_7ad5ca: /* 7ad5ca: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ad5cf: push 0xacece8 */
  { uint32_t v = 0xacece8u; esp -= 4; W32(esp, v); }
/* 7ad5d4: push 0xaced2c */
  { uint32_t v = 0xaced2cu; esp -= 4; W32(esp, v); }
/* 7ad5d9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ad5dfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ad5df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ad5e2: /* 7ad5e2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ad5e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad5e4: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ad5ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad5ec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ad5ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad5f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad5f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad5f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad5f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad5f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad5f8: push 0xb8d320 */
  { uint32_t v = 0xb8d320u; esp -= 4; W32(esp, v); }
/* 7ad5fd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ad5ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad5ff: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7ad605: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad608: push 0xb7bec0 */
  { uint32_t v = 0xb7bec0u; esp -= 4; W32(esp, v); }
/* 7ad60d: mov dword ptr [0xb7bec0], eax */
  W32((uint32_t)(0xb7bec0u), eax);
/* 7ad612: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7ad617u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_7ad617: /* 7ad617: mov eax, dword ptr [0xb7bebc] */
  eax = R32((uint32_t)(0xb7bebcu));
/* 7ad61c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad61e: jne 0x7ad6ac */
  if (!zf) goto L_7ad6ac;
L_7ad624: /* 7ad624: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad626: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7ad629: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ad62fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ad62f: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7ad634: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 7ad639: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ad63fu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ad63f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad641: jne 0x7ad65b */
  if (!zf) goto L_7ad65b;
L_7ad643: /* 7ad643: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ad648: push 0xaced50 */
  { uint32_t v = 0xaced50u; esp -= 4; W32(esp, v); }
/* 7ad64d: push 0xaced94 */
  { uint32_t v = 0xaced94u; esp -= 4; W32(esp, v); }
/* 7ad652: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ad658u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ad658: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ad65b: /* 7ad65b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7ad65du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad65d: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 7ad663: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7ad665: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ad668: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad66a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad66b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad66d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad66f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad671: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7ad676: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7ad678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad678: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7ad67e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad681: push 0xb7bebc */
  { uint32_t v = 0xb7bebcu; esp -= 4; W32(esp, v); }
/* 7ad686: mov dword ptr [0xb7bebc], eax */
  W32((uint32_t)(0xb7bebcu), eax);
/* 7ad68b: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7ad690u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7ad690: mov eax, dword ptr [0xb7bebc] */
  eax = R32((uint32_t)(0xb7bebcu));
/* 7ad695: mov ecx, dword ptr [0xb7bec4] */
  ecx = R32((uint32_t)(0xb7bec4u));
/* 7ad69b: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 7ad69e: mov edx, dword ptr [0xb7bec0] */
  edx = R32((uint32_t)(0xb7bec0u));
/* 7ad6a4: mov eax, dword ptr [0xb7bebc] */
  eax = R32((uint32_t)(0xb7bebcu));
/* 7ad6a9: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
L_7ad6ac: /* 7ad6ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ad6af: mov eax, dword ptr [ebx + 0x38] */
  eax = R32((uint32_t)(ebx + 0x38u));
/* 7ad6b2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7ad6b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad6b5: mov ecx, edi */
  ecx = edi;
/* 7ad6b7: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7ad6bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad6ba: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ad6bd: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 7ad6c3: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 7ad6c9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7ad6cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad6cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad6cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad6cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad6d1: mov ecx, edi */
  ecx = edi;
/* 7ad6d3: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7ad6d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad6d6: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 7ad6d9: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 7ad6df: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 7ad6e5: fsub dword ptr [ebx + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x3cu)));
/* 7ad6e8: fmul dword ptr [0xa0c188] */
  ST0 = ST0 * (F32((uint32_t)(0xa0c188u)));
/* 7ad6ee: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 7ad6f4: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 7ad6f7: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7ad6fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ad6ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ad702: jp 0x7ad70d */
  if (pf) goto L_7ad70d;
L_7ad704: /* 7ad704: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7ad70b: jmp 0x7ad726 */
  goto L_7ad726;
L_7ad70d: /* 7ad70d: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 7ad713: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ad715: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7ad718: jp 0x7ad71f */
  if (pf) goto L_7ad71f;
L_7ad71a: /* 7ad71a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7ad71d: jmp 0x7ad728 */
  goto L_7ad728;
L_7ad71f: /* 7ad71f: mov dword ptr [ebp + 8], 0x3f800000 */
  W32((uint32_t)(ebp + 0x8u), 0x3f800000u);
L_7ad726: /* 7ad726: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7ad728: /* 7ad728: lea eax, [esi + 0xd0] */
  eax = (uint32_t)(esi + 0xd0u);
/* 7ad72e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad72f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad730: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7ad736: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x7ad73bu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 7ad73b: mov edi, eax */
  edi = eax;
/* 7ad73d: movzx ecx, byte ptr [ebx + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x30u)));
/* 7ad741: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ad744: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ad748: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7ad74b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 7ad74e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7ad754: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 7ad757: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 7ad75d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7ad75f: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ad764u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ad764: fild dword ptr [esi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8cu)); FPUSH(v); }
/* 7ad76a: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 7ad76c: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 7ad76f: mov eax, dword ptr [0xb7bebc] */
  eax = R32((uint32_t)(0xb7bebcu));
/* 7ad774: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7ad777: fild dword ptr [esi + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 7ad77d: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 7ad780: mov byte ptr [ebp + 9], bl */
  W8((uint32_t)(ebp + 0x9u), (ebx & 0xffu));
/* 7ad783: mov byte ptr [ebp + 0xa], bl */
  W8((uint32_t)(ebp + 0xau), (ebx & 0xffu));
/* 7ad786: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7ad789: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7ad78c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ad78f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad791: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ad794: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad797: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad798: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad79a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad79c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad79d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad79e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad7a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad7a2: mov ecx, edi */
  ecx = edi;
/* 7ad7a4: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x7ad7a9u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 7ad7a9: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7ad7af: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ad7b3: call 0x6caac4 */
  esp -= 4; W32(esp, 0x7ad7b8u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 7ad7b8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7ad7bb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7ad7bd: mov ecx, edi */
  ecx = edi;
/* 7ad7bf: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7ad7c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ad7c2: mov eax, dword ptr [0xb7beb8] */
  eax = R32((uint32_t)(0xb7beb8u));
/* 7ad7c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad7c9: jne 0x7ad855 */
  if (!zf) goto L_7ad855;
L_7ad7cf: /* 7ad7cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad7d1: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 7ad7d4: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7ad7dau); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7ad7da: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 7ad7df: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 7ad7e4: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7ad7eau); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7ad7ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ad7ec: jne 0x7ad806 */
  if (!zf) goto L_7ad806;
L_7ad7ee: /* 7ad7ee: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7ad7f3: push 0xacec80 */
  { uint32_t v = 0xacec80u; esp -= 4; W32(esp, v); }
/* 7ad7f8: push 0xacecc4 */
  { uint32_t v = 0xacecc4u; esp -= 4; W32(esp, v); }
/* 7ad7fd: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7ad803u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7ad803: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7ad806: /* 7ad806: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7ad80cu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 7ad80c: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7ad812: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ad814: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7ad817: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad81a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad81c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad81e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad820: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 7ad825: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7ad82bu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7ad82b: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7ad831: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad834: push 0xb7beb8 */
  { uint32_t v = 0xb7beb8u; esp -= 4; W32(esp, v); }
/* 7ad839: mov dword ptr [0xb7beb8], eax */
  W32((uint32_t)(0xb7beb8u), eax);
/* 7ad83e: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7ad843u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 7ad843: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ad846: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 7ad849: mov ecx, dword ptr [0xb7beb8] */
  ecx = R32((uint32_t)(0xb7beb8u));
/* 7ad84f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad850: call 0x6cccfc */
  esp -= 4; W32(esp, 0x7ad855u); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_7ad855: /* 7ad855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad856: lea eax, [esi + 0xd0] */
  eax = (uint32_t)(esi + 0xd0u);
/* 7ad85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ad85d: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7ad863: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x7ad868u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 7ad868: fild dword ptr [esi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8cu)); FPUSH(v); }
/* 7ad86e: mov edx, dword ptr [0xb7beb8] */
  edx = R32((uint32_t)(0xb7beb8u));
/* 7ad874: mov byte ptr [ebp + 0xc], bl */
  W8((uint32_t)(ebp + 0xcu), (ebx & 0xffu));
/* 7ad877: mov byte ptr [ebp + 0xd], bl */
  W8((uint32_t)(ebp + 0xdu), (ebx & 0xffu));
/* 7ad87a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7ad87d: fild dword ptr [esi + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 7ad883: mov byte ptr [ebp + 0xe], bl */
  W8((uint32_t)(ebp + 0xeu), (ebx & 0xffu));
/* 7ad886: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 7ad889: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7ad88c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ad88d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7ad890: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ad893: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad894: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ad897: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ad89c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad89d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad89e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad8a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad8a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad8a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ad8a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad8a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad8a8: mov ecx, eax */
  ecx = eax;
/* 7ad8aa: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7ad8ae: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x7ad8b3u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 7ad8b3: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 7ad8b9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ad8bd: call 0x6caac4 */
  esp -= 4; W32(esp, 0x7ad8c2u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 7ad8c2: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 7ad8c5: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 7ad8cb: mov edx, dword ptr [ecx + 0x3ac] */
  edx = R32((uint32_t)(ecx + 0x3acu));
/* 7ad8d1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ad8d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ad8d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ad8d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ad8d9: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 7ad8dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ad8e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ad8e4: mov esp, ebp */
  esp = ebp;
/* 7ad8e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ad8e7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ad8ea(void) {
  LOAD_REGS();
L_7ad8ea: /* 7ad8ea: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ad8ed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ad8f2: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ad8f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ad8f6: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7ad8f9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad8feu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ad8fe(); return;
}

void f_7ad8fe(void) {
  LOAD_REGS();
L_7ad8fe: /* 7ad8fe: push 0xa0c750 */
  { uint32_t v = 0xa0c750u; esp -= 4; W32(esp, v); }
/* 7ad903: push 0xacec70 */
  { uint32_t v = 0xacec70u; esp -= 4; W32(esp, v); }
/* 7ad908: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ad90eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ad90e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ad911: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad913: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ad915: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ad91au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ad91a: guest_badaddr(0x7ad91a); return;
}

void f_7ada40(void) {
  LOAD_REGS();
L_7ada40: /* 7ada40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ada41: mov ebp, esp */
  ebp = esp;
/* 7ada43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ada45: push 0x9cebd0 */
  { uint32_t v = 0x9cebd0u; esp -= 4; W32(esp, v); }
/* 7ada4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ada50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ada51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ada58: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ada5b: mov edx, dword ptr [ebp + 0x3c] */
  edx = R32((uint32_t)(ebp + 0x3cu));
/* 7ada5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ada5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ada60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ada61: mov edi, ecx */
  edi = ecx;
/* 7ada63: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ada66: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ada69: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ada6c: mov eax, esp */
  eax = esp;
/* 7ada6e: mov ecx, eax */
  ecx = eax;
/* 7ada70: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7ada72: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 7ada75: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7ada78: mov edx, dword ptr [ebp + 0x44] */
  edx = R32((uint32_t)(ebp + 0x44u));
/* 7ada7b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7ada7e: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 7ada81: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7ada84: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 7ada87: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7ada8a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ada8d: mov eax, esp */
  eax = esp;
/* 7ada8f: mov edx, eax */
  edx = eax;
/* 7ada91: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7ada93: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 7ada96: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7ada99: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 7ada9c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7ada9f: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 7adaa2: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7adaa5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7adaa7: mov ecx, esi */
  ecx = esi;
/* 7adaa9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7adab0: mov dword ptr [ebp + 0x48], esp */
  W32((uint32_t)(ebp + 0x48u), esp);
/* 7adab3: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7adab6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adab6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7adab8: mov ecx, esi */
  ecx = esi;
/* 7adaba: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7adabd: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7adac0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adac0: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7adac3: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7adac6: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7adac9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7adaca: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7adacd: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7adad1: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7adad4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7adad7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7adada: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7adadd: mov dword ptr [ebp + 0x48], eax */
  W32((uint32_t)(ebp + 0x48u), eax);
/* 7adae0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7adae2: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7adae6: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7adae9: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 7adaec: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7adaef: fiadd dword ptr [ebp + 8] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x8u)));
/* 7adaf2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7adaf6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7adaf9: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7adafc: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7adaff: fiadd dword ptr [ebp + 0x48] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0x48u)));
/* 7adb02: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7adb05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7adb06: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7adb09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7adb0a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7adb0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7adb0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7adb0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7adb10: mov ecx, edi */
  ecx = edi;
/* 7adb12: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7adb15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adb15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7adb18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7adb19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7adb1a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7adb21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7adb22: mov esp, ebp */
  esp = ebp;
/* 7adb24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7adb25: ret 0x44 */
  esp += 72; SPILL(); return;
}

void f_7adb28(void) {
  LOAD_REGS();
L_7adb28: /* 7adb28: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7adb2b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7adb30: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7adb33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7adb34: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7adb37: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7adb3cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7adb3c(); return;
}

void f_7adb3c(void) {
  LOAD_REGS();
L_7adb3c: /* 7adb3c: push 0xa0c78c */
  { uint32_t v = 0xa0c78cu; esp -= 4; W32(esp, v); }
/* 7adb41: push 0xacee28 */
  { uint32_t v = 0xacee28u; esp -= 4; W32(esp, v); }
/* 7adb46: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7adb4cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7adb4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7adb4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adb51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adb53: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7adb58u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7adb58: guest_badaddr(0x7adb58); return;
}

void f_7adbb0(void) {
  LOAD_REGS();
L_7adbb0: /* 7adbb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7adbb1: mov ebp, esp */
  ebp = esp;
/* 7adbb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7adbb5: push 0x9cebe0 */
  { uint32_t v = 0x9cebe0u; esp -= 4; W32(esp, v); }
/* 7adbba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7adbc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7adbc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7adbc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7adbcb: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 7adbce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7adbcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7adbd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7adbd1: mov edi, ecx */
  edi = ecx;
/* 7adbd3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7adbd6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7adbd9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7adbdc: mov eax, esp */
  eax = esp;
/* 7adbde: mov ecx, eax */
  ecx = eax;
/* 7adbe0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7adbe2: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 7adbe5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7adbe8: mov edx, dword ptr [ebp + 0x38] */
  edx = R32((uint32_t)(ebp + 0x38u));
/* 7adbeb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7adbee: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 7adbf1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7adbf4: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7adbf7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7adbfa: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7adbfd: mov eax, esp */
  eax = esp;
/* 7adbff: mov edx, eax */
  edx = eax;
/* 7adc01: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7adc03: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7adc06: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7adc09: mov ecx, dword ptr [ebp + 0x28] */
  ecx = R32((uint32_t)(ebp + 0x28u));
/* 7adc0c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7adc0f: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 7adc12: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7adc15: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7adc17: mov ecx, esi */
  ecx = esi;
/* 7adc19: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7adc20: mov dword ptr [ebp + 0x3c], esp */
  W32((uint32_t)(ebp + 0x3cu), esp);
/* 7adc23: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7adc26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adc26: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7adc28: mov ecx, esi */
  ecx = esi;
/* 7adc2a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7adc2d: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7adc30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adc30: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7adc33: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7adc36: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 7adc39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7adc3a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7adc3d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7adc40: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7adc44: mov dword ptr [ebp + 0x3c], eax */
  W32((uint32_t)(ebp + 0x3cu), eax);
/* 7adc47: fild dword ptr [ebp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 7adc4a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7adc4c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7adc4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adc51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adc53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7adc54: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7adc57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7adc58: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7adc5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7adc5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7adc5d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7adc5e: mov ecx, edi */
  ecx = edi;
/* 7adc60: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x7adc63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adc63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7adc66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7adc67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7adc68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7adc6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7adc70: mov esp, ebp */
  esp = ebp;
/* 7adc72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7adc73: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_7adc76(void) {
  LOAD_REGS();
L_7adc76: /* 7adc76: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7adc79: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7adc7e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7adc81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7adc82: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7adc85: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7adc8au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7adc8a(); return;
}

void f_7adc8a(void) {
  LOAD_REGS();
L_7adc8a: /* 7adc8a: push 0xa0c7c0 */
  { uint32_t v = 0xa0c7c0u; esp -= 4; W32(esp, v); }
/* 7adc8f: push 0xacee30 */
  { uint32_t v = 0xacee30u; esp -= 4; W32(esp, v); }
/* 7adc94: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7adc9au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7adc9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7adc9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adc9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adca1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7adca6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7adca6: guest_badaddr(0x7adca6); return;
}

void f_7adcf0(void) {
  LOAD_REGS();
L_7adcf0: /* 7adcf0: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7adcf4: xor eax, eax */
  eax = 0;
/* 7adcf6: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* 7adcf9: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
/* 7adcfc: fstp dword ptr [ecx + 0x34] */
  WF32((uint32_t)(ecx + 0x34u), ST0); FPOP();
/* 7adcff: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7add03: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
/* 7add06: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7add0a: fstp dword ptr [ecx + 0x3c] */
  WF32((uint32_t)(ecx + 0x3cu), ST0); FPOP();
/* 7add0d: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7add11: fstp dword ptr [ecx + 0x40] */
  WF32((uint32_t)(ecx + 0x40u), ST0); FPOP();
/* 7add14: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7add30(void) {
  LOAD_REGS();
L_7add30: /* 7add30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7add31: mov ebp, esp */
  ebp = esp;
/* 7add33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7add35: push 0x9cebf9 */
  { uint32_t v = 0x9cebf9u; esp -= 4; W32(esp, v); }
/* 7add3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7add40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7add41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7add48: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7add4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7add4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7add4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7add4e: mov edi, ecx */
  edi = ecx;
/* 7add50: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7add53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7add56: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7add5d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7add63u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7add63: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7add66: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7add69: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7add6c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7add6f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7add70: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7add73: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7add76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7add77: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7add7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7add7d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7add81: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7add84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7add84: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7add8a: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7add91: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 7add97: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7add9a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7add9d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7adda0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7adda1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7adda4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7adda7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7adda8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7addad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7addae: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7addb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7addb1: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7addb7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7addb9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7addbb: je 0x7addca */
  if (zf) goto L_7addca;
L_7addbd: /* 7addbd: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7addc2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7addc4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7addc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7addc7: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7addcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7addca: /* 7addca: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7addd0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7addd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7addd4: je 0x7adddb */
  if (zf) goto L_7adddb;
L_7addd6: /* 7addd6: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7addd9: jmp 0x7adde1 */
  goto L_7adde1;
L_7adddb: /* 7adddb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7addde: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_7adde1: /* 7adde1: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7adde8: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 7addee: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7addf1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7addf4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7addf7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7addf8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7addfb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7addfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7addff: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ade04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ade05: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ade08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ade08: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7ade0e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7ade10: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ade12: je 0x7ade21 */
  if (zf) goto L_7ade21;
L_7ade14: /* 7ade14: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7ade19: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7ade1b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ade1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ade1e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7ade21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ade21: /* 7ade21: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7ade27: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7ade29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ade2b: mov ebx, eax */
  ebx = eax;
/* 7ade2d: jne 0x7ade32 */
  if (!zf) goto L_7ade32;
L_7ade2f: /* 7ade2f: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
L_7ade32: /* 7ade32: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7ade35: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7ade36: mov eax, edx */
  eax = edx;
/* 7ade38: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ade3b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ade3e: jne 0x7ade56 */
  if (!zf) goto L_7ade56;
L_7ade40: /* 7ade40: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ade43: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ade44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ade46: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ade49: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7ade4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ade50: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7ade56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ade56: /* 7ade56: fld dword ptr [edi + 0x44] */
  { double v = F32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 7ade59: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ade5eu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ade5e: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 7ade61: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ade64: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ade69u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ade69: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ade6c: xor eax, eax */
  eax = 0;
/* 7ade6e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7ade71: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 7ade74: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
/* 7ade77: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ade7du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ade7d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7ade7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ade80: push 0xacf018 */
  { uint32_t v = 0xacf018u; esp -= 4; W32(esp, v); }
/* 7ade85: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7ade88: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ade89: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 7ade8c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7ade8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ade90: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ade95: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ade9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ade9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ade9c: call dword ptr [ecx + 0x7c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x7cu)); esp -= 4; W32(esp, 0x7ade9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ade9f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7adea2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7adea5: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7adea8: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 7adeab: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7adeae: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7adeb1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7adeb5: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* 7adeb8: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7adebb: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7adebd: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7adec0: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
/* 7adec2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7adec8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7adec8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7adecb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7adecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7adecd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aded4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aded5: mov esp, ebp */
  esp = ebp;
/* 7aded7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aded8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7adedb(void) {
  LOAD_REGS();
L_7adedb: /* 7adedb: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7adede: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7adee3: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7adee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7adee7: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7adeea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7adeefu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7adeef(); return;
}

void f_7adeef(void) {
  LOAD_REGS();
L_7adeef: /* 7adeef: push 0xa0c7ec */
  { uint32_t v = 0xa0c7ecu; esp -= 4; W32(esp, v); }
/* 7adef4: push 0xacf020 */
  { uint32_t v = 0xacf020u; esp -= 4; W32(esp, v); }
/* 7adef9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7adeffu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7adeff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7adf02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adf04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7adf06: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7adf0bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7adf0b: guest_badaddr(0x7adf0b); return;
}

void f_7adf90(void) {
  LOAD_REGS();
L_7adf90: /* 7adf90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7adf91: mov ebp, esp */
  ebp = esp;
/* 7adf93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7adf95: push 0x9cec10 */
  { uint32_t v = 0x9cec10u; esp -= 4; W32(esp, v); }
/* 7adf9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7adfa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7adfa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7adfa8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7adfab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7adfac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7adfad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7adfb0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7adfb3: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7adfba: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7adfbd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7adfbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7adfbf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7adfc2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7adfc5: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7adfc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7adfc9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7adfce: mov edi, ecx */
  edi = ecx;
/* 7adfd0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7adfd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7adfd4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7adfdb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7adfdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adfde: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7adfe1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7adfe4: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7adfeb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7adfee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7adfef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7adff2: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7adff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7adff6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7adffb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7adffc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7adfffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7adfff: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae002: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae005: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7ae00c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae00f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae010: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae013: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ae016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae017: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae01c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae01d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae020: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7ae023: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7ae024: mov eax, edx */
  eax = edx;
/* 7ae026: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ae029: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae02c: jne 0x7ae044 */
  if (!zf) goto L_7ae044;
L_7ae02e: /* 7ae02e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae031: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae032: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae034: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae037: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7ae03d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae03e: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7ae044u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ae044: /* 7ae044: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ae047: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ae04a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7ae04c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae04d: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 7ae050: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae051: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 7ae054: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae055: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ae058: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae05a: mov ecx, edi */
  ecx = edi;
/* 7ae05c: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x7ae062u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae062: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ae065: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ae066: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ae067: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ae06e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ae06f: mov esp, ebp */
  esp = ebp;
/* 7ae071: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ae072: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ae075(void) {
  LOAD_REGS();
L_7ae075: /* 7ae075: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ae078: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ae07d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7ae080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae081: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7ae084: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae089u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ae089(); return;
}

void f_7ae089(void) {
  LOAD_REGS();
L_7ae089: /* 7ae089: push 0xa0c81c */
  { uint32_t v = 0xa0c81cu; esp -= 4; W32(esp, v); }
/* 7ae08e: push 0xacf2a0 */
  { uint32_t v = 0xacf2a0u; esp -= 4; W32(esp, v); }
/* 7ae093: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ae099u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ae099: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ae09c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae09e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae0a0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae0a5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ae0a5: guest_badaddr(0x7ae0a5); return;
}

void f_7ae100(void) {
  LOAD_REGS();
L_7ae100: /* 7ae100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ae101: mov ebp, esp */
  ebp = esp;
/* 7ae103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ae105: push 0x9cec20 */
  { uint32_t v = 0x9cec20u; esp -= 4; W32(esp, v); }
/* 7ae10a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ae110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ae118: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ae11b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae11c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae11d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ae120: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae123: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7ae12a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae12d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae12e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ae12f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae132: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ae135: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7ae138: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae139: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae13e: mov edi, ecx */
  edi = ecx;
/* 7ae140: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae143: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae144: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ae14b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae14eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae14e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae151: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae154: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7ae15b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae15e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae15f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae162: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ae165: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae166: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae16b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae16c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae16fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae16f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae172: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae175: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7ae17c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae17f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae180: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae183: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ae186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae187: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae18c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae18d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae190u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae190: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7ae193: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7ae194: mov eax, edx */
  eax = edx;
/* 7ae196: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ae199: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae19c: jne 0x7ae1b4 */
  if (!zf) goto L_7ae1b4;
L_7ae19e: /* 7ae19e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae1a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae1a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae1a4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae1a7: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7ae1ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae1ae: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7ae1b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ae1b4: /* 7ae1b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ae1b7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ae1ba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7ae1bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae1bd: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 7ae1c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae1c1: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 7ae1c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae1c5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ae1c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae1c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae1ca: mov ecx, edi */
  ecx = edi;
/* 7ae1cc: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0x7ae1d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae1d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ae1d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ae1d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ae1d7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ae1de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ae1df: mov esp, ebp */
  esp = ebp;
/* 7ae1e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ae1e2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ae1e5(void) {
  LOAD_REGS();
L_7ae1e5: /* 7ae1e5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ae1e8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ae1ed: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7ae1f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae1f1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7ae1f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae1f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ae1f9(); return;
}

void f_7ae1f9(void) {
  LOAD_REGS();
L_7ae1f9: /* 7ae1f9: push 0xa0c868 */
  { uint32_t v = 0xa0c868u; esp -= 4; W32(esp, v); }
/* 7ae1fe: push 0xacf2ec */
  { uint32_t v = 0xacf2ecu; esp -= 4; W32(esp, v); }
/* 7ae203: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ae209u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ae209: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ae20c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae20e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae210: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae215u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ae215: guest_badaddr(0x7ae215); return;
}

void f_7ae270(void) {
  LOAD_REGS();
L_7ae270: /* 7ae270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ae271: mov ebp, esp */
  ebp = esp;
/* 7ae273: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ae275: push 0x9cec30 */
  { uint32_t v = 0x9cec30u; esp -= 4; W32(esp, v); }
/* 7ae27a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ae280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae281: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ae288: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ae28b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae28c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae28d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ae290: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae293: xor ebx, ebx */
  ebx = 0;
/* 7ae295: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ae298: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae29b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae29c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ae29d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae2a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ae2a3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7ae2a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae2a7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae2ac: mov edi, ecx */
  edi = ecx;
/* 7ae2ae: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae2b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae2b2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ae2b5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae2b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae2b8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae2bb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae2be: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 7ae2c1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae2c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae2c5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae2c8: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 7ae2cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae2cc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae2d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae2d2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae2d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae2d5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae2d8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae2db: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7ae2de: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae2e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae2e2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae2e5: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7ae2e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae2e9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae2ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae2ef: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae2f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae2f2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae2f5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae2f8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7ae2fb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae2fe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae2ff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae302: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ae305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae306: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae30b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae30c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae30fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae30f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7ae312: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7ae313: mov eax, edx */
  eax = edx;
/* 7ae315: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ae318: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae31b: jne 0x7ae332 */
  if (!zf) goto L_7ae332;
L_7ae31d: /* 7ae31d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae320: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae321: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae322: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae325: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7ae32b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae32c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7ae332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ae332: /* 7ae332: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7ae335: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ae338: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7ae33a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae33b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ae33e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae33f: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 7ae342: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae343: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 7ae346: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae347: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ae34a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae34b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae34c: mov ecx, edi */
  ecx = edi;
/* 7ae34e: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0x7ae354u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae354: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ae357: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ae358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ae359: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ae360: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ae361: mov esp, ebp */
  esp = ebp;
/* 7ae363: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ae364: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ae367(void) {
  LOAD_REGS();
L_7ae367: /* 7ae367: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ae36a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ae36f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7ae372: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae373: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ae376: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae37bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ae37b(); return;
}

void f_7ae37b(void) {
  LOAD_REGS();
L_7ae37b: /* 7ae37b: push 0xa0c8b4 */
  { uint32_t v = 0xa0c8b4u; esp -= 4; W32(esp, v); }
/* 7ae380: push 0xacf398 */
  { uint32_t v = 0xacf398u; esp -= 4; W32(esp, v); }
/* 7ae385: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ae38bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ae38b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ae38e: xor ebx, ebx */
  ebx = 0;
/* 7ae390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae391: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae392: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae397u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ae397: guest_badaddr(0x7ae397); return;
}

void f_7ae3f0(void) {
  LOAD_REGS();
L_7ae3f0: /* 7ae3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ae3f1: mov ebp, esp */
  ebp = esp;
/* 7ae3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ae3f5: push 0x9cec49 */
  { uint32_t v = 0x9cec49u; esp -= 4; W32(esp, v); }
/* 7ae3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ae400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ae408: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ae40b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae40c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae40d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ae40e: mov edi, ecx */
  edi = ecx;
/* 7ae410: xor ebx, ebx */
  ebx = 0;
/* 7ae412: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ae415: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ae418: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ae41b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7ae421u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7ae421: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ae424: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae427: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae42a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae42d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae42e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae431: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7ae434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae435: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae43a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae43b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ae43f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae442u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae442: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae445: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae448: mov byte ptr [ebp - 0x24], bl */
  W8((uint32_t)(ebp + 0xffffffdcu), (ebx & 0xffu));
/* 7ae44b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae44e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae44f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae452: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7ae455: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae456: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae45b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae45c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae45fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae45f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae462: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae465: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7ae468: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae46b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae46c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae46f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7ae472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae473: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae478: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae479: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae47cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae47c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae47f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae482: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7ae485: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae488: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae489: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae48c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7ae48f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae490: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae496: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae499u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae499: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae49c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae49f: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7ae4a2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae4a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae4a6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae4a9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7ae4ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae4ad: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae4b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae4b3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae4b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae4b6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7ae4b9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae4bc: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7ae4bf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7ae4c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae4c3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae4c6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7ae4c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae4ca: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7ae4cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae4d0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7ae4d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae4d3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7ae4d6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7ae4d7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7ae4da: mov eax, edx */
  eax = edx;
/* 7ae4dc: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae4df: jne 0x7ae4f6 */
  if (!zf) goto L_7ae4f6;
L_7ae4e1: /* 7ae4e1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7ae4e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7ae4e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae4e6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7ae4e9: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7ae4ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae4f0: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7ae4f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7ae4f6: /* 7ae4f6: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ae4f9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7ae4ffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7ae4ff: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7ae502: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7ae504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae505: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ae508: push 0xacf438 */
  { uint32_t v = 0xacf438u; esp -= 4; W32(esp, v); }
/* 7ae50d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae50e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7ae511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae512: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7ae515: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae516: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7ae519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae51a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae51b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ae51c: call dword ptr [ecx + 0xac] */
  { uint32_t t = R32((uint32_t)(ecx + 0xacu)); esp -= 4; W32(esp, 0x7ae522u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae522: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ae525: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7ae528: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7ae52b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7ae531u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7ae531: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ae534: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ae535: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ae536: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ae53d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ae53e: mov esp, ebp */
  esp = ebp;
/* 7ae540: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ae541: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7ae544(void) {
  LOAD_REGS();
L_7ae544: /* 7ae544: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7ae547: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ae54c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7ae54f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae550: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7ae553: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae558u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ae558(); return;
}

void f_7ae558(void) {
  LOAD_REGS();
L_7ae558: /* 7ae558: push 0xa0c900 */
  { uint32_t v = 0xa0c900u; esp -= 4; W32(esp, v); }
/* 7ae55d: push 0xacf440 */
  { uint32_t v = 0xacf440u; esp -= 4; W32(esp, v); }
/* 7ae562: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ae568u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ae568: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ae56b: xor ebx, ebx */
  ebx = 0;
/* 7ae56d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae56e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae56f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae574u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ae574: guest_badaddr(0x7ae574); return;
}

void f_7ae5f0(void) {
  LOAD_REGS();
L_7ae5f0: /* 7ae5f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ae5f1: mov ebp, esp */
  ebp = esp;
/* 7ae5f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ae5f5: push 0x9cec60 */
  { uint32_t v = 0x9cec60u; esp -= 4; W32(esp, v); }
/* 7ae5fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ae600: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae601: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ae608: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae609: mov eax, 0x2020 */
  eax = 0x2020u;
/* 7ae60e: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7ae613u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7ae613: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae614: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae615: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ae616: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ae619: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 7ae61c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae61d: lea ecx, [ebp - 0x2030] */
  ecx = (uint32_t)(ebp + 0xffffdfd0u);
/* 7ae623: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 7ae628: xor ebx, ebx */
  ebx = 0;
/* 7ae62a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae62b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7ae62e: call dword ptr [0xcfa7bc] */
  esp -= 4; W32(esp, 0x7ae634u); SPILL(); f_4e3693(); if (g_unwind) return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */ RELOAD();
/* 7ae634: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7ae637: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ae639: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ae63c: lea eax, [ebp - 0x2030] */
  eax = (uint32_t)(ebp + 0xffffdfd0u);
/* 7ae642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae643: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7ae646: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae647: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7ae64a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7ae64d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae64e: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ae653: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ae658: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae659: mov ecx, esi */
  ecx = esi;
/* 7ae65b: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* 7ae65e: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* 7ae661: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7ae667u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae667: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 7ae66a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7ae66d: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 7ae670: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 7ae676: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7ae677: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ae679: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7ae67b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7ae67d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ae680: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 7ae683: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae685: fisub dword ptr [ebp - 0x14] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 7ae688: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 7ae68b: je 0x7ae6a5 */
  if (zf) goto L_7ae6a5;
L_7ae68d: /* 7ae68d: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae68f: jne 0x7ae6c0 */
  if (!zf) goto L_7ae6c0;
L_7ae691: /* 7ae691: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7ae694: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7ae697: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7ae69a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7ae69c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7ae69e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7ae6a1: jne 0x7ae6aa */
  if (!zf) goto L_7ae6aa;
L_7ae6a3: /* 7ae6a3: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7ae6a5: /* 7ae6a5: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* 7ae6a8: jmp 0x7ae6d0 */
  goto L_7ae6d0;
L_7ae6aa: /* 7ae6aa: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7ae6ad: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7ae6b3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7ae6b4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7ae6b6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7ae6b8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ae6bb: fisub dword ptr [ebp - 0x14] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
/* 7ae6be: jmp 0x7ae6cd */
  goto L_7ae6cd;
L_7ae6c0: /* 7ae6c0: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae6c2: jne 0x7ae6d0 */
  if (!zf) goto L_7ae6d0;
L_7ae6c4: /* 7ae6c4: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7ae6c7: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7ae6ca: fisub dword ptr [ebp - 0x18] */
  ST0 = ST0 - ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)));
L_7ae6cd: /* 7ae6cd: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
L_7ae6d0: /* 7ae6d0: fld dword ptr [esi + 0x3c] */
  { double v = F32((uint32_t)(esi + 0x3cu)); FPUSH(v); }
/* 7ae6d3: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ae6d8u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ae6d8: fld dword ptr [esi + 0x40] */
  { double v = F32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 7ae6db: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7ae6de: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ae6e3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ae6e3: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* 7ae6e6: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7ae6e9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ae6eeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ae6ee: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* 7ae6f1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7ae6f4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ae6f9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ae6f9: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7ae6fc: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7ae6ff: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 7ae702: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7ae705: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7ae708: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7ae70b: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* 7ae70e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 7ae711: lea eax, [ebp - 0x2030] */
  eax = (uint32_t)(ebp + 0xffffdfd0u);
/* 7ae717: fstp dword ptr [esi + 0x40] */
  WF32((uint32_t)(esi + 0x40u), ST0); FPOP();
/* 7ae71a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae71b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae71c: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ae721: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7ae726: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 7ae729: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7ae72b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae72c: mov ecx, esi */
  ecx = esi;
/* 7ae72e: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x7ae734u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae734: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7ae737: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7ae73a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7ae73b: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* 7ae73e: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7ae741: fstp dword ptr [esi + 0x40] */
  WF32((uint32_t)(esi + 0x40u), ST0); FPOP();
/* 7ae744: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7ae747: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* 7ae74a: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7ae74d: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* 7ae750: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7ae751: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7ae758: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7ae759: mov esp, ebp */
  esp = ebp;
/* 7ae75b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7ae75c: ret  */
  esp += 4; SPILL(); return;
}

void f_7ae75d(void) {
  LOAD_REGS();
L_7ae75d: /* 7ae75d: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7ae760: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7ae765: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7ae768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae769: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7ae76c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae771u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7ae771(); return;
}

void f_7ae771(void) {
  LOAD_REGS();
L_7ae771: /* 7ae771: push 0xa0c94c */
  { uint32_t v = 0xa0c94cu; esp -= 4; W32(esp, v); }
/* 7ae776: push 0xacf448 */
  { uint32_t v = 0xacf448u; esp -= 4; W32(esp, v); }
/* 7ae77b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7ae781u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7ae781: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7ae784: xor ebx, ebx */
  ebx = 0;
/* 7ae786: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae787: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae788: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7ae78du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7ae78d: guest_badaddr(0x7ae78d); return;
}

void f_7ae800(void) {
  LOAD_REGS();
L_7ae800: /* 7ae800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7ae804: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae805: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7ae807: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7ae80du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7ae80d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7ae820(void) {
  LOAD_REGS();
L_7ae820: /* 7ae820: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7ae821: mov ebp, esp */
  ebp = esp;
/* 7ae823: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7ae825: push 0x9cecb9 */
  { uint32_t v = 0x9cecb9u; esp -= 4; W32(esp, v); }
/* 7ae82a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7ae830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae831: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7ae838: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7ae83e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7ae83f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7ae840: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7ae841: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7ae844: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae846: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7ae84a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7ae84b: mov ebx, ecx */
  ebx = ecx;
/* 7ae84d: mov ecx, esp */
  ecx = esp;
/* 7ae84f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7ae851: push 0xac3a38 */
  { uint32_t v = 0xac3a38u; esp -= 4; W32(esp, v); }
/* 7ae856: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7ae85d: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x7ae863u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 7ae863: mov ecx, ebx */
  ecx = ebx;
/* 7ae865: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7ae86bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7ae86b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7ae86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae86e: mov ecx, ebx */
  ecx = ebx;
/* 7ae870: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x7ae873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae873: mov esi, dword ptr [ebx + 0x98] */
  esi = R32((uint32_t)(ebx + 0x98u));
/* 7ae879: fild dword ptr [esi + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x88u)); FPUSH(v); }
/* 7ae87f: fst dword ptr [ebx + 0x3c] */
  WF32((uint32_t)(ebx + 0x3cu), ST0);
/* 7ae882: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ae887u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ae887: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* 7ae88a: fild dword ptr [esi + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x8cu)); FPUSH(v); }
/* 7ae890: fst dword ptr [ebx + 0x40] */
  WF32((uint32_t)(ebx + 0x40u), ST0);
/* 7ae893: call 0x99c958 */
  esp -= 4; W32(esp, 0x7ae898u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7ae898: mov dword ptr [ebx + 0x64], eax */
  W32((uint32_t)(ebx + 0x64u), eax);
/* 7ae89b: mov eax, dword ptr [ebx + 0x9c] */
  eax = R32((uint32_t)(ebx + 0x9cu));
/* 7ae8a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ae8a3: jne 0x7ae8e9 */
  if (!zf) goto L_7ae8e9;
L_7ae8a5: /* 7ae8a5: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7ae8aa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7ae8ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7ae8ae: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 7ae8b3: push 0xa8 */
  { uint32_t v = 0xa8u; esp -= 4; W32(esp, v); }
/* 7ae8b8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7ae8bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7ae8ba: mov ecx, eax */
  ecx = eax;
/* 7ae8bc: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ae8bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7ae8c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7ae8c5: je 0x7ae8e1 */
  if (zf) goto L_7ae8e1;
L_7ae8c7: /* 7ae8c7: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 7ae8cd: mov edx, dword ptr [eax + 0x148] */
  edx = R32((uint32_t)(eax + 0x148u));
/* 7ae8d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7ae8d4: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7ae8d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7ae8da: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x7ae8dfu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 7ae8df: jmp 0x7ae8e3 */
  goto L_7ae8e3;
L_7ae8e1: /* 7ae8e1: xor eax, eax */
  eax = 0;
L_7ae8e3: /* 7ae8e3: mov dword ptr [ebx + 0x9c], eax */
  W32((uint32_t)(ebx + 0x9cu), eax);
L_7ae8e9: /* 7ae8e9: mov eax, dword ptr [0xcfa278] */
  eax = R32((uint32_t)(0xcfa278u));
/* 7ae8ee: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7ae8f1: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 7ae8f7: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 7ae8fd: fdivr dword ptr [0xa0c9b4] */
  ST0 = (F32((uint32_t)(0xa0c9b4u))) / ST0;
/* 7ae903: fild dword ptr [eax + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 7ae909: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7ae910: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7ae917: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7ae91e: fdivr dword ptr [0xa0b130] */
  ST0 = (F32((uint32_t)(0xa0b130u))) / ST0;
/* 7ae924: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7ae92b: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7ae932: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 7ae939: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7ae940: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7ae947: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7ae94e: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 7ae955: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 7ae95c: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 7ae963: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7ae96a: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7ae971: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7ae974: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 7ae977: je 0x7aea8f */
  if (zf) goto L_7aea8f;
L_7ae97d: /* 7ae97d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7ae982: lea esi, [ebp - 0x54] */
  esi = (uint32_t)(ebp + 0xffffffacu);
/* 7ae985: lea edi, [ebp - 0xdc] */
  edi = (uint32_t)(ebp + 0xffffff24u);
/* 7ae98b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7ae98d: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7ae993: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 7ae999: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 7ae99b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7ae99e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7ae9a1: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 7ae9a3: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7ae9a6: mov dword ptr [ebp - 0x94], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x3f800000u);
/* 7ae9b0: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7ae9b6: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 7ae9c0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7ae9c3: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 7ae9cd: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 7ae9d7: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 7ae9e1: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7ae9e7: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 7ae9ee: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7ae9f5: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7ae9fc: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7ae9ff: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7aea06: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7aea0d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7aea10: mov dword ptr [ebp - 0x6c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x3f800000u);
/* 7aea17: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7aea1e: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7aea25: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 7aea2c: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aea2f: mov edi, esp */
  edi = esp;
/* 7aea31: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7aea36: lea esi, [ebp - 0x54] */
  esi = (uint32_t)(ebp + 0xffffffacu);
/* 7aea39: lea eax, [ebp - 0x11c] */
  eax = (uint32_t)(ebp + 0xfffffee4u);
/* 7aea3f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7aea41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aea42: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 7aea48: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7aea4c: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7aea52u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7aea52: mov edi, dword ptr [ebx + 0x9c] */
  edi = R32((uint32_t)(ebx + 0x9cu));
/* 7aea58: mov esi, eax */
  esi = eax;
/* 7aea5a: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7aea5d: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7aea62: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7aea64: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 7aea6a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7aea70u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7aea70: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 7aea76: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7aea7a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7aea80u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7aea80: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7aea84: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 7aea8a: jmp 0x7aeba8 */
  goto L_7aeba8;
L_7aea8f: /* 7aea8f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7aea94: lea esi, [ebp - 0x54] */
  esi = (uint32_t)(ebp + 0xffffffacu);
/* 7aea97: lea edi, [ebp - 0x11c] */
  edi = (uint32_t)(ebp + 0xfffffee4u);
/* 7aea9d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7aea9f: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 7aeaa5: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 7aeaab: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 7aeaad: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7aeab0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7aeab3: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 7aeab5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7aeab8: mov dword ptr [ebp - 0x94], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x3f800000u);
/* 7aeac2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7aeac8: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 7aead2: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 7aeadc: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 7aeae6: fsub dword ptr [0x9f7194] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7194u)));
/* 7aeaec: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 7aeaf6: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7aeaf9: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 7aeb00: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 7aeb07: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 7aeb0e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7aeb14: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 7aeb1b: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 7aeb22: mov dword ptr [ebp - 0x6c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x3f800000u);
/* 7aeb29: fsub dword ptr [0x9f7194] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7194u)));
/* 7aeb2f: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 7aeb36: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 7aeb3d: mov dword ptr [ebp - 0x58], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3f800000u);
/* 7aeb44: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 7aeb47: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 7aeb4a: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aeb4d: mov edi, esp */
  edi = esp;
/* 7aeb4f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7aeb54: lea esi, [ebp - 0x54] */
  esi = (uint32_t)(ebp + 0xffffffacu);
/* 7aeb57: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 7aeb5d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7aeb5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aeb60: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 7aeb66: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 7aeb6a: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x7aeb70u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 7aeb70: mov edi, dword ptr [ebx + 0x9c] */
  edi = R32((uint32_t)(ebx + 0x9cu));
/* 7aeb76: mov esi, eax */
  esi = eax;
/* 7aeb78: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7aeb7b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7aeb80: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7aeb82: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 7aeb88: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7aeb8eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7aeb8e: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 7aeb94: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 7aeb98: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7aeb9eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7aeb9e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7aeba2: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
L_7aeba8: /* 7aeba8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7aebaeu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7aebae: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 7aebb1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7aebb5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7aebbbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7aebbb: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 7aebc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aebc2: mov ecx, dword ptr [ebx + 0x9c] */
  ecx = R32((uint32_t)(ebx + 0x9cu));
/* 7aebc8: add ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7aebcb: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x7aebd1u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 7aebd1: mov edi, dword ptr [ebx + 0x9c] */
  edi = R32((uint32_t)(ebx + 0x9cu));
/* 7aebd7: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7aebda: mov esi, eax */
  esi = eax;
/* 7aebdc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7aebe1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7aebe3: lea ecx, [ebp - 0xdc] */
  ecx = (uint32_t)(ebp + 0xffffff24u);
/* 7aebe9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7aebefu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7aebef: mov edx, dword ptr [ebx + 0x98] */
  edx = R32((uint32_t)(ebx + 0x98u));
/* 7aebf5: mov eax, dword ptr [ebx + 0x9c] */
  eax = R32((uint32_t)(ebx + 0x9cu));
/* 7aebfb: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 7aec01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aec02: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 7aec05: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aec08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aec09: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aec10: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aec11: mov esp, ebp */
  esp = ebp;
/* 7aec13: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aec14: ret  */
  esp += 4; SPILL(); return;
}

void f_7aec15(void) {
  LOAD_REGS();
L_7aec15: /* 7aec15: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 7aec1b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aec20: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 7aec26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aec27: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 7aec2d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aec32u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aec32(); return;
}

void f_7aec32(void) {
  LOAD_REGS();
L_7aec32: /* 7aec32: push 0xa0c98c */
  { uint32_t v = 0xa0c98cu; esp -= 4; W32(esp, v); }
/* 7aec37: push 0xacf010 */
  { uint32_t v = 0xacf010u; esp -= 4; W32(esp, v); }
/* 7aec3c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aec42u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aec42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aec45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aec47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aec49: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aec4eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aec4e: guest_badaddr(0x7aec4e); return;
}

void f_7aed60(void) {
  LOAD_REGS();
L_7aed60: /* 7aed60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7aed61: mov ebp, esp */
  ebp = esp;
/* 7aed63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7aed65: push 0x9cece0 */
  { uint32_t v = 0x9cece0u; esp -= 4; W32(esp, v); }
/* 7aed6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7aed70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aed71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7aed78: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aed7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aed7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aed7d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7aed80: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7aed83: xor ebx, ebx */
  ebx = 0;
/* 7aed85: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7aed88: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7aed8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aed8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7aed8d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aed90: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7aed93: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7aed96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aed97: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7aed9c: mov edi, ecx */
  edi = ecx;
/* 7aed9e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aeda1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aeda2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7aeda5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7aeda8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aeda8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7aedab: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aedae: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7aedb1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7aedb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aedb5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aedb8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7aedbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aedbc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7aedc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aedc2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7aedc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aedc5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7aedc8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aedcb: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7aedce: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7aedd1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aedd2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aedd5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7aedd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aedd9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7aedde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aeddf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7aede2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aede2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7aede5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aede8: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7aedeb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7aedee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aedef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aedf2: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7aedf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aedf6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7aedfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aedfc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7aedffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aedff: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7aee02: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aee05: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7aee08: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7aee0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aee0c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aee0f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7aee12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aee13: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7aee18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aee19: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7aee1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aee1c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7aee1f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aee22: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 7aee25: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7aee28: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aee29: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aee2c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7aee2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aee30: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7aee35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aee36: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7aee39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aee39: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7aee3c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aee3f: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7aee42: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7aee45: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aee46: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aee49: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7aee4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aee4d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7aee52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aee53: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7aee56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aee56: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7aee59: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7aee5a: mov eax, edx */
  eax = edx;
/* 7aee5c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7aee5f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7aee62: jne 0x7aee79 */
  if (!zf) goto L_7aee79;
L_7aee64: /* 7aee64: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aee67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7aee68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aee69: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7aee6c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7aee72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aee73: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7aee79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7aee79: /* 7aee79: cmp dword ptr [ebp - 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7aee7c: jne 0x7aeea0 */
  if (!zf) goto L_7aeea0;
L_7aee7e: /* 7aee7e: push 0xacf080 */
  { uint32_t v = 0xacf080u; esp -= 4; W32(esp, v); }
/* 7aee83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7aee84: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7aee8au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7aee8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aee8d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aee90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aee97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aee98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aee99: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aee9a: mov esp, ebp */
  esp = ebp;
/* 7aee9c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aee9d: ret 8 */
  esp += 12; SPILL(); return;
L_7aeea0: /* 7aeea0: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 7aeea3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7aeea5: je 0x7aef08 */
  if (zf) goto L_7aef08;
L_7aeea7: /* 7aeea7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aeeaa: mov eax, esp */
  eax = esp;
/* 7aeeac: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* 7aeeaf: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aeeb2: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7aeeb4: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7aeeb7: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7aeeba: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7aeebd: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7aeebf: mov eax, esp */
  eax = esp;
/* 7aeec1: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* 7aeec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aeec5: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 7aeec8: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7aeecdu); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7aeecd: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 7aeed0: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 7aeed3: fadd dword ptr [edi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x38u)));
/* 7aeed6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7aeed9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7aeedc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aeedd: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7aeee0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aeee1: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7aeee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aeee5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7aeee8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aeee9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7aeeec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aeeed: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7aeef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aeef1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aeef2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aeef5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7aeef9: mov ecx, edi */
  ecx = edi;
/* 7aeefb: fld dword ptr [edi + 0x44] */
  { double v = F32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 7aeefe: fadd dword ptr [edi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x34u)));
/* 7aef01: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7aef04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aef05: call dword ptr [esi + 0x70] */
  { uint32_t t = R32((uint32_t)(esi + 0x70u)); esp -= 4; W32(esp, 0x7aef08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7aef08: /* 7aef08: fld dword ptr [edi + 0x2c] */
  { double v = F32((uint32_t)(edi + 0x2cu)); FPUSH(v); }
/* 7aef0b: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7aef0e: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7aef11: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* 7aef14: fld dword ptr [edi + 0x54] */
  { double v = F32((uint32_t)(edi + 0x54u)); FPUSH(v); }
/* 7aef17: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 7aef1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7aef1c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7aef1f: je 0x7aef26 */
  if (zf) goto L_7aef26;
L_7aef21: /* 7aef21: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7aef23: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7aef26: /* 7aef26: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aef29: fstp dword ptr [edi + 0x54] */
  WF32((uint32_t)(edi + 0x54u), ST0); FPOP();
/* 7aef2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aef2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aef2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aef35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aef36: mov esp, ebp */
  esp = ebp;
/* 7aef38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aef39: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7aef3c(void) {
  LOAD_REGS();
L_7aef3c: /* 7aef3c: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7aef3f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aef44: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7aef47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aef48: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7aef4b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aef50u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aef50(); return;
}

void f_7aef50(void) {
  LOAD_REGS();
L_7aef50: /* 7aef50: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7aef56: push 0xa0c9b8 */
  { uint32_t v = 0xa0c9b8u; esp -= 4; W32(esp, v); }
/* 7aef5b: push 0xacf0b8 */
  { uint32_t v = 0xacf0b8u; esp -= 4; W32(esp, v); }
/* 7aef60: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aef62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aef62: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7aef65: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7aef68: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7aef6b: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7aef6e: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7aef74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aef77: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7aef79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aef7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aef7c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7aef7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aef7e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7aef81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aef82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aef84: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7aef86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aef86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aef87: push 0xacf0c0 */
  { uint32_t v = 0xacf0c0u; esp -= 4; W32(esp, v); }
/* 7aef8c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7aef8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aef8e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aef91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aef93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7aef95: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aef9au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aef9a: guest_badaddr(0x7aef9a); return;
}

void f_7af030(void) {
  LOAD_REGS();
L_7af030: /* 7af030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7af031: mov ebp, esp */
  ebp = esp;
/* 7af033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7af035: push 0x9cecf0 */
  { uint32_t v = 0x9cecf0u; esp -= 4; W32(esp, v); }
/* 7af03a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7af040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7af048: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af04b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af04c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af04d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7af050: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af053: xor ebx, ebx */
  ebx = 0;
/* 7af055: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7af058: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af05b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af05c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7af05d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af060: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7af063: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7af066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af067: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af06c: mov edi, ecx */
  edi = ecx;
/* 7af06e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af072: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7af075: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af078u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af078: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af07b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af07e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7af081: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af084: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af085: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af088: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7af08b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af08c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af092: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af095: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af098: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af09b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7af09e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af0a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af0a2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af0a5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7af0a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af0a9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af0ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af0af: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af0b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af0b2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af0b5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af0b8: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7af0bb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af0be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af0bf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af0c2: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7af0c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af0c6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af0cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af0cc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af0cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af0cf: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af0d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af0d5: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 7af0d8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af0db: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af0dc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af0df: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7af0e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af0e3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af0e9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af0ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af0ec: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af0ef: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af0f2: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7af0f5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af0f8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af0f9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af0fc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7af0ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af100: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af105: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af106: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af109u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af109: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af10c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af10f: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7af112: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af115: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af116: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af119: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7af11c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af11d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af122: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af123: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af126u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af126: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7af129: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7af12a: mov eax, edx */
  eax = edx;
/* 7af12c: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7af12f: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7af132: jne 0x7af149 */
  if (!zf) goto L_7af149;
L_7af134: /* 7af134: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af137: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af138: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af139: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af13c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7af142: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af143: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7af149u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7af149: /* 7af149: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7af14c: jne 0x7af170 */
  if (!zf) goto L_7af170;
L_7af14e: /* 7af14e: push 0xacf120 */
  { uint32_t v = 0xacf120u; esp -= 4; W32(esp, v); }
/* 7af153: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af154: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7af15au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7af15a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7af15d: /* 7af15d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7af160: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7af167: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7af168: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7af169: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7af16a: mov esp, ebp */
  esp = ebp;
/* 7af16c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7af16d: ret 8 */
  esp += 12; SPILL(); return;
L_7af170: /* 7af170: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7af173: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7af179: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7af17b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7af17e: jne 0x7af15d */
  if (!zf) goto L_7af15d;
L_7af180: /* 7af180: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7af183: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7af189: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7af18b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7af18e: jne 0x7af15d */
  if (!zf) goto L_7af15d;
L_7af190: /* 7af190: fld dword ptr [edi + 0x44] */
  { double v = F32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 7af193: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7af199: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7af19b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7af19e: jp 0x7af1c3 */
  if (pf) goto L_7af1c3;
L_7af1a0: /* 7af1a0: fld dword ptr [edi + 0x44] */
  { double v = F32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 7af1a3: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7af1a6: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7af1a9: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7af1ac: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7af1ae: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7af1b1: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7af1b4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7af1b7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7af1ba: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7af1bd: mov dword ptr [edi + 0x44], ebx */
  W32((uint32_t)(edi + 0x44u), ebx);
/* 7af1c0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_7af1c3: /* 7af1c3: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 7af1c6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7af1cc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7af1ce: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7af1d1: jp 0x7af1f6 */
  if (pf) goto L_7af1f6;
L_7af1d3: /* 7af1d3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7af1d6: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7af1d9: fmul dword ptr [edi + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x48u)));
/* 7af1dc: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7af1df: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7af1e1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7af1e4: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7af1e7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7af1ea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7af1ed: fadd dword ptr [edi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x48u)));
/* 7af1f0: mov dword ptr [edi + 0x48], ebx */
  W32((uint32_t)(edi + 0x48u), ebx);
/* 7af1f3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_7af1f6: /* 7af1f6: fld dword ptr [edi + 0x3c] */
  { double v = F32((uint32_t)(edi + 0x3cu)); FPUSH(v); }
/* 7af1f9: fsub dword ptr [edi + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x44u)));
/* 7af1fc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7af1ff: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7af201: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7af203: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7af206: jne 0x7af221 */
  if (!zf) goto L_7af221;
L_7af208: /* 7af208: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7af20b: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 7af20d: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7af210: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7af216: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7af219: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7af21c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7af21f: jmp 0x7af223 */
  goto L_7af223;
L_7af221: /* 7af221: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7af223: /* 7af223: fld dword ptr [edi + 0x40] */
  { double v = F32((uint32_t)(edi + 0x40u)); FPUSH(v); }
/* 7af226: fsub dword ptr [edi + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x48u)));
/* 7af229: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7af22c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7af22e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7af230: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7af233: jne 0x7af24e */
  if (!zf) goto L_7af24e;
L_7af235: /* 7af235: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7af238: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 7af23a: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7af23d: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 7af243: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7af246: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7af249: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7af24c: jmp 0x7af250 */
  goto L_7af250;
L_7af24e: /* 7af24e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7af250: /* 7af250: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 7af253: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7af255: je 0x7af2b8 */
  if (zf) goto L_7af2b8;
L_7af257: /* 7af257: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af25a: mov eax, esp */
  eax = esp;
/* 7af25c: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* 7af25f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af262: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7af264: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7af267: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7af26a: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7af26d: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 7af26f: mov eax, esp */
  eax = esp;
/* 7af271: mov dword ptr [ebp - 0x34], esp */
  W32((uint32_t)(ebp + 0xffffffccu), esp);
/* 7af274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af275: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 7af278: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7af27du); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7af27d: fld dword ptr [edi + 0x38] */
  { double v = F32((uint32_t)(edi + 0x38u)); FPUSH(v); }
/* 7af280: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 7af283: fadd dword ptr [edi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x48u)));
/* 7af286: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7af289: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7af28c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af28d: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7af290: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af291: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7af294: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af295: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7af298: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af299: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7af29c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af29d: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7af2a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af2a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af2a2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af2a5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7af2a9: mov ecx, edi */
  ecx = edi;
/* 7af2ab: fld dword ptr [edi + 0x34] */
  { double v = F32((uint32_t)(edi + 0x34u)); FPUSH(v); }
/* 7af2ae: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7af2b1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7af2b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af2b5: call dword ptr [esi + 0x70] */
  { uint32_t t = R32((uint32_t)(esi + 0x70u)); esp -= 4; W32(esp, 0x7af2b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7af2b8: /* 7af2b8: fld dword ptr [edi + 0x2c] */
  { double v = F32((uint32_t)(edi + 0x2cu)); FPUSH(v); }
/* 7af2bb: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7af2be: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7af2c1: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* 7af2c4: fld dword ptr [edi + 0x54] */
  { double v = F32((uint32_t)(edi + 0x54u)); FPUSH(v); }
/* 7af2c7: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 7af2ca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7af2cc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7af2cf: je 0x7af2d6 */
  if (zf) goto L_7af2d6;
L_7af2d1: /* 7af2d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7af2d3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_7af2d6: /* 7af2d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7af2d9: fstp dword ptr [edi + 0x54] */
  WF32((uint32_t)(edi + 0x54u), ST0); FPOP();
/* 7af2dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7af2dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7af2de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7af2e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7af2e6: mov esp, ebp */
  esp = ebp;
/* 7af2e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7af2e9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7af2ec(void) {
  LOAD_REGS();
L_7af2ec: /* 7af2ec: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7af2ef: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7af2f4: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7af2f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af2f8: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7af2fb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7af300u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7af300(); return;
}

void f_7af300(void) {
  LOAD_REGS();
L_7af300: /* 7af300: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7af306: push 0xa0c9ec */
  { uint32_t v = 0xa0c9ecu; esp -= 4; W32(esp, v); }
/* 7af30b: push 0xacf164 */
  { uint32_t v = 0xacf164u; esp -= 4; W32(esp, v); }
/* 7af310: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7af312u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af312: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7af315: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7af318: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7af31b: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7af31e: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7af324: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7af327: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7af329: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af32a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af32c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7af32eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af32e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af331: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af332: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af334: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7af336u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af337: push 0xacf16c */
  { uint32_t v = 0xacf16cu; esp -= 4; W32(esp, v); }
/* 7af33c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7af33eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af33e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7af341: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af343: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af345: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7af34au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7af34a: guest_badaddr(0x7af34a); return;
}

void f_7af420(void) {
  LOAD_REGS();
L_7af420: /* 7af420: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7af421: mov ebp, esp */
  ebp = esp;
/* 7af423: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7af425: push 0x9ced09 */
  { uint32_t v = 0x9ced09u; esp -= 4; W32(esp, v); }
/* 7af42a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7af430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af431: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7af438: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af43b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af43c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af43d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7af43e: mov ebx, ecx */
  ebx = ecx;
/* 7af440: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7af443: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7af446: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7af44d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7af453u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7af453: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7af456: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af459: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af45c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af45f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af460: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af463: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 7af466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af467: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af46c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af46d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7af471: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af474u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af474: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7af47a: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7af481: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 7af487: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af48a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af48d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af490: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af491: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af494: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7af497: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af498: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af49d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af49e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af4a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af4a1: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7af4a7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7af4a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7af4ab: je 0x7af4ba */
  if (zf) goto L_7af4ba;
L_7af4ad: /* 7af4ad: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7af4b2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7af4b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7af4b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af4b7: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7af4bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7af4ba: /* 7af4ba: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7af4c0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7af4c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7af4c4: je 0x7af4cb */
  if (zf) goto L_7af4cb;
L_7af4c6: /* 7af4c6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7af4c9: jmp 0x7af4d1 */
  goto L_7af4d1;
L_7af4cb: /* 7af4cb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7af4ce: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_7af4d1: /* 7af4d1: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 7af4d8: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 7af4de: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af4e1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af4e4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af4e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af4e8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af4eb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7af4ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af4ef: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af4f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af4f5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af4f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af4f8: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7af4fe: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7af500: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7af502: je 0x7af511 */
  if (zf) goto L_7af511;
L_7af504: /* 7af504: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7af509: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7af50b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7af50d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af50e: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7af511u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7af511: /* 7af511: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7af517: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7af519: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7af51b: mov edi, eax */
  edi = eax;
/* 7af51d: jne 0x7af522 */
  if (!zf) goto L_7af522;
L_7af51f: /* 7af51f: lea edi, [ebp - 0x18] */
  edi = (uint32_t)(ebp + 0xffffffe8u);
L_7af522: /* 7af522: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7af525: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7af526: mov eax, edx */
  eax = edx;
/* 7af528: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7af52b: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7af52e: jne 0x7af546 */
  if (!zf) goto L_7af546;
L_7af530: /* 7af530: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af533: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af534: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af536: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af539: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7af53f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af540: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7af546u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7af546: /* 7af546: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 7af549: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7af54b: jne 0x7af57c */
  if (!zf) goto L_7af57c;
L_7af54d: /* 7af54d: push 0xacf210 */
  { uint32_t v = 0xacf210u; esp -= 4; W32(esp, v); }
/* 7af552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af553: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7af559u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7af559: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7af55c: /* 7af55c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7af55f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7af563: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7af569u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7af569: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7af56c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7af56d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7af56e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7af575: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7af576: mov esp, ebp */
  esp = ebp;
/* 7af578: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7af579: ret 8 */
  esp += 12; SPILL(); return;
L_7af57c: /* 7af57c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7af57f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7af585u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7af585: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7af587: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af588: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7af58b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af58c: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 7af58f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7af592: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af593: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7af598: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7af59d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af59e: mov ecx, ebx */
  ecx = ebx;
/* 7af5a0: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x7af5a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af5a6: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7af5a9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7af5ac: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7af5ae: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7af5b1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7af5b3: jmp 0x7af55c */
  goto L_7af55c;
}

void f_7af5b5(void) {
  LOAD_REGS();
L_7af5b5: /* 7af5b5: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7af5b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7af5bd: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7af5c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af5c1: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7af5c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7af5c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7af5c9(); return;
}

void f_7af5c9(void) {
  LOAD_REGS();
L_7af5c9: /* 7af5c9: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7af5cf: push 0xa0ca34 */
  { uint32_t v = 0xa0ca34u; esp -= 4; W32(esp, v); }
/* 7af5d4: push 0xacf234 */
  { uint32_t v = 0xacf234u; esp -= 4; W32(esp, v); }
/* 7af5d9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7af5dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af5db: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7af5de: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7af5e1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7af5e4: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7af5e7: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7af5ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7af5f0: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7af5f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af5f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af5f5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7af5f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af5f7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af5fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af5fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af5fd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7af5ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af5ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af600: push 0xacf23c */
  { uint32_t v = 0xacf23cu; esp -= 4; W32(esp, v); }
/* 7af605: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7af607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af607: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7af60a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af60c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7af60e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7af613u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7af613: guest_badaddr(0x7af613); return;
}

void f_7af6a0(void) {
  LOAD_REGS();
L_7af6a0: /* 7af6a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7af6a1: mov ebp, esp */
  ebp = esp;
/* 7af6a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7af6a5: push 0x9ced36 */
  { uint32_t v = 0x9ced36u; esp -= 4; W32(esp, v); }
/* 7af6aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7af6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af6b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7af6b8: sub esp, 0x2d4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2d4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af6be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af6bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af6c0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7af6c3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af6c6: xor ebx, ebx */
  ebx = 0;
/* 7af6c8: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7af6cb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af6ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af6cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7af6d0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af6d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7af6d6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7af6d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af6da: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af6df: mov edi, ecx */
  edi = ecx;
/* 7af6e1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af6e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af6e5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7af6e8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af6ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af6eb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af6ee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af6f1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 7af6f4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af6f7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af6f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af6fb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7af6fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af6ff: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af704: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af705: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af708: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af70b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af70e: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7af711: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af714: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af715: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af718: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7af71b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af71c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af722: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af725: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af728: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af72b: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7af72e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af731: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af732: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af735: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7af738: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af739: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af73f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af742u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af742: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af745: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af748: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 7af74b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af74e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af74f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af752: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7af755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af756: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af75b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af75c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af75fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af75f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af762: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af765: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af768: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af769: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af76c: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 7af76f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af770: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af775: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af776: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af779: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7af77c: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7af782u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7af782: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af785: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af788: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af78b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af78c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af78f: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7af792: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af793: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af799: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af79cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af79c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af79f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af7a2: mov dword ptr [ebp - 0x24], 0x5a */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5au);
/* 7af7a9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af7ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af7ad: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af7b0: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7af7b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af7b4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af7b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af7ba: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af7bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af7bd: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7af7c0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af7c3: mov dword ptr [ebp - 0x30], 1 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x1u);
/* 7af7ca: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7af7cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af7ce: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af7d1: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7af7d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af7d5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7af7da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af7db: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7af7deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af7de: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7af7e1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7af7e2: mov eax, edx */
  eax = edx;
/* 7af7e4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7af7e7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7af7ea: jne 0x7af801 */
  if (!zf) goto L_7af801;
L_7af7ec: /* 7af7ec: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af7ef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7af7f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af7f1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7af7f4: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7af7fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7af7fb: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7af801u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7af801: /* 7af801: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 7af807: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* 7af80d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7af80f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7af811u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af811: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 7af817: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7af81a: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7af820: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* 7af826: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af827: add eax, 0xd0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7af82c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af82d: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 7af833: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 7af836: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x7af83bu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 7af83b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7af83e: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 7af841: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 7af844: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 7af847: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 7af84b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7af84e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af84f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7af852: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af853: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7af858: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af859: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7af85b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7af85e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af85f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7af862: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7af865: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7af868: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af869: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af86a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af86d: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7af871: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7af873: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7af876: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7af879: mov ecx, eax */
  ecx = eax;
/* 7af87b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7af87f: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7af883: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7af886: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7af88a: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7af88d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7af890: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x7af895u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 7af895: lea ecx, [ebp - 0xfc] */
  ecx = (uint32_t)(ebp + 0xffffff04u);
/* 7af89b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7af89e: call 0x6caac4 */
  esp -= 4; W32(esp, 0x7af8a3u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 7af8a3: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 7af8a9: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* 7af8af: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7af8b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7af8b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af8b5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7af8b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af8b9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7af8bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af8bd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7af8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af8c1: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7af8c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af8c4: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7af8c7: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7af8ca: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 7af8d0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af8d3: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 7af8d7: mov ecx, esp */
  ecx = esp;
/* 7af8d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7af8db: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 7af8de: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7af8e1: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7af8e4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7af8e7: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7af8ea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7af8ed: mov ecx, esp */
  ecx = esp;
/* 7af8ef: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7af8f1: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7af8f4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7af8f7: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7af8fa: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7af8fd: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7af900: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af901: lea edx, [eax + 0xd0] */
  edx = (uint32_t)(eax + 0xd0u);
/* 7af907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af908: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af909: lea ecx, [ebp - 0x2e0] */
  ecx = (uint32_t)(ebp + 0xfffffd20u);
/* 7af90f: call 0x6cb2cb */
  esp -= 4; W32(esp, 0x7af914u); SPILL(); f_6cb2cb(); if (g_unwind) return; RELOAD();
/* 7af914: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7af917: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 7af91d: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7af920: fstp dword ptr [ecx + 0x348] */
  WF32((uint32_t)(ecx + 0x348u), ST0); FPOP();
/* 7af926: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 7af92c: mov eax, dword ptr [edx + 0x148] */
  eax = R32((uint32_t)(edx + 0x148u));
/* 7af932: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af933: lea ecx, [ebp - 0x2e0] */
  ecx = (uint32_t)(ebp + 0xfffffd20u);
/* 7af939: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7af93d: call 0x6c623a */
  esp -= 4; W32(esp, 0x7af942u); SPILL(); f_6c623a(); if (g_unwind) return; RELOAD();
/* 7af942: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 7af948: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7af94b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7af94e: mov dword ptr [edx + 0x348], eax */
  W32((uint32_t)(edx + 0x348u), eax);
/* 7af954: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 7af95a: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7af960: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7af962: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x7af965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af965: lea ecx, [ebp - 0x2e0] */
  ecx = (uint32_t)(ebp + 0xfffffd20u);
/* 7af96b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7af96e: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7af973u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 7af973: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7af976: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7af977: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7af978: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7af97f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7af980: mov esp, ebp */
  esp = ebp;
/* 7af982: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7af983: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7af986(void) {
  LOAD_REGS();
L_7af986: /* 7af986: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 7af989: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7af98e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7af991: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7af992: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7af995: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7af99au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7af99a(); return;
}

void f_7af99a(void) {
  LOAD_REGS();
L_7af99a: /* 7af99a: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7af9a0: push 0xa0ca68 */
  { uint32_t v = 0xa0ca68u; esp -= 4; W32(esp, v); }
/* 7af9a5: push 0xacf264 */
  { uint32_t v = 0xacf264u; esp -= 4; W32(esp, v); }
/* 7af9aa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7af9acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af9ac: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7af9af: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7af9b2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7af9b5: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7af9b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7af9bb: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7af9bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7af9be: xor ebx, ebx */
  ebx = 0;
/* 7af9c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af9c1: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7af9c7u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7af9c7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7af9ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af9cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af9cc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x7af9d2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 7af9d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7af9d3: push 0xacf26c */
  { uint32_t v = 0xacf26cu; esp -= 4; W32(esp, v); }
/* 7af9d8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7af9dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7af9da: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7af9dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af9de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7af9df: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7af9e4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7af9e4: guest_badaddr(0x7af9e4); return;
}

void f_7afad0(void) {
  LOAD_REGS();
L_7afad0: /* 7afad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7afad1: mov ebp, esp */
  ebp = esp;
/* 7afad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7afad5: push 0x9ced50 */
  { uint32_t v = 0x9ced50u; esp -= 4; W32(esp, v); }
/* 7afada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7afae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7afae8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afaeb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7afaee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afaef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7afaf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7afaf1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7afaf4: mov esi, ecx */
  esi = ecx;
/* 7afaf6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7afaf9: xor ebx, ebx */
  ebx = 0;
/* 7afafb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7afafd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7afb00: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7afb03: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 7afb06: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 7afb09: jne 0x7afb35 */
  if (!zf) goto L_7afb35;
L_7afb0b: /* 7afb0b: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7afb11: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7afb13: push 0xacf2ac */
  { uint32_t v = 0xacf2acu; esp -= 4; W32(esp, v); }
/* 7afb18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afb19: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7afb1fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7afb1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7afb22: /* 7afb22: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7afb25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7afb2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7afb2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7afb2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7afb2f: mov esp, ebp */
  esp = ebp;
/* 7afb31: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7afb32: ret 0x14 */
  esp += 24; SPILL(); return;
L_7afb35: /* 7afb35: cmp byte ptr [esi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7afb38: je 0x7afb22 */
  if (zf) goto L_7afb22;
L_7afb3a: /* 7afb3a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7afb3c: mov ecx, edi */
  ecx = edi;
/* 7afb3e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7afb41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afb41: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7afb44: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7afb47: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7afb49: mov ecx, edi */
  ecx = edi;
/* 7afb4b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7afb4e: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7afb51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afb51: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 7afb57: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7afb5a: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7afb5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afb5e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7afb61: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7afb64: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7afb6a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afb6d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7afb6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afb6f: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7afb72: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7afb75: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7afb78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afb79: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7afb7c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7afb7f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7afb85: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afb88: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7afb8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afb8a: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7afb8d: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7afb90: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7afb93: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7afb96: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7afb99: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7afb9c: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7afb9f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7afba2: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7afba5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7afba8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7afbab: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 7afbae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7afbb0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7afbb3: jp 0x7afc98 */
  if (pf) goto L_7afc98;
L_7afbb9: /* 7afbb9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7afbbc: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7afbbf: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7afbc2: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 7afbc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7afbc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7afbca: jne 0x7afbda */
  if (!zf) goto L_7afbda;
L_7afbcc: /* 7afbcc: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7afbcf: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7afbd5: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7afbd8: jmp 0x7afbe0 */
  goto L_7afbe0;
L_7afbda: /* 7afbda: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7afbdd: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
L_7afbe0: /* 7afbe0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afbe3: mov eax, esp */
  eax = esp;
/* 7afbe5: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afbe8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afbeb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afbed: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afbf0: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afbf3: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afbf6: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afbf8: mov eax, esp */
  eax = esp;
/* 7afbfa: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afbfd: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afc00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afc01: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afc06u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afc06: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7afc09: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7afc0c: fadd dword ptr [esi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x44u)));
/* 7afc0f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7afc12: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7afc15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afc16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afc17: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7afc1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afc1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afc1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afc1f: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 7afc22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afc23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afc24: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afc25: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7afc28: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afc2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afc2c: mov ecx, esi */
  ecx = esi;
/* 7afc2e: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afc31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afc31: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afc34: mov eax, esp */
  eax = esp;
/* 7afc36: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afc39: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afc3c: mov edx, esp */
  edx = esp;
/* 7afc3e: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afc41: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afc43: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afc46: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afc49: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afc4c: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afc4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afc4f: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afc52: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afc57u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afc57: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7afc5a: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7afc5d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7afc60: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7afc63: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afc64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afc65: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7afc6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afc6b: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7afc6e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afc71: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7afc74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afc75: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* 7afc78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afc79: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7afc7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afc7d: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7afc80: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afc83: mov ecx, esi */
  ecx = esi;
/* 7afc85: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7afc89: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7afc8c: fadd dword ptr [esi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x44u)));
/* 7afc8f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afc92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afc93: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afc96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afc96: jmp 0x7afca4 */
  goto L_7afca4;
L_7afc98: /* 7afc98: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7afc9b: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7afca1: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
L_7afca4: /* 7afca4: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7afca7: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7afcaa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7afcac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7afcaf: jp 0x7afd73 */
  if (pf) goto L_7afd73;
L_7afcb5: /* 7afcb5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7afcb8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afcbb: mov eax, esp */
  eax = esp;
/* 7afcbd: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afcc0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afcc3: mov edx, esp */
  edx = esp;
/* 7afcc5: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 7afcc8: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afccb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afccd: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afcd0: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afcd3: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afcd6: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afcd8: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afcdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afcdc: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afce1u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afce1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7afce4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7afce7: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* 7afcea: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7afced: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7afcf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afcf1: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7afcf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afcf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afcf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afcf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afcfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afcfb: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 7afcfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afcff: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7afd02: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afd05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afd06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afd07: mov ecx, esi */
  ecx = esi;
/* 7afd09: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afd0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afd0c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afd0f: mov eax, esp */
  eax = esp;
/* 7afd11: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afd14: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afd17: mov edx, esp */
  edx = esp;
/* 7afd19: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afd1c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afd1e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afd21: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afd24: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afd27: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afd29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afd2a: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afd2d: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afd32u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afd32: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7afd35: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7afd38: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7afd3b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7afd3e: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7afd41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afd42: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7afd47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afd48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afd49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afd4a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afd4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afd4e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7afd51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afd52: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* 7afd55: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7afd58: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afd5b: mov ecx, esi */
  ecx = esi;
/* 7afd5d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7afd61: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7afd64: fadd dword ptr [esi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x44u)));
/* 7afd67: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7afd6a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afd6e: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afd71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afd71: jmp 0x7afd7f */
  goto L_7afd7f;
L_7afd73: /* 7afd73: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7afd76: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7afd7c: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
L_7afd7f: /* 7afd7f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7afd82: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7afd85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7afd87: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7afd8a: jp 0x7afdf9 */
  if (pf) goto L_7afdf9;
L_7afd8c: /* 7afd8c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7afd8f: fcomp dword ptr [ebp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x14u)));
  FPOP();
/* 7afd92: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7afd94: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7afd97: jp 0x7afdf9 */
  if (pf) goto L_7afdf9;
L_7afd99: /* 7afd99: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afd9c: mov eax, esp */
  eax = esp;
/* 7afd9e: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afda1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afda4: mov ecx, esp */
  ecx = esp;
/* 7afda6: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afda9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afdaa: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afdac: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afdaf: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afdb2: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afdb5: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afdb7: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afdba: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afdbfu); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afdbf: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7afdc2: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7afdc5: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* 7afdc8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7afdcb: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7afdce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afdcf: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7afdd4: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7afdd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afdda: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7afddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afdde: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7afde1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afde2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afde3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afde6: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7afdea: mov ecx, esi */
  ecx = esi;
/* 7afdec: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7afdef: fadd dword ptr [esi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x44u)));
/* 7afdf2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afdf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afdf6: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afdf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7afdf9: /* 7afdf9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afdfc: mov eax, esp */
  eax = esp;
/* 7afdfe: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afe01: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afe04: mov edx, esp */
  edx = esp;
/* 7afe06: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afe09: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afe0b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afe0e: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afe11: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afe14: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afe16: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afe19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afe1a: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afe1fu); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afe1f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7afe22: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7afe25: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7afe28: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afe29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afe2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afe2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afe2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afe2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afe2e: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 7afe31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afe32: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 7afe35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afe36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afe37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afe38: mov ecx, esi */
  ecx = esi;
/* 7afe3a: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afe3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afe3d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7afe40: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7afe43: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afe46: mov eax, esp */
  eax = esp;
/* 7afe48: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afe4b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afe4e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7afe51: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afe53: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afe56: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afe59: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afe5c: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afe5e: mov eax, esp */
  eax = esp;
/* 7afe60: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afe63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afe64: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afe67: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afe6cu); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afe6c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7afe6f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7afe72: fadd dword ptr [esi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x44u)));
/* 7afe75: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7afe78: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7afe7b: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7afe7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afe7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afe80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afe81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afe82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afe83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afe84: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 7afe87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afe88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afe89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afe8a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7afe8d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afe90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afe91: mov ecx, esi */
  ecx = esi;
/* 7afe93: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afe96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afe96: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7afe99: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7afe9c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afe9f: mov eax, esp */
  eax = esp;
/* 7afea1: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afea4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7afea6: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7afea9: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7afeac: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7afeaf: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7afeb2: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7afeb4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afeb7: mov edx, esp */
  edx = esp;
/* 7afeb9: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afebc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afebd: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7afec0: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7afec5u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7afec5: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7afec8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7afecb: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* 7afece: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7afed1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7afed4: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7afed7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afed8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afed9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afeda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7afedb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7afedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afedd: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 7afee0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afee1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afee2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7afee5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7afee8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7afee9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7afeea: mov ecx, esi */
  ecx = esi;
/* 7afeec: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7afeefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7afeef: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afef2: mov eax, esp */
  eax = esp;
/* 7afef4: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afef7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7afefa: mov edx, esp */
  edx = esp;
/* 7afefc: mov dword ptr [ebp - 0x30], esp */
  W32((uint32_t)(ebp + 0xffffffd0u), esp);
/* 7afeff: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7aff01: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7aff04: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7aff07: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7aff0a: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7aff0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aff0d: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7aff10: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7aff15u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7aff15: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7aff18: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7aff1b: fadd dword ptr [esi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x48u)));
/* 7aff1e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7aff21: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7aff24: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 7aff27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aff28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aff29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aff2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aff2b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7aff2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aff2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aff30: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7aff33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7aff34: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7aff37: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7aff3b: mov ecx, esi */
  ecx = esi;
/* 7aff3d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7aff40: fadd dword ptr [esi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x44u)));
/* 7aff43: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 7aff46: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7aff49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7aff4a: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7aff4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7aff4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7aff50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7aff51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7aff52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7aff59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7aff5a: mov esp, ebp */
  esp = ebp;
/* 7aff5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7aff5d: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7aff60(void) {
  LOAD_REGS();
L_7aff60: /* 7aff60: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7aff63: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7aff68: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7aff6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7aff6c: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7aff6f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aff74u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7aff74(); return;
}

void f_7aff74(void) {
  LOAD_REGS();
L_7aff74: /* 7aff74: push 0xa0caa4 */
  { uint32_t v = 0xa0caa4u; esp -= 4; W32(esp, v); }
/* 7aff79: push 0xacf2e4 */
  { uint32_t v = 0xacf2e4u; esp -= 4; W32(esp, v); }
/* 7aff7e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7aff84u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7aff84: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7aff87: xor ebx, ebx */
  ebx = 0;
/* 7aff89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aff8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7aff8b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7aff90u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7aff90: guest_badaddr(0x7aff90); return;
}

void f_7b00e0(void) {
  LOAD_REGS();
L_7b00e0: /* 7b00e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b00e1: mov ebp, esp */
  ebp = esp;
/* 7b00e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b00e5: push 0x9ced60 */
  { uint32_t v = 0x9ced60u; esp -= 4; W32(esp, v); }
/* 7b00ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b00f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b00f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b00f8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b00fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b00fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b00ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0100: xor ebx, ebx */
  ebx = 0;
/* 7b0102: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0104: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b0105: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b0108: mov esi, ecx */
  esi = ecx;
/* 7b010a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b010d: jne 0x7b0125 */
  if (!zf) goto L_7b0125;
L_7b010f: /* 7b010f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b0114: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b0116: push 0xacf2f8 */
  { uint32_t v = 0xacf2f8u; esp -= 4; W32(esp, v); }
/* 7b011b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b011c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b0122u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b0122: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b0125: /* 7b0125: cmp byte ptr [esi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0128: je 0x7b016e */
  if (zf) goto L_7b016e;
L_7b012a: /* 7b012a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b012d: mov eax, esp */
  eax = esp;
/* 7b012f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7b0132: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0135: mov edx, esp */
  edx = esp;
/* 7b0137: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 7b013a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7b013c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7b013f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7b0142: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7b0145: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7b0147: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0148: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7b014b: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7b0150u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7b0150: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7b0153: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7b0156: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b0159: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b015a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b015b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b015c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b015d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b015e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b015f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b0162: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0163: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7b0166: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0167: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0168: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0169: mov ecx, esi */
  ecx = esi;
/* 7b016b: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7b016eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b016e: /* 7b016e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b0171: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b0172: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0173: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b017a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b017b: mov esp, ebp */
  esp = ebp;
/* 7b017d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b017e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b0181(void) {
  LOAD_REGS();
L_7b0181: /* 7b0181: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b0184: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b0189: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7b018c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b018d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b0190: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0195u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b0195(); return;
}

void f_7b0195(void) {
  LOAD_REGS();
L_7b0195: /* 7b0195: push 0xa0cae4 */
  { uint32_t v = 0xa0cae4u; esp -= 4; W32(esp, v); }
/* 7b019a: push 0xacf338 */
  { uint32_t v = 0xacf338u; esp -= 4; W32(esp, v); }
/* 7b019f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b01a5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b01a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b01a8: xor ebx, ebx */
  ebx = 0;
/* 7b01aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b01ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b01ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b01b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b01b1: guest_badaddr(0x7b01b1); return;
}

void f_7b0200(void) {
  LOAD_REGS();
L_7b0200: /* 7b0200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b0201: mov ebp, esp */
  ebp = esp;
/* 7b0203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b0205: push 0x9ced70 */
  { uint32_t v = 0x9ced70u; esp -= 4; W32(esp, v); }
/* 7b020a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b0210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b0218: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b021b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b021c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b021d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b021e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7b0221: xor ebx, ebx */
  ebx = 0;
/* 7b0223: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0225: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b0228: mov esi, ecx */
  esi = ecx;
/* 7b022a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b022d: jne 0x7b0245 */
  if (!zf) goto L_7b0245;
L_7b022f: /* 7b022f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b0234: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b0236: push 0xacf340 */
  { uint32_t v = 0xacf340u; esp -= 4; W32(esp, v); }
/* 7b023b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b023c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b0242u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b0242: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b0245: /* 7b0245: cmp byte ptr [esi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0248: je 0x7b02b4 */
  if (zf) goto L_7b02b4;
L_7b024a: /* 7b024a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7b024c: mov ecx, edi */
  ecx = edi;
/* 7b024e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7b0251u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0251: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7b0254: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b0257: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7b0259: mov ecx, edi */
  ecx = edi;
/* 7b025b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b025e: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7b0261u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0261: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0264: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7b0267: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b026a: mov eax, esp */
  eax = esp;
/* 7b026c: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7b026f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0272: mov ecx, esp */
  ecx = esp;
/* 7b0274: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7b0277: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7b027a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b027b: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7b027d: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7b0280: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7b0283: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7b0286: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 7b0288: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7b028b: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7b0290u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7b0290: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b0293: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b0296: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7b0299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b029b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b029c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b029f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b02a0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b02a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b02a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b02a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b02a8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7b02ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b02ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b02ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b02ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b02af: mov ecx, esi */
  ecx = esi;
/* 7b02b1: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0x7b02b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b02b4: /* 7b02b4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b02b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b02b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b02b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b02c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b02c1: mov esp, ebp */
  esp = ebp;
/* 7b02c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b02c4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b02c7(void) {
  LOAD_REGS();
L_7b02c7: /* 7b02c7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b02ca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b02cf: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7b02d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b02d3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7b02d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b02dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b02db(); return;
}

void f_7b02db(void) {
  LOAD_REGS();
L_7b02db: /* 7b02db: push 0xa0cb1c */
  { uint32_t v = 0xa0cb1cu; esp -= 4; W32(esp, v); }
/* 7b02e0: push 0xacf38c */
  { uint32_t v = 0xacf38cu; esp -= 4; W32(esp, v); }
/* 7b02e5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b02ebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b02eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b02ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b02f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b02f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b02f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b02f7: guest_badaddr(0x7b02f7); return;
}

void f_7b0340(void) {
  LOAD_REGS();
L_7b0340: /* 7b0340: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b0341: mov ebp, esp */
  ebp = esp;
/* 7b0343: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b0345: push 0x9ced80 */
  { uint32_t v = 0x9ced80u; esp -= 4; W32(esp, v); }
/* 7b034a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b0350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0351: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b0358: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b035b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b035c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b035d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b035e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7b0361: xor ebx, ebx */
  ebx = 0;
/* 7b0363: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0365: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b0368: mov esi, ecx */
  esi = ecx;
/* 7b036a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b036d: jne 0x7b0385 */
  if (!zf) goto L_7b0385;
L_7b036f: /* 7b036f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b0374: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b0376: push 0xacf3a0 */
  { uint32_t v = 0xacf3a0u; esp -= 4; W32(esp, v); }
/* 7b037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b037c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b0382u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b0382: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b0385: /* 7b0385: cmp byte ptr [esi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0388: je 0x7b0433 */
  if (zf) goto L_7b0433;
L_7b038e: /* 7b038e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7b0390: mov ecx, edi */
  ecx = edi;
/* 7b0392: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7b0395u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0395: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7b0398: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7b039b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7b039d: mov ecx, edi */
  ecx = edi;
/* 7b039f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b03a2: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7b03a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b03a5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7b03a8: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7b03ab: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b03ae: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7b03b1: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 7b03b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b03b9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b03bc: jnp 0x7b0433 */
  if (!pf) goto L_7b0433;
L_7b03be: /* 7b03be: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b03c1: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 7b03c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b03c9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b03cc: jnp 0x7b0433 */
  if (!pf) goto L_7b0433;
L_7b03ce: /* 7b03ce: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b03d1: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 7b03d4: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7b03d7: fdiv dword ptr [ebp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x14u)));
/* 7b03da: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b03dc: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7b03de: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b03e0: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b03e3: jp 0x7b0446 */
  if (pf) goto L_7b0446;
L_7b03e5: /* 7b03e5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b03e8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b03ea: mov eax, esp */
  eax = esp;
/* 7b03ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b03ee: mov dword ptr [ebp + 0x1c], esp */
  W32((uint32_t)(ebp + 0x1cu), esp);
/* 7b03f1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b03f4: mov ecx, esp */
  ecx = esp;
/* 7b03f6: mov dword ptr [ebp + 0x1c], esp */
  W32((uint32_t)(ebp + 0x1cu), esp);
/* 7b03f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b03fa: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7b03fc: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7b03ff: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7b0402: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7b0405: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7b0407: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7b040a: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7b040fu); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7b040f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b0412: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b0415: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7b0418: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0419: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b041a: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b041d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b041e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b0421: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0422: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0423: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_7b0425: /* 7b0425: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_7b0428: /* 7b0428: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b042b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b042c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b042d: mov ecx, esi */
  ecx = esi;
/* 7b042f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0430: call dword ptr [edi + 0x70] */
  { uint32_t t = R32((uint32_t)(edi + 0x70u)); esp -= 4; W32(esp, 0x7b0433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b0433: /* 7b0433: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b0436: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b0437: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0438: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b043f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b0440: mov esp, ebp */
  esp = ebp;
/* 7b0442: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b0443: ret 0x18 */
  esp += 28; SPILL(); return;
L_7b0446: /* 7b0446: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b0448: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7b044a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b044c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b044f: jne 0x7b04cd */
  if (!zf) goto L_7b04cd;
L_7b0451: /* 7b0451: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7b0453: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b0456: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7b0459: mov al, byte ptr [ebp + 0x1c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x1cu))) & 0xffu);
/* 7b045c: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b045e: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 7b0461: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b0464: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b0466: jne 0x7b0479 */
  if (!zf) goto L_7b0479;
L_7b0468: /* 7b0468: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7b046b: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7b046e: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7b0474: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* 7b0477: jmp 0x7b0486 */
  goto L_7b0486;
L_7b0479: /* 7b0479: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b047b: jne 0x7b0489 */
  if (!zf) goto L_7b0489;
L_7b047d: /* 7b047d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7b0480: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7b0483: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
L_7b0486: /* 7b0486: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_7b0489: /* 7b0489: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b048c: mov eax, esp */
  eax = esp;
/* 7b048e: mov dword ptr [ebp + 0x1c], esp */
  W32((uint32_t)(ebp + 0x1cu), esp);
/* 7b0491: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0494: mov ecx, esp */
  ecx = esp;
/* 7b0496: mov dword ptr [ebp + 0x1c], esp */
  W32((uint32_t)(ebp + 0x1cu), esp);
/* 7b0499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b049a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7b049c: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7b049f: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7b04a2: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7b04a5: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7b04a7: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7b04aa: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7b04afu); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7b04af: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b04b2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b04b5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7b04b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b04b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b04ba: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b04bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b04be: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b04c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b04c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b04c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b04c4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b04c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b04c8: jmp 0x7b0428 */
  goto L_7b0428;
L_7b04cd: /* 7b04cd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7b04cf: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b04d2: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7b04d4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7b04d7: mov al, byte ptr [ebp + 0x1c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x1cu))) & 0xffu);
/* 7b04da: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b04dc: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 7b04df: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b04e2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b04e4: jne 0x7b04f7 */
  if (!zf) goto L_7b04f7;
L_7b04e6: /* 7b04e6: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7b04e9: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7b04ec: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7b04f2: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 7b04f5: jmp 0x7b0504 */
  goto L_7b0504;
L_7b04f7: /* 7b04f7: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b04f9: jne 0x7b0507 */
  if (!zf) goto L_7b0507;
L_7b04fb: /* 7b04fb: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7b04fe: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7b0501: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
L_7b0504: /* 7b0504: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_7b0507: /* 7b0507: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b050a: mov eax, esp */
  eax = esp;
/* 7b050c: mov dword ptr [ebp + 0x1c], esp */
  W32((uint32_t)(ebp + 0x1cu), esp);
/* 7b050f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0512: mov ecx, esp */
  ecx = esp;
/* 7b0514: mov dword ptr [ebp + 0x1c], esp */
  W32((uint32_t)(ebp + 0x1cu), esp);
/* 7b0517: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0518: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7b051a: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7b051d: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7b0520: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7b0523: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7b0525: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7b0528: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7b052du); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7b052d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b0530: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b0533: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b0536: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0537: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0538: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b053b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b053c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b053f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0541: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0542: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0543: jmp 0x7b0425 */
  goto L_7b0425;
}

void f_7b0548(void) {
  LOAD_REGS();
L_7b0548: /* 7b0548: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b054b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b0550: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b0553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0554: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7b0557: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b055cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b055c(); return;
}

void f_7b055c(void) {
  LOAD_REGS();
L_7b055c: /* 7b055c: push 0xa0cb60 */
  { uint32_t v = 0xa0cb60u; esp -= 4; W32(esp, v); }
/* 7b0561: push 0xacf3ec */
  { uint32_t v = 0xacf3ecu; esp -= 4; W32(esp, v); }
/* 7b0566: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b056cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b056c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b056f: xor ebx, ebx */
  ebx = 0;
/* 7b0571: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0572: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0573: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0578u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b0578: guest_badaddr(0x7b0578); return;
}

void f_7b0610(void) {
  LOAD_REGS();
L_7b0610: /* 7b0610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b0611: mov ebp, esp */
  ebp = esp;
/* 7b0613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b0615: push 0x9ced90 */
  { uint32_t v = 0x9ced90u; esp -= 4; W32(esp, v); }
/* 7b061a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b0620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b0628: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b062b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b062c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b062d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b062e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7b0631: xor ebx, ebx */
  ebx = 0;
/* 7b0633: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0635: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b0638: mov esi, ecx */
  esi = ecx;
/* 7b063a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b063d: jne 0x7b0668 */
  if (!zf) goto L_7b0668;
L_7b063f: /* 7b063f: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b0644: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b0646: push 0xacf3f4 */
  { uint32_t v = 0xacf3f4u; esp -= 4; W32(esp, v); }
/* 7b064b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b064c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b0652u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b0652: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b0655: /* 7b0655: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b0658: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b065f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b0660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0661: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b0662: mov esp, ebp */
  esp = ebp;
/* 7b0664: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b0665: ret 0x14 */
  esp += 24; SPILL(); return;
L_7b0668: /* 7b0668: cmp byte ptr [esi + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b066b: je 0x7b0655 */
  if (zf) goto L_7b0655;
L_7b066d: /* 7b066d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7b066f: mov ecx, edi */
  ecx = edi;
/* 7b0671: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x7b0674u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0674: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7b0677: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b067a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7b067c: mov ecx, edi */
  ecx = edi;
/* 7b067e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b0681: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x7b0684u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0684: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0687: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7b068a: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b068d: mov eax, esp */
  eax = esp;
/* 7b068f: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7b0692: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0695: mov ecx, esp */
  ecx = esp;
/* 7b0697: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7b069a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7b069d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b069e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7b06a0: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7b06a3: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7b06a6: mov dword ptr [eax + 0xc], ebx */
  W32((uint32_t)(eax + 0xcu), ebx);
/* 7b06a9: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 7b06ab: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7b06ae: call 0x6c3044 */
  esp -= 4; W32(esp, 0x7b06b3u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 7b06b3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7b06b6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b06b9: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 7b06bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b06bf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7b06c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b06c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b06c5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b06c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b06c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b06cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b06cd: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b06d0: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7b06d4: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b06d7: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 7b06da: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b06dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b06de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b06df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b06e0: mov ecx, esi */
  ecx = esi;
/* 7b06e2: call dword ptr [ebx + 0x70] */
  { uint32_t t = R32((uint32_t)(ebx + 0x70u)); esp -= 4; W32(esp, 0x7b06e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b06e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b06e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b06e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b06ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b06f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b06f2: mov esp, ebp */
  esp = ebp;
/* 7b06f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b06f5: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b06f8(void) {
  LOAD_REGS();
L_7b06f8: /* 7b06f8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b06fb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b0700: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b0703: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0704: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b0707: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b070cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b070c(); return;
}

void f_7b070c(void) {
  LOAD_REGS();
L_7b070c: /* 7b070c: push 0xa0cba4 */
  { uint32_t v = 0xa0cba4u; esp -= 4; W32(esp, v); }
/* 7b0711: push 0xacf42c */
  { uint32_t v = 0xacf42cu; esp -= 4; W32(esp, v); }
/* 7b0716: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b071cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b071c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b071f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0721: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0723: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0728u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b0728: guest_badaddr(0x7b0728); return;
}

void f_7b0780(void) {
  LOAD_REGS();
L_7b0780: /* 7b0780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0781: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b0785: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0787: je 0x7b079e */
  if (zf) goto L_7b079e;
L_7b0789: /* 7b0789: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7b078e: mov ecx, esi */
  ecx = esi;
/* 7b0790: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b0796u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b0796: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0798: je 0x7b079e */
  if (zf) goto L_7b079e;
L_7b079a: /* 7b079a: mov eax, esi */
  eax = esi;
/* 7b079c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b079d: ret  */
  esp += 4; SPILL(); return;
L_7b079e: /* 7b079e: xor eax, eax */
  eax = 0;
/* 7b07a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b07a1: ret  */
  esp += 4; SPILL(); return;
}

void f_7b07c0(void) {
  LOAD_REGS();
L_7b07c0: /* 7b07c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b07c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b07c5: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 7b07ca: mov ecx, esi */
  ecx = esi;
/* 7b07cc: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7b07d2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7b07d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b07d4: jne 0x7b07ee */
  if (!zf) goto L_7b07ee;
L_7b07d6: /* 7b07d6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7b07db: push 0xacf460 */
  { uint32_t v = 0xacf460u; esp -= 4; W32(esp, v); }
/* 7b07e0: push 0xacf4a4 */
  { uint32_t v = 0xacf4a4u; esp -= 4; W32(esp, v); }
/* 7b07e5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7b07ebu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7b07eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b07ee: /* 7b07ee: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7b07f2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b07f5: jne 0x7b07fd */
  if (!zf) goto L_7b07fd;
L_7b07f7: /* 7b07f7: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7b07fdu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7b07fd: /* 7b07fd: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7b0803: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b0805: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b0809: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b080b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b080c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b0810: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0812: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0813: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0815: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0816: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7b081cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7b081c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b081f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0820: ret  */
  esp += 4; SPILL(); return;
}

void f_7b0850(void) {
  LOAD_REGS();
L_7b0850: /* 7b0850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0851: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b0855: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0857: je 0x7b086e */
  if (zf) goto L_7b086e;
L_7b0859: /* 7b0859: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b085e: mov ecx, esi */
  ecx = esi;
/* 7b0860: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b0866u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b0866: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0868: je 0x7b086e */
  if (zf) goto L_7b086e;
L_7b086a: /* 7b086a: mov eax, esi */
  eax = esi;
/* 7b086c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b086d: ret  */
  esp += 4; SPILL(); return;
L_7b086e: /* 7b086e: xor eax, eax */
  eax = 0;
/* 7b0870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0871: ret  */
  esp += 4; SPILL(); return;
}

void f_7b0890(void) {
  LOAD_REGS();
L_7b0890: /* 7b0890: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7b0894: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7b0898: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 7b089c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b089d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b089e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b089f: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b08a4: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7b08aau); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7b08aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b08ad: ret  */
  esp += 4; SPILL(); return;
}

void f_7b08c0(void) {
  LOAD_REGS();
L_7b08c0: /* 7b08c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b08c1: mov ebp, esp */
  ebp = esp;
/* 7b08c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b08c5: push 0x9ceda0 */
  { uint32_t v = 0x9ceda0u; esp -= 4; W32(esp, v); }
/* 7b08ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b08d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b08d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b08d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b08db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b08de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b08df: mov ebx, ecx */
  ebx = ecx;
/* 7b08e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b08e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b08e3: lea edi, [ebx + 0x74] */
  edi = (uint32_t)(ebx + 0x74u);
/* 7b08e6: mov ecx, edi */
  ecx = edi;
/* 7b08e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b08eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b08f2: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 7b08f8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b08feu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b08fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0900: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7b0902: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0905: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0907: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b090c: call dword ptr [0xcfa7c4] */
  esp -= 4; W32(esp, 0x7b0912u); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7b0912: mov esi, eax */
  esi = eax;
/* 7b0914: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0917: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0919: je 0x7b092c */
  if (zf) goto L_7b092c;
L_7b091b: /* 7b091b: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b0920: mov ecx, esi */
  ecx = esi;
/* 7b0922: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b0928u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b0928: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b092a: jne 0x7b092e */
  if (!zf) goto L_7b092e;
L_7b092c: /* 7b092c: xor esi, esi */
  esi = 0;
L_7b092e: /* 7b092e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0930: mov dword ptr [ebx + 0x68], esi */
  W32((uint32_t)(ebx + 0x68u), esi);
/* 7b0933: jne 0x7b096e */
  if (!zf) goto L_7b096e;
L_7b0935: /* 7b0935: mov ecx, edi */
  ecx = edi;
/* 7b0937: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b093du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b093d: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 7b0943: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b0945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0946: push 0xaceee8 */
  { uint32_t v = 0xaceee8u; esp -= 4; W32(esp, v); }
/* 7b094b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b094c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b0952u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b0952: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0955: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0956: push 0xacef2c */
  { uint32_t v = 0xacef2cu; esp -= 4; W32(esp, v); }
/* 7b095b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b095d: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b0962: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7b0968u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7b0968: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b096b: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
L_7b096e: /* 7b096e: lea edi, [ebx + 0x80] */
  edi = (uint32_t)(ebx + 0x80u);
/* 7b0974: mov ecx, edi */
  ecx = edi;
/* 7b0976: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b097cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b097c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b097e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7b0980: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0985: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b098a: call dword ptr [0xcfa7c4] */
  esp -= 4; W32(esp, 0x7b0990u); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7b0990: mov esi, eax */
  esi = eax;
/* 7b0992: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0995: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0997: je 0x7b09aa */
  if (zf) goto L_7b09aa;
L_7b0999: /* 7b0999: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b099e: mov ecx, esi */
  ecx = esi;
/* 7b09a0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b09a6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b09a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b09a8: jne 0x7b09ac */
  if (!zf) goto L_7b09ac;
L_7b09aa: /* 7b09aa: xor esi, esi */
  esi = 0;
L_7b09ac: /* 7b09ac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b09ae: mov dword ptr [ebx + 0x6c], esi */
  W32((uint32_t)(ebx + 0x6cu), esi);
/* 7b09b1: jne 0x7b09eb */
  if (!zf) goto L_7b09eb;
L_7b09b3: /* 7b09b3: mov ecx, edi */
  ecx = edi;
/* 7b09b5: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b09bbu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b09bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b09bc: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 7b09c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b09c3: push 0xacef48 */
  { uint32_t v = 0xacef48u; esp -= 4; W32(esp, v); }
/* 7b09c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b09c9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b09cfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b09cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b09d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b09d3: push 0xacef90 */
  { uint32_t v = 0xacef90u; esp -= 4; W32(esp, v); }
/* 7b09d8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b09da: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b09df: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7b09e5u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7b09e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b09e8: mov dword ptr [ebx + 0x6c], eax */
  W32((uint32_t)(ebx + 0x6cu), eax);
L_7b09eb: /* 7b09eb: lea edi, [ebx + 0x8c] */
  edi = (uint32_t)(ebx + 0x8cu);
/* 7b09f1: mov ecx, edi */
  ecx = edi;
/* 7b09f3: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b09f9u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b09f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b09fb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7b09fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b09ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0a00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0a02: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b0a07: call dword ptr [0xcfa7c4] */
  esp -= 4; W32(esp, 0x7b0a0du); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 7b0a0d: mov esi, eax */
  esi = eax;
/* 7b0a0f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0a12: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0a14: je 0x7b0a27 */
  if (zf) goto L_7b0a27;
L_7b0a16: /* 7b0a16: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b0a1b: mov ecx, esi */
  ecx = esi;
/* 7b0a1d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b0a23u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b0a23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0a25: jne 0x7b0a29 */
  if (!zf) goto L_7b0a29;
L_7b0a27: /* 7b0a27: xor esi, esi */
  esi = 0;
L_7b0a29: /* 7b0a29: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0a2b: mov dword ptr [ebx + 0x70], esi */
  W32((uint32_t)(ebx + 0x70u), esi);
/* 7b0a2e: jne 0x7b0a69 */
  if (!zf) goto L_7b0a69;
L_7b0a30: /* 7b0a30: mov ecx, edi */
  ecx = edi;
/* 7b0a32: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b0a38u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b0a38: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 7b0a3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0a3f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b0a41: push 0xacefa8 */
  { uint32_t v = 0xacefa8u; esp -= 4; W32(esp, v); }
/* 7b0a46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0a47: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b0a4du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b0a4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0a51: push 0xaceff0 */
  { uint32_t v = 0xaceff0u; esp -= 4; W32(esp, v); }
/* 7b0a56: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b0a58: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 7b0a5d: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x7b0a63u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 7b0a63: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0a66: mov dword ptr [ebx + 0x70], eax */
  W32((uint32_t)(ebx + 0x70u), eax);
L_7b0a69: /* 7b0a69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b0a6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b0a6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0a6e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b0a75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b0a76: mov esp, ebp */
  esp = ebp;
/* 7b0a78: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b0a79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7b0a7c(void) {
  LOAD_REGS();
L_7b0a7c: /* 7b0a7c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b0a7f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b0a84: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7b0a87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0a88: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b0a8b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0a90u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b0a90(); return;
}

void f_7b0a90(void) {
  LOAD_REGS();
L_7b0a90: /* 7b0a90: push 0xa0cbe0 */
  { uint32_t v = 0xa0cbe0u; esp -= 4; W32(esp, v); }
/* 7b0a95: push 0xacf008 */
  { uint32_t v = 0xacf008u; esp -= 4; W32(esp, v); }
/* 7b0a9a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b0aa0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b0aa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0aa3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0aa5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0aa7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0aacu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b0aac: guest_badaddr(0x7b0aac); return;
}

void f_7b0b30(void) {
  LOAD_REGS();
L_7b0b30: /* 7b0b30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b0b31: mov ebp, esp */
  ebp = esp;
/* 7b0b33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b0b35: push 0x9cedbb */
  { uint32_t v = 0x9cedbbu; esp -= 4; W32(esp, v); }
/* 7b0b3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b0b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0b41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b0b48: sub esp, 0x214 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0b4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0b4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0b50: mov esi, ecx */
  esi = ecx;
/* 7b0b52: mov ecx, dword ptr [esi + 0x9c] */
  ecx = R32((uint32_t)(esi + 0x9cu));
/* 7b0b58: xor ebx, ebx */
  ebx = 0;
/* 7b0b5a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0b5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b0b5d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b0b60: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b0b63: je 0x7b0b6a */
  if (zf) goto L_7b0b6a;
L_7b0b65: /* 7b0b65: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x7b0b6au); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
L_7b0b6a: /* 7b0b6a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7b0b6d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0b6f: je 0x7b0c98 */
  if (zf) goto L_7b0c98;
L_7b0b75: /* 7b0b75: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 7b0b7b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7b0b7e: lea edx, [ecx + 0x170] */
  edx = (uint32_t)(ecx + 0x170u);
/* 7b0b84: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b0b86: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7b0b89: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7b0b8c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b0b8f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7b0b92: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7b0b95: lea eax, [ecx + 0x17c] */
  eax = (uint32_t)(ecx + 0x17cu);
/* 7b0b9b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b0b9d: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7b0ba0: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b0ba3: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b0ba6: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7b0ba9: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 7b0bac: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0bad: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7b0bb0: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7b0bb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0bb4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7b0bb7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0bb8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b0bbb: call 0x6c204a */
  esp -= 4; W32(esp, 0x7b0bc0u); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
/* 7b0bc0: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 7b0bc6: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 7b0bc9: mov ecx, dword ptr [eax + 0x540] */
  ecx = R32((uint32_t)(eax + 0x540u));
/* 7b0bcf: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7b0bd2: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0bd5: je 0x7b0be1 */
  if (zf) goto L_7b0be1;
L_7b0bd7: /* 7b0bd7: mov dword ptr [eax + 0x540], 1 */
  W32((uint32_t)(eax + 0x540u), 0x1u);
L_7b0be1: /* 7b0be1: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0be4: je 0x7b0c12 */
  if (zf) goto L_7b0c12;
L_7b0be6: /* 7b0be6: mov edx, dword ptr [esi + 0x98] */
  edx = R32((uint32_t)(esi + 0x98u));
/* 7b0bec: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 7b0bf2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b0bf4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0bf5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0bf6: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b0bfb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b0bfd: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 7b0c00: mov byte ptr [ebp + 9], bl */
  W8((uint32_t)(ebp + 0x9u), (ebx & 0xffu));
/* 7b0c03: mov byte ptr [ebp + 0xa], bl */
  W8((uint32_t)(ebp + 0xau), (ebx & 0xffu));
/* 7b0c06: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 7b0c0a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b0c0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0c0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0c0f: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7b0c12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b0c12: /* 7b0c12: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7b0c15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0c16: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7b0c19: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 7b0c1f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0c22: mov edx, esp */
  edx = esp;
/* 7b0c24: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b0c26: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b0c29: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b0c2c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b0c2f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b0c32: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b0c35: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0c38: mov edx, esp */
  edx = esp;
/* 7b0c3a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b0c3c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b0c3f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b0c42: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b0c45: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b0c48: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b0c4b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0c4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b0c4d: lea ecx, [eax + 0xd0] */
  ecx = (uint32_t)(eax + 0xd0u);
/* 7b0c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0c54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0c55: lea ecx, [ebp - 0x220] */
  ecx = (uint32_t)(ebp + 0xfffffde0u);
/* 7b0c5b: call 0x6c98d1 */
  esp -= 4; W32(esp, 0x7b0c60u); SPILL(); f_6c98d1(); if (g_unwind) return; RELOAD();
/* 7b0c60: mov ecx, dword ptr [esi + 0x98] */
  ecx = R32((uint32_t)(esi + 0x98u));
/* 7b0c66: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 7b0c6c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b0c6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0c6f: mov ecx, eax */
  ecx = eax;
/* 7b0c71: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b0c75: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x7b0c78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0c78: lea ecx, [ebp - 0x220] */
  ecx = (uint32_t)(ebp + 0xfffffde0u);
/* 7b0c7e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7b0c81: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x7b0c86u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 7b0c86: mov edx, dword ptr [esi + 0x98] */
  edx = R32((uint32_t)(esi + 0x98u));
/* 7b0c8c: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 7b0c8f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7b0c92: mov dword ptr [eax + 0x540], ecx */
  W32((uint32_t)(eax + 0x540u), ecx);
L_7b0c98: /* 7b0c98: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b0c9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b0c9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0c9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b0ca4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b0ca5: mov esp, ebp */
  esp = ebp;
/* 7b0ca7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b0ca8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7b0cab(void) {
  LOAD_REGS();
L_7b0cab: /* 7b0cab: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7b0cae: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b0cb3: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7b0cb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0cb7: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7b0cba: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0cbfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b0cbf(); return;
}

void f_7b0cbf(void) {
  LOAD_REGS();
L_7b0cbf: /* 7b0cbf: push 0xa0cc08 */
  { uint32_t v = 0xa0cc08u; esp -= 4; W32(esp, v); }
/* 7b0cc4: push 0xacf0e8 */
  { uint32_t v = 0xacf0e8u; esp -= 4; W32(esp, v); }
/* 7b0cc9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b0ccfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b0ccf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0cd2: xor ebx, ebx */
  ebx = 0;
/* 7b0cd4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0cd5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0cd6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0cdbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b0cdb: guest_badaddr(0x7b0cdb); return;
}

void f_7b0d50(void) {
  LOAD_REGS();
L_7b0d50: /* 7b0d50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b0d51: mov ebp, esp */
  ebp = esp;
/* 7b0d53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b0d55: push 0x9cedd0 */
  { uint32_t v = 0x9cedd0u; esp -= 4; W32(esp, v); }
/* 7b0d5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b0d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0d61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b0d68: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0d6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0d6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b0d70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b0d73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b0d74: xor edi, edi */
  edi = 0;
/* 7b0d76: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7b0d79: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b0d7c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0d7d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0d80: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b0d83: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7b0d86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0d87: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b0d8c: mov ebx, ecx */
  ebx = ecx;
/* 7b0d8e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0d91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0d92: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7b0d95: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b0d98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0d98: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b0d9b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0d9e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7b0da1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b0da4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0da5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0da8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7b0dab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0dac: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b0db1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0db2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b0db5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0db5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b0db8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0dbb: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7b0dbe: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b0dc1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0dc2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0dc5: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7b0dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0dc9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b0dce: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0dcf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b0dd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0dd2: mov ecx, dword ptr [ebx + 0x98] */
  ecx = R32((uint32_t)(ebx + 0x98u));
/* 7b0dd8: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 7b0ddb: mov eax, dword ptr [edx + 0x348] */
  eax = R32((uint32_t)(edx + 0x348u));
/* 7b0de1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0de4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b0de7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b0dea: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b0ded: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0dee: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0df1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b0df4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0df5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b0dfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0dfb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b0dfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0dfe: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b0e01: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b0e02: mov eax, edx */
  eax = edx;
/* 7b0e04: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b0e07: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0e0a: jne 0x7b0e21 */
  if (!zf) goto L_7b0e21;
L_7b0e0c: /* 7b0e0c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0e0f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0e10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b0e11: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0e14: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b0e1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0e1b: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b0e21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b0e21: /* 7b0e21: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b0e24: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b0e27: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b0e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0e2b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b0e2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b0e2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0e31: mov ecx, ebx */
  ecx = ebx;
/* 7b0e33: call 0x6c6258 */
  esp -= 4; W32(esp, 0x7b0e38u); SPILL(); f_6c6258(); if (g_unwind) return; RELOAD();
/* 7b0e38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b0e3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b0e3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b0e3d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b0e44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b0e45: mov esp, ebp */
  esp = ebp;
/* 7b0e47: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b0e48: ret 8 */
  esp += 12; SPILL(); return;
}
